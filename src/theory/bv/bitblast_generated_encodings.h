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
void optimalEncodingFixedWidth(int enc_id, const std::vector<std::vector<T> >& inputs, std::vector<T>& out, prop::CnfStream* cnf) {
  Unreachable();
}

template <>
void inline optimalEncodingFixedWidth(int enc_id, const std::vector<std::vector<Node> > & inputs,  std::vector<Node>& out, prop::CnfStream* cnf) {
  NodeManager* nm = NodeManager::currentNM();
  if (enc_id == 2) { 
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];

    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss;
      ss << "out_" << i;
      out.push_back(nm->mkSkolem(ss.str(), nm->booleanType())); 
    }
    std::vector<Node> tmp;
    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss0;
      ss0 << "tmp_0_" << i;
      tmp.push_back(nm->mkSkolem(ss0.str(), nm->booleanType()));
    }
    Node true_n = nm->mkConst<bool>(true);
    Node false_n = nm->mkConst<bool>(false);

    // Begin iterator
    int N = in0.size();
{
  {
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
  for(int k = 0; k < N; k = k + 1)/*Canonical*/
 {
      tt_0 = in0[k];
      neg_tt_0 = nm->mkNode(kind::NOT, tt_0);
      tt_1 = in1[k];
      neg_tt_1 = nm->mkNode(kind::NOT, tt_1);
      tt_2 = out[k];
      neg_tt_2 = nm->mkNode(kind::NOT, tt_2);
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
      tt_4 = tmp[k];
      neg_tt_4 = nm->mkNode(kind::NOT, tt_4);

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
    }}

  }
  else if (enc_id == 18) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];

    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss;
      ss << "out_" << i;
      out.push_back(nm->mkSkolem(ss.str(), nm->booleanType())); 
    }
    std::vector<Node> tmp;
    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss0;
      ss0 << "tmp_0_" << i;
      tmp.push_back(nm->mkSkolem(ss0.str(), nm->booleanType()));
    }
    Node true_n = nm->mkConst<bool>(true);
    Node false_n = nm->mkConst<bool>(false);

    // Begin iterator
    int N = in0.size();
{
  {
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
  for(int k = 0; k < N; k = k + 1)/*Canonical*/
 {
      tt_0 = in0[k];
      neg_tt_0 = nm->mkNode(kind::NOT, tt_0);
      tt_1 = in1[k];
      neg_tt_1 = nm->mkNode(kind::NOT, tt_1);
      tt_2 = out[k];
      neg_tt_2 = nm->mkNode(kind::NOT, tt_2);
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
      tt_4 = tmp[k];
      neg_tt_4 = nm->mkNode(kind::NOT, tt_4);

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
    }}

  }
  else if (enc_id == 19) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];

    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss;
      ss << "out_" << i;
      out.push_back(nm->mkSkolem(ss.str(), nm->booleanType())); 
    }
    std::vector<Node> tmp;
    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss0;
      ss0 << "tmp_0_" << i;
      tmp.push_back(nm->mkSkolem(ss0.str(), nm->booleanType()));
    }
    Node true_n = nm->mkConst<bool>(true);
    Node false_n = nm->mkConst<bool>(false);

    // Begin iterator
    int N = in0.size();
{
  {
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
  for(int k = 0; k < N; k = k + 1)/*Canonical*/
 {
      tt_0 = in1[k];
      neg_tt_0 = nm->mkNode(kind::NOT, tt_0);
      tt_1 = nm->mkNode(kind::NOT, in0[k]);
      neg_tt_1 = nm->mkNode(kind::NOT, tt_1);
      tt_2 = out[k];
      neg_tt_2 = nm->mkNode(kind::NOT, tt_2);
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
      tt_4 = tmp[k];
      neg_tt_4 = nm->mkNode(kind::NOT, tt_4);

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
    }}

  }
  else if (enc_id == 0) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];

    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss;
      ss << "out_" << i;
      out.push_back(nm->mkSkolem(ss.str(), nm->booleanType())); 
    }
    // Begin iterator
    for (size_t k = 0; k < in0.size(); k++) {
    Node in_k_0 = in0[k];
    Node neg_in_k_0 = nm->mkNode(kind::NOT, in_k_0);
    Node in_k_1 = in1[k];
    Node neg_in_k_1 = nm->mkNode(kind::NOT, in_k_1);

    Node out_k = out[k];
    Node neg_out_k = nm->mkNode(kind::NOT, out_k);


        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 14) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];

    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss;
      ss << "out_" << i;
      out.push_back(nm->mkSkolem(ss.str(), nm->booleanType())); 
    }
    // Begin iterator
    for (size_t k = 0; k < in0.size(); k++) {
    Node in_k_0 = in0[k];
    Node neg_in_k_0 = nm->mkNode(kind::NOT, in_k_0);
    Node in_k_1 = in1[k];
    Node neg_in_k_1 = nm->mkNode(kind::NOT, in_k_1);

    Node out_k = out[k];
    Node neg_out_k = nm->mkNode(kind::NOT, out_k);


        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 16) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];

    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss;
      ss << "out_" << i;
      out.push_back(nm->mkSkolem(ss.str(), nm->booleanType())); 
    }
    // Begin iterator
    for (size_t k = 0; k < in0.size(); k++) {
    Node in_k_0 = in0[k];
    Node neg_in_k_0 = nm->mkNode(kind::NOT, in_k_0);
    Node in_k_1 = in1[k];
    Node neg_in_k_1 = nm->mkNode(kind::NOT, in_k_1);

    Node out_k = out[k];
    Node neg_out_k = nm->mkNode(kind::NOT, out_k);


        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 23) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];

    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss;
      ss << "out_" << i;
      out.push_back(nm->mkSkolem(ss.str(), nm->booleanType())); 
    }
    // Begin iterator
    for (size_t k = 0; k < in0.size(); k++) {
    Node in_k_0 = in0[k];
    Node neg_in_k_0 = nm->mkNode(kind::NOT, in_k_0);
    Node in_k_1 = in1[k];
    Node neg_in_k_1 = nm->mkNode(kind::NOT, in_k_1);

    Node out_k = out[k];
    Node neg_out_k = nm->mkNode(kind::NOT, out_k);


        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 25) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];

    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss;
      ss << "out_" << i;
      out.push_back(nm->mkSkolem(ss.str(), nm->booleanType())); 
    }
    // Begin iterator
    for (size_t k = 0; k < in0.size(); k++) {
    Node in_k_0 = in0[k];
    Node neg_in_k_0 = nm->mkNode(kind::NOT, in_k_0);
    Node in_k_1 = in1[k];
    Node neg_in_k_1 = nm->mkNode(kind::NOT, in_k_1);
    Node in_k_2 = in2[k];
    Node neg_in_k_2 = nm->mkNode(kind::NOT, in_k_2);

    Node out_k = out[k];
    Node neg_out_k = nm->mkNode(kind::NOT, out_k);


        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 27) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];

    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss;
      ss << "out_" << i;
      out.push_back(nm->mkSkolem(ss.str(), nm->booleanType())); 
    }
    // Begin iterator
    for (size_t k = 0; k < in0.size(); k++) {
    Node in_k_0 = in0[k];
    Node neg_in_k_0 = nm->mkNode(kind::NOT, in_k_0);
    Node in_k_1 = in1[k];
    Node neg_in_k_1 = nm->mkNode(kind::NOT, in_k_1);

    Node out_k = out[k];
    Node neg_out_k = nm->mkNode(kind::NOT, out_k);


        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 28) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];

    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss;
      ss << "out_" << i;
      out.push_back(nm->mkSkolem(ss.str(), nm->booleanType())); 
    }
    // Begin iterator
    for (size_t k = 0; k < in0.size(); k++) {
    Node in_k_0 = in0[k];
    Node neg_in_k_0 = nm->mkNode(kind::NOT, in_k_0);
    Node in_k_1 = in1[k];
    Node neg_in_k_1 = nm->mkNode(kind::NOT, in_k_1);
    Node in_k_2 = in2[k];
    Node neg_in_k_2 = nm->mkNode(kind::NOT, in_k_2);

    Node out_k = out[k];
    Node neg_out_k = nm->mkNode(kind::NOT, out_k);


        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 29) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];

    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss;
      ss << "out_" << i;
      out.push_back(nm->mkSkolem(ss.str(), nm->booleanType())); 
    }
    // Begin iterator
    for (size_t k = 0; k < in0.size(); k++) {
    Node in_k_0 = in0[k];
    Node neg_in_k_0 = nm->mkNode(kind::NOT, in_k_0);
    Node in_k_1 = in1[k];
    Node neg_in_k_1 = nm->mkNode(kind::NOT, in_k_1);

    Node out_k = out[k];
    Node neg_out_k = nm->mkNode(kind::NOT, out_k);


        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 32) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];

    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss;
      ss << "out_" << i;
      out.push_back(nm->mkSkolem(ss.str(), nm->booleanType())); 
    }
    // Begin iterator
    for (size_t k = 0; k < in0.size(); k++) {
    Node in_k_0 = in0[k];
    Node neg_in_k_0 = nm->mkNode(kind::NOT, in_k_0);
    Node in_k_1 = in1[k];
    Node neg_in_k_1 = nm->mkNode(kind::NOT, in_k_1);
    Node in_k_2 = in2[k];
    Node neg_in_k_2 = nm->mkNode(kind::NOT, in_k_2);

    Node out_k = out[k];
    Node neg_out_k = nm->mkNode(kind::NOT, out_k);


        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 34) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];

    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss;
      ss << "out_" << i;
      out.push_back(nm->mkSkolem(ss.str(), nm->booleanType())); 
    }
    // Begin iterator
    for (size_t k = 0; k < in0.size(); k++) {
    Node in_k_0 = in0[k];
    Node neg_in_k_0 = nm->mkNode(kind::NOT, in_k_0);
    Node in_k_1 = in1[k];
    Node neg_in_k_1 = nm->mkNode(kind::NOT, in_k_1);
    Node in_k_2 = in2[k];
    Node neg_in_k_2 = nm->mkNode(kind::NOT, in_k_2);

    Node out_k = out[k];
    Node neg_out_k = nm->mkNode(kind::NOT, out_k);


        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 38) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];

    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss;
      ss << "out_" << i;
      out.push_back(nm->mkSkolem(ss.str(), nm->booleanType())); 
    }
    // Begin iterator
    for (size_t k = 0; k < in0.size(); k++) {
    Node in_k_0 = in0[k];
    Node neg_in_k_0 = nm->mkNode(kind::NOT, in_k_0);
    Node in_k_1 = in1[k];
    Node neg_in_k_1 = nm->mkNode(kind::NOT, in_k_1);
    Node in_k_2 = in2[k];
    Node neg_in_k_2 = nm->mkNode(kind::NOT, in_k_2);

    Node out_k = out[k];
    Node neg_out_k = nm->mkNode(kind::NOT, out_k);


        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 41) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];

    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss;
      ss << "out_" << i;
      out.push_back(nm->mkSkolem(ss.str(), nm->booleanType())); 
    }
    // Begin iterator
    for (size_t k = 0; k < in0.size(); k++) {
    Node in_k_0 = in0[k];
    Node neg_in_k_0 = nm->mkNode(kind::NOT, in_k_0);
    Node in_k_1 = in1[k];
    Node neg_in_k_1 = nm->mkNode(kind::NOT, in_k_1);
    Node in_k_2 = in2[k];
    Node neg_in_k_2 = nm->mkNode(kind::NOT, in_k_2);

    Node out_k = out[k];
    Node neg_out_k = nm->mkNode(kind::NOT, out_k);


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
  else if (enc_id == 44) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];

    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss;
      ss << "out_" << i;
      out.push_back(nm->mkSkolem(ss.str(), nm->booleanType())); 
    }
    // Begin iterator
    for (size_t k = 0; k < in0.size(); k++) {
    Node in_k_0 = in0[k];
    Node neg_in_k_0 = nm->mkNode(kind::NOT, in_k_0);
    Node in_k_1 = in1[k];
    Node neg_in_k_1 = nm->mkNode(kind::NOT, in_k_1);

    Node out_k = out[k];
    Node neg_out_k = nm->mkNode(kind::NOT, out_k);


        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 46) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];

    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss;
      ss << "out_" << i;
      out.push_back(nm->mkSkolem(ss.str(), nm->booleanType())); 
    }
    // Begin iterator
    for (size_t k = 0; k < in0.size(); k++) {
    Node in_k_0 = in0[k];
    Node neg_in_k_0 = nm->mkNode(kind::NOT, in_k_0);
    Node in_k_1 = in1[k];
    Node neg_in_k_1 = nm->mkNode(kind::NOT, in_k_1);
    Node in_k_2 = in2[k];
    Node neg_in_k_2 = nm->mkNode(kind::NOT, in_k_2);

    Node out_k = out[k];
    Node neg_out_k = nm->mkNode(kind::NOT, out_k);


        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 48) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];

    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss;
      ss << "out_" << i;
      out.push_back(nm->mkSkolem(ss.str(), nm->booleanType())); 
    }
    // Begin iterator
    for (size_t k = 0; k < in0.size(); k++) {
    Node in_k_0 = in0[k];
    Node neg_in_k_0 = nm->mkNode(kind::NOT, in_k_0);
    Node in_k_1 = in1[k];
    Node neg_in_k_1 = nm->mkNode(kind::NOT, in_k_1);
    Node in_k_2 = in2[k];
    Node neg_in_k_2 = nm->mkNode(kind::NOT, in_k_2);

    Node out_k = out[k];
    Node neg_out_k = nm->mkNode(kind::NOT, out_k);


        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 49) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];

    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss;
      ss << "out_" << i;
      out.push_back(nm->mkSkolem(ss.str(), nm->booleanType())); 
    }
    // Begin iterator
    for (size_t k = 0; k < in0.size(); k++) {
    Node in_k_0 = in0[k];
    Node neg_in_k_0 = nm->mkNode(kind::NOT, in_k_0);
    Node in_k_1 = in1[k];
    Node neg_in_k_1 = nm->mkNode(kind::NOT, in_k_1);
    Node in_k_2 = in2[k];
    Node neg_in_k_2 = nm->mkNode(kind::NOT, in_k_2);

    Node out_k = out[k];
    Node neg_out_k = nm->mkNode(kind::NOT, out_k);


        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 50) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];

    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss;
      ss << "out_" << i;
      out.push_back(nm->mkSkolem(ss.str(), nm->booleanType())); 
    }
    // Begin iterator
    for (size_t k = 0; k < in0.size(); k++) {
    Node in_k_0 = in0[k];
    Node neg_in_k_0 = nm->mkNode(kind::NOT, in_k_0);
    Node in_k_1 = in1[k];
    Node neg_in_k_1 = nm->mkNode(kind::NOT, in_k_1);
    Node in_k_2 = in2[k];
    Node neg_in_k_2 = nm->mkNode(kind::NOT, in_k_2);

    Node out_k = out[k];
    Node neg_out_k = nm->mkNode(kind::NOT, out_k);


        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, neg_in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, in_k_1, neg_in_k_2, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else if (enc_id == 51) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];
    std::vector<Node> in2 = inputs[2];

    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss;
      ss << "out_" << i;
      out.push_back(nm->mkSkolem(ss.str(), nm->booleanType())); 
    }
    // Begin iterator
    for (size_t k = 0; k < in0.size(); k++) {
    Node in_k_0 = in0[k];
    Node neg_in_k_0 = nm->mkNode(kind::NOT, in_k_0);
    Node in_k_1 = in1[k];
    Node neg_in_k_1 = nm->mkNode(kind::NOT, in_k_1);
    Node in_k_2 = in2[k];
    Node neg_in_k_2 = nm->mkNode(kind::NOT, in_k_2);

    Node out_k = out[k];
    Node neg_out_k = nm->mkNode(kind::NOT, out_k);


        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_0, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_in_k_0, neg_in_k_1, neg_in_k_2, neg_out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_1, out_k), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, in_k_2, out_k), false, false, RULE_INVALID, TNode::null());

    }

  }
  else {
    Assert(false);
  }
}/* optimalEncodingFixedWidth */
template <class T>
T optimalEncodingPredicate(int enc_id, const std::vector<std::vector<T> >& inputs, prop::CnfStream* cnf) {
  Unreachable();
  return mkTrue<T>();
}

