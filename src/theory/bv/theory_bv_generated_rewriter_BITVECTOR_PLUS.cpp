#include "options/bv_options.h"
#include "options/main_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

Node rewrite_1_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[1]++;
  return utils::mkSpecialFixedWidth(children, 1);
}
Node rewrite_1_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[1]++;
  return utils::mkSpecialFixedWidth(children, 1);
}
Node rewrite_3_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[3]++;
  return utils::mkSpecialFixedWidth(children, 3);
}
Node rewrite_3_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[3]++;
  return utils::mkSpecialFixedWidth(children, 3);
}
Node rewrite_3(TNode node, const bool* predicates) {
  if (predicates[0] && true && predicates[1] && true) {
    return rewrite_1_0(node);
  }
  else if (predicates[0] && predicates[2] && true && true) {
    return rewrite_1_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_1(TNode node, const bool* predicates) {
  if (predicates[0] && true && true) {
    return rewrite_3_0(node);
  }
  else if (predicates[0] && true && true) {
    return rewrite_3_1(node);
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
  if (TheoryBVSpecialRewriter::enabled[1]) {
    response = rewrite_1(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[3]) {
    response = rewrite_3(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBVSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
