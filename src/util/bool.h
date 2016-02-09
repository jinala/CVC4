/*********************                                                        */
/*! \file bool.h
 ** \verbatim
 ** Original author: Morgan Deters
 ** Major contributors: none
 ** Minor contributors (to current version): none
 ** This file is part of the CVC4 project.
 ** Copyright (c) 2009-2014  New York University and The University of Iowa
 ** See the file COPYING in the top-level source directory for licensing
 ** information.\endverbatim
 **
 ** \brief A hash function for Boolean
 **
 ** A hash function for Boolean.
 **/

#include "cvc4_public.h"

#ifndef __CVC4__BOOL_H
#define __CVC4__BOOL_H

namespace CVC4 {

struct BoolHashFunction {
  inline size_t operator()(bool b) const {
    return b;
  }
};/* struct BoolHashFunction */
  
  
/**
 * The structure representing the encoding id
 */
struct CVC4_PUBLIC SpecialBool {
  /** The encoding id */
  unsigned encId;
  SpecialBool(unsigned i)
  : encId(i) {}
  
  bool operator == (const SpecialBool& other) const {
    return encId == other.encId;
  }
};/* struct SpecialBool */

/**
 * Hash function for the SpecialBool objects.
 */
struct CVC4_PUBLIC SpecialBoolHashFunction {
  size_t operator()(const SpecialBool& b) const {
    return b.encId;
  }
};/* struct SpecialBool */

inline std::ostream& operator <<(std::ostream& os, const SpecialBool& bv) CVC4_PUBLIC;
inline std::ostream& operator <<(std::ostream& os, const SpecialBool& bv) {
  return os << "[" << bv.encId << "]";
}


}/* CVC4 namespace */

#endif /* __CVC4__BOOL_H */
