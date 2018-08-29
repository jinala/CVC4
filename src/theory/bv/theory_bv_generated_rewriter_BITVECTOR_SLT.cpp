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
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[35]++;
  return utils::mkSpecialPredicate(children, 35);
}
Node rewrite_35_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[35]++;
  return utils::mkSpecialPredicate(children, 35);
}
Node rewrite_28_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[28]++;
  return utils::mkSpecialPredicate(children, 28);
}
Node rewrite_28(TNode node, const bool* predicates) {
  if (predicates[0] && predicates[1] && true && true && predicates[2] && node[0][1] == node[1][0] && node[0][0] == node[1][1]) {
    return rewrite_35_0(node);
  }
  else if (predicates[0] && predicates[1] && true && true && predicates[2] && node[0][1] == node[1][0] && node[0][0] == node[1][1]) {
    return rewrite_35_1(node);
  }
  else if (predicates[0] && predicates[1] && true && true && predicates[2] && node[0][0] == node[1][0] && node[0][1] == node[1][1]) {
    return rewrite_35_2(node);
  }
  else if (predicates[0] && predicates[1] && true && true && predicates[2] && node[0][0] == node[1][0] && node[0][1] == node[1][1]) {
    return rewrite_35_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_35(TNode node, const bool* predicates) {
  if (predicates[0] && true && true) {
    return rewrite_28_0(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBVSpecialRewriter::RewriteBITVECTOR_SLT(TNode node,  bool prewrite) {
  bool predicates[3];
  for (int i = 0; i < 3; i++) {
    predicates[i] = false;
  }
  predicates[0] = node.getKind() == kind::BITVECTOR_SLT && node.getNumChildren() == 2;
  if (node.getNumChildren() > 0) {
    predicates[1] = node[0].getKind() == kind::BITVECTOR_PLUS && node[0].getNumChildren() == 2;
  }
  if (node.getNumChildren() > 1) {
    predicates[2] = node[1].getKind() == kind::BITVECTOR_PLUS && node[1].getNumChildren() == 2;
  }
  Node response;
  if (TheoryBVSpecialRewriter::enabled[35]) {
    response = rewrite_35(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[28]) {
    response = rewrite_28(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBVSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