template <>
Node inline optimalEncodingPredicate(int enc_id, const std::vector<std::vector<Node> >& inputs,  prop::CnfStream* cnf) {
  NodeManager* nm = NodeManager::currentNM();
  if (enc_id == 1) { 
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];

    Node out = nm->mkSkolem("out", nm->booleanType());
    std::vector<Node> tmp;
    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss0;
      ss0 << "tmp_0_" << i;
      tmp.push_back(nm->mkSkolem(ss0.str(), nm->booleanType()));
    }
    Node true_n = nm->mkConst<bool>(true);
    Node false_n = nm->mkConst<bool>(false);

    // Begin iterator
    int N = in0.size();
{
  {
    Node tt_0;
    Node neg_tt_0;
    Node tt_1;
    Node neg_tt_1;
    Node tt_2;
    Node neg_tt_2;
    Node tt_3;
    Node neg_tt_3;
  for(int k = 0; k < N; k = k + 1)/*Canonical*/
 {
      tt_0 = in0[k];
      neg_tt_0 = nm->mkNode(kind::NOT, tt_0);
      tt_1 = in1[k];
      neg_tt_1 = nm->mkNode(kind::NOT, tt_1);
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_1, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_1, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, neg_tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());

      }
    }}
    return out; 

  }
  else if (enc_id == 5) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];

    Node out = nm->mkSkolem("out", nm->booleanType());
    std::vector<Node> tmp;
    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss0;
      ss0 << "tmp_0_" << i;
      tmp.push_back(nm->mkSkolem(ss0.str(), nm->booleanType()));
    }
    Node true_n = nm->mkConst<bool>(true);
    Node false_n = nm->mkConst<bool>(false);

    // Begin iterator
    int N = in0.size();
{
  {
    Node tt_0;
    Node neg_tt_0;
    Node tt_1;
    Node neg_tt_1;
    Node tt_2;
    Node neg_tt_2;
    Node tt_3;
    Node neg_tt_3;
  for(int k = 0; k < N; k = k + 1)/*Canonical*/
 {
      tt_0 = in0[k];
      neg_tt_0 = nm->mkNode(kind::NOT, tt_0);
      tt_1 = in1[k];
      neg_tt_1 = nm->mkNode(kind::NOT, tt_1);
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_1, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_1, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_1, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());

      }
    }}
    return out; 

  }
  else if (enc_id == 17) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];

    Node out = nm->mkSkolem("out", nm->booleanType());
    std::vector<Node> tmp;
    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss0;
      ss0 << "tmp_0_" << i;
      tmp.push_back(nm->mkSkolem(ss0.str(), nm->booleanType()));
    }
    Node true_n = nm->mkConst<bool>(true);
    Node false_n = nm->mkConst<bool>(false);

    // Begin iterator
    int N = in0.size();
{
  {
    Node tt_0;
    Node neg_tt_0;
    Node tt_1;
    Node neg_tt_1;
    Node tt_2;
    Node neg_tt_2;
    Node tt_3;
    Node neg_tt_3;
  for(int k = 0; k < N; k = k + 1)/*Canonical*/
 {
      tt_0 = in0[k];
      neg_tt_0 = nm->mkNode(kind::NOT, tt_0);
    if((k == (N - 1)) && 1)/*sketch_..v_bool.sk:12*/
    {
      tt_0 = nm->mkNode(kind::NOT, in0[k]);
      neg_tt_0 = nm->mkNode(kind::NOT, tt_0);
    }
      tt_1 = in1[k];
      neg_tt_1 = nm->mkNode(kind::NOT, tt_1);
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_1, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_1, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_1, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());

      }
    }}
    return out; 

  }
  else if (enc_id == 35) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];

    Node out = nm->mkSkolem("out", nm->booleanType());
    std::vector<Node> tmp;
    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss0;
      ss0 << "tmp_0_" << i;
      tmp.push_back(nm->mkSkolem(ss0.str(), nm->booleanType()));
    }
    Node true_n = nm->mkConst<bool>(true);
    Node false_n = nm->mkConst<bool>(false);

    // Begin iterator
    int N = in0.size();
{
  {
    Node tt_0;
    Node neg_tt_0;
    Node tt_1;
    Node neg_tt_1;
    Node tt_2;
    Node neg_tt_2;
    Node tt_3;
    Node neg_tt_3;
  for(int k = 0; k < N; k = k + 1)/*Canonical*/
 {
      tt_0 = in0[k];
      neg_tt_0 = nm->mkNode(kind::NOT, tt_0);
      tt_1 = in1[N - 1 - k];
      neg_tt_1 = nm->mkNode(kind::NOT, tt_1);
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());

      }
    }}
    return out; 

  }
  else if (enc_id == 40) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];

    Node out = nm->mkSkolem("out", nm->booleanType());
    std::vector<Node> tmp;
    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss0;
      ss0 << "tmp_0_" << i;
      tmp.push_back(nm->mkSkolem(ss0.str(), nm->booleanType()));
    }
    Node true_n = nm->mkConst<bool>(true);
    Node false_n = nm->mkConst<bool>(false);

    // Begin iterator
    int N = in0.size();
{
  {
    Node tt_0;
    Node neg_tt_0;
    Node tt_1;
    Node neg_tt_1;
    Node tt_2;
    Node neg_tt_2;
    Node tt_3;
    Node neg_tt_3;
  for(int k = 0; k < N; k = k + 1)/*Canonical*/
 {
      tt_0 = in0[k];
      neg_tt_0 = nm->mkNode(kind::NOT, tt_0);
      tt_1 = in1[k];
      neg_tt_1 = nm->mkNode(kind::NOT, tt_1);
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, tt_1, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, neg_tt_1, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_1, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());

      }
    }}
    return out; 

  }
  else if (enc_id == 43) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];

    Node out = nm->mkSkolem("out", nm->booleanType());
    std::vector<Node> tmp;
    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss0;
      ss0 << "tmp_0_" << i;
      tmp.push_back(nm->mkSkolem(ss0.str(), nm->booleanType()));
    }
    Node true_n = nm->mkConst<bool>(true);
    Node false_n = nm->mkConst<bool>(false);

    // Begin iterator
    int N = in0.size();
{
  {
    Node tt_0;
    Node neg_tt_0;
    Node tt_1;
    Node neg_tt_1;
    Node tt_2;
    Node neg_tt_2;
    Node tt_3;
    Node neg_tt_3;
  for(int k = 0; k < N; k = k + 1)/*Canonical*/
 {
      tt_0 = in0[N - 1 - k];
      neg_tt_0 = nm->mkNode(kind::NOT, tt_0);
      tt_1 = in1[k];
      neg_tt_1 = nm->mkNode(kind::NOT, tt_1);
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_2), false, false, RULE_INVALID, TNode::null());

      }
    }}
    return out; 

  }
  else if (enc_id == 47) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];

    Node out = nm->mkSkolem("out", nm->booleanType());
    std::vector<Node> tmp;
    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss0;
      ss0 << "tmp_0_" << i;
      tmp.push_back(nm->mkSkolem(ss0.str(), nm->booleanType()));
    }
    Node true_n = nm->mkConst<bool>(true);
    Node false_n = nm->mkConst<bool>(false);

    // Begin iterator
    int N = in0.size();
{
  {
    Node tt_0;
    Node neg_tt_0;
    Node tt_1;
    Node neg_tt_1;
    Node tt_2;
    Node neg_tt_2;
    Node tt_3;
    Node neg_tt_3;
  for(int k = 0; k < N; k = k + 1)/*Canonical*/
 {
      tt_0 = in0[k];
      neg_tt_0 = nm->mkNode(kind::NOT, tt_0);
      tt_1 = in1[k];
      neg_tt_1 = nm->mkNode(kind::NOT, tt_1);
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_3), false, false, RULE_INVALID, TNode::null());

      }
    }}
    return out; 

  }
  else if (enc_id == 54) {
    std::vector<Node> in0 = inputs[0];
    std::vector<Node> in1 = inputs[1];

    Node out = nm->mkSkolem("out", nm->booleanType());
    std::vector<Node> tmp;
    for (size_t i = 0; i < in0.size(); i++) {
      std::stringstream ss0;
      ss0 << "tmp_0_" << i;
      tmp.push_back(nm->mkSkolem(ss0.str(), nm->booleanType()));
    }
    Node true_n = nm->mkConst<bool>(true);
    Node false_n = nm->mkConst<bool>(false);

    // Begin iterator
    int N = in0.size();
{
  {
    Node tt_0;
    Node neg_tt_0;
    Node tt_1;
    Node neg_tt_1;
    Node tt_2;
    Node neg_tt_2;
    Node tt_3;
    Node neg_tt_3;
  for(int k = 0; k < N; k = k + 1)/*Canonical*/
 {
      tt_0 = in0[k];
      neg_tt_0 = nm->mkNode(kind::NOT, tt_0);
      tt_1 = in1[k];
      neg_tt_1 = nm->mkNode(kind::NOT, tt_1);
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

        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, tt_1, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_0, neg_tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, tt_1, neg_tt_2, tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, neg_tt_0, neg_tt_1, neg_tt_3), false, false, RULE_INVALID, TNode::null());
        cnf->convertAndAssert(nm->mkNode(kind::OR, tt_2, neg_tt_3), false, false, RULE_INVALID, TNode::null());

      }
    }}
    return out; 

  }
  else {
    Assert(false);
    return mkTrue<Node>();
  }
}/* optimalEncodingPredicate */
}/* bv */
}/* theory */
}/* CVC4 */
