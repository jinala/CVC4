#include "options/bv_options.h"
#include "options/main_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

Node rewrite_19_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[19]++;
  return utils::mkSpecialFixedWidth(children, 19);
}
Node rewrite_19_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[19]++;
  return utils::mkSpecialFixedWidth(children, 19);
}
Node rewrite_2_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[2]++;
  return utils::mkSpecialFixedWidth(children, 2);
}
Node rewrite_2_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[2]++;
  return utils::mkSpecialFixedWidth(children, 2);
}
Node rewrite_2(TNode node, const bool* predicates) {
  if (predicates[0] && true && predicates[1] && true) {
    return rewrite_19_0(node);
  }
  else if (predicates[0] && predicates[2] && true && true) {
    return rewrite_19_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_19(TNode node, const bool* predicates) {
  if (predicates[0] && true && true) {
    return rewrite_2_0(node);
  }
  else if (predicates[0] && true && true) {
    return rewrite_2_1(node);
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
  if (TheoryBVSpecialRewriter::enabled[19]) {
    response = rewrite_19(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[2]) {
    response = rewrite_2(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBVSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
