/*********************                                                        */
/*! \file sets-translate.cpp
 ** \verbatim
 ** Original author: Kshitij Bansal
 ** Major contributors: None
 ** Minor contributors (to current version): none
 ** This file is part of the CVC4 project.
 ** Copyright (c) 2009-2014  New York University and The University of Iowa
 ** See the file COPYING in the top-level source directory for licensing
 ** information.\endverbatim
 **
 ** \brief [[ Add one-line brief description here ]]
 **
 ** [[ Add lengthier description here ]]
 ** \todo document this file
 **/

#include <string>
#include <iostream>
#include <typeinfo>
#include <cassert>
#include <vector>


#include "options/options.h"
#include "expr/expr.h"
#include "theory/logic_info.h"
#include "expr/command.h"
#include "parser/parser.h"
#include "parser/parser_builder.h"

using namespace std;
using namespace CVC4;
using namespace CVC4::parser;
using namespace CVC4::options;

bool nonsense(char c) { return !isalnum(c); } 

class Mapper {
  set< Type > setTypes;
  map< Type, Type > mapTypes;
  map< pair<Type, Kind>, Expr > setoperators;
  hash_map< Expr, Expr, ExprHashFunction > substitutions;
  ostringstream sout;
  ExprManager* em;

  Expr add(SetType t, Expr e) {

    if(setTypes.find(t) == setTypes.end() ) {
      // mark as processed
      setTypes.insert(t);

      Type elementType = t.getElementType();
      string elementTypeAsString = elementType.toString();
      remove_if(elementTypeAsString.begin(), elementTypeAsString.end(), nonsense);

      // define-sort
      ostringstream oss_name;
      oss_name << Expr::setlanguage(language::output::LANG_SMTLIB_V2)
               << "(Set " << elementType << ")";
      string name = oss_name.str();
      Type newt = em->mkArrayType(t.getElementType(), em->booleanType());
      mapTypes[t] = newt;

      // diffent types
      vector<Type> t_t;
      t_t.push_back(t);
      t_t.push_back(t);
      vector<Type> elet_t;
      elet_t.push_back(elementType);
      elet_t.push_back(t);

      sout << "(define-fun emptyset" << elementTypeAsString << "    "
           << " ()"
           << " " << name
           << " ( (as const " << name << ") false ) )" << endl;
      setoperators[ make_pair(t, kind::EMPTYSET) ] =
        em->mkVar( std::string("emptyset") + elementTypeAsString,
                   t);

      sout << "(define-fun setenum" << elementTypeAsString << "     "
           << " ( (x " << elementType << ") )"
           << " " << name << ""
           << " (store emptyset" << elementTypeAsString << " x true) )" << endl;
      setoperators[ make_pair(t, kind::SET_SINGLETON) ] =
        em->mkVar( std::string("setenum") + elementTypeAsString,
                   em->mkFunctionType( elementType, t ) );

      sout << "(define-fun union" << elementTypeAsString << "       "
           << " ( (s1 " << name << ") (s2 " << name << ") )"
           << " " << name << ""
           << " ((_ map or) s1 s2))" << endl;
      setoperators[ make_pair(t, kind::UNION) ] =
        em->mkVar( std::string("union") + elementTypeAsString,
                   em->mkFunctionType( t_t, t ) );

      sout << "(define-fun intersection" << elementTypeAsString << ""
           << " ( (s1 " << name << ") (s2 " << name << ") )"
           << " " << name << ""
           << " ((_ map and) s1 s2))" << endl;
      setoperators[ make_pair(t, kind::INTERSECTION) ] =
        em->mkVar( std::string("intersection") + elementTypeAsString,
                   em->mkFunctionType( t_t, t ) );

      sout << "(define-fun setminus" << elementTypeAsString << "    "
           << " ( (s1 " << name << ") (s2 " << name << ") )"
           << " " << name << ""
           << " (intersection" << elementTypeAsString << " s1 ((_ map not) s2)))" << endl;
      setoperators[ make_pair(t, kind::SETMINUS) ] =
        em->mkVar( std::string("setminus") + elementTypeAsString,
                   em->mkFunctionType( t_t, t ) );

      sout << "(define-fun in" << elementTypeAsString << "          "
           << " ( (x " << elementType << ")" << " (s " << name << "))"
           << " Bool"
           << " (select s x) )" << endl;
      setoperators[ make_pair(t, kind::MEMBER) ] =
        em->mkVar( std::string("in") + elementTypeAsString,
                   em->mkPredicateType( elet_t ) );

      sout << "(define-fun subseteq" << elementTypeAsString << "    "
           << " ( (s1 " << name << ") (s2 " << name << ") )"
           << " Bool"
           <<" (= emptyset" << elementTypeAsString << " (setminus" << elementTypeAsString << " s1 s2)) )" << endl;
      setoperators[ make_pair(t, kind::SUBSET) ] =
        em->mkVar( std::string("subseteq") + elementTypeAsString,
                   em->mkPredicateType( t_t ) );

    }
    Expr ret;
    if(e.getKind() == kind::EMPTYSET) {
      ret = setoperators[ make_pair(t, e.getKind()) ];
    } else {
      vector<Expr> children = e.getChildren();
      children.insert(children.begin(), setoperators[ make_pair(t, e.getKind()) ]);
      ret = em->mkExpr(kind::APPLY, children);
    }
    // cout << "returning " << ret  << endl;
    return ret;
  }

public:
  Mapper(ExprManager* e) : em(e) {
    sout << Expr::setlanguage(language::output::LANG_SMTLIB_V2);
  }

