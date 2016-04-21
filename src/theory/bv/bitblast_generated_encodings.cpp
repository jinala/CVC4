#include "theory/bv/bitblast_generated_encodings.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;
void encoding_336(const std::vector<std::vector<Node> >& inputs, std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
    if (cnf->hasEncoding(336, inpV)) {
      outV = cnf->getCachedEncoding(336, inpV);
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
    cnf->cacheEncoding(336, inpV, outV);

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
void encoding_337(const std::vector<std::vector<Node> >& inputs, std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
    if (cnf->hasEncoding(337, inpV)) {
      outV = cnf->getCachedEncoding(337, inpV);
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
    cnf->cacheEncoding(337, inpV, outV);

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
void encoding_338(const std::vector<std::vector<Node> >& inputs, std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
    if (cnf->hasEncoding(338, inpV)) {
      outV = cnf->getCachedEncoding(338, inpV);
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
    cnf->cacheEncoding(338, inpV, outV);

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
void encoding_339(const std::vector<std::vector<Node> >& inputs, std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
    if (cnf->hasEncoding(339, inpV)) {
      outV = cnf->getCachedEncoding(339, inpV);
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
    cnf->cacheEncoding(339, inpV, outV);

      cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, tt_1, tt_2, tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, tt_1, neg_tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_1, neg_tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_1, neg_tt_1), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_1, neg_tt_1), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_1, neg_tt_1), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_1, neg_tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_1, neg_tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, neg_tt_1, tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, neg_tt_1, neg_tt_3, tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, tt_2, neg_tt_3, tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_2, neg_tt_4), false, false, RULE_INVALID, TNode::null());
      cnf->convertAndAssert(nm->mkNode(kind::OR, tt_3, neg_tt_4), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_340(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_341(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_342(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_343(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_344(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_345(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_346(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_347(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_348(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_349(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_350(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_351(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_352(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_353(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_354(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_355(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_356(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_357(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_358(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_359(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_360(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_361(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_362(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_363(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_364(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_365(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_366(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_367(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_368(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_369(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_370(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_371(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_372(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_373(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_374(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_375(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_376(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_377(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_378(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_379(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_380(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_381(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_382(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_383(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_384(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_385(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_386(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(386, inpV)) {
        outV = cnf->getCachedEncoding(386, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(386, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_387(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_388(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_389(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_390(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_391(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_392(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_393(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_394(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_395(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_396(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_397(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(397, inpV)) {
        outV = cnf->getCachedEncoding(397, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(397, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_398(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_399(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_400(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_401(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_402(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_403(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_404(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_405(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_406(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_407(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_408(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_409(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_410(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_411(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_412(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_413(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_414(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_415(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_416(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_417(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_418(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_419(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_420(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_421(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_422(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_423(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_424(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_3, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k, neg_temp_0), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_425(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_426(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_427(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_428(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_429(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_430(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_431(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_432(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_433(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_434(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(434, inpV)) {
        outV = cnf->getCachedEncoding(434, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(434, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_435(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_436(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_437(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_438(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(438, inpV)) {
        outV = cnf->getCachedEncoding(438, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(438, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_439(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_440(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_441(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_442(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_443(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_444(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_445(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_446(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_447(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_448(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_449(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, out_k, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_out_k, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, temp_0), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_450(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_451(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_452(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k, temp_0), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_453(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_454(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_455(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_456(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_457(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k, temp_0), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_458(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_459(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_460(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(460, inpV)) {
        outV = cnf->getCachedEncoding(460, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(460, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_461(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_462(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k, temp_0), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_463(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_464(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_465(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_466(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_467(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_468(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_469(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_470(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_471(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_472(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_473(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_474(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_out_k, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_out_k, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_temp_0), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_475(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_476(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_477(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_478(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_in_k_4, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_479(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_480(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_481(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_482(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_483(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_484(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_485(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_486(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_487(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_488(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_489(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_490(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_491(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_492(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_493(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_494(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_495(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_496(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_497(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_498(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_499(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_500(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_501(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(501, inpV)) {
        outV = cnf->getCachedEncoding(501, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(501, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_in_k_2, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k, neg_temp_0), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_502(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_503(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_504(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_505(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_506(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_507(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_508(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_509(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_510(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_511(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_4, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_512(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_513(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_514(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_515(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_516(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_517(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_518(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_519(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_520(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_521(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_522(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_523(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_524(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_525(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_526(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_527(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_528(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_529(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_530(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(530, inpV)) {
        outV = cnf->getCachedEncoding(530, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(530, inpV, outV);

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
void encoding_531(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_532(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_533(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_534(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_535(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_536(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(536, inpV)) {
        outV = cnf->getCachedEncoding(536, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(536, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_537(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_538(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(538, inpV)) {
        outV = cnf->getCachedEncoding(538, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(538, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_539(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(539, inpV)) {
        outV = cnf->getCachedEncoding(539, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(539, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_540(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(540, inpV)) {
        outV = cnf->getCachedEncoding(540, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(540, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_541(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(541, inpV)) {
        outV = cnf->getCachedEncoding(541, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(541, inpV, outV);

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
void encoding_542(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(542, inpV)) {
        outV = cnf->getCachedEncoding(542, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(542, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_543(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(543, inpV)) {
        outV = cnf->getCachedEncoding(543, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(543, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_544(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(544, inpV)) {
        outV = cnf->getCachedEncoding(544, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(544, inpV, outV);

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
void encoding_545(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(545, inpV)) {
        outV = cnf->getCachedEncoding(545, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(545, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_546(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(546, inpV)) {
        outV = cnf->getCachedEncoding(546, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(546, inpV, outV);

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
void encoding_547(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(547, inpV)) {
        outV = cnf->getCachedEncoding(547, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(547, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_548(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(548, inpV)) {
        outV = cnf->getCachedEncoding(548, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(548, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_549(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(549, inpV)) {
        outV = cnf->getCachedEncoding(549, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(549, inpV, outV);

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
void encoding_550(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(550, inpV)) {
        outV = cnf->getCachedEncoding(550, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(550, inpV, outV);

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
void encoding_551(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(551, inpV)) {
        outV = cnf->getCachedEncoding(551, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(551, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_552(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(552, inpV)) {
        outV = cnf->getCachedEncoding(552, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(552, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_553(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(553, inpV)) {
        outV = cnf->getCachedEncoding(553, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(553, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_554(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(554, inpV)) {
        outV = cnf->getCachedEncoding(554, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(554, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_555(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(555, inpV)) {
        outV = cnf->getCachedEncoding(555, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(555, inpV, outV);

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
void encoding_556(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(556, inpV)) {
        outV = cnf->getCachedEncoding(556, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(556, inpV, outV);

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
void encoding_557(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(557, inpV)) {
        outV = cnf->getCachedEncoding(557, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(557, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_558(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(558, inpV)) {
        outV = cnf->getCachedEncoding(558, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(558, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_559(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(559, inpV)) {
        outV = cnf->getCachedEncoding(559, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(559, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_560(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(560, inpV)) {
        outV = cnf->getCachedEncoding(560, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(560, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_561(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(561, inpV)) {
        outV = cnf->getCachedEncoding(561, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(561, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_562(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(562, inpV)) {
        outV = cnf->getCachedEncoding(562, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(562, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_563(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(563, inpV)) {
        outV = cnf->getCachedEncoding(563, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(563, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_564(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(564, inpV)) {
        outV = cnf->getCachedEncoding(564, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(564, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_565(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(565, inpV)) {
        outV = cnf->getCachedEncoding(565, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(565, inpV, outV);

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
void encoding_566(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(566, inpV)) {
        outV = cnf->getCachedEncoding(566, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(566, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_567(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(567, inpV)) {
        outV = cnf->getCachedEncoding(567, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(567, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_568(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(568, inpV)) {
        outV = cnf->getCachedEncoding(568, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(568, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_569(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(569, inpV)) {
        outV = cnf->getCachedEncoding(569, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(569, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_570(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(570, inpV)) {
        outV = cnf->getCachedEncoding(570, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(570, inpV, outV);

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
void encoding_571(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(571, inpV)) {
        outV = cnf->getCachedEncoding(571, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(571, inpV, outV);

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
void encoding_572(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(572, inpV)) {
        outV = cnf->getCachedEncoding(572, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(572, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_573(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(573, inpV)) {
        outV = cnf->getCachedEncoding(573, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(573, inpV, outV);

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
void encoding_574(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(574, inpV)) {
        outV = cnf->getCachedEncoding(574, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(574, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_575(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(575, inpV)) {
        outV = cnf->getCachedEncoding(575, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(575, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_576(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(576, inpV)) {
        outV = cnf->getCachedEncoding(576, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(576, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_577(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(577, inpV)) {
        outV = cnf->getCachedEncoding(577, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(577, inpV, outV);

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
void encoding_578(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(578, inpV)) {
        outV = cnf->getCachedEncoding(578, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(578, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_579(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(579, inpV)) {
        outV = cnf->getCachedEncoding(579, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(579, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_580(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(580, inpV)) {
        outV = cnf->getCachedEncoding(580, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(580, inpV, outV);

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
void encoding_581(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(581, inpV)) {
        outV = cnf->getCachedEncoding(581, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(581, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_582(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(582, inpV)) {
        outV = cnf->getCachedEncoding(582, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(582, inpV, outV);

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
void encoding_583(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(583, inpV)) {
        outV = cnf->getCachedEncoding(583, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(583, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_584(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(584, inpV)) {
        outV = cnf->getCachedEncoding(584, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(584, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_585(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(585, inpV)) {
        outV = cnf->getCachedEncoding(585, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(585, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_586(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(586, inpV)) {
        outV = cnf->getCachedEncoding(586, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(586, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_587(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(587, inpV)) {
        outV = cnf->getCachedEncoding(587, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(587, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_588(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(588, inpV)) {
        outV = cnf->getCachedEncoding(588, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(588, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_589(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(589, inpV)) {
        outV = cnf->getCachedEncoding(589, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(589, inpV, outV);

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
void encoding_590(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(590, inpV)) {
        outV = cnf->getCachedEncoding(590, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(590, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_591(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(591, inpV)) {
        outV = cnf->getCachedEncoding(591, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(591, inpV, outV);

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
void encoding_592(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(592, inpV)) {
        outV = cnf->getCachedEncoding(592, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(592, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_593(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(593, inpV)) {
        outV = cnf->getCachedEncoding(593, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(593, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_594(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(594, inpV)) {
        outV = cnf->getCachedEncoding(594, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(594, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k, neg_temp_0), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_595(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(595, inpV)) {
        outV = cnf->getCachedEncoding(595, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(595, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_596(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(596, inpV)) {
        outV = cnf->getCachedEncoding(596, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(596, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k, temp_0), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_597(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(597, inpV)) {
        outV = cnf->getCachedEncoding(597, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(597, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_598(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(598, inpV)) {
        outV = cnf->getCachedEncoding(598, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(598, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_599(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(599, inpV)) {
        outV = cnf->getCachedEncoding(599, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(599, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k, neg_temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, in_k_4, temp_0), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_600(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(600, inpV)) {
        outV = cnf->getCachedEncoding(600, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(600, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_601(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(601, inpV)) {
        outV = cnf->getCachedEncoding(601, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(601, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_602(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(602, inpV)) {
        outV = cnf->getCachedEncoding(602, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(602, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_603(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(603, inpV)) {
        outV = cnf->getCachedEncoding(603, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(603, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_604(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(604, inpV)) {
        outV = cnf->getCachedEncoding(604, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(604, inpV, outV);

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
void encoding_605(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(605, inpV)) {
        outV = cnf->getCachedEncoding(605, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(605, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_606(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(606, inpV)) {
        outV = cnf->getCachedEncoding(606, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(606, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_607(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(607, inpV)) {
        outV = cnf->getCachedEncoding(607, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(607, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_608(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(608, inpV)) {
        outV = cnf->getCachedEncoding(608, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(608, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_609(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(609, inpV)) {
        outV = cnf->getCachedEncoding(609, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(609, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_610(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(610, inpV)) {
        outV = cnf->getCachedEncoding(610, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(610, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_611(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(611, inpV)) {
        outV = cnf->getCachedEncoding(611, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(611, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_612(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(612, inpV)) {
        outV = cnf->getCachedEncoding(612, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(612, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_613(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(613, inpV)) {
        outV = cnf->getCachedEncoding(613, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(613, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_614(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(614, inpV)) {
        outV = cnf->getCachedEncoding(614, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(614, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_615(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(615, inpV)) {
        outV = cnf->getCachedEncoding(615, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(615, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_616(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(616, inpV)) {
        outV = cnf->getCachedEncoding(616, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(616, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_617(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(617, inpV)) {
        outV = cnf->getCachedEncoding(617, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(617, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_618(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(618, inpV)) {
        outV = cnf->getCachedEncoding(618, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(618, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_619(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(619, inpV)) {
        outV = cnf->getCachedEncoding(619, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(619, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_620(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(620, inpV)) {
        outV = cnf->getCachedEncoding(620, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(620, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_621(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(621, inpV)) {
        outV = cnf->getCachedEncoding(621, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(621, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_622(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(622, inpV)) {
        outV = cnf->getCachedEncoding(622, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(622, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_623(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(623, inpV)) {
        outV = cnf->getCachedEncoding(623, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(623, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_624(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(624, inpV)) {
        outV = cnf->getCachedEncoding(624, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(624, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_625(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(625, inpV)) {
        outV = cnf->getCachedEncoding(625, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(625, inpV, outV);

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
void encoding_626(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(626, inpV)) {
        outV = cnf->getCachedEncoding(626, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(626, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_627(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(627, inpV)) {
        outV = cnf->getCachedEncoding(627, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(627, inpV, outV);

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
void encoding_628(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(628, inpV)) {
        outV = cnf->getCachedEncoding(628, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(628, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_629(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(629, inpV)) {
        outV = cnf->getCachedEncoding(629, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(629, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_630(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(630, inpV)) {
        outV = cnf->getCachedEncoding(630, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(630, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_631(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(631, inpV)) {
        outV = cnf->getCachedEncoding(631, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(631, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_632(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(632, inpV)) {
        outV = cnf->getCachedEncoding(632, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(632, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_633(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(633, inpV)) {
        outV = cnf->getCachedEncoding(633, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(633, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_634(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(634, inpV)) {
        outV = cnf->getCachedEncoding(634, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(634, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_635(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(635, inpV)) {
        outV = cnf->getCachedEncoding(635, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(635, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_636(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(636, inpV)) {
        outV = cnf->getCachedEncoding(636, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(636, inpV, outV);

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
void encoding_637(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(637, inpV)) {
        outV = cnf->getCachedEncoding(637, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(637, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_638(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(638, inpV)) {
        outV = cnf->getCachedEncoding(638, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(638, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_639(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(639, inpV)) {
        outV = cnf->getCachedEncoding(639, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(639, inpV, outV);

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
void encoding_640(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(640, inpV)) {
        outV = cnf->getCachedEncoding(640, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(640, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_641(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(641, inpV)) {
        outV = cnf->getCachedEncoding(641, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(641, inpV, outV);

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
void encoding_642(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(642, inpV)) {
        outV = cnf->getCachedEncoding(642, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(642, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_643(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(643, inpV)) {
        outV = cnf->getCachedEncoding(643, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(643, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_644(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(644, inpV)) {
        outV = cnf->getCachedEncoding(644, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(644, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_645(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(645, inpV)) {
        outV = cnf->getCachedEncoding(645, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(645, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_646(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(646, inpV)) {
        outV = cnf->getCachedEncoding(646, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(646, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_647(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(647, inpV)) {
        outV = cnf->getCachedEncoding(647, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(647, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_648(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(648, inpV)) {
        outV = cnf->getCachedEncoding(648, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(648, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_649(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(649, inpV)) {
        outV = cnf->getCachedEncoding(649, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(649, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_650(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(650, inpV)) {
        outV = cnf->getCachedEncoding(650, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(650, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_651(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(651, inpV)) {
        outV = cnf->getCachedEncoding(651, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(651, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_4, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_652(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(652, inpV)) {
        outV = cnf->getCachedEncoding(652, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(652, inpV, outV);

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
void encoding_653(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(653, inpV)) {
        outV = cnf->getCachedEncoding(653, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(653, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_654(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(654, inpV)) {
        outV = cnf->getCachedEncoding(654, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(654, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_655(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(655, inpV)) {
        outV = cnf->getCachedEncoding(655, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(655, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_656(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(656, inpV)) {
        outV = cnf->getCachedEncoding(656, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(656, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_657(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(657, inpV)) {
        outV = cnf->getCachedEncoding(657, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(657, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_658(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(658, inpV)) {
        outV = cnf->getCachedEncoding(658, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(658, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_659(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(659, inpV)) {
        outV = cnf->getCachedEncoding(659, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(659, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_660(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(660, inpV)) {
        outV = cnf->getCachedEncoding(660, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(660, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_661(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(661, inpV)) {
        outV = cnf->getCachedEncoding(661, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(661, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_662(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(662, inpV)) {
        outV = cnf->getCachedEncoding(662, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(662, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_663(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(663, inpV)) {
        outV = cnf->getCachedEncoding(663, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(663, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_664(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(664, inpV)) {
        outV = cnf->getCachedEncoding(664, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(664, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_665(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(665, inpV)) {
        outV = cnf->getCachedEncoding(665, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(665, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_666(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(666, inpV)) {
        outV = cnf->getCachedEncoding(666, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(666, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_667(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(667, inpV)) {
        outV = cnf->getCachedEncoding(667, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(667, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_668(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(668, inpV)) {
        outV = cnf->getCachedEncoding(668, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(668, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_669(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(669, inpV)) {
        outV = cnf->getCachedEncoding(669, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(669, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_670(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(670, inpV)) {
        outV = cnf->getCachedEncoding(670, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(670, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_671(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(671, inpV)) {
        outV = cnf->getCachedEncoding(671, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(671, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_672(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(672, inpV)) {
        outV = cnf->getCachedEncoding(672, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(672, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_673(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(673, inpV)) {
        outV = cnf->getCachedEncoding(673, inpV);
        out[k] = outV[0];
        continue;
      }
      Node out_k = out[k];
      Node neg_out_k = nm->mkNode(kind::NOT, out_k);

      outV.clear();
      outV.push_back(out_k);
      cnf->cacheEncoding(673, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void CVC4::theory::bv::optimalEncodingFixedWidth(int enc_id, const std::vector<std::vector<Node> > & inputs,  std::vector<Node>& out, prop::CnfStream* cnf) {
  NodeManager* nm = NodeManager::currentNM();
  if (enc_id == 336) { 
    encoding_336(inputs, out, cnf, nm);
  }
  else if (enc_id == 337) {
    encoding_337(inputs, out, cnf, nm);
  }
  else if (enc_id == 338) {
    encoding_338(inputs, out, cnf, nm);
  }
  else if (enc_id == 339) {
    encoding_339(inputs, out, cnf, nm);
  }
  else if (enc_id == 340) {
    encoding_340(inputs, out, cnf, nm);
  }
  else if (enc_id == 341) {
    encoding_341(inputs, out, cnf, nm);
  }
  else if (enc_id == 342) {
    encoding_342(inputs, out, cnf, nm);
  }
  else if (enc_id == 343) {
    encoding_343(inputs, out, cnf, nm);
  }
  else if (enc_id == 344) {
    encoding_344(inputs, out, cnf, nm);
  }
  else if (enc_id == 345) {
    encoding_345(inputs, out, cnf, nm);
  }
  else if (enc_id == 346) {
    encoding_346(inputs, out, cnf, nm);
  }
  else if (enc_id == 347) {
    encoding_347(inputs, out, cnf, nm);
  }
  else if (enc_id == 348) {
    encoding_348(inputs, out, cnf, nm);
  }
  else if (enc_id == 349) {
    encoding_349(inputs, out, cnf, nm);
  }
  else if (enc_id == 350) {
    encoding_350(inputs, out, cnf, nm);
  }
  else if (enc_id == 351) {
    encoding_351(inputs, out, cnf, nm);
  }
  else if (enc_id == 352) {
    encoding_352(inputs, out, cnf, nm);
  }
  else if (enc_id == 353) {
    encoding_353(inputs, out, cnf, nm);
  }
  else if (enc_id == 354) {
    encoding_354(inputs, out, cnf, nm);
  }
  else if (enc_id == 355) {
    encoding_355(inputs, out, cnf, nm);
  }
  else if (enc_id == 356) {
    encoding_356(inputs, out, cnf, nm);
  }
  else if (enc_id == 357) {
    encoding_357(inputs, out, cnf, nm);
  }
  else if (enc_id == 358) {
    encoding_358(inputs, out, cnf, nm);
  }
  else if (enc_id == 359) {
    encoding_359(inputs, out, cnf, nm);
  }
  else if (enc_id == 360) {
    encoding_360(inputs, out, cnf, nm);
  }
  else if (enc_id == 361) {
    encoding_361(inputs, out, cnf, nm);
  }
  else if (enc_id == 362) {
    encoding_362(inputs, out, cnf, nm);
  }
  else if (enc_id == 363) {
    encoding_363(inputs, out, cnf, nm);
  }
  else if (enc_id == 364) {
    encoding_364(inputs, out, cnf, nm);
  }
  else if (enc_id == 365) {
    encoding_365(inputs, out, cnf, nm);
  }
  else if (enc_id == 366) {
    encoding_366(inputs, out, cnf, nm);
  }
  else if (enc_id == 367) {
    encoding_367(inputs, out, cnf, nm);
  }
  else if (enc_id == 368) {
    encoding_368(inputs, out, cnf, nm);
  }
  else if (enc_id == 369) {
    encoding_369(inputs, out, cnf, nm);
  }
  else if (enc_id == 370) {
    encoding_370(inputs, out, cnf, nm);
  }
  else if (enc_id == 371) {
    encoding_371(inputs, out, cnf, nm);
  }
  else if (enc_id == 372) {
    encoding_372(inputs, out, cnf, nm);
  }
  else if (enc_id == 373) {
    encoding_373(inputs, out, cnf, nm);
  }
  else if (enc_id == 374) {
    encoding_374(inputs, out, cnf, nm);
  }
  else if (enc_id == 375) {
    encoding_375(inputs, out, cnf, nm);
  }
  else if (enc_id == 376) {
    encoding_376(inputs, out, cnf, nm);
  }
  else if (enc_id == 377) {
    encoding_377(inputs, out, cnf, nm);
  }
  else if (enc_id == 378) {
    encoding_378(inputs, out, cnf, nm);
  }
  else if (enc_id == 379) {
    encoding_379(inputs, out, cnf, nm);
  }
  else if (enc_id == 380) {
    encoding_380(inputs, out, cnf, nm);
  }
  else if (enc_id == 381) {
    encoding_381(inputs, out, cnf, nm);
  }
  else if (enc_id == 382) {
    encoding_382(inputs, out, cnf, nm);
  }
  else if (enc_id == 383) {
    encoding_383(inputs, out, cnf, nm);
  }
  else if (enc_id == 384) {
    encoding_384(inputs, out, cnf, nm);
  }
  else if (enc_id == 385) {
    encoding_385(inputs, out, cnf, nm);
  }
  else if (enc_id == 386) {
    encoding_386(inputs, out, cnf, nm);
  }
  else if (enc_id == 387) {
    encoding_387(inputs, out, cnf, nm);
  }
  else if (enc_id == 388) {
    encoding_388(inputs, out, cnf, nm);
  }
  else if (enc_id == 389) {
    encoding_389(inputs, out, cnf, nm);
  }
  else if (enc_id == 390) {
    encoding_390(inputs, out, cnf, nm);
  }
  else if (enc_id == 391) {
    encoding_391(inputs, out, cnf, nm);
  }
  else if (enc_id == 392) {
    encoding_392(inputs, out, cnf, nm);
  }
  else if (enc_id == 393) {
    encoding_393(inputs, out, cnf, nm);
  }
  else if (enc_id == 394) {
    encoding_394(inputs, out, cnf, nm);
  }
  else if (enc_id == 395) {
    encoding_395(inputs, out, cnf, nm);
  }
  else if (enc_id == 396) {
    encoding_396(inputs, out, cnf, nm);
  }
  else if (enc_id == 397) {
    encoding_397(inputs, out, cnf, nm);
  }
  else if (enc_id == 398) {
    encoding_398(inputs, out, cnf, nm);
  }
  else if (enc_id == 399) {
    encoding_399(inputs, out, cnf, nm);
  }
  else if (enc_id == 400) {
    encoding_400(inputs, out, cnf, nm);
  }
  else if (enc_id == 401) {
    encoding_401(inputs, out, cnf, nm);
  }
  else if (enc_id == 402) {
    encoding_402(inputs, out, cnf, nm);
  }
  else if (enc_id == 403) {
    encoding_403(inputs, out, cnf, nm);
  }
  else if (enc_id == 404) {
    encoding_404(inputs, out, cnf, nm);
  }
  else if (enc_id == 405) {
    encoding_405(inputs, out, cnf, nm);
  }
  else if (enc_id == 406) {
    encoding_406(inputs, out, cnf, nm);
  }
  else if (enc_id == 407) {
    encoding_407(inputs, out, cnf, nm);
  }
  else if (enc_id == 408) {
    encoding_408(inputs, out, cnf, nm);
  }
  else if (enc_id == 409) {
    encoding_409(inputs, out, cnf, nm);
  }
  else if (enc_id == 410) {
    encoding_410(inputs, out, cnf, nm);
  }
  else if (enc_id == 411) {
    encoding_411(inputs, out, cnf, nm);
  }
  else if (enc_id == 412) {
    encoding_412(inputs, out, cnf, nm);
  }
  else if (enc_id == 413) {
    encoding_413(inputs, out, cnf, nm);
  }
  else if (enc_id == 414) {
    encoding_414(inputs, out, cnf, nm);
  }
  else if (enc_id == 415) {
    encoding_415(inputs, out, cnf, nm);
  }
  else if (enc_id == 416) {
    encoding_416(inputs, out, cnf, nm);
  }
  else if (enc_id == 417) {
    encoding_417(inputs, out, cnf, nm);
  }
  else if (enc_id == 418) {
    encoding_418(inputs, out, cnf, nm);
  }
  else if (enc_id == 419) {
    encoding_419(inputs, out, cnf, nm);
  }
  else if (enc_id == 420) {
    encoding_420(inputs, out, cnf, nm);
  }
  else if (enc_id == 421) {
    encoding_421(inputs, out, cnf, nm);
  }
  else if (enc_id == 422) {
    encoding_422(inputs, out, cnf, nm);
  }
  else if (enc_id == 423) {
    encoding_423(inputs, out, cnf, nm);
  }
  else if (enc_id == 424) {
    encoding_424(inputs, out, cnf, nm);
  }
  else if (enc_id == 425) {
    encoding_425(inputs, out, cnf, nm);
  }
  else if (enc_id == 426) {
    encoding_426(inputs, out, cnf, nm);
  }
  else if (enc_id == 427) {
    encoding_427(inputs, out, cnf, nm);
  }
  else if (enc_id == 428) {
    encoding_428(inputs, out, cnf, nm);
  }
  else if (enc_id == 429) {
    encoding_429(inputs, out, cnf, nm);
  }
  else if (enc_id == 430) {
    encoding_430(inputs, out, cnf, nm);
  }
  else if (enc_id == 431) {
    encoding_431(inputs, out, cnf, nm);
  }
  else if (enc_id == 432) {
    encoding_432(inputs, out, cnf, nm);
  }
  else if (enc_id == 433) {
    encoding_433(inputs, out, cnf, nm);
  }
  else if (enc_id == 434) {
    encoding_434(inputs, out, cnf, nm);
  }
  else if (enc_id == 435) {
    encoding_435(inputs, out, cnf, nm);
  }
  else if (enc_id == 436) {
    encoding_436(inputs, out, cnf, nm);
  }
  else if (enc_id == 437) {
    encoding_437(inputs, out, cnf, nm);
  }
  else if (enc_id == 438) {
    encoding_438(inputs, out, cnf, nm);
  }
  else if (enc_id == 439) {
    encoding_439(inputs, out, cnf, nm);
  }
  else if (enc_id == 440) {
    encoding_440(inputs, out, cnf, nm);
  }
  else if (enc_id == 441) {
    encoding_441(inputs, out, cnf, nm);
  }
  else if (enc_id == 442) {
    encoding_442(inputs, out, cnf, nm);
  }
  else if (enc_id == 443) {
    encoding_443(inputs, out, cnf, nm);
  }
  else if (enc_id == 444) {
    encoding_444(inputs, out, cnf, nm);
  }
  else if (enc_id == 445) {
    encoding_445(inputs, out, cnf, nm);
  }
  else if (enc_id == 446) {
    encoding_446(inputs, out, cnf, nm);
  }
  else if (enc_id == 447) {
    encoding_447(inputs, out, cnf, nm);
  }
  else if (enc_id == 448) {
    encoding_448(inputs, out, cnf, nm);
  }
  else if (enc_id == 449) {
    encoding_449(inputs, out, cnf, nm);
  }
  else if (enc_id == 450) {
    encoding_450(inputs, out, cnf, nm);
  }
  else if (enc_id == 451) {
    encoding_451(inputs, out, cnf, nm);
  }
  else if (enc_id == 452) {
    encoding_452(inputs, out, cnf, nm);
  }
  else if (enc_id == 453) {
    encoding_453(inputs, out, cnf, nm);
  }
  else if (enc_id == 454) {
    encoding_454(inputs, out, cnf, nm);
  }
  else if (enc_id == 455) {
    encoding_455(inputs, out, cnf, nm);
  }
  else if (enc_id == 456) {
    encoding_456(inputs, out, cnf, nm);
  }
  else if (enc_id == 457) {
    encoding_457(inputs, out, cnf, nm);
  }
  else if (enc_id == 458) {
    encoding_458(inputs, out, cnf, nm);
  }
  else if (enc_id == 459) {
    encoding_459(inputs, out, cnf, nm);
  }
  else if (enc_id == 460) {
    encoding_460(inputs, out, cnf, nm);
  }
  else if (enc_id == 461) {
    encoding_461(inputs, out, cnf, nm);
  }
  else if (enc_id == 462) {
    encoding_462(inputs, out, cnf, nm);
  }
  else if (enc_id == 463) {
    encoding_463(inputs, out, cnf, nm);
  }
  else if (enc_id == 464) {
    encoding_464(inputs, out, cnf, nm);
  }
  else if (enc_id == 465) {
    encoding_465(inputs, out, cnf, nm);
  }
  else if (enc_id == 466) {
    encoding_466(inputs, out, cnf, nm);
  }
  else if (enc_id == 467) {
    encoding_467(inputs, out, cnf, nm);
  }
  else if (enc_id == 468) {
    encoding_468(inputs, out, cnf, nm);
  }
  else if (enc_id == 469) {
    encoding_469(inputs, out, cnf, nm);
  }
  else if (enc_id == 470) {
    encoding_470(inputs, out, cnf, nm);
  }
  else if (enc_id == 471) {
    encoding_471(inputs, out, cnf, nm);
  }
  else if (enc_id == 472) {
    encoding_472(inputs, out, cnf, nm);
  }
  else if (enc_id == 473) {
    encoding_473(inputs, out, cnf, nm);
  }
  else if (enc_id == 474) {
    encoding_474(inputs, out, cnf, nm);
  }
  else if (enc_id == 475) {
    encoding_475(inputs, out, cnf, nm);
  }
  else if (enc_id == 476) {
    encoding_476(inputs, out, cnf, nm);
  }
  else if (enc_id == 477) {
    encoding_477(inputs, out, cnf, nm);
  }
  else if (enc_id == 478) {
    encoding_478(inputs, out, cnf, nm);
  }
  else if (enc_id == 479) {
    encoding_479(inputs, out, cnf, nm);
  }
  else if (enc_id == 480) {
    encoding_480(inputs, out, cnf, nm);
  }
  else if (enc_id == 481) {
    encoding_481(inputs, out, cnf, nm);
  }
  else if (enc_id == 482) {
    encoding_482(inputs, out, cnf, nm);
  }
  else if (enc_id == 483) {
    encoding_483(inputs, out, cnf, nm);
  }
  else if (enc_id == 484) {
    encoding_484(inputs, out, cnf, nm);
  }
  else if (enc_id == 485) {
    encoding_485(inputs, out, cnf, nm);
  }
  else if (enc_id == 486) {
    encoding_486(inputs, out, cnf, nm);
  }
  else if (enc_id == 487) {
    encoding_487(inputs, out, cnf, nm);
  }
  else if (enc_id == 488) {
    encoding_488(inputs, out, cnf, nm);
  }
  else if (enc_id == 489) {
    encoding_489(inputs, out, cnf, nm);
  }
  else if (enc_id == 490) {
    encoding_490(inputs, out, cnf, nm);
  }
  else if (enc_id == 491) {
    encoding_491(inputs, out, cnf, nm);
  }
  else if (enc_id == 492) {
    encoding_492(inputs, out, cnf, nm);
  }
  else if (enc_id == 493) {
    encoding_493(inputs, out, cnf, nm);
  }
  else if (enc_id == 494) {
    encoding_494(inputs, out, cnf, nm);
  }
  else if (enc_id == 495) {
    encoding_495(inputs, out, cnf, nm);
  }
  else if (enc_id == 496) {
    encoding_496(inputs, out, cnf, nm);
  }
  else if (enc_id == 497) {
    encoding_497(inputs, out, cnf, nm);
  }
  else if (enc_id == 498) {
    encoding_498(inputs, out, cnf, nm);
  }
  else if (enc_id == 499) {
    encoding_499(inputs, out, cnf, nm);
  }
  else if (enc_id == 500) {
    encoding_500(inputs, out, cnf, nm);
  }
  else if (enc_id == 501) {
    encoding_501(inputs, out, cnf, nm);
  }
  else if (enc_id == 502) {
    encoding_502(inputs, out, cnf, nm);
  }
  else if (enc_id == 503) {
    encoding_503(inputs, out, cnf, nm);
  }
  else if (enc_id == 504) {
    encoding_504(inputs, out, cnf, nm);
  }
  else if (enc_id == 505) {
    encoding_505(inputs, out, cnf, nm);
  }
  else if (enc_id == 506) {
    encoding_506(inputs, out, cnf, nm);
  }
  else if (enc_id == 507) {
    encoding_507(inputs, out, cnf, nm);
  }
  else if (enc_id == 508) {
    encoding_508(inputs, out, cnf, nm);
  }
  else if (enc_id == 509) {
    encoding_509(inputs, out, cnf, nm);
  }
  else if (enc_id == 510) {
    encoding_510(inputs, out, cnf, nm);
  }
  else if (enc_id == 511) {
    encoding_511(inputs, out, cnf, nm);
  }
  else if (enc_id == 512) {
    encoding_512(inputs, out, cnf, nm);
  }
  else if (enc_id == 513) {
    encoding_513(inputs, out, cnf, nm);
  }
  else if (enc_id == 514) {
    encoding_514(inputs, out, cnf, nm);
  }
  else if (enc_id == 515) {
    encoding_515(inputs, out, cnf, nm);
  }
  else if (enc_id == 516) {
    encoding_516(inputs, out, cnf, nm);
  }
  else if (enc_id == 517) {
    encoding_517(inputs, out, cnf, nm);
  }
  else if (enc_id == 518) {
    encoding_518(inputs, out, cnf, nm);
  }
  else if (enc_id == 519) {
    encoding_519(inputs, out, cnf, nm);
  }
  else if (enc_id == 520) {
    encoding_520(inputs, out, cnf, nm);
  }
  else if (enc_id == 521) {
    encoding_521(inputs, out, cnf, nm);
  }
  else if (enc_id == 522) {
    encoding_522(inputs, out, cnf, nm);
  }
  else if (enc_id == 523) {
    encoding_523(inputs, out, cnf, nm);
  }
  else if (enc_id == 524) {
    encoding_524(inputs, out, cnf, nm);
  }
  else if (enc_id == 525) {
    encoding_525(inputs, out, cnf, nm);
  }
  else if (enc_id == 526) {
    encoding_526(inputs, out, cnf, nm);
  }
  else if (enc_id == 527) {
    encoding_527(inputs, out, cnf, nm);
  }
  else if (enc_id == 528) {
    encoding_528(inputs, out, cnf, nm);
  }
  else if (enc_id == 529) {
    encoding_529(inputs, out, cnf, nm);
  }
  else if (enc_id == 530) {
    encoding_530(inputs, out, cnf, nm);
  }
  else if (enc_id == 531) {
    encoding_531(inputs, out, cnf, nm);
  }
  else if (enc_id == 532) {
    encoding_532(inputs, out, cnf, nm);
  }
  else if (enc_id == 533) {
    encoding_533(inputs, out, cnf, nm);
  }
  else if (enc_id == 534) {
    encoding_534(inputs, out, cnf, nm);
  }
  else if (enc_id == 535) {
    encoding_535(inputs, out, cnf, nm);
  }
  else if (enc_id == 536) {
    encoding_536(inputs, out, cnf, nm);
  }
  else if (enc_id == 537) {
    encoding_537(inputs, out, cnf, nm);
  }
  else if (enc_id == 538) {
    encoding_538(inputs, out, cnf, nm);
  }
  else if (enc_id == 539) {
    encoding_539(inputs, out, cnf, nm);
  }
  else if (enc_id == 540) {
    encoding_540(inputs, out, cnf, nm);
  }
  else if (enc_id == 541) {
    encoding_541(inputs, out, cnf, nm);
  }
  else if (enc_id == 542) {
    encoding_542(inputs, out, cnf, nm);
  }
  else if (enc_id == 543) {
    encoding_543(inputs, out, cnf, nm);
  }
  else if (enc_id == 544) {
    encoding_544(inputs, out, cnf, nm);
  }
  else if (enc_id == 545) {
    encoding_545(inputs, out, cnf, nm);
  }
  else if (enc_id == 546) {
    encoding_546(inputs, out, cnf, nm);
  }
  else if (enc_id == 547) {
    encoding_547(inputs, out, cnf, nm);
  }
  else if (enc_id == 548) {
    encoding_548(inputs, out, cnf, nm);
  }
  else if (enc_id == 549) {
    encoding_549(inputs, out, cnf, nm);
  }
  else if (enc_id == 550) {
    encoding_550(inputs, out, cnf, nm);
  }
  else if (enc_id == 551) {
    encoding_551(inputs, out, cnf, nm);
  }
  else if (enc_id == 552) {
    encoding_552(inputs, out, cnf, nm);
  }
  else if (enc_id == 553) {
    encoding_553(inputs, out, cnf, nm);
  }
  else if (enc_id == 554) {
    encoding_554(inputs, out, cnf, nm);
  }
  else if (enc_id == 555) {
    encoding_555(inputs, out, cnf, nm);
  }
  else if (enc_id == 556) {
    encoding_556(inputs, out, cnf, nm);
  }
  else if (enc_id == 557) {
    encoding_557(inputs, out, cnf, nm);
  }
  else if (enc_id == 558) {
    encoding_558(inputs, out, cnf, nm);
  }
  else if (enc_id == 559) {
    encoding_559(inputs, out, cnf, nm);
  }
  else if (enc_id == 560) {
    encoding_560(inputs, out, cnf, nm);
  }
  else if (enc_id == 561) {
    encoding_561(inputs, out, cnf, nm);
  }
  else if (enc_id == 562) {
    encoding_562(inputs, out, cnf, nm);
  }
  else if (enc_id == 563) {
    encoding_563(inputs, out, cnf, nm);
  }
  else if (enc_id == 564) {
    encoding_564(inputs, out, cnf, nm);
  }
  else if (enc_id == 565) {
    encoding_565(inputs, out, cnf, nm);
  }
  else if (enc_id == 566) {
    encoding_566(inputs, out, cnf, nm);
  }
  else if (enc_id == 567) {
    encoding_567(inputs, out, cnf, nm);
  }
  else if (enc_id == 568) {
    encoding_568(inputs, out, cnf, nm);
  }
  else if (enc_id == 569) {
    encoding_569(inputs, out, cnf, nm);
  }
  else if (enc_id == 570) {
    encoding_570(inputs, out, cnf, nm);
  }
  else if (enc_id == 571) {
    encoding_571(inputs, out, cnf, nm);
  }
  else if (enc_id == 572) {
    encoding_572(inputs, out, cnf, nm);
  }
  else if (enc_id == 573) {
    encoding_573(inputs, out, cnf, nm);
  }
  else if (enc_id == 574) {
    encoding_574(inputs, out, cnf, nm);
  }
  else if (enc_id == 575) {
    encoding_575(inputs, out, cnf, nm);
  }
  else if (enc_id == 576) {
    encoding_576(inputs, out, cnf, nm);
  }
  else if (enc_id == 577) {
    encoding_577(inputs, out, cnf, nm);
  }
  else if (enc_id == 578) {
    encoding_578(inputs, out, cnf, nm);
  }
  else if (enc_id == 579) {
    encoding_579(inputs, out, cnf, nm);
  }
  else if (enc_id == 580) {
    encoding_580(inputs, out, cnf, nm);
  }
  else if (enc_id == 581) {
    encoding_581(inputs, out, cnf, nm);
  }
  else if (enc_id == 582) {
    encoding_582(inputs, out, cnf, nm);
  }
  else if (enc_id == 583) {
    encoding_583(inputs, out, cnf, nm);
  }
  else if (enc_id == 584) {
    encoding_584(inputs, out, cnf, nm);
  }
  else if (enc_id == 585) {
    encoding_585(inputs, out, cnf, nm);
  }
  else if (enc_id == 586) {
    encoding_586(inputs, out, cnf, nm);
  }
  else if (enc_id == 587) {
    encoding_587(inputs, out, cnf, nm);
  }
  else if (enc_id == 588) {
    encoding_588(inputs, out, cnf, nm);
  }
  else if (enc_id == 589) {
    encoding_589(inputs, out, cnf, nm);
  }
  else if (enc_id == 590) {
    encoding_590(inputs, out, cnf, nm);
  }
  else if (enc_id == 591) {
    encoding_591(inputs, out, cnf, nm);
  }
  else if (enc_id == 592) {
    encoding_592(inputs, out, cnf, nm);
  }
  else if (enc_id == 593) {
    encoding_593(inputs, out, cnf, nm);
  }
  else if (enc_id == 594) {
    encoding_594(inputs, out, cnf, nm);
  }
  else if (enc_id == 595) {
    encoding_595(inputs, out, cnf, nm);
  }
  else if (enc_id == 596) {
    encoding_596(inputs, out, cnf, nm);
  }
  else if (enc_id == 597) {
    encoding_597(inputs, out, cnf, nm);
  }
  else if (enc_id == 598) {
    encoding_598(inputs, out, cnf, nm);
  }
  else if (enc_id == 599) {
    encoding_599(inputs, out, cnf, nm);
  }
  else if (enc_id == 600) {
    encoding_600(inputs, out, cnf, nm);
  }
  else if (enc_id == 601) {
    encoding_601(inputs, out, cnf, nm);
  }
  else if (enc_id == 602) {
    encoding_602(inputs, out, cnf, nm);
  }
  else if (enc_id == 603) {
    encoding_603(inputs, out, cnf, nm);
  }
  else if (enc_id == 604) {
    encoding_604(inputs, out, cnf, nm);
  }
  else if (enc_id == 605) {
    encoding_605(inputs, out, cnf, nm);
  }
  else if (enc_id == 606) {
    encoding_606(inputs, out, cnf, nm);
  }
  else if (enc_id == 607) {
    encoding_607(inputs, out, cnf, nm);
  }
  else if (enc_id == 608) {
    encoding_608(inputs, out, cnf, nm);
  }
  else if (enc_id == 609) {
    encoding_609(inputs, out, cnf, nm);
  }
  else if (enc_id == 610) {
    encoding_610(inputs, out, cnf, nm);
  }
  else if (enc_id == 611) {
    encoding_611(inputs, out, cnf, nm);
  }
  else if (enc_id == 612) {
    encoding_612(inputs, out, cnf, nm);
  }
  else if (enc_id == 613) {
    encoding_613(inputs, out, cnf, nm);
  }
  else if (enc_id == 614) {
    encoding_614(inputs, out, cnf, nm);
  }
  else if (enc_id == 615) {
    encoding_615(inputs, out, cnf, nm);
  }
  else if (enc_id == 616) {
    encoding_616(inputs, out, cnf, nm);
  }
  else if (enc_id == 617) {
    encoding_617(inputs, out, cnf, nm);
  }
  else if (enc_id == 618) {
    encoding_618(inputs, out, cnf, nm);
  }
  else if (enc_id == 619) {
    encoding_619(inputs, out, cnf, nm);
  }
  else if (enc_id == 620) {
    encoding_620(inputs, out, cnf, nm);
  }
  else if (enc_id == 621) {
    encoding_621(inputs, out, cnf, nm);
  }
  else if (enc_id == 622) {
    encoding_622(inputs, out, cnf, nm);
  }
  else if (enc_id == 623) {
    encoding_623(inputs, out, cnf, nm);
  }
  else if (enc_id == 624) {
    encoding_624(inputs, out, cnf, nm);
  }
  else if (enc_id == 625) {
    encoding_625(inputs, out, cnf, nm);
  }
  else if (enc_id == 626) {
    encoding_626(inputs, out, cnf, nm);
  }
  else if (enc_id == 627) {
    encoding_627(inputs, out, cnf, nm);
  }
  else if (enc_id == 628) {
    encoding_628(inputs, out, cnf, nm);
  }
  else if (enc_id == 629) {
    encoding_629(inputs, out, cnf, nm);
  }
  else if (enc_id == 630) {
    encoding_630(inputs, out, cnf, nm);
  }
  else if (enc_id == 631) {
    encoding_631(inputs, out, cnf, nm);
  }
  else if (enc_id == 632) {
    encoding_632(inputs, out, cnf, nm);
  }
  else if (enc_id == 633) {
    encoding_633(inputs, out, cnf, nm);
  }
  else if (enc_id == 634) {
    encoding_634(inputs, out, cnf, nm);
  }
  else if (enc_id == 635) {
    encoding_635(inputs, out, cnf, nm);
  }
  else if (enc_id == 636) {
    encoding_636(inputs, out, cnf, nm);
  }
  else if (enc_id == 637) {
    encoding_637(inputs, out, cnf, nm);
  }
  else if (enc_id == 638) {
    encoding_638(inputs, out, cnf, nm);
  }
  else if (enc_id == 639) {
    encoding_639(inputs, out, cnf, nm);
  }
  else if (enc_id == 640) {
    encoding_640(inputs, out, cnf, nm);
  }
  else if (enc_id == 641) {
    encoding_641(inputs, out, cnf, nm);
  }
  else if (enc_id == 642) {
    encoding_642(inputs, out, cnf, nm);
  }
  else if (enc_id == 643) {
    encoding_643(inputs, out, cnf, nm);
  }
  else if (enc_id == 644) {
    encoding_644(inputs, out, cnf, nm);
  }
  else if (enc_id == 645) {
    encoding_645(inputs, out, cnf, nm);
  }
  else if (enc_id == 646) {
    encoding_646(inputs, out, cnf, nm);
  }
  else if (enc_id == 647) {
    encoding_647(inputs, out, cnf, nm);
  }
  else if (enc_id == 648) {
    encoding_648(inputs, out, cnf, nm);
  }
  else if (enc_id == 649) {
    encoding_649(inputs, out, cnf, nm);
  }
  else if (enc_id == 650) {
    encoding_650(inputs, out, cnf, nm);
  }
  else if (enc_id == 651) {
    encoding_651(inputs, out, cnf, nm);
  }
  else if (enc_id == 652) {
    encoding_652(inputs, out, cnf, nm);
  }
  else if (enc_id == 653) {
    encoding_653(inputs, out, cnf, nm);
  }
  else if (enc_id == 654) {
    encoding_654(inputs, out, cnf, nm);
  }
  else if (enc_id == 655) {
    encoding_655(inputs, out, cnf, nm);
  }
  else if (enc_id == 656) {
    encoding_656(inputs, out, cnf, nm);
  }
  else if (enc_id == 657) {
    encoding_657(inputs, out, cnf, nm);
  }
  else if (enc_id == 658) {
    encoding_658(inputs, out, cnf, nm);
  }
  else if (enc_id == 659) {
    encoding_659(inputs, out, cnf, nm);
  }
  else if (enc_id == 660) {
    encoding_660(inputs, out, cnf, nm);
  }
  else if (enc_id == 661) {
    encoding_661(inputs, out, cnf, nm);
  }
  else if (enc_id == 662) {
    encoding_662(inputs, out, cnf, nm);
  }
  else if (enc_id == 663) {
    encoding_663(inputs, out, cnf, nm);
  }
  else if (enc_id == 664) {
    encoding_664(inputs, out, cnf, nm);
  }
  else if (enc_id == 665) {
    encoding_665(inputs, out, cnf, nm);
  }
  else if (enc_id == 666) {
    encoding_666(inputs, out, cnf, nm);
  }
  else if (enc_id == 667) {
    encoding_667(inputs, out, cnf, nm);
  }
  else if (enc_id == 668) {
    encoding_668(inputs, out, cnf, nm);
  }
  else if (enc_id == 669) {
    encoding_669(inputs, out, cnf, nm);
  }
  else if (enc_id == 670) {
    encoding_670(inputs, out, cnf, nm);
  }
  else if (enc_id == 671) {
    encoding_671(inputs, out, cnf, nm);
  }
  else if (enc_id == 672) {
    encoding_672(inputs, out, cnf, nm);
  }
  else if (enc_id == 673) {
    encoding_673(inputs, out, cnf, nm);
  }
  else {
    Assert(false);
  }
}/* optimalEncodingFixedWidth */
Node encoding_674(const std::vector<std::vector<Node> >& inputs,   prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(674, inpV)) {
        outV = cnf->getCachedEncoding(674, inpV);
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
      cnf->cacheEncoding(674, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_1, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_1, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, neg_tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());

      }
    return out; 

}
Node encoding_675(const std::vector<std::vector<Node> >& inputs,   prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(675, inpV)) {
        outV = cnf->getCachedEncoding(675, inpV);
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
      cnf->cacheEncoding(675, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_1, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_1, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_1, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());

      }
    return out; 

}
Node encoding_676(const std::vector<std::vector<Node> >& inputs,   prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(676, inpV)) {
        outV = cnf->getCachedEncoding(676, inpV);
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
      cnf->cacheEncoding(676, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_1, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_1, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_1, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());

      }
    return out; 

}
Node encoding_677(const std::vector<std::vector<Node> >& inputs,   prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(677, inpV)) {
        outV = cnf->getCachedEncoding(677, inpV);
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
      cnf->cacheEncoding(677, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, tt_1, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, neg_tt_1, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());

      }
    return out; 

}
Node encoding_678(const std::vector<std::vector<Node> >& inputs,   prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(678, inpV)) {
        outV = cnf->getCachedEncoding(678, inpV);
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
      cnf->cacheEncoding(678, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());

      }
    return out; 

}
Node encoding_679(const std::vector<std::vector<Node> >& inputs,   prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(679, inpV)) {
        outV = cnf->getCachedEncoding(679, inpV);
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
      cnf->cacheEncoding(679, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, tt_1, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, neg_tt_1, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_1, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());

      }
    return out; 

}
Node encoding_680(const std::vector<std::vector<Node> >& inputs,   prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(680, inpV)) {
        outV = cnf->getCachedEncoding(680, inpV);
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
      cnf->cacheEncoding(680, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_3), false, false, RULE_INVALID, TNode::null());

      }
    return out; 

}
Node encoding_681(const std::vector<std::vector<Node> >& inputs,   prop::CnfStream* cnf, NodeManager* nm) {
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
      if (cnf->hasEncoding(681, inpV)) {
        outV = cnf->getCachedEncoding(681, inpV);
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
      cnf->cacheEncoding(681, inpV, outV);

        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_2), false, false, RULE_INVALID, TNode::null());

      }
    return out; 

}
Node CVC4::theory::bv::optimalEncodingPredicate(int enc_id, const std::vector<std::vector<Node> >& inputs,  prop::CnfStream* cnf) {
  NodeManager* nm = NodeManager::currentNM();
  if (enc_id == 674) { 
    return encoding_674(inputs, cnf, nm);
  }
  else if (enc_id == 675) {
    return encoding_675(inputs, cnf, nm);
  }
  else if (enc_id == 676) {
    return encoding_676(inputs, cnf, nm);
  }
  else if (enc_id == 677) {
    return encoding_677(inputs, cnf, nm);
  }
  else if (enc_id == 678) {
    return encoding_678(inputs, cnf, nm);
  }
  else if (enc_id == 679) {
    return encoding_679(inputs, cnf, nm);
  }
  else if (enc_id == 680) {
    return encoding_680(inputs, cnf, nm);
  }
  else if (enc_id == 681) {
    return encoding_681(inputs, cnf, nm);
  }
  else {
    Assert(false);
    return mkTrue<Node>();
  }
}/* optimalEncodingPredicate */
