/*********************                                                        */
/*! \file type_enumerator.h
 ** \verbatim
 ** Original author: Morgan Deters
 ** Major contributors: none
 ** Minor contributors (to current version): none
 ** This file is part of the CVC4 project.
 ** Copyright (c) 2009-2014  New York University and The University of Iowa
 ** See the file COPYING in the top-level source directory for licensing
 ** information.\endverbatim
 **
 ** \brief An enumerator for bitvectors
 **
 ** An enumerator for bitvectors.
 **/

#include "cvc4_private.h"

#ifndef __CVC4__THEORY__BV__TYPE_ENUMERATOR_H
#define __CVC4__THEORY__BV__TYPE_ENUMERATOR_H

#include "expr/kind.h"
#include "expr/type_node.h"
#include "theory/type_enumerator.h"
#include "util/bitvector.h"
#include "util/integer.h"

namespace CVC4 {
namespace theory {
namespace bv {

class BitVectorEnumerator : public TypeEnumeratorBase<BitVectorEnumerator> {
  size_t d_size;
  Integer d_bits;

public:

  BitVectorEnumerator(TypeNode type) throw(AssertionException) :
    TypeEnumeratorBase<BitVectorEnumerator>(type),
    d_size(type.getBitVectorSize()),
    d_bits(0) {
  }

  Node operator*() throw(NoMoreValuesException) {
    if(d_bits != d_bits.modByPow2(d_size)) {
      throw NoMoreValuesException(getType());
    }
    return NodeManager::currentNM()->mkConst(BitVector(d_size, d_bits));
  }

  BitVectorEnumerator& operator++() throw() {
    d_bits += 1;
    return *this;
  }

  bool isFinished() throw() {
    return d_bits != d_bits.modByPow2(d_size);
  }

};/* BitVectorEnumerator */

}/* CVC4::theory::bv namespace */
}/* CVC4::theory namespace */
}/* CVC4 namespace */

#endif /* __CVC4__THEORY__BV__TYPE_ENUMERATOR_H */
