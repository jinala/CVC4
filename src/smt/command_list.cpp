/*********************                                                        */
/*! \file command_list.cpp
 ** \verbatim
 ** Original author: Morgan Deters
 ** Major contributors: none
 ** Minor contributors (to current version): none
 ** This file is part of the CVC4 project.
 ** Copyright (c) 2009-2014  New York University and The University of Iowa
 ** See the file COPYING in the top-level source directory for licensing
 ** information.\endverbatim
 **
 ** \brief A context-sensitive list of Commands, and their cleanup
 **
 ** A context-sensitive list of Commands, and their cleanup.
 **/

// we include both of these to make sure they agree on the typedef
#include "smt/command_list.h"
#include "smt/smt_engine.h"
#include "smt_util/command.h"

namespace CVC4 {
namespace smt {

void CommandCleanup::operator()(Command** c) {
  delete *c;
}

}/* CVC4::smt namespace */
}/* CVC4 namespace */
