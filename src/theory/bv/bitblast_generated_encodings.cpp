#include "theory/bv/bitblast_generated_encodings.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;
void encoding_20(const std::vector<std::vector<Node> >& inputs, std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
    if (cnf->hasEncoding(20, inpV)) {
      outV = cnf->getCachedEncoding(20, inpV);
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
void encoding_21(const std::vector<std::vector<Node> >& inputs, std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
    if (cnf->hasEncoding(21, inpV)) {
      outV = cnf->getCachedEncoding(21, inpV);
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
void encoding_22(const std::vector<std::vector<Node> >& inputs, std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
    if(k == 0)/*sketch_.._bv_bv.sk:16*/
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
    if (cnf->hasEncoding(22, inpV)) {
      outV = cnf->getCachedEncoding(22, inpV);
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

      cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, tt_1, tt_2, tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, tt_1, neg_tt_3, tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, neg_tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_1, neg_tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, tt_2, neg_tt_3, tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_2, neg_tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, tt_3, neg_tt_4), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_23(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(23, inpV)) {
        outV = cnf->getCachedEncoding(23, inpV);
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
void encoding_24(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(24, inpV)) {
        outV = cnf->getCachedEncoding(24, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_25(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];

    for (size_t i = 0; i < in0.size(); i++) {
      out.push_back(nm->mkSkolem("out", nm->booleanType())); 
    }
    // Begin iterator
    for (size_t k = 0; k < in0.size(); k++) {
      Node in_k_0 = in0[k];
      Node neg_in_k_0 = nm->mkNode(kind::NOT, in_k_0);
      Node in_k_1 = in1[k];
      Node neg_in_k_1 = nm->mkNode(kind::NOT, in_k_1);
      Node in_k_2 = in2[k];
      Node neg_in_k_2 = nm->mkNode(kind::NOT, in_k_2);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      if (cnf->hasEncoding(25, inpV)) {
        outV = cnf->getCachedEncoding(25, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void CVC4::theory::bv::optimalEncodingFixedWidth(int enc_id, const std::vector<std::vector<Node> > & inputs,  std::vector<Node>& out, prop::CnfStream* cnf) {
  NodeManager* nm = NodeManager::currentNM();
  if (enc_id == 20) { 
    encoding_20(inputs, out, cnf, nm);
  }
  else if (enc_id == 21) {
    encoding_21(inputs, out, cnf, nm);
  }
  else if (enc_id == 22) {
    encoding_22(inputs, out, cnf, nm);
  }
  else if (enc_id == 23) {
    encoding_23(inputs, out, cnf, nm);
  }
  else if (enc_id == 24) {
    encoding_24(inputs, out, cnf, nm);
  }
  else if (enc_id == 25) {
    encoding_25(inputs, out, cnf, nm);
  }
  else {
    Assert(false);
  }
}/* optimalEncodingFixedWidth */
Node encoding_26(const std::vector<std::vector<Node> >& inputs,   prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(26, inpV)) {
        outV = cnf->getCachedEncoding(26, inpV);
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
Node encoding_27(const std::vector<std::vector<Node> >& inputs,   prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(27, inpV)) {
        outV = cnf->getCachedEncoding(27, inpV);
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
Node encoding_28(const std::vector<std::vector<Node> >& inputs,   prop::CnfStream* cnf, NodeManager* nm) {
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
    if((k == (N - 1)) && 1)/*sketch_..v_bool.sk:12*/
    {
      tt_0 = nm->mkNode(kind::NOT, in0[k]);
      neg_tt_0 = nm->mkNode(kind::NOT, tt_0);
    }
    {
      tt_1 = in1[k];
      neg_tt_1 = nm->mkNode(kind::NOT, tt_1);
    }
    if((k == (N - 1)) && 1)/*sketch_..v_bool.sk:16*/
    {
      tt_1 = nm->mkNode(kind::NOT, in1[k]);
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
      if (cnf->hasEncoding(28, inpV)) {
        outV = cnf->getCachedEncoding(28, inpV);
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
Node encoding_29(const std::vector<std::vector<Node> >& inputs,   prop::CnfStream* cnf, NodeManager* nm) {
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
      tt_1 = in1[N - 1 - k];
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
      if (cnf->hasEncoding(29, inpV)) {
        outV = cnf->getCachedEncoding(29, inpV);
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());

      }
    return out; 

}
Node encoding_30(const std::vector<std::vector<Node> >& inputs,   prop::CnfStream* cnf, NodeManager* nm) {
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
    if(k == (N - 1))/*sketch_..v_bool.sk:24*/
    {
      tt_3 = true_n;
      neg_tt_3 = nm->mkNode(kind::NOT, tt_3);
    }
    else
    {
      tt_3 = tmp[k];
      neg_tt_3 = nm->mkNode(kind::NOT, tt_3);
    }
      inpV.clear();
      inpV.push_back(tt_0);
      inpV.push_back(tt_1);
      inpV.push_back(tt_3);
      if (cnf->hasEncoding(30, inpV)) {
        outV = cnf->getCachedEncoding(30, inpV);
    if(k == 0)/*sketch_..v_bool.sk:19*/
        out = outV[0];
    else
        tmp[k - 1] = outV[0];
        continue;
      }
    if(k == 0)/*sketch_..v_bool.sk:19*/
    {
      tt_2 = out;
      neg_tt_2 = nm->mkNode(kind::NOT, tt_2);
    }
    else
    {
      tt_2 = tmp[k - 1];
      neg_tt_2 = nm->mkNode(kind::NOT, tt_2);
    }
      outV.clear();
      outV.push_back(tt_2);

        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_2), false, false, RULE_INVALID, TNode::null());

      }
    return out; 

}
Node encoding_31(const std::vector<std::vector<Node> >& inputs,   prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(31, inpV)) {
        outV = cnf->getCachedEncoding(31, inpV);
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, tt_1, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, neg_tt_1, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_1, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());

      }
    return out; 

}
Node encoding_32(const std::vector<std::vector<Node> >& inputs,   prop::CnfStream* cnf, NodeManager* nm) {
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
      tt_0 = in0[N - 1 - k];
      neg_tt_0 = nm->mkNode(kind::NOT, tt_0);
    }
    {
      tt_1 = in1[k];
      neg_tt_1 = nm->mkNode(kind::NOT, tt_1);
    }
    if(k == (N - 1))/*sketch_..v_bool.sk:24*/
    {
      tt_3 = false_n;
      neg_tt_3 = nm->mkNode(kind::NOT, tt_3);
    }
    else
    {
      tt_3 = tmp[k];
      neg_tt_3 = nm->mkNode(kind::NOT, tt_3);
    }
      inpV.clear();
      inpV.push_back(tt_0);
      inpV.push_back(tt_1);
      inpV.push_back(tt_3);
      if (cnf->hasEncoding(32, inpV)) {
        outV = cnf->getCachedEncoding(32, inpV);
    if(k == 0)/*sketch_..v_bool.sk:19*/
        out = outV[0];
    else
        tmp[k - 1] = outV[0];
        continue;
      }
    if(k == 0)/*sketch_..v_bool.sk:19*/
    {
      tt_2 = out;
      neg_tt_2 = nm->mkNode(kind::NOT, tt_2);
    }
    else
    {
      tt_2 = tmp[k - 1];
      neg_tt_2 = nm->mkNode(kind::NOT, tt_2);
    }
      outV.clear();
      outV.push_back(tt_2);

        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_2), false, false, RULE_INVALID, TNode::null());

      }
    return out; 

}
Node encoding_33(const std::vector<std::vector<Node> >& inputs,   prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(33, inpV)) {
        outV = cnf->getCachedEncoding(33, inpV);
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, tt_1, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, neg_tt_1, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_1, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());

      }
    return out; 

}
Node encoding_34(const std::vector<std::vector<Node> >& inputs,   prop::CnfStream* cnf, NodeManager* nm) {
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
      tt_1 = in1[N - 1 - k];
      neg_tt_1 = nm->mkNode(kind::NOT, tt_1);
    }
    if(k == (N - 1))/*sketch_..v_bool.sk:24*/
    {
      tt_3 = true_n;
      neg_tt_3 = nm->mkNode(kind::NOT, tt_3);
    }
    else
    {
      tt_3 = tmp[k];
      neg_tt_3 = nm->mkNode(kind::NOT, tt_3);
    }
      inpV.clear();
      inpV.push_back(tt_0);
      inpV.push_back(tt_1);
      inpV.push_back(tt_3);
      if (cnf->hasEncoding(34, inpV)) {
        outV = cnf->getCachedEncoding(34, inpV);
    if(k == 0)/*sketch_..v_bool.sk:19*/
        out = outV[0];
    else
        tmp[k - 1] = outV[0];
        continue;
      }
    if(k == 0)/*sketch_..v_bool.sk:19*/
    {
      tt_2 = out;
      neg_tt_2 = nm->mkNode(kind::NOT, tt_2);
    }
    else
    {
      tt_2 = tmp[k - 1];
      neg_tt_2 = nm->mkNode(kind::NOT, tt_2);
    }
      outV.clear();
      outV.push_back(tt_2);

        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_2), false, false, RULE_INVALID, TNode::null());

      }
    return out; 

}
Node encoding_35(const std::vector<std::vector<Node> >& inputs,   prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(35, inpV)) {
        outV = cnf->getCachedEncoding(35, inpV);
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_3), false, false, RULE_INVALID, TNode::null());

      }
    return out; 

}
Node encoding_36(const std::vector<std::vector<Node> >& inputs,   prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(36, inpV)) {
        outV = cnf->getCachedEncoding(36, inpV);
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_3), false, false, RULE_INVALID, TNode::null());

      }
    return out; 

}
Node encoding_37(const std::vector<std::vector<Node> >& inputs,   prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(37, inpV)) {
        outV = cnf->getCachedEncoding(37, inpV);
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, tt_1, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, neg_tt_1, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_1, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());

      }
    return out; 

}
Node encoding_38(const std::vector<std::vector<Node> >& inputs,   prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(38, inpV)) {
        outV = cnf->getCachedEncoding(38, inpV);
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, tt_1, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, neg_tt_1, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_1, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());

      }
    return out; 

}
Node CVC4::theory::bv::optimalEncodingPredicate(int enc_id, const std::vector<std::vector<Node> >& inputs,  prop::CnfStream* cnf) {
  NodeManager* nm = NodeManager::currentNM();
  if (enc_id == 26) { 
    return encoding_26(inputs, cnf, nm);
  }
  else if (enc_id == 27) {
    return encoding_27(inputs, cnf, nm);
  }
  else if (enc_id == 28) {
    return encoding_28(inputs, cnf, nm);
  }
  else if (enc_id == 29) {
    return encoding_29(inputs, cnf, nm);
  }
  else if (enc_id == 30) {
    return encoding_30(inputs, cnf, nm);
  }
  else if (enc_id == 31) {
    return encoding_31(inputs, cnf, nm);
  }
  else if (enc_id == 32) {
    return encoding_32(inputs, cnf, nm);
  }
  else if (enc_id == 33) {
    return encoding_33(inputs, cnf, nm);
  }
  else if (enc_id == 34) {
    return encoding_34(inputs, cnf, nm);
  }
  else if (enc_id == 35) {
    return encoding_35(inputs, cnf, nm);
  }
  else if (enc_id == 36) {
    return encoding_36(inputs, cnf, nm);
  }
  else if (enc_id == 37) {
    return encoding_37(inputs, cnf, nm);
  }
  else if (enc_id == 38) {
    return encoding_38(inputs, cnf, nm);
  }
  else {
    Assert(false);
    return mkTrue<Node>();
  }
}/* optimalEncodingPredicate */
