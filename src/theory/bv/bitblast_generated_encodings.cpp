#include "theory/bv/bitblast_generated_encodings.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

void CVC4::theory::bv::optimalEncodingFixedWidth(int enc_id, const std::vector<std::vector<Node> > & inputs,  std::vector<Node>& out, prop::CnfStream* cnf) {
  NodeManager* nm = NodeManager::currentNM();
  if (enc_id == 0) { 
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
      if (cnf->hasEncoding(0, inpV)) {
        outV = cnf->getCachedEncoding(0, inpV);
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
      cnf->cacheEncoding(0, inpV, outV);

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
  else if (enc_id == 5) {
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
      if (cnf->hasEncoding(5, inpV)) {
        outV = cnf->getCachedEncoding(5, inpV);
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
      cnf->cacheEncoding(5, inpV, outV);

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
  else if (enc_id == 8) {
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
      if (cnf->hasEncoding(8, inpV)) {
        outV = cnf->getCachedEncoding(8, inpV);
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
      cnf->cacheEncoding(8, inpV, outV);

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
  else if (enc_id == 281) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(281, inpV)) {
        outV = cnf->getCachedEncoding(281, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(281, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 282) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(282, inpV)) {
        outV = cnf->getCachedEncoding(282, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(282, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 283) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(283, inpV)) {
        outV = cnf->getCachedEncoding(283, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(283, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 284) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(284, inpV)) {
        outV = cnf->getCachedEncoding(284, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(284, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 285) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(285, inpV)) {
        outV = cnf->getCachedEncoding(285, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(285, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 286) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(286, inpV)) {
        outV = cnf->getCachedEncoding(286, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(286, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 287) {
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
      if (cnf->hasEncoding(287, inpV)) {
        outV = cnf->getCachedEncoding(287, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(287, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 288) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(288, inpV)) {
        outV = cnf->getCachedEncoding(288, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(288, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 289) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(289, inpV)) {
        outV = cnf->getCachedEncoding(289, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(289, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 290) {
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
      if (cnf->hasEncoding(290, inpV)) {
        outV = cnf->getCachedEncoding(290, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(290, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 291) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(291, inpV)) {
        outV = cnf->getCachedEncoding(291, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(291, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 292) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(292, inpV)) {
        outV = cnf->getCachedEncoding(292, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(292, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 293) {
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
      if (cnf->hasEncoding(293, inpV)) {
        outV = cnf->getCachedEncoding(293, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(293, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 294) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(294, inpV)) {
        outV = cnf->getCachedEncoding(294, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(294, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 295) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(295, inpV)) {
        outV = cnf->getCachedEncoding(295, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(295, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 296) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(296, inpV)) {
        outV = cnf->getCachedEncoding(296, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(296, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 297) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(297, inpV)) {
        outV = cnf->getCachedEncoding(297, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(297, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 298) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(298, inpV)) {
        outV = cnf->getCachedEncoding(298, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(298, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 299) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(299, inpV)) {
        outV = cnf->getCachedEncoding(299, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(299, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 300) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);

      Node temp_0 = nm->mkSkolem("temp", nm->booleanType());
      Node neg_temp_0 = nm->mkNode(kind::NOT, temp_0);

      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      inpV.push_back(temp_0);
      if (cnf->hasEncoding(300, inpV)) {
        outV = cnf->getCachedEncoding(300, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(300, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, in_k_3, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_4, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k, neg_temp_0), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 301) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(301, inpV)) {
        outV = cnf->getCachedEncoding(301, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(301, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 302) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(302, inpV)) {
        outV = cnf->getCachedEncoding(302, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(302, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_4, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 303) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(303, inpV)) {
        outV = cnf->getCachedEncoding(303, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(303, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 304) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(304, inpV)) {
        outV = cnf->getCachedEncoding(304, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(304, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 305) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(305, inpV)) {
        outV = cnf->getCachedEncoding(305, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(305, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 306) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(306, inpV)) {
        outV = cnf->getCachedEncoding(306, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(306, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 307) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(307, inpV)) {
        outV = cnf->getCachedEncoding(307, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(307, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 308) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(308, inpV)) {
        outV = cnf->getCachedEncoding(308, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(308, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 309) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(309, inpV)) {
        outV = cnf->getCachedEncoding(309, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(309, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 310) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(310, inpV)) {
        outV = cnf->getCachedEncoding(310, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(310, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 311) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(311, inpV)) {
        outV = cnf->getCachedEncoding(311, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(311, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 312) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(312, inpV)) {
        outV = cnf->getCachedEncoding(312, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(312, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 313) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(313, inpV)) {
        outV = cnf->getCachedEncoding(313, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(313, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 314) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(314, inpV)) {
        outV = cnf->getCachedEncoding(314, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(314, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 315) {
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
      if (cnf->hasEncoding(315, inpV)) {
        outV = cnf->getCachedEncoding(315, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(315, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 316) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(316, inpV)) {
        outV = cnf->getCachedEncoding(316, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(316, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 317) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(317, inpV)) {
        outV = cnf->getCachedEncoding(317, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(317, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 318) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(318, inpV)) {
        outV = cnf->getCachedEncoding(318, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(318, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 320) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(320, inpV)) {
        outV = cnf->getCachedEncoding(320, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(320, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 321) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(321, inpV)) {
        outV = cnf->getCachedEncoding(321, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(321, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 322) {
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
      if (cnf->hasEncoding(322, inpV)) {
        outV = cnf->getCachedEncoding(322, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(322, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 323) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(323, inpV)) {
        outV = cnf->getCachedEncoding(323, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(323, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 324) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(324, inpV)) {
        outV = cnf->getCachedEncoding(324, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(324, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 325) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(325, inpV)) {
        outV = cnf->getCachedEncoding(325, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(325, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 326) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(326, inpV)) {
        outV = cnf->getCachedEncoding(326, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(326, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 327) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(327, inpV)) {
        outV = cnf->getCachedEncoding(327, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(327, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 328) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(328, inpV)) {
        outV = cnf->getCachedEncoding(328, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(328, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 330) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(330, inpV)) {
        outV = cnf->getCachedEncoding(330, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(330, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 331) {
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
      if (cnf->hasEncoding(331, inpV)) {
        outV = cnf->getCachedEncoding(331, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(331, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 332) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(332, inpV)) {
        outV = cnf->getCachedEncoding(332, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(332, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 333) {
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
      if (cnf->hasEncoding(333, inpV)) {
        outV = cnf->getCachedEncoding(333, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(333, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 334) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(334, inpV)) {
        outV = cnf->getCachedEncoding(334, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(334, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 335) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(335, inpV)) {
        outV = cnf->getCachedEncoding(335, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(335, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 336) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(336, inpV)) {
        outV = cnf->getCachedEncoding(336, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(336, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 337) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(337, inpV)) {
        outV = cnf->getCachedEncoding(337, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(337, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 338) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(338, inpV)) {
        outV = cnf->getCachedEncoding(338, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(338, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 339) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);

      Node temp_0 = nm->mkSkolem("temp", nm->booleanType());
      Node neg_temp_0 = nm->mkNode(kind::NOT, temp_0);

      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      inpV.push_back(temp_0);
      if (cnf->hasEncoding(339, inpV)) {
        outV = cnf->getCachedEncoding(339, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(339, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_3, neg_in_k_4, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_in_k_4, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k, neg_temp_0), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 340) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(340, inpV)) {
        outV = cnf->getCachedEncoding(340, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(340, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 341) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(341, inpV)) {
        outV = cnf->getCachedEncoding(341, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(341, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 342) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(342, inpV)) {
        outV = cnf->getCachedEncoding(342, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(342, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 343) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(343, inpV)) {
        outV = cnf->getCachedEncoding(343, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(343, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 344) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(344, inpV)) {
        outV = cnf->getCachedEncoding(344, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(344, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 345) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(345, inpV)) {
        outV = cnf->getCachedEncoding(345, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(345, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 346) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(346, inpV)) {
        outV = cnf->getCachedEncoding(346, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(346, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 347) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(347, inpV)) {
        outV = cnf->getCachedEncoding(347, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(347, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 348) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(348, inpV)) {
        outV = cnf->getCachedEncoding(348, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(348, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 349) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(349, inpV)) {
        outV = cnf->getCachedEncoding(349, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(349, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 350) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(350, inpV)) {
        outV = cnf->getCachedEncoding(350, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(350, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 351) {
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
      if (cnf->hasEncoding(351, inpV)) {
        outV = cnf->getCachedEncoding(351, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(351, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 352) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(352, inpV)) {
        outV = cnf->getCachedEncoding(352, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(352, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 353) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(353, inpV)) {
        outV = cnf->getCachedEncoding(353, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(353, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 354) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(354, inpV)) {
        outV = cnf->getCachedEncoding(354, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(354, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 355) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);

      Node temp_0 = nm->mkSkolem("temp", nm->booleanType());
      Node neg_temp_0 = nm->mkNode(kind::NOT, temp_0);

      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(temp_0);
      if (cnf->hasEncoding(355, inpV)) {
        outV = cnf->getCachedEncoding(355, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(355, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_out_k, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_temp_0), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 356) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(356, inpV)) {
        outV = cnf->getCachedEncoding(356, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(356, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 357) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(357, inpV)) {
        outV = cnf->getCachedEncoding(357, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(357, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 358) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(358, inpV)) {
        outV = cnf->getCachedEncoding(358, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(358, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 359) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(359, inpV)) {
        outV = cnf->getCachedEncoding(359, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(359, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 360) {
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
      if (cnf->hasEncoding(360, inpV)) {
        outV = cnf->getCachedEncoding(360, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(360, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 361) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(361, inpV)) {
        outV = cnf->getCachedEncoding(361, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(361, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 362) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(362, inpV)) {
        outV = cnf->getCachedEncoding(362, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(362, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 363) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(363, inpV)) {
        outV = cnf->getCachedEncoding(363, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(363, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 364) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(364, inpV)) {
        outV = cnf->getCachedEncoding(364, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(364, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 365) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(365, inpV)) {
        outV = cnf->getCachedEncoding(365, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(365, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 366) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(366, inpV)) {
        outV = cnf->getCachedEncoding(366, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(366, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 367) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);

      Node temp_0 = nm->mkSkolem("temp", nm->booleanType());
      Node neg_temp_0 = nm->mkNode(kind::NOT, temp_0);

      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(temp_0);
      if (cnf->hasEncoding(367, inpV)) {
        outV = cnf->getCachedEncoding(367, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(367, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 368) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(368, inpV)) {
        outV = cnf->getCachedEncoding(368, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(368, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 369) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(369, inpV)) {
        outV = cnf->getCachedEncoding(369, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(369, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 370) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(370, inpV)) {
        outV = cnf->getCachedEncoding(370, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(370, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 371) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(371, inpV)) {
        outV = cnf->getCachedEncoding(371, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(371, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 372) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);

      Node temp_0 = nm->mkSkolem("temp", nm->booleanType());
      Node neg_temp_0 = nm->mkNode(kind::NOT, temp_0);

      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      inpV.push_back(temp_0);
      if (cnf->hasEncoding(372, inpV)) {
        outV = cnf->getCachedEncoding(372, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(372, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_4, neg_in_k_5, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 373) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);

      Node temp_0 = nm->mkSkolem("temp", nm->booleanType());
      Node neg_temp_0 = nm->mkNode(kind::NOT, temp_0);

      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      inpV.push_back(temp_0);
      if (cnf->hasEncoding(373, inpV)) {
        outV = cnf->getCachedEncoding(373, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(373, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, out_k, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_5, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 374) {
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
      if (cnf->hasEncoding(374, inpV)) {
        outV = cnf->getCachedEncoding(374, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(374, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 375) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(375, inpV)) {
        outV = cnf->getCachedEncoding(375, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(375, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 376) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);

      Node temp_0 = nm->mkSkolem("temp", nm->booleanType());
      Node neg_temp_0 = nm->mkNode(kind::NOT, temp_0);

      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(temp_0);
      if (cnf->hasEncoding(376, inpV)) {
        outV = cnf->getCachedEncoding(376, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(376, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_4, out_k, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, out_k, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 377) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(377, inpV)) {
        outV = cnf->getCachedEncoding(377, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(377, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 378) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(378, inpV)) {
        outV = cnf->getCachedEncoding(378, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(378, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 379) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(379, inpV)) {
        outV = cnf->getCachedEncoding(379, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(379, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 380) {
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
      if (cnf->hasEncoding(380, inpV)) {
        outV = cnf->getCachedEncoding(380, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(380, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 381) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(381, inpV)) {
        outV = cnf->getCachedEncoding(381, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(381, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 382) {
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
      if (cnf->hasEncoding(382, inpV)) {
        outV = cnf->getCachedEncoding(382, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(382, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 383) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(383, inpV)) {
        outV = cnf->getCachedEncoding(383, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(383, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 384) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(384, inpV)) {
        outV = cnf->getCachedEncoding(384, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(384, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 385) {
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
      if (cnf->hasEncoding(385, inpV)) {
        outV = cnf->getCachedEncoding(385, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(385, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 387) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(387, inpV)) {
        outV = cnf->getCachedEncoding(387, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(387, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 388) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(388, inpV)) {
        outV = cnf->getCachedEncoding(388, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(388, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 389) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(389, inpV)) {
        outV = cnf->getCachedEncoding(389, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(389, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 390) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(390, inpV)) {
        outV = cnf->getCachedEncoding(390, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(390, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 391) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(391, inpV)) {
        outV = cnf->getCachedEncoding(391, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(391, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 392) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(392, inpV)) {
        outV = cnf->getCachedEncoding(392, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(392, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 393) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(393, inpV)) {
        outV = cnf->getCachedEncoding(393, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(393, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 394) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(394, inpV)) {
        outV = cnf->getCachedEncoding(394, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(394, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 395) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(395, inpV)) {
        outV = cnf->getCachedEncoding(395, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(395, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 396) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(396, inpV)) {
        outV = cnf->getCachedEncoding(396, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(396, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 398) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(398, inpV)) {
        outV = cnf->getCachedEncoding(398, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(398, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 399) {
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
      if (cnf->hasEncoding(399, inpV)) {
        outV = cnf->getCachedEncoding(399, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(399, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 400) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(400, inpV)) {
        outV = cnf->getCachedEncoding(400, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(400, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 401) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(401, inpV)) {
        outV = cnf->getCachedEncoding(401, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(401, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 402) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(402, inpV)) {
        outV = cnf->getCachedEncoding(402, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(402, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 403) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(403, inpV)) {
        outV = cnf->getCachedEncoding(403, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(403, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 404) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(404, inpV)) {
        outV = cnf->getCachedEncoding(404, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(404, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 405) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(405, inpV)) {
        outV = cnf->getCachedEncoding(405, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(405, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 406) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(406, inpV)) {
        outV = cnf->getCachedEncoding(406, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(406, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 407) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(407, inpV)) {
        outV = cnf->getCachedEncoding(407, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(407, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 408) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);

      Node temp_0 = nm->mkSkolem("temp", nm->booleanType());
      Node neg_temp_0 = nm->mkNode(kind::NOT, temp_0);

      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      inpV.push_back(temp_0);
      if (cnf->hasEncoding(408, inpV)) {
        outV = cnf->getCachedEncoding(408, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(408, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, out_k, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 409) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(409, inpV)) {
        outV = cnf->getCachedEncoding(409, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(409, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 410) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(410, inpV)) {
        outV = cnf->getCachedEncoding(410, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(410, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 411) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(411, inpV)) {
        outV = cnf->getCachedEncoding(411, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(411, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 412) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(412, inpV)) {
        outV = cnf->getCachedEncoding(412, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(412, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 413) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(413, inpV)) {
        outV = cnf->getCachedEncoding(413, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(413, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 414) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(414, inpV)) {
        outV = cnf->getCachedEncoding(414, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(414, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 415) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);

      Node temp_0 = nm->mkSkolem("temp", nm->booleanType());
      Node neg_temp_0 = nm->mkNode(kind::NOT, temp_0);

      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      inpV.push_back(temp_0);
      if (cnf->hasEncoding(415, inpV)) {
        outV = cnf->getCachedEncoding(415, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(415, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, in_k_3, neg_in_k_4, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_in_k_4, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k, neg_temp_0), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 416) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(416, inpV)) {
        outV = cnf->getCachedEncoding(416, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(416, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 417) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(417, inpV)) {
        outV = cnf->getCachedEncoding(417, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(417, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 418) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);

      Node temp_0 = nm->mkSkolem("temp", nm->booleanType());
      Node neg_temp_0 = nm->mkNode(kind::NOT, temp_0);

      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(temp_0);
      if (cnf->hasEncoding(418, inpV)) {
        outV = cnf->getCachedEncoding(418, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(418, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k, temp_0), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 419) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(419, inpV)) {
        outV = cnf->getCachedEncoding(419, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(419, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 420) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(420, inpV)) {
        outV = cnf->getCachedEncoding(420, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(420, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 421) {
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
      if (cnf->hasEncoding(421, inpV)) {
        outV = cnf->getCachedEncoding(421, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(421, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 422) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(422, inpV)) {
        outV = cnf->getCachedEncoding(422, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(422, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 423) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(423, inpV)) {
        outV = cnf->getCachedEncoding(423, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(423, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 424) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(424, inpV)) {
        outV = cnf->getCachedEncoding(424, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(424, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 425) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(425, inpV)) {
        outV = cnf->getCachedEncoding(425, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(425, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 426) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(426, inpV)) {
        outV = cnf->getCachedEncoding(426, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(426, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 427) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(427, inpV)) {
        outV = cnf->getCachedEncoding(427, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(427, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 428) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(428, inpV)) {
        outV = cnf->getCachedEncoding(428, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(428, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 429) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(429, inpV)) {
        outV = cnf->getCachedEncoding(429, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(429, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 430) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(430, inpV)) {
        outV = cnf->getCachedEncoding(430, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(430, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 431) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(431, inpV)) {
        outV = cnf->getCachedEncoding(431, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(431, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 432) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(432, inpV)) {
        outV = cnf->getCachedEncoding(432, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(432, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 433) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(433, inpV)) {
        outV = cnf->getCachedEncoding(433, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(433, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 435) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(435, inpV)) {
        outV = cnf->getCachedEncoding(435, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(435, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 436) {
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
      if (cnf->hasEncoding(436, inpV)) {
        outV = cnf->getCachedEncoding(436, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(436, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 437) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(437, inpV)) {
        outV = cnf->getCachedEncoding(437, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(437, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 439) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(439, inpV)) {
        outV = cnf->getCachedEncoding(439, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(439, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 440) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);

      Node temp_0 = nm->mkSkolem("temp", nm->booleanType());
      Node neg_temp_0 = nm->mkNode(kind::NOT, temp_0);

      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(temp_0);
      if (cnf->hasEncoding(440, inpV)) {
        outV = cnf->getCachedEncoding(440, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(440, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k, neg_temp_0), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 441) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(441, inpV)) {
        outV = cnf->getCachedEncoding(441, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(441, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 442) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(442, inpV)) {
        outV = cnf->getCachedEncoding(442, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(442, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 443) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);

      Node temp_0 = nm->mkSkolem("temp", nm->booleanType());
      Node neg_temp_0 = nm->mkNode(kind::NOT, temp_0);

      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      inpV.push_back(temp_0);
      if (cnf->hasEncoding(443, inpV)) {
        outV = cnf->getCachedEncoding(443, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(443, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_4, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k, neg_temp_0), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 444) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(444, inpV)) {
        outV = cnf->getCachedEncoding(444, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(444, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 445) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(445, inpV)) {
        outV = cnf->getCachedEncoding(445, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(445, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 446) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(446, inpV)) {
        outV = cnf->getCachedEncoding(446, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(446, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 447) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(447, inpV)) {
        outV = cnf->getCachedEncoding(447, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(447, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 448) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(448, inpV)) {
        outV = cnf->getCachedEncoding(448, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(448, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 449) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);

      Node temp_0 = nm->mkSkolem("temp", nm->booleanType());
      Node neg_temp_0 = nm->mkNode(kind::NOT, temp_0);

      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(temp_0);
      if (cnf->hasEncoding(449, inpV)) {
        outV = cnf->getCachedEncoding(449, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(449, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, in_k_4, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 450) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(450, inpV)) {
        outV = cnf->getCachedEncoding(450, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(450, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 451) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(451, inpV)) {
        outV = cnf->getCachedEncoding(451, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(451, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 452) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(452, inpV)) {
        outV = cnf->getCachedEncoding(452, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(452, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 453) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(453, inpV)) {
        outV = cnf->getCachedEncoding(453, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(453, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 454) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(454, inpV)) {
        outV = cnf->getCachedEncoding(454, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(454, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 455) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(455, inpV)) {
        outV = cnf->getCachedEncoding(455, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(455, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 456) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(456, inpV)) {
        outV = cnf->getCachedEncoding(456, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(456, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 457) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(457, inpV)) {
        outV = cnf->getCachedEncoding(457, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(457, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 458) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(458, inpV)) {
        outV = cnf->getCachedEncoding(458, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(458, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 459) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(459, inpV)) {
        outV = cnf->getCachedEncoding(459, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(459, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 461) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(461, inpV)) {
        outV = cnf->getCachedEncoding(461, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(461, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 462) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(462, inpV)) {
        outV = cnf->getCachedEncoding(462, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(462, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 463) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(463, inpV)) {
        outV = cnf->getCachedEncoding(463, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(463, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 464) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(464, inpV)) {
        outV = cnf->getCachedEncoding(464, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(464, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_4, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_4, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 465) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(465, inpV)) {
        outV = cnf->getCachedEncoding(465, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(465, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 466) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);

      Node temp_0 = nm->mkSkolem("temp", nm->booleanType());
      Node neg_temp_0 = nm->mkNode(kind::NOT, temp_0);

      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      inpV.push_back(temp_0);
      if (cnf->hasEncoding(466, inpV)) {
        outV = cnf->getCachedEncoding(466, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(466, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_3, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 467) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(467, inpV)) {
        outV = cnf->getCachedEncoding(467, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(467, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 468) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(468, inpV)) {
        outV = cnf->getCachedEncoding(468, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(468, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 469) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(469, inpV)) {
        outV = cnf->getCachedEncoding(469, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(469, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 470) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(470, inpV)) {
        outV = cnf->getCachedEncoding(470, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(470, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 471) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(471, inpV)) {
        outV = cnf->getCachedEncoding(471, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(471, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 472) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(472, inpV)) {
        outV = cnf->getCachedEncoding(472, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(472, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 473) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(473, inpV)) {
        outV = cnf->getCachedEncoding(473, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(473, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 474) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);

      Node temp_0 = nm->mkSkolem("temp", nm->booleanType());
      Node neg_temp_0 = nm->mkNode(kind::NOT, temp_0);

      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(temp_0);
      if (cnf->hasEncoding(474, inpV)) {
        outV = cnf->getCachedEncoding(474, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(474, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 475) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(475, inpV)) {
        outV = cnf->getCachedEncoding(475, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(475, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 476) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(476, inpV)) {
        outV = cnf->getCachedEncoding(476, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(476, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 477) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(477, inpV)) {
        outV = cnf->getCachedEncoding(477, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(477, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 478) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(478, inpV)) {
        outV = cnf->getCachedEncoding(478, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(478, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 479) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(479, inpV)) {
        outV = cnf->getCachedEncoding(479, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(479, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 480) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(480, inpV)) {
        outV = cnf->getCachedEncoding(480, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(480, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 481) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(481, inpV)) {
        outV = cnf->getCachedEncoding(481, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(481, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 482) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(482, inpV)) {
        outV = cnf->getCachedEncoding(482, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(482, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 483) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(483, inpV)) {
        outV = cnf->getCachedEncoding(483, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(483, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 484) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(484, inpV)) {
        outV = cnf->getCachedEncoding(484, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(484, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 485) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(485, inpV)) {
        outV = cnf->getCachedEncoding(485, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(485, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 486) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(486, inpV)) {
        outV = cnf->getCachedEncoding(486, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(486, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 487) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(487, inpV)) {
        outV = cnf->getCachedEncoding(487, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(487, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 488) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(488, inpV)) {
        outV = cnf->getCachedEncoding(488, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(488, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 489) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);

      Node temp_0 = nm->mkSkolem("temp", nm->booleanType());
      Node neg_temp_0 = nm->mkNode(kind::NOT, temp_0);

      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(temp_0);
      if (cnf->hasEncoding(489, inpV)) {
        outV = cnf->getCachedEncoding(489, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(489, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_out_k, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_out_k, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_temp_0), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 490) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(490, inpV)) {
        outV = cnf->getCachedEncoding(490, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(490, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 491) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(491, inpV)) {
        outV = cnf->getCachedEncoding(491, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(491, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 492) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(492, inpV)) {
        outV = cnf->getCachedEncoding(492, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(492, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 493) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(493, inpV)) {
        outV = cnf->getCachedEncoding(493, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(493, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 494) {
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
      if (cnf->hasEncoding(494, inpV)) {
        outV = cnf->getCachedEncoding(494, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(494, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 495) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(495, inpV)) {
        outV = cnf->getCachedEncoding(495, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(495, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 496) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(496, inpV)) {
        outV = cnf->getCachedEncoding(496, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(496, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 497) {
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
      if (cnf->hasEncoding(497, inpV)) {
        outV = cnf->getCachedEncoding(497, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(497, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 498) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(498, inpV)) {
        outV = cnf->getCachedEncoding(498, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(498, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 499) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(499, inpV)) {
        outV = cnf->getCachedEncoding(499, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(499, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_4, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_4, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 500) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(500, inpV)) {
        outV = cnf->getCachedEncoding(500, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(500, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 502) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(502, inpV)) {
        outV = cnf->getCachedEncoding(502, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(502, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 503) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(503, inpV)) {
        outV = cnf->getCachedEncoding(503, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(503, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 504) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(504, inpV)) {
        outV = cnf->getCachedEncoding(504, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(504, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 505) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(505, inpV)) {
        outV = cnf->getCachedEncoding(505, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(505, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 506) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(506, inpV)) {
        outV = cnf->getCachedEncoding(506, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(506, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_in_k_4, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 507) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(507, inpV)) {
        outV = cnf->getCachedEncoding(507, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(507, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 508) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(508, inpV)) {
        outV = cnf->getCachedEncoding(508, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(508, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 509) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(509, inpV)) {
        outV = cnf->getCachedEncoding(509, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(509, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_4, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_4, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 510) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(510, inpV)) {
        outV = cnf->getCachedEncoding(510, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(510, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 511) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(511, inpV)) {
        outV = cnf->getCachedEncoding(511, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(511, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 512) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(512, inpV)) {
        outV = cnf->getCachedEncoding(512, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(512, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 513) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(513, inpV)) {
        outV = cnf->getCachedEncoding(513, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(513, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 514) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(514, inpV)) {
        outV = cnf->getCachedEncoding(514, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(514, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 515) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(515, inpV)) {
        outV = cnf->getCachedEncoding(515, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(515, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 516) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(516, inpV)) {
        outV = cnf->getCachedEncoding(516, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(516, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 517) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);

      Node temp_0 = nm->mkSkolem("temp", nm->booleanType());
      Node neg_temp_0 = nm->mkNode(kind::NOT, temp_0);

      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(temp_0);
      if (cnf->hasEncoding(517, inpV)) {
        outV = cnf->getCachedEncoding(517, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(517, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k, temp_0), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 518) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(518, inpV)) {
        outV = cnf->getCachedEncoding(518, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(518, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 519) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(519, inpV)) {
        outV = cnf->getCachedEncoding(519, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(519, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 520) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(520, inpV)) {
        outV = cnf->getCachedEncoding(520, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(520, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 521) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(521, inpV)) {
        outV = cnf->getCachedEncoding(521, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(521, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 522) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(522, inpV)) {
        outV = cnf->getCachedEncoding(522, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(522, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 523) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(523, inpV)) {
        outV = cnf->getCachedEncoding(523, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(523, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_4, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_4, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 524) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(524, inpV)) {
        outV = cnf->getCachedEncoding(524, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(524, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 525) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(525, inpV)) {
        outV = cnf->getCachedEncoding(525, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(525, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 526) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(526, inpV)) {
        outV = cnf->getCachedEncoding(526, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(526, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 527) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      if (cnf->hasEncoding(527, inpV)) {
        outV = cnf->getCachedEncoding(527, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(527, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 528) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(528, inpV)) {
        outV = cnf->getCachedEncoding(528, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(528, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 529) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(529, inpV)) {
        outV = cnf->getCachedEncoding(529, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(529, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 531) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);

      Node temp_0 = nm->mkSkolem("temp", nm->booleanType());
      Node neg_temp_0 = nm->mkNode(kind::NOT, temp_0);

      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(temp_0);
      if (cnf->hasEncoding(531, inpV)) {
        outV = cnf->getCachedEncoding(531, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(531, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k, temp_0), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 532) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      if (cnf->hasEncoding(532, inpV)) {
        outV = cnf->getCachedEncoding(532, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(532, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 533) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(533, inpV)) {
        outV = cnf->getCachedEncoding(533, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(533, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 534) {
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
      if (cnf->hasEncoding(534, inpV)) {
        outV = cnf->getCachedEncoding(534, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(534, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 535) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);


      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      if (cnf->hasEncoding(535, inpV)) {
        outV = cnf->getCachedEncoding(535, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(535, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 537) {
    std::vector<Node> inpV;
    std::vector<Node> outV;
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];
    std::vector<Node> in3 = inputs[3];
    std::vector<Node> in4 = inputs[4];
    std::vector<Node> in5 = inputs[5];

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
      Node in_k_3 = in3[k];
      Node neg_in_k_3 = nm->mkNode(kind::NOT, in_k_3);
      Node in_k_4 = in4[k];
      Node neg_in_k_4 = nm->mkNode(kind::NOT, in_k_4);
      Node in_k_5 = in5[k];
      Node neg_in_k_5 = nm->mkNode(kind::NOT, in_k_5);

      Node temp_0 = nm->mkSkolem("temp", nm->booleanType());
      Node neg_temp_0 = nm->mkNode(kind::NOT, temp_0);

      inpV.clear();
      inpV.push_back(in_k_0);
      inpV.push_back(in_k_1);
      inpV.push_back(in_k_2);
      inpV.push_back(in_k_3);
      inpV.push_back(in_k_4);
      inpV.push_back(in_k_5);
      inpV.push_back(temp_0);
      if (cnf->hasEncoding(537, inpV)) {
        outV = cnf->getCachedEncoding(537, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(537, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, neg_in_k_5, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else {
    Assert(false);
  }
}/* optimalEncodingFixedWidth */

Node CVC4::theory::bv::optimalEncodingPredicate(int enc_id, const std::vector<std::vector<Node> >& inputs,  prop::CnfStream* cnf) {
  NodeManager* nm = NodeManager::currentNM();
  if (enc_id == 4) { 
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
      if (cnf->hasEncoding(4, inpV)) {
        outV = cnf->getCachedEncoding(4, inpV);
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
      cnf->cacheEncoding(4, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_1, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_1, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, neg_tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());

      }
    return out; 

  }
  else if (enc_id == 6) {
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
      if (cnf->hasEncoding(6, inpV)) {
        outV = cnf->getCachedEncoding(6, inpV);
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
      cnf->cacheEncoding(6, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_1, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_1, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_1, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());

      }
    return out; 

  }
  else if (enc_id == 9) {
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
      if (cnf->hasEncoding(9, inpV)) {
        outV = cnf->getCachedEncoding(9, inpV);
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
      cnf->cacheEncoding(9, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_1, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_1, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_1, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());

      }
    return out; 

  }
  else {
    Assert(false);
    return mkTrue<Node>();
  }
}/* optimalEncodingPredicate */

