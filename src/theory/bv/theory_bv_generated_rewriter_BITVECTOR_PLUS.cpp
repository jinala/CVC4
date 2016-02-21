#include "options/bv_options.h"
#include "options/main_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

Node rewrite_7_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[7]++;
  return utils::mkSpecialFixedWidth(children, 7);
}
Node rewrite_7_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[7]++;
  return utils::mkSpecialFixedWidth(children, 7);
}
Node rewrite_6_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[6]++;
  return utils::mkSpecialFixedWidth(children, 6);
}
Node rewrite_6_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[6]++;
  return utils::mkSpecialFixedWidth(children, 6);
}
Node rewrite_6(TNode node, const bool* predicates) {
  if (predicates[0] && true && predicates[1] && true) {
    return rewrite_7_0(node);
  }
  else if (predicates[0] && predicates[2] && true && true) {
    return rewrite_7_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_7(TNode node, const bool* predicates) {
  if (predicates[0] && true && true) {
    return rewrite_6_0(node);
  }
  else if (predicates[0] && true && true) {
    return rewrite_6_1(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBVSpecialRewriter::RewriteBITVECTOR_PLUS(TNode node,  bool prewrite) {
  bool predicates[3];
  for (int i = 0; i < 3; i++) {
    predicates[i] = false;
  }
  predicates[0] = node.getKind() == kind::BITVECTOR_PLUS && node.getNumChildren() == 2;
  if (node.getNumChildren() > 0) {
    predicates[2] = node[0].getKind() == kind::BITVECTOR_NEG && node[0].getNumChildren() == 1;
  }
  if (node.getNumChildren() > 1) {
    predicates[1] = node[1].getKind() == kind::BITVECTOR_NEG && node[1].getNumChildren() == 1;
  }
  Node response;
  response = rewrite_7(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_6(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
