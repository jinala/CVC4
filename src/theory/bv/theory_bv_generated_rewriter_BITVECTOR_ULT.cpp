#include "options/bv_options.h"
#include "options/main_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

Node rewrite_29_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[29]++;
  return utils::mkSpecialPredicate(children, 29);
}
Node rewrite_29_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[29]++;
  return utils::mkSpecialPredicate(children, 29);
}
Node rewrite_29_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[29]++;
  return utils::mkSpecialPredicate(children, 29);
}
Node rewrite_29_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[29]++;
  return utils::mkSpecialPredicate(children, 29);
}
Node rewrite_32_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[32]++;
  return utils::mkSpecialPredicate(children, 32);
}
Node rewrite_32_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[32]++;
  return utils::mkSpecialPredicate(children, 32);
}
Node rewrite_32_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[32]++;
  return utils::mkSpecialPredicate(children, 32);
}
Node rewrite_32_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[32]++;
  return utils::mkSpecialPredicate(children, 32);
}
Node rewrite_31_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[31]++;
  return utils::mkSpecialPredicate(children, 31);
}
Node rewrite_31_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[31]++;
  return utils::mkSpecialPredicate(children, 31);
}
Node rewrite_38_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[38]++;
  return utils::mkSpecialPredicate(children, 38);
}
Node rewrite_38_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[38]++;
  return utils::mkSpecialPredicate(children, 38);
}
Node rewrite_27_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[27]++;
  return utils::mkSpecialPredicate(children, 27);
}
Node rewrite_27(TNode node, const bool* predicates) {
  if (predicates[2] && predicates[1] && true && true && predicates[0] && node[0][1] == node[1][0] && node[0][0] == node[1][1]) {
    return rewrite_29_0(node);
  }
  else if (predicates[2] && predicates[1] && true && true && predicates[0] && node[0][0] == node[1][0] && node[0][1] == node[1][1]) {
    return rewrite_29_1(node);
  }
  else if (predicates[2] && predicates[1] && true && true && predicates[0] && node[0][1] == node[1][0] && node[0][0] == node[1][1]) {
    return rewrite_29_2(node);
  }
  else if (predicates[2] && predicates[1] && true && true && predicates[0] && node[0][0] == node[1][0] && node[0][1] == node[1][1]) {
    return rewrite_29_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_29(TNode node, const bool* predicates) {
  if (predicates[2] && predicates[3] && true && true && predicates[4] && node[0][0] == node[1][0] && node[0][1] == node[1][1]) {
    return rewrite_32_0(node);
  }
  else if (predicates[2] && predicates[3] && true && true && predicates[4] && node[0][0] == node[1][0] && node[0][1] == node[1][1]) {
    return rewrite_32_1(node);
  }
  else if (predicates[2] && predicates[3] && true && true && predicates[4] && node[0][1] == node[1][0] && node[0][0] == node[1][1]) {
    return rewrite_32_2(node);
  }
  else if (predicates[2] && predicates[3] && true && true && predicates[4] && node[0][1] == node[1][0] && node[0][0] == node[1][1]) {
    return rewrite_32_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_32(TNode node, const bool* predicates) {
  if (predicates[2] && predicates[1] && true && true && node[0][0] == node[1]) {
    return rewrite_31_0(node);
  }
  else if (predicates[2] && predicates[1] && true && true && node[0][1] == node[1]) {
    return rewrite_31_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_31(TNode node, const bool* predicates) {
  if (predicates[2] && predicates[1] && true && true && node[0][0] == node[1]) {
    return rewrite_38_0(node);
  }
  else if (predicates[2] && predicates[1] && true && true && node[0][1] == node[1]) {
    return rewrite_38_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_38(TNode node, const bool* predicates) {
  if (predicates[2] && true && true) {
    return rewrite_27_0(node);
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
  if (TheoryBVSpecialRewriter::enabled[29]) {
    response = rewrite_29(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[32]) {
    response = rewrite_32(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[31]) {
    response = rewrite_31(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[38]) {
    response = rewrite_38(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[27]) {
    response = rewrite_27(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBVSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
