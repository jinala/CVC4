#ifndef __CVC4__BITBLAST__GENERATED_ENCODINGS_H
#define __CVC4__BITBLAST__GENERATED_ENCODINGS_H

#include "cvc4_private.h"
#include "expr/node.h"
#include "theory/bv/bitblast_utils.h"
#include "theory/bv/theory_bv_utils.h"
#include <ostream>
#include <cmath>
namespace CVC4 {

namespace theory {
namespace bv {

template <class T>
void DefaultSpecialFixedWidthBB (TNode node, std::vector<T>& res, TBitblaster<T>* bb) {
  Debug("bitvector-bb") << "theory::bv::SpecialFixedWidth bitblasting " << node << "\n";
  Assert(node.getKind() == kind::BITVECTOR_SPECIAL_FIXED_WIDTH &&
         res.size() == 0);
  
  bb->bbTerm(node[0], res);
  
  std::vector<T> newres;
  
  for(unsigned i = 1; i < node.getNumChildren(); ++i) {
    std::vector<T> current;
    bb->bbTerm(node[i], current);
    newres.clear();
    rippleCarryAdder(res, current, newres, mkFalse<T>());
    res = newres;
  }
  
  Assert(res.size() == utils::getSize(node));
}



}
}
}

#endif