  void defineSetSort() {
    if(setTypes.empty()) {
      cout << "(define-sort Set (X) (Array X Bool) )" << endl;
    }
  }


  Expr collectSortsExpr(Expr e)
  {
    Expr old_e = e;
    for(unsigned i = 0; i < e.getNumChildren(); ++i) {
      collectSortsExpr(e[i]);
    }
    e = e.substitute(substitutions);
    if(theory::kindToTheoryId(e.getKind()) == theory::THEORY_SETS) {
      SetType t = SetType(e.getType().isBoolean() ? e[1].getType() : e.getType());
      substitutions[e] = add(t, e);
      e = e.substitute(substitutions);
    }
    // cout << old_e << " => " << e << endl;
    return e;
  }

  void dump() {
    cout << sout.str();
  }
};


int main(int argc, char* argv[]) 
{

  try {

    // Get the filename 
    string input;
    if(argv > 0) input = (argv[1]);
    else input = "<stdin>";

    // Create the expression manager
    Options options;
    options.set(inputLanguage, language::input::LANG_SMTLIB_V2);
    cout << Expr::setlanguage(language::output::LANG_SMTLIB_V2);
    ExprManager exprManager(options);

    Mapper m(&exprManager);
  
    // Create the parser
    ParserBuilder parserBuilder(&exprManager, input, options);
    Parser* parser = parserBuilder.build();
  
    // Variables and assertions
    vector<string> variables;
    vector<string> info_tags;
    vector<string> info_data;
    vector<Expr> assertions;
  
    Command* cmd = NULL;
    CommandSequence commandsSequence;
    bool logicisset = false;

    while ((cmd = parser->nextCommand())) {

      // till logic is set, don't do any modifications
      if(!parser->logicIsSet()) {
        cout << (*cmd) << endl;
        delete cmd;
        continue;
      }

      // transform set-logic command, if there is one
      SetBenchmarkLogicCommand* setlogic = dynamic_cast<SetBenchmarkLogicCommand*>(cmd);
      if(setlogic) {
	LogicInfo logicinfo(setlogic->getLogic());
	if(!logicinfo.isTheoryEnabled(theory::THEORY_SETS)) {
	  cerr << "Sets theory not enabled. Stopping translation." << endl;
	  return 0;
	}
        logicinfo = logicinfo.getUnlockedCopy();
        logicinfo.disableTheory(theory::THEORY_SETS);
        logicinfo.enableTheory(theory::THEORY_ARRAY);
        logicinfo.lock();
        // cout << SetBenchmarkLogicCommand(logicinfo.getLogicString()) << endl;

        delete cmd;
        continue;
      }

      // if we reach here, logic is set by now, so can define our sort
      if( !logicisset ) {
        logicisset = true;
        m.defineSetSort();
      }

      // declare/define-sort commands are printed immediately
      DeclareTypeCommand* declaresort = dynamic_cast<DeclareTypeCommand*>(cmd);
      DefineTypeCommand* definesort = dynamic_cast<DefineTypeCommand*>(cmd);
      if(declaresort || definesort) {
        cout << *cmd << endl;
        delete cmd;
        continue;
      }

      // other commands are queued up, while replacing with new function symbols
      AssertCommand* assert = dynamic_cast<AssertCommand*>(cmd);
      DeclareFunctionCommand* declarefun = dynamic_cast<DeclareFunctionCommand*>(cmd);
      DefineFunctionCommand* definefun = dynamic_cast<DefineFunctionCommand*>(cmd);

      Command* new_cmd = NULL;
      if(assert) {
        Expr newexpr = m.collectSortsExpr(assert->getExpr());
        new_cmd = new AssertCommand(newexpr);
      } else if(declarefun) {
        Expr newfunc = m.collectSortsExpr(declarefun->getFunction());
        new_cmd = new DeclareFunctionCommand(declarefun->getSymbol(), newfunc, declarefun->getType());
      } else if(definefun) {
        Expr newfunc = m.collectSortsExpr(definefun->getFunction());
        Expr newformula = m.collectSortsExpr(definefun->getFormula());
        new_cmd = new DefineFunctionCommand(definefun->getSymbol(), newfunc, definefun->getFormals(), newformula);
      }

      if(new_cmd == NULL) {
        commandsSequence.addCommand(cmd);
      } else {
        commandsSequence.addCommand(new_cmd);
        delete cmd;
      }

    }

    m.dump();
    cout << commandsSequence;
    
  
    // Get rid of the parser
    //delete parser;
  } catch (Exception& e) {
    cerr << e << endl;
  }
}