/*********************                                                        */
/*! \file ast_printer.h
 ** \verbatim
 ** Original author: Morgan Deters
 ** Major contributors: none
 ** Minor contributors (to current version): none
 ** This file is part of the CVC4 project.
 ** Copyright (c) 2009-2014  New York University and The University of Iowa
 ** See the file COPYING in the top-level source directory for licensing
 ** information.\endverbatim
 **
 ** \brief The pretty-printer interface for the AST output language
 **
 ** The pretty-printer interface for the AST output language.
 **/

#include "cvc4_private.h"

#ifndef __CVC4__PRINTER__DAG_PRINTER_H
#define __CVC4__PRINTER__DAG_PRINTER_H

#include <iostream>
#include <map>
#include <string>

#include "printer/printer.h"

using namespace std;

namespace CVC4 {
namespace printer {
namespace dag {

class DagPrinter : public CVC4::Printer {
  int printDag(std::ostream& out, TNode n, int toDepth, bool types, int& nextId, map<string, int>& nodesMap) const throw();
  void toStream(std::ostream& out, const Model& m, const Command* c) const throw() {
    Unreachable();
  }
public:
  using CVC4::Printer::toStream;
  void toStream(std::ostream& out, TNode n, int toDepth, bool types, size_t dag) const throw();
  void toStream(std::ostream& out, const Command* c, int toDepth, bool types, size_t dag) const throw() {
    Unreachable();
  }
  void toStream(std::ostream& out, const CommandStatus* s) const throw() {
    Unreachable();
  }
  void toStream(std::ostream& out, const Model& m) const throw() {
    Unreachable();
  }

};/* class DAGPrinter */

}/* CVC4::printer::ast namespace */
}/* CVC4::printer namespace */
}/* CVC4 namespace */

#endif /* __CVC4__PRINTER__DAG_PRINTER_H */

