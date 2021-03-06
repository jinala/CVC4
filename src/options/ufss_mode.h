/*********************                                                        */
/*! \file ufss_mode.h
 ** \verbatim
 ** Original author: Tim King
 ** Major contributors: none
 ** Minor contributors (to current version): none
 ** This file is part of the CVC4 project.
 ** Copyright (c) 2009-2014  New York University and The University of Iowa
 ** See the file COPYING in the top-level source directory for licensing
 ** information.\endverbatim
 **
 ** \brief Custom handlers and predicates for TheoryUF options
 **
 ** Custom handlers and predicates for TheoryUF options.
 **/

#include "cvc4_private.h"

#ifndef __CVC4__BASE__UFSS_MODE_H
#define __CVC4__BASE__UFSS_MODE_H

namespace CVC4 {
namespace theory {
namespace uf {
  
enum UfssMode{
  /** default, use uf strong solver to find minimal models for uninterpreted sorts */
  UF_SS_FULL,
  /** use uf strong solver to shrink model sizes, but do no enforce minimality */
  UF_SS_NO_MINIMAL,
  /** do not use uf strong solver */
  UF_SS_NONE,
};

}/* CVC4::theory::uf namespace */
}/* CVC4::theory namespace */
}/* CVC4 namespace */

#endif /* __CVC4__BASE__UFSS_MODE_H */

