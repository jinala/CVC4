#pragma once
#include "theory/bv/theory_bv_utils.h"
#include "cvc4_private.h"
#include "expr/node.h"
#include "prop/cnf_stream.h"
#include <ostream>
#include <cmath>

namespace CVC4 {
namespace theory {
namespace booleans {

Node defaultSpecial(TNode node, CVC4::prop::CnfStream* cnf) {
  int enc_id = node.getAttribute(theory::bv::IdAttr());
  NodeManager* nm = NodeManager::currentNM();
  if (enc_id == 3) { 
    Node in_0 = node[0];
    Node neg_in_0 = nm->mkNode(kind::NOT, in_0);
    Node in_1 = node[1];
    Node neg_in_1 = nm->mkNode(kind::NOT, in_1);
    Node in_2 = node[2];
    Node neg_in_2 = nm->mkNode(kind::NOT, in_2);

    Node out_0 = nm->mkSkolem("out_0", nm->booleanType());
    Node neg_out_0 = nm->mkNode(kind::NOT, out_0);


    cnf->convertAndAssert(nm->mkNode(kind::OR, in_0, in_1, neg_out_0), false, false, RULE_INVALID, TNode::null());
    cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_0, neg_in_2, out_0), false, false, RULE_INVALID, TNode::null());
    cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_1, neg_in_2, out_0), false, false, RULE_INVALID, TNode::null());
    cnf->convertAndAssert(nm->mkNode(kind::OR, in_2, neg_out_0), false, false, RULE_INVALID, TNode::null());

    return out_0; 

  }
  else {
    Assert(false);
    return nm->mkConst<bool>(false);
  }
}/* defaultSpecial */
}/* boolean */
}/* theory */
}/* CVC4 */
