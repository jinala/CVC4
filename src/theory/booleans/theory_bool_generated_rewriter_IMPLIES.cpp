#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"
#include "options/main_options.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;

Node rewrite_36_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[36]++;
  return utils::mkSpecialBool(children, 36);
}
Node rewrite_36_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[36]++;
  return utils::mkSpecialBool(children, 36);
}
Node rewrite_24_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[24]++;
  return utils::mkSpecialBool(children, 24);
}
Node rewrite_358_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[358]++;
  return utils::mkSpecialBool(children, 358);
}
Node rewrite_358(TNode node, const bool* predicates) {
  if (predicates[0] && true && predicates[2] && true && true) {
    return rewrite_36_0(node);
  }
  else if (predicates[0] && true && predicates[2] && true && true) {
    return rewrite_36_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_36(TNode node, const bool* predicates) {
  if (predicates[0] && predicates[1] && true && true) {
    return rewrite_24_0(node);
  }
  else {
    return node;
  }
}
Node rewrite_24(TNode node, const bool* predicates) {
  if (predicates[0] && true && true) {
    return rewrite_358_0(node);
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
  response = rewrite_36(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_24(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_358(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
