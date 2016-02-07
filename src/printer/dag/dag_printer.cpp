/*********************                                                        */
/*! \file ast_printer.cpp
 ** \verbatim
 ** Original author: Morgan Deters
 ** Major contributors: none
 ** Minor contributors (to current version): Dejan Jovanovic, Andrew Reynolds
 ** This file is part of the CVC4 project.
 ** Copyright (c) 2009-2014  New York University and The University of Iowa
 ** See the file COPYING in the top-level source directory for licensing
 ** information.\endverbatim
 **
 ** \brief The pretty-printer interface for the AST output language
 **
 ** The pretty-printer interface for the AST output language.
 **/
#include "printer/dag/dag_printer.h"

#include <iostream>
#include <typeinfo>
#include <vector>

#include "expr/expr.h" // for ExprSetDepth etc..
#include "expr/node_manager_attributes.h" // for VarNameAttr
#include "options/language.h" // for LANG_AST
#include "printer/dagification_visitor.h"
#include "smt_util/command.h"
#include "smt_util/node_visitor.h"
#include "theory/substitutions.h"
#include "theory/theory.h"



namespace CVC4 {
namespace printer {
namespace dag {

void DagPrinter::toStream(std::ostream& out, TNode n,
                          int onlyBool, bool types, size_t dag) const throw() {
  Chat() << n << endl;
  int nextId = 1;
  map<string, int> nodesMap;
  if(dag != 0) {
    DagificationVisitor dv(dag);
    NodeVisitor<DagificationVisitor> visitor;
    visitor.run(dv, n);
    const theory::SubstitutionMap& lets = dv.getLets();
    if(!lets.empty()) {
      for(theory::SubstitutionMap::const_iterator i = lets.begin();
          i != lets.end();
          ++i) {
        int node_id = printDag(out, (*i).first, onlyBool, types, nextId, nodesMap);
        string s;
        (*i).second.getAttribute(expr::VarNameAttr(), s);
        nodesMap[s] = node_id;
        
      }
    }
    Node body = dv.getDagifiedBody();
    printDag(out, body, onlyBool, types, nextId, nodesMap);
  } else {
    printDag(out, n, onlyBool, types, nextId, nodesMap);
  }
}

static void printBvParameterizedOp(std::ostream& out, TNode n) throw() {
  switch(n.getKind()) {
    case kind::BITVECTOR_EXTRACT: {
      BitVectorExtract p = n.getOperator().getConst<BitVectorExtract>();
      out << "EXTRACT " << p.high << ' ' << p.low;
      break;
    }
    case kind::BITVECTOR_REPEAT:
      out << "REPEAT "
      << n.getOperator().getConst<BitVectorRepeat>().repeatAmount;
      break;
    case kind::BITVECTOR_ZERO_EXTEND:
      out << "ZERO_EXTEND "
      << n.getOperator().getConst<BitVectorZeroExtend>().zeroExtendAmount;
      break;
    case kind::BITVECTOR_SIGN_EXTEND:
      out << "SIGN_EXTEND "
      << n.getOperator().getConst<BitVectorSignExtend>().signExtendAmount;
      break;
    case kind::BITVECTOR_ROTATE_LEFT:
      out << "ROTATE_LEFT "
      << n.getOperator().getConst<BitVectorRotateLeft>().rotateLeftAmount;
      break;
    case kind::BITVECTOR_ROTATE_RIGHT:
      out << "ROTATE_RIGHT "
      << n.getOperator().getConst<BitVectorRotateRight>().rotateRightAmount;
      break;
    case kind::INT_TO_BITVECTOR:
      out << "INT2BV "
      << n.getOperator().getConst<IntToBitVector>().size;
      break;
    default:
      out << n.getKind();
  }
}

int DagPrinter::printDag(std::ostream& out, TNode n,
                         int onlyBool, bool types, int& nextId, map<string, int>& nodesMap) const throw() {
  // null
  if(n.getKind() == kind::NULL_EXPR) {
    out << nextId << " NULL" << "\n";
    return nextId++;
  }
  // variable
  if(n.getMetaKind() == kind::metakind::VARIABLE) {
    string s;
    if(n.getAttribute(expr::VarNameAttr(), s)) {
      out << nextId << " S " << s;
    } else {
      out << nextId << " S var_" << n.getId();
    }
    if(types) {
      // print the whole type, but not *its* type
      out << " ";
      n.getType().toStream(out, language::output::LANG_DAG);
    }
    out << "\n";

    return nextId++;
  }
  if (onlyBool == 1) {
    if (theory::Theory::theoryOf(theory::THEORY_OF_TYPE_BASED, n) != theory::THEORY_BOOL) {
      // Make it a src node
      out << nextId << " S var_" << n.getId();
      if(types) {
        // print the whole type, but not *its* type
        out << " ";
        n.getType().toStream(out, language::output::LANG_DAG);
      }
      out << "\n";
      
      return nextId++;
    }
  }
  if(n.getMetaKind() == kind::metakind::CONSTANT) {
    switch(n.getKind()) {
      case kind::TYPE_CONSTANT:
        switch(n.getConst<TypeConstant>()) {
          case BOOLEAN_TYPE: out << "BOOL"; break;
          case INTEGER_TYPE: out << "INT"; break;
          case STRING_TYPE: out << "STRING"; break;
          default:
            // fall back on whatever operator<< does on underlying type; we
            // might luck out and be SMT-LIB v2 compliant
            kind::metakind::NodeValueConstPrinter::toStream(out, n);
        }
        break;
      case kind::BITVECTOR_TYPE:
        out << "INT"; break;
      case kind::CONST_BITVECTOR: {
        const BitVector& bv = n.getConst<BitVector>();
        const Integer& x = bv.getValue();
        out << nextId << " ";
        
        out << "CONST";
        
        out << ' ';
        
        out << x;
        
        if(types) {
          // print the whole type, but not *its* type
          out << " ";
          n.getType().toStream(out, language::output::LANG_DAG);
        }
        out << "\n";
        return nextId++;
        break;
      }

        
      default:
        // fall back on whatever operator<< does on underlying type; we
        // might luck out and be compliant
        out << nextId << " ";
        
        out << "CONST";
        
        out << ' ';
        kind::metakind::NodeValueConstPrinter::toStream(out, n);
        
        if(types) {
          // print the whole type, but not *its* type
          out << " ";
          n.getType().toStream(out, language::output::LANG_DAG);
        }
        out << "\n";
        return nextId++;
    }
    
    return -1;
    
    
  } else {
    // operator
    if(n.getMetaKind() == kind::metakind::OPERATOR || n.getMetaKind() == kind::metakind::PARAMETERIZED) {
      std::vector<int> parent_ids;
      for(TNode::iterator i = n.begin(), iend = n.end(); i != iend; ++i) {
        if ((*i).getMetaKind() == kind::metakind::VARIABLE) {
          string s;
          if((*i).getAttribute(expr::VarNameAttr(), s)) {
            if (nodesMap.find(s) != nodesMap.end()) {
              parent_ids.push_back(nodesMap[s]);
              continue;
            }
          }
        }
        int node_id = printDag(out, *i, onlyBool, types, nextId, nodesMap);
        parent_ids.push_back(node_id);
      }
      
      out << nextId << " ";
      
      printBvParameterizedOp(out, n);
      
      out << " " << "PARENTS";
      
      for(int i = 0; i < parent_ids.size(); i++) {
        out << " " << parent_ids[i];
      }
      if(types) {
        // print the whole type, but not *its* type
        out << " ";
        n.getType().toStream(out, language::output::LANG_DAG);
      }
      out << "\n";
      return nextId++;
    }
    
  }
  assert(false);
  return nextId;
}/* DagPrinter::toStream(TNode) */

}/* CVC4::printer::ast namespace */
}/* CVC4::printer namespace */
}/* CVC4 namespace */
