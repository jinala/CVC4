#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"
#include "options/main_options.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;

Node rewrite_5_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[2]);
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[5]++;
  return utils::mkSpecialBool(children, 5);
}
Node rewrite_5_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[2]);
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[5]++;
  return utils::mkSpecialBool(children, 5);
}
Node rewrite_5_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[5]++;
  return utils::mkSpecialBool(children, 5);
}
Node rewrite_5_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[5]++;
  return utils::mkSpecialBool(children, 5);
}
Node rewrite_5_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[5]++;
  return utils::mkSpecialBool(children, 5);
}
Node rewrite_5_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[5]++;
  return utils::mkSpecialBool(children, 5);
}
Node rewrite_15_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[15]++;
  return utils::mkSpecialBool(children, 15);
}
Node rewrite_15_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[15]++;
  return utils::mkSpecialBool(children, 15);
}
Node rewrite_15(TNode node, const bool* predicates) {
  if (predicates[1] && true && true && true) {
    return rewrite_5_0(node);
  }
  else if (predicates[1] && true && true && true) {
    return rewrite_5_1(node);
  }
  else if (predicates[1] && true && true && true) {
    return rewrite_5_2(node);
  }
  else if (predicates[1] && true && true && true) {
    return rewrite_5_3(node);
  }
  else if (predicates[1] && true && true && true) {
    return rewrite_5_4(node);
  }
  else if (predicates[1] && true && true && true) {
    return rewrite_5_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_5(TNode node, const bool* predicates) {
  if (predicates[0] && true && true) {
    return rewrite_15_0(node);
  }
  else if (predicates[0] && true && true) {
    return rewrite_15_1(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBoolSpecialRewriter::RewriteAND(TNode node,  bool prewrite) {
  bool predicates[2];
  for (int i = 0; i < 2; i++) {
    predicates[i] = false;
  }
  predicates[0] = node.getKind() == kind::AND && node.getNumChildren() == 2;
  predicates[1] = node.getKind() == kind::AND && node.getNumChildren() == 3;
  Node response;
  if (TheoryBoolSpecialRewriter::enabled[5]) {
    response = rewrite_5(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[15]) {
    response = rewrite_15(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
