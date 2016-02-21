#include "options/bv_options.h"
#include "options/main_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

Node rewrite_12_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[12]++;
  return utils::mkSpecialPredicate(children, 12);
}
Node rewrite_12_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[12]++;
  return utils::mkSpecialPredicate(children, 12);
}
Node rewrite_12_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[12]++;
  return utils::mkSpecialPredicate(children, 12);
}
Node rewrite_12_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[12]++;
  return utils::mkSpecialPredicate(children, 12);
}
Node rewrite_19_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[19]++;
  return utils::mkSpecialPredicate(children, 19);
}
Node rewrite_19_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[19]++;
  return utils::mkSpecialPredicate(children, 19);
}
Node rewrite_19_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[19]++;
  return utils::mkSpecialPredicate(children, 19);
}
Node rewrite_19_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[19]++;
  return utils::mkSpecialPredicate(children, 19);
}
Node rewrite_14_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[14]++;
  return utils::mkSpecialPredicate(children, 14);
}
Node rewrite_14_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[14]++;
  return utils::mkSpecialPredicate(children, 14);
}
Node rewrite_2_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[2]++;
  return utils::mkSpecialPredicate(children, 2);
}
Node rewrite_2(TNode node, const bool* predicates) {
  if (predicates[2] && predicates[1] && true && true && predicates[0] && node[0][1] == node[1][0] && node[0][0] == node[1][1]) {
    return rewrite_12_0(node);
  }
  else if (predicates[2] && predicates[1] && true && true && predicates[0] && node[0][0] == node[1][0] && node[0][1] == node[1][1]) {
    return rewrite_12_1(node);
  }
  else if (predicates[2] && predicates[1] && true && true && predicates[0] && node[0][1] == node[1][0] && node[0][0] == node[1][1]) {
    return rewrite_12_2(node);
  }
  else if (predicates[2] && predicates[1] && true && true && predicates[0] && node[0][0] == node[1][0] && node[0][1] == node[1][1]) {
    return rewrite_12_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_12(TNode node, const bool* predicates) {
  if (predicates[2] && predicates[3] && true && true && predicates[4] && node[0][0] == node[1][0] && node[0][1] == node[1][1]) {
    return rewrite_19_0(node);
  }
  else if (predicates[2] && predicates[3] && true && true && predicates[4] && node[0][0] == node[1][0] && node[0][1] == node[1][1]) {
    return rewrite_19_1(node);
  }
  else if (predicates[2] && predicates[3] && true && true && predicates[4] && node[0][1] == node[1][0] && node[0][0] == node[1][1]) {
    return rewrite_19_2(node);
  }
  else if (predicates[2] && predicates[3] && true && true && predicates[4] && node[0][1] == node[1][0] && node[0][0] == node[1][1]) {
    return rewrite_19_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_19(TNode node, const bool* predicates) {
  if (predicates[2] && predicates[1] && true && true && node[0][0] == node[1]) {
    return rewrite_14_0(node);
  }
  else if (predicates[2] && predicates[1] && true && true && node[0][1] == node[1]) {
    return rewrite_14_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_14(TNode node, const bool* predicates) {
  if (predicates[2] && true && true) {
    return rewrite_2_0(node);
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
  response = rewrite_12(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_19(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_14(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_2(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
