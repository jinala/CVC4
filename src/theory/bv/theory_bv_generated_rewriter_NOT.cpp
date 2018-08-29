#include "options/bv_options.h"
#include "options/main_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

Node rewrite_30_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[30]++;
  return utils::mkSpecialPredicate(children, 30);
}
Node rewrite_30_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[30]++;
  return utils::mkSpecialPredicate(children, 30);
}
Node rewrite_30_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[30]++;
  return utils::mkSpecialPredicate(children, 30);
}
Node rewrite_30_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[30]++;
  return utils::mkSpecialPredicate(children, 30);
}
Node rewrite_34_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[34]++;
  return utils::mkSpecialPredicate(children, 34);
}
Node rewrite_34_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[34]++;
  return utils::mkSpecialPredicate(children, 34);
}
Node rewrite_34_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[34]++;
  return utils::mkSpecialPredicate(children, 34);
}
Node rewrite_34_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[34]++;
  return utils::mkSpecialPredicate(children, 34);
}
Node rewrite_36_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[36]++;
  return utils::mkSpecialPredicate(children, 36);
}
Node rewrite_36_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[36]++;
  return utils::mkSpecialPredicate(children, 36);
}
Node rewrite_36_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[36]++;
  return utils::mkSpecialPredicate(children, 36);
}
Node rewrite_36_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[36]++;
  return utils::mkSpecialPredicate(children, 36);
}
Node rewrite_33_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[33]++;
  return utils::mkSpecialPredicate(children, 33);
}
Node rewrite_33_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[33]++;
  return utils::mkSpecialPredicate(children, 33);
}
Node rewrite_37_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[37]++;
  return utils::mkSpecialPredicate(children, 37);
}
Node rewrite_37_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[37]++;
  return utils::mkSpecialPredicate(children, 37);
}
Node rewrite_37(TNode node, const bool* predicates) {
  if (predicates[1] && predicates[6] && predicates[5] && true && true && predicates[0] && node[0][0][1] == node[0][1][0] && node[0][0][0] == node[0][1][1]) {
    return rewrite_30_0(node);
  }
  else if (predicates[1] && predicates[6] && predicates[5] && true && true && predicates[0] && node[0][0][0] == node[0][1][0] && node[0][0][1] == node[0][1][1]) {
    return rewrite_30_1(node);
  }
  else if (predicates[1] && predicates[6] && predicates[5] && true && true && predicates[0] && node[0][0][1] == node[0][1][0] && node[0][0][0] == node[0][1][1]) {
    return rewrite_30_2(node);
  }
  else if (predicates[1] && predicates[6] && predicates[5] && true && true && predicates[0] && node[0][0][0] == node[0][1][0] && node[0][0][1] == node[0][1][1]) {
    return rewrite_30_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_30(TNode node, const bool* predicates) {
  if (predicates[1] && predicates[6] && predicates[3] && true && true && predicates[4] && node[0][0][0] == node[0][1][0] && node[0][0][1] == node[0][1][1]) {
    return rewrite_34_0(node);
  }
  else if (predicates[1] && predicates[6] && predicates[3] && true && true && predicates[4] && node[0][0][1] == node[0][1][0] && node[0][0][0] == node[0][1][1]) {
    return rewrite_34_1(node);
  }
  else if (predicates[1] && predicates[6] && predicates[3] && true && true && predicates[4] && node[0][0][1] == node[0][1][0] && node[0][0][0] == node[0][1][1]) {
    return rewrite_34_2(node);
  }
  else if (predicates[1] && predicates[6] && predicates[3] && true && true && predicates[4] && node[0][0][0] == node[0][1][0] && node[0][0][1] == node[0][1][1]) {
    return rewrite_34_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_34(TNode node, const bool* predicates) {
  if (predicates[1] && predicates[2] && predicates[5] && true && true && predicates[0] && node[0][0][1] == node[0][1][0] && node[0][0][0] == node[0][1][1]) {
    return rewrite_36_0(node);
  }
  else if (predicates[1] && predicates[2] && predicates[5] && true && true && predicates[0] && node[0][0][0] == node[0][1][0] && node[0][0][1] == node[0][1][1]) {
    return rewrite_36_1(node);
  }
  else if (predicates[1] && predicates[2] && predicates[5] && true && true && predicates[0] && node[0][0][0] == node[0][1][0] && node[0][0][1] == node[0][1][1]) {
    return rewrite_36_2(node);
  }
  else if (predicates[1] && predicates[2] && predicates[5] && true && true && predicates[0] && node[0][0][1] == node[0][1][0] && node[0][0][0] == node[0][1][1]) {
    return rewrite_36_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_36(TNode node, const bool* predicates) {
  if (predicates[1] && predicates[6] && predicates[5] && true && true && node[0][0][1] == node[0][1]) {
    return rewrite_33_0(node);
  }
  else if (predicates[1] && predicates[6] && predicates[5] && true && true && node[0][0][0] == node[0][1]) {
    return rewrite_33_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_33(TNode node, const bool* predicates) {
  if (predicates[1] && predicates[6] && predicates[5] && true && true && node[0][0][1] == node[0][1]) {
    return rewrite_37_0(node);
  }
  else if (predicates[1] && predicates[6] && predicates[5] && true && true && node[0][0][0] == node[0][1]) {
    return rewrite_37_1(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBVSpecialRewriter::RewriteNOT(TNode node,  bool prewrite) {
  bool predicates[7];
  for (int i = 0; i < 7; i++) {
    predicates[i] = false;
  }
  predicates[1] = node.getKind() == kind::NOT && node.getNumChildren() == 1;
  if (node.getNumChildren() > 0) {
    predicates[2] = node[0].getKind() == kind::BITVECTOR_SLT && node[0].getNumChildren() == 2;
    predicates[6] = node[0].getKind() == kind::BITVECTOR_ULT && node[0].getNumChildren() == 2;
    if (node[0].getNumChildren() > 0) {
      predicates[3] = node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2;
      predicates[5] = node[0][0].getKind() == kind::BITVECTOR_PLUS && node[0][0].getNumChildren() == 2;
    }
    if (node[0].getNumChildren() > 1) {
      predicates[0] = node[0][1].getKind() == kind::BITVECTOR_PLUS && node[0][1].getNumChildren() == 2;
      predicates[4] = node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2;
    }
  }
  Node response;
  if (TheoryBVSpecialRewriter::enabled[30]) {
    response = rewrite_30(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[34]) {
    response = rewrite_34(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[36]) {
    response = rewrite_36(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[33]) {
    response = rewrite_33(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[37]) {
    response = rewrite_37(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBVSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
