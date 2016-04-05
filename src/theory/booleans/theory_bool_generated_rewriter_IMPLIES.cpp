#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"
#include "options/main_options.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;

Node rewrite_14_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[14]++;
  return utils::mkSpecialBool(children, 14);
}
Node rewrite_14_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[14]++;
  return utils::mkSpecialBool(children, 14);
}
Node rewrite_1_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[1]++;
  return utils::mkSpecialBool(children, 1);
}
Node rewrite_25_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[25]++;
  return utils::mkSpecialBool(children, 25);
}
Node rewrite_25(TNode node, const bool* predicates) {
  if (predicates[0] && true && predicates[2] && true && true) {
    return rewrite_14_0(node);
  }
  else if (predicates[0] && true && predicates[2] && true && true) {
    return rewrite_14_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_14(TNode node, const bool* predicates) {
  if (predicates[0] && predicates[1] && true && true) {
    return rewrite_1_0(node);
  }
  else {
    return node;
  }
}
Node rewrite_1(TNode node, const bool* predicates) {
  if (predicates[0] && true && true) {
    return rewrite_25_0(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBoolSpecialRewriter::RewriteIMPLIES(TNode node,  bool prewrite) {
  bool predicates[3];
  for (int i = 0; i < 3; i++) {
    predicates[i] = false;
  }
  predicates[0] = node.getKind() == kind::IMPLIES && node.getNumChildren() == 2;
  if (node.getNumChildren() > 0) {
    predicates[1] = node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1;
  }
  if (node.getNumChildren() > 1) {
    predicates[2] = node[1].getKind() == kind::OR && node[1].getNumChildren() == 2;
  }
  Node response;
  if (TheoryBoolSpecialRewriter::enabled[14]) {
    response = rewrite_14(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[1]) {
    response = rewrite_1(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[25]) {
    response = rewrite_25(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
