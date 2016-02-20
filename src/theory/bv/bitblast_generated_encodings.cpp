#include "theory/bv/bitblast_generated_encodings.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;
void encoding_0(const std::vector<std::vector<Node> >& inputs, std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_5(const std::vector<std::vector<Node> >& inputs, std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_8(const std::vector<std::vector<Node> >& inputs, std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_281(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_282(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_283(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_284(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_285(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_286(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_287(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_288(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_289(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_290(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_291(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_292(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_293(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_294(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_295(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_296(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_297(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_298(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_299(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_300(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_301(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_302(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_303(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_304(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_305(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_306(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_307(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_308(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_309(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_310(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_311(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_312(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_313(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_314(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_315(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_316(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_317(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_318(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_320(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_321(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_322(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_323(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_324(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_325(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_326(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_327(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_328(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_330(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_331(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_332(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_333(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_334(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_335(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_336(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_337(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_338(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_339(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_340(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_341(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_342(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_343(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_344(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_345(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_346(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_347(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_348(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_349(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_350(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_351(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_352(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_353(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_354(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_355(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_356(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
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
void encoding_359(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

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
void encoding_362(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_363(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_364(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_365(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_367(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_368(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
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
void encoding_373(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_374(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_375(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_376(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_378(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_379(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_380(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_381(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_382(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_384(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_385(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_387(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_388(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_389(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_390(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_391(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_392(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_393(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_394(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_395(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_396(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
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
void encoding_402(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
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
void encoding_405(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_406(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_407(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_408(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_409(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_411(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_412(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_413(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_414(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_415(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_417(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_418(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_419(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_420(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_421(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_423(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_424(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_425(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_427(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_428(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_431(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_433(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_436(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_440(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_441(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_442(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_443(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_444(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_445(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_446(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_449(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_450(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_452(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_453(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_455(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_456(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_458(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_459(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_462(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_463(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_464(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_465(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_466(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_467(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_468(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_471(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_472(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_3, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
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

    for (size_t i = 0; i < in0.size(); i++) {
      out.push_back(nm->mkSkolem("out", nm->booleanType())); 
    }
    // Begin iterator
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
void encoding_475(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_477(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_478(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_479(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_480(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_481(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_482(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_483(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_485(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_486(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_488(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_489(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_490(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_491(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_492(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_494(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_495(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_496(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_497(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_498(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_499(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_500(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_501(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_502(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_503(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
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

    for (size_t i = 0; i < in0.size(); i++) {
      out.push_back(nm->mkSkolem("out", nm->booleanType())); 
    }
    // Begin iterator
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
void encoding_506(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_507(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());

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
void encoding_510(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_513(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_514(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_516(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_518(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_3, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_4, out_k), false, false, RULE_INVALID, TNode::null());

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

    for (size_t i = 0; i < in0.size(); i++) {
      out.push_back(nm->mkSkolem("out", nm->booleanType())); 
    }
    // Begin iterator
    for (size_t k = 0; k < in0.size(); k++) {
      Node in_k_0 = in0[k];
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_3, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

}
void encoding_522(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_523(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_524(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, in_k_3, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_3, neg_in_k_4, neg_in_k_5, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_4, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_5, neg_out_k), false, false, RULE_INVALID, TNode::null());

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
void encoding_527(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_528(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_533(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_534(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_535(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void encoding_537(const std::vector<std::vector<Node> >& inputs,   std::vector<Node>& out, prop::CnfStream* cnf, NodeManager* nm) {
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
void CVC4::theory::bv::optimalEncodingFixedWidth(int enc_id, const std::vector<std::vector<Node> > & inputs,  std::vector<Node>& out, prop::CnfStream* cnf) {
  NodeManager* nm = NodeManager::currentNM();
  if (enc_id == 0) { 
    encoding_0(inputs, out, cnf, nm);
  }
  else if (enc_id == 5) {
    encoding_5(inputs, out, cnf, nm);
  }
  else if (enc_id == 8) {
    encoding_8(inputs, out, cnf, nm);
  }
  else if (enc_id == 281) {
    encoding_281(inputs, out, cnf, nm);
  }
  else if (enc_id == 282) {
    encoding_282(inputs, out, cnf, nm);
  }
  else if (enc_id == 283) {
    encoding_283(inputs, out, cnf, nm);
  }
  else if (enc_id == 284) {
    encoding_284(inputs, out, cnf, nm);
  }
  else if (enc_id == 285) {
    encoding_285(inputs, out, cnf, nm);
  }
  else if (enc_id == 286) {
    encoding_286(inputs, out, cnf, nm);
  }
  else if (enc_id == 287) {
    encoding_287(inputs, out, cnf, nm);
  }
  else if (enc_id == 288) {
    encoding_288(inputs, out, cnf, nm);
  }
  else if (enc_id == 289) {
    encoding_289(inputs, out, cnf, nm);
  }
  else if (enc_id == 290) {
    encoding_290(inputs, out, cnf, nm);
  }
  else if (enc_id == 291) {
    encoding_291(inputs, out, cnf, nm);
  }
  else if (enc_id == 292) {
    encoding_292(inputs, out, cnf, nm);
  }
  else if (enc_id == 293) {
    encoding_293(inputs, out, cnf, nm);
  }
  else if (enc_id == 294) {
    encoding_294(inputs, out, cnf, nm);
  }
  else if (enc_id == 295) {
    encoding_295(inputs, out, cnf, nm);
  }
  else if (enc_id == 296) {
    encoding_296(inputs, out, cnf, nm);
  }
  else if (enc_id == 297) {
    encoding_297(inputs, out, cnf, nm);
  }
  else if (enc_id == 298) {
    encoding_298(inputs, out, cnf, nm);
  }
  else if (enc_id == 299) {
    encoding_299(inputs, out, cnf, nm);
  }
  else if (enc_id == 300) {
    encoding_300(inputs, out, cnf, nm);
  }
  else if (enc_id == 301) {
    encoding_301(inputs, out, cnf, nm);
  }
  else if (enc_id == 302) {
    encoding_302(inputs, out, cnf, nm);
  }
  else if (enc_id == 303) {
    encoding_303(inputs, out, cnf, nm);
  }
  else if (enc_id == 304) {
    encoding_304(inputs, out, cnf, nm);
  }
  else if (enc_id == 305) {
    encoding_305(inputs, out, cnf, nm);
  }
  else if (enc_id == 306) {
    encoding_306(inputs, out, cnf, nm);
  }
  else if (enc_id == 307) {
    encoding_307(inputs, out, cnf, nm);
  }
  else if (enc_id == 308) {
    encoding_308(inputs, out, cnf, nm);
  }
  else if (enc_id == 309) {
    encoding_309(inputs, out, cnf, nm);
  }
  else if (enc_id == 310) {
    encoding_310(inputs, out, cnf, nm);
  }
  else if (enc_id == 311) {
    encoding_311(inputs, out, cnf, nm);
  }
  else if (enc_id == 312) {
    encoding_312(inputs, out, cnf, nm);
  }
  else if (enc_id == 313) {
    encoding_313(inputs, out, cnf, nm);
  }
  else if (enc_id == 314) {
    encoding_314(inputs, out, cnf, nm);
  }
  else if (enc_id == 315) {
    encoding_315(inputs, out, cnf, nm);
  }
  else if (enc_id == 316) {
    encoding_316(inputs, out, cnf, nm);
  }
  else if (enc_id == 317) {
    encoding_317(inputs, out, cnf, nm);
  }
  else if (enc_id == 318) {
    encoding_318(inputs, out, cnf, nm);
  }
  else if (enc_id == 320) {
    encoding_320(inputs, out, cnf, nm);
  }
  else if (enc_id == 321) {
    encoding_321(inputs, out, cnf, nm);
  }
  else if (enc_id == 322) {
    encoding_322(inputs, out, cnf, nm);
  }
  else if (enc_id == 323) {
    encoding_323(inputs, out, cnf, nm);
  }
  else if (enc_id == 324) {
    encoding_324(inputs, out, cnf, nm);
  }
  else if (enc_id == 325) {
    encoding_325(inputs, out, cnf, nm);
  }
  else if (enc_id == 326) {
    encoding_326(inputs, out, cnf, nm);
  }
  else if (enc_id == 327) {
    encoding_327(inputs, out, cnf, nm);
  }
  else if (enc_id == 328) {
    encoding_328(inputs, out, cnf, nm);
  }
  else if (enc_id == 330) {
    encoding_330(inputs, out, cnf, nm);
  }
  else if (enc_id == 331) {
    encoding_331(inputs, out, cnf, nm);
  }
  else if (enc_id == 332) {
    encoding_332(inputs, out, cnf, nm);
  }
  else if (enc_id == 333) {
    encoding_333(inputs, out, cnf, nm);
  }
  else if (enc_id == 334) {
    encoding_334(inputs, out, cnf, nm);
  }
  else if (enc_id == 335) {
    encoding_335(inputs, out, cnf, nm);
  }
  else if (enc_id == 336) {
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
  else if (enc_id == 435) {
    encoding_435(inputs, out, cnf, nm);
  }
  else if (enc_id == 436) {
    encoding_436(inputs, out, cnf, nm);
  }
  else if (enc_id == 437) {
    encoding_437(inputs, out, cnf, nm);
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
  else if (enc_id == 537) {
    encoding_537(inputs, out, cnf, nm);
  }
  else {
    Assert(false);
  }
}/* optimalEncodingFixedWidth */
Node encoding_4(const std::vector<std::vector<Node> >& inputs,   prop::CnfStream* cnf, NodeManager* nm) {
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
Node encoding_6(const std::vector<std::vector<Node> >& inputs,   prop::CnfStream* cnf, NodeManager* nm) {
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
Node encoding_9(const std::vector<std::vector<Node> >& inputs,   prop::CnfStream* cnf, NodeManager* nm) {
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
Node CVC4::theory::bv::optimalEncodingPredicate(int enc_id, const std::vector<std::vector<Node> >& inputs,  prop::CnfStream* cnf) {
  NodeManager* nm = NodeManager::currentNM();
  if (enc_id == 4) { 
    return encoding_4(inputs, cnf, nm);
  }
  else if (enc_id == 6) {
    return encoding_6(inputs, cnf, nm);
  }
  else if (enc_id == 9) {
    return encoding_9(inputs, cnf, nm);
  }
  else {
    Assert(false);
    return mkTrue<Node>();
  }
}/* optimalEncodingPredicate */
