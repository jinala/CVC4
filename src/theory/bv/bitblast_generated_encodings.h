#pragma once
#include "cvc4_private.h"
#include "expr/node.h"
#include "prop/cnf_stream.h"
#include "theory/bv/bitblast_utils.h"
#include "theory/bv/theory_bv_utils.h"

namespace CVC4 {
namespace theory {
namespace bv {
  

template <class T>
void inline optimalEncodingFixedWidth(int enc_id, const std::vector<std::vector<T> >& inputs, std::vector<T>& out, prop::CnfStream* cnf) {
  Unreachable();
}

void optimalEncodingFixedWidth(int enc_id, const std::vector<std::vector<Node> > & inputs,  std::vector<Node>& out, prop::CnfStream* cnf);
  
template <class T>
T inline optimalEncodingPredicate(int enc_id, const std::vector<std::vector<T> >& inputs, prop::CnfStream* cnf) {
  Unreachable();
  return mkTrue<T>();
}
  
Node optimalEncodingPredicate(int enc_id, const std::vector<std::vector<Node> >& inputs,  prop::CnfStream* cnf);

}/* bv */
}/* theory */
}/* CVC4 */
