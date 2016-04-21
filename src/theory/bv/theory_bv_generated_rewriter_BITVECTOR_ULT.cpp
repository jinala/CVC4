#include "options/bv_options.h"
#include "options/main_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

Node rewrite_35_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[35]++;
  return utils::mkSpecialPredicate(children, 35);
}
Node rewrite_35_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[35]++;
  return utils::mkSpecialPredicate(children, 35);
}
Node rewrite_35_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[35]++;
  return utils::mkSpecialPredicate(children, 35);
}
Node rewrite_35_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[35]++;
  return utils::mkSpecialPredicate(children, 35);
}
Node rewrite_43_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[43]++;
  return utils::mkSpecialPredicate(children, 43);
}
Node rewrite_43_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[43]++;
  return utils::mkSpecialPredicate(children, 43);
}
Node rewrite_43_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[43]++;
  return utils::mkSpecialPredicate(children, 43);
}
Node rewrite_43_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[43]++;
  return utils::mkSpecialPredicate(children, 43);
}
Node rewrite_40_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[40]++;
  return utils::mkSpecialPredicate(children, 40);
}
Node rewrite_40_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[40]++;
  return utils::mkSpecialPredicate(children, 40);
}
Node rewrite_5_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[5]++;
  return utils::mkSpecialPredicate(children, 5);
}
Node rewrite_5(TNode node, const bool* predicates) {
  if (predicates[2] && predicates[1] && true && true && predicates[0] && node[0][1] == node[1][0] && node[0][0] == node[1][1]) {
    return rewrite_35_0(node);
  }
  else if (predicates[2] && predicates[1] && true && true && predicates[0] && node[0][0] == node[1][0] && node[0][1] == node[1][1]) {
    return rewrite_35_1(node);
  }
  else if (predicates[2] && predicates[1] && true && true && predicates[0] && node[0][1] == node[1][0] && node[0][0] == node[1][1]) {
    return rewrite_35_2(node);
  }
  else if (predicates[2] && predicates[1] && true && true && predicates[0] && node[0][0] == node[1][0] && node[0][1] == node[1][1]) {
    return rewrite_35_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_35(TNode node, const bool* predicates) {
  if (predicates[2] && predicates[3] && true && true && predicates[4] && node[0][0] == node[1][0] && node[0][1] == node[1][1]) {
    return rewrite_43_0(node);
  }
  else if (predicates[2] && predicates[3] && true && true && predicates[4] && node[0][0] == node[1][0] && node[0][1] == node[1][1]) {
    return rewrite_43_1(node);
  }
  else if (predicates[2] && predicates[3] && true && true && predicates[4] && node[0][1] == node[1][0] && node[0][0] == node[1][1]) {
    return rewrite_43_2(node);
  }
  else if (predicates[2] && predicates[3] && true && true && predicates[4] && node[0][1] == node[1][0] && node[0][0] == node[1][1]) {
    return rewrite_43_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_43(TNode node, const bool* predicates) {
  if (predicates[2] && predicates[1] && true && true && node[0][0] == node[1]) {
    return rewrite_40_0(node);
  }
  else if (predicates[2] && predicates[1] && true && true && node[0][1] == node[1]) {
    return rewrite_40_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_40(TNode node, const bool* predicates) {
  if (predicates[2] && true && true) {
    return rewrite_5_0(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBVSpecialRewriter::RewriteBITVECTOR_ULT(TNode node,  bool prewrite) {
  bool predicates[5];
  for (int i = 0; i < 5; i++) {
    predicates[i] = false;
  }
  predicates[2] = node.getKind() == kind::BITVECTOR_ULT && node.getNumChildren() == 2;
  if (node.getNumChildren() > 0) {
    predicates[1] = node[0].getKind() == kind::BITVECTOR_PLUS && node[0].getNumChildren() == 2;
    predicates[3] = node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2;
  }
  if (node.getNumChildren() > 1) {
    predicates[0] = node[1].getKind() == kind::BITVECTOR_PLUS && node[1].getNumChildren() == 2;
    predicates[4] = node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2;
  }
  Node response;
  if (TheoryBVSpecialRewriter::enabled[35]) {
    response = rewrite_35(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[43]) {
    response = rewrite_43(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[40]) {
    response = rewrite_40(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[5]) {
    response = rewrite_5(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBVSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
