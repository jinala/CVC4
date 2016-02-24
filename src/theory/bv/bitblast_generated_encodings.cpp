#include "theory/bv/bitblast_generated_encodings.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;
void encoding_13(const std::vector<std::vector<Node> >& inputs, std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
  std::vector<Node> inpV;
  std::vector<Node> outV;
  std::vector<Node> in0 = inputs[0];
  std::vector<Node> in1 = inputs[1];

  for (size_t i = 0; i < in0.size(); i++) {
    out.push_back(nm->mkSkolem("out", nm->booleanType())); 
  }
  std::vector<Node> tmp;
  for (size_t i = 0; i < in0.size(); i++) {
    tmp.push_back(nm->mkSkolem("out", nm->booleanType()));
  }
  Node true_n = nm->mkConst<bool>(true);
  Node false_n = nm->mkConst<bool>(false);

  // Begin iterator
  int N = in0.size();
  Node tt_0;
  Node neg_tt_0;
  Node tt_1;
  Node neg_tt_1;
  Node tt_2;
  Node neg_tt_2;
  Node tt_3;
  Node neg_tt_3;
  Node tt_4;
  Node neg_tt_4;

for (int k = 0; k < N; k++) {
  {
    tt_0 = in1[k];
    neg_tt_0 = nm->mkNode(kind::NOT, tt_0);
  }
  {
    tt_1 = nm->mkNode(kind::NOT, in0[k]);
    neg_tt_1 = nm->mkNode(kind::NOT, tt_1);
  }
    if(k == 0)/*addn.sk:16*/
  {
    tt_3 = false_n;
    neg_tt_3 = nm->mkNode(kind::NOT, tt_3);
  }
    else
  {
    tt_3 = tmp[k - 1];
    neg_tt_3 = nm->mkNode(kind::NOT, tt_3);
  }
    inpV.clear();
    inpV.push_back(tt_0);
    inpV.push_back(tt_1);
    inpV.push_back(tt_3);
    if (cnf->hasEncoding(13, inpV)) {
      outV = cnf->getCachedEncoding(13, inpV);
      out[k] = outV[0];
      tmp[k] = outV[1];
      continue;
    }
  {
    tt_2 = out[k];
    neg_tt_2 = nm->mkNode(kind::NOT, tt_2);
  }
  {
    tt_4 = tmp[k];
    neg_tt_4 = nm->mkNode(kind::NOT, tt_4);
  }
    outV.clear();
    outV.push_back(tt_2);
    outV.push_back(tt_4);

      cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, tt_1, neg_tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, tt_1, tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_2, tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_3, tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, neg_tt_1, tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, neg_tt_1, neg_tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_2, neg_tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_3, neg_tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, tt_1, neg_tt_2, tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, tt_1, neg_tt_3, tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_1, tt_2, neg_tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_1, tt_3, neg_tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, tt_2, tt_3, neg_tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_2, neg_tt_3, tt_4), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_14(const std::vector<std::vector<Node> >& inputs, std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
  std::vector<Node> inpV;
  std::vector<Node> outV;
  std::vector<Node> in0 = inputs[0];
  std::vector<Node> in1 = inputs[1];

  for (size_t i = 0; i < in0.size(); i++) {
    out.push_back(nm->mkSkolem("out", nm->booleanType())); 
  }
  std::vector<Node> tmp;
  for (size_t i = 0; i < in0.size(); i++) {
    tmp.push_back(nm->mkSkolem("out", nm->booleanType()));
  }
  Node true_n = nm->mkConst<bool>(true);
  Node false_n = nm->mkConst<bool>(false);

  // Begin iterator
  int N = in0.size();
  Node tt_0;
  Node neg_tt_0;
  Node tt_1;
  Node neg_tt_1;
  Node tt_2;
  Node neg_tt_2;
  Node tt_3;
  Node neg_tt_3;
  Node tt_4;
  Node neg_tt_4;

for (int k = 0; k < N; k++) {
  {
    tt_0 = in0[k];
    neg_tt_0 = nm->mkNode(kind::NOT, tt_0);
  }
  {
    tt_1 = in1[k];
    neg_tt_1 = nm->mkNode(kind::NOT, tt_1);
  }
    if(k == 0)/*addn.sk:16*/
  {
    tt_3 = true_n;
    neg_tt_3 = nm->mkNode(kind::NOT, tt_3);
  }
    else
  {
    tt_3 = tmp[k - 1];
    neg_tt_3 = nm->mkNode(kind::NOT, tt_3);
  }
    inpV.clear();
    inpV.push_back(tt_0);
    inpV.push_back(tt_1);
    inpV.push_back(tt_3);
    if (cnf->hasEncoding(14, inpV)) {
      outV = cnf->getCachedEncoding(14, inpV);
      out[k] = outV[0];
      tmp[k] = outV[1];
      continue;
    }
  {
    tt_2 = out[k];
    neg_tt_2 = nm->mkNode(kind::NOT, tt_2);
  }
  {
    tt_4 = tmp[k];
    neg_tt_4 = nm->mkNode(kind::NOT, tt_4);
  }
    outV.clear();
    outV.push_back(tt_2);
    outV.push_back(tt_4);

      cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, tt_1, neg_tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, tt_1, tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_2, tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_3, tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, neg_tt_1, tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, neg_tt_1, neg_tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_2, neg_tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_3, neg_tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, tt_1, neg_tt_2, tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, tt_1, neg_tt_3, tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_1, tt_2, neg_tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_1, tt_3, neg_tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, tt_2, tt_3, neg_tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_2, neg_tt_3, tt_4), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_15(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];

    for (size_t i = 0; i < in0.size(); i++) {
      out.push_back(nm->mkSkolem("out", nm->booleanType())); 
    }
    // Begin iterator
    for (size_t k = 0; k < in0.size(); k++) {
      Node in_k_0 = in0[k];
      Node neg_in_k_0 = nm->mkNode(kind::NOT, in_k_0);
      Node in_k_1 = in1[k];
      Node neg_in_k_1 = nm->mkNode(kind::NOT, in_k_1);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      if (cnf->hasEncoding(15, inpV)) {
        outV = cnf->getCachedEncoding(15, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_16(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];

    for (size_t i = 0; i < in0.size(); i++) {
      out.push_back(nm->mkSkolem("out", nm->booleanType())); 
    }
    // Begin iterator
    for (size_t k = 0; k < in0.size(); k++) {
      Node in_k_0 = in0[k];
      Node neg_in_k_0 = nm->mkNode(kind::NOT, in_k_0);
      Node in_k_1 = in1[k];
      Node neg_in_k_1 = nm->mkNode(kind::NOT, in_k_1);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      if (cnf->hasEncoding(16, inpV)) {
        outV = cnf->getCachedEncoding(16, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void CVC4::theory::bv::optimalEncodingFixedWidth(int enc_id, const std::vector<std::vector<Node> > & inputs,  std::vector<Node>& out, prop::CnfStream* cnf) {
  NodeManager* nm = NodeManager::currentNM();
  if (enc_id == 13) { 
    encoding_13(inputs, out, cnf, nm);
  }
  else if (enc_id == 14) {
    encoding_14(inputs, out, cnf, nm);
  }
  else if (enc_id == 15) {
    encoding_15(inputs, out, cnf, nm);
  }
  else if (enc_id == 16) {
    encoding_16(inputs, out, cnf, nm);
  }
  else {
    Assert(false);
  }
}/* optimalEncodingFixedWidth */
Node encoding_17(const std::vector<std::vector<Node> >& inputs,   prop::CnfStream* cnf, NodeManager* nm) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];

    Node out = nm->mkSkolem("out", nm->booleanType());
    std::vector<Node> tmp;
    for (size_t i = 0; i < in0.size(); i++) {
      tmp.push_back(nm->mkSkolem("out", nm->booleanType()));
    }
    Node true_n = nm->mkConst<bool>(true);
    Node false_n = nm->mkConst<bool>(false);

    // Begin iterator
    int N = in0.size();
    Node tt_0;
    Node neg_tt_0;
    Node tt_1;
    Node neg_tt_1;
    Node tt_2;
    Node neg_tt_2;
    Node tt_3;
    Node neg_tt_3;

for (int k = 0; k < N; k++) {
    {
      tt_0 = in0[k];
      neg_tt_0 = nm->mkNode(kind::NOT, tt_0);
    }
    {
      tt_1 = in1[k];
      neg_tt_1 = nm->mkNode(kind::NOT, tt_1);
    }
    if(k == 0)/*sketch_..v_bool.sk:19*/
    {
      tt_2 = true_n;
      neg_tt_2 = nm->mkNode(kind::NOT, tt_2);
    }
    else
    {
      tt_2 = tmp[k - 1];
      neg_tt_2 = nm->mkNode(kind::NOT, tt_2);
    }
      inpV.clear();
      inpV.push_back(tt_0);
      inpV.push_back(tt_1);
      inpV.push_back(tt_2);
      if (cnf->hasEncoding(17, inpV)) {
        outV = cnf->getCachedEncoding(17, inpV);
    if(k == (N - 1))/*sketch_..v_bool.sk:24*/
        out = outV[0];
    else
        tmp[k] = outV[0];
        continue;
      }
    if(k == (N - 1))/*sketch_..v_bool.sk:24*/
    {
      tt_3 = out;
      neg_tt_3 = nm->mkNode(kind::NOT, tt_3);
    }
    else
    {
      tt_3 = tmp[k];
      neg_tt_3 = nm->mkNode(kind::NOT, tt_3);
    }
      outV.clear();
      outV.push_back(tt_3);

        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_1, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_1, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, neg_tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());

      }
    return out; 

}
Node encoding_18(const std::vector<std::vector<Node> >& inputs,   prop::CnfStream* cnf, NodeManager* nm) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];

    Node out = nm->mkSkolem("out", nm->booleanType());
    std::vector<Node> tmp;
    for (size_t i = 0; i < in0.size(); i++) {
      tmp.push_back(nm->mkSkolem("out", nm->booleanType()));
    }
    Node true_n = nm->mkConst<bool>(true);
    Node false_n = nm->mkConst<bool>(false);

    // Begin iterator
    int N = in0.size();
    Node tt_0;
    Node neg_tt_0;
    Node tt_1;
    Node neg_tt_1;
    Node tt_2;
    Node neg_tt_2;
    Node tt_3;
    Node neg_tt_3;

for (int k = 0; k < N; k++) {
    {
      tt_0 = in0[k];
      neg_tt_0 = nm->mkNode(kind::NOT, tt_0);
    }
    {
      tt_1 = in1[k];
      neg_tt_1 = nm->mkNode(kind::NOT, tt_1);
    }
    if(k == 0)/*sketch_..v_bool.sk:19*/
    {
      tt_2 = false_n;
      neg_tt_2 = nm->mkNode(kind::NOT, tt_2);
    }
    else
    {
      tt_2 = tmp[k - 1];
      neg_tt_2 = nm->mkNode(kind::NOT, tt_2);
    }
      inpV.clear();
      inpV.push_back(tt_0);
      inpV.push_back(tt_1);
      inpV.push_back(tt_2);
      if (cnf->hasEncoding(18, inpV)) {
        outV = cnf->getCachedEncoding(18, inpV);
    if(k == (N - 1))/*sketch_..v_bool.sk:24*/
        out = outV[0];
    else
        tmp[k] = outV[0];
        continue;
      }
    if(k == (N - 1))/*sketch_..v_bool.sk:24*/
    {
      tt_3 = out;
      neg_tt_3 = nm->mkNode(kind::NOT, tt_3);
    }
    else
    {
      tt_3 = tmp[k];
      neg_tt_3 = nm->mkNode(kind::NOT, tt_3);
    }
      outV.clear();
      outV.push_back(tt_3);

        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_1, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_1, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_1, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());

      }
    return out; 

}
Node CVC4::theory::bv::optimalEncodingPredicate(int enc_id, const std::vector<std::vector<Node> >& inputs,  prop::CnfStream* cnf) {
  NodeManager* nm = NodeManager::currentNM();
  if (enc_id == 17) { 
    return encoding_17(inputs, cnf, nm);
  }
  else if (enc_id == 18) {
    return encoding_18(inputs, cnf, nm);
  }
  else {
    Assert(false);
    return mkTrue<Node>();
  }
}/* optimalEncodingPredicate */
