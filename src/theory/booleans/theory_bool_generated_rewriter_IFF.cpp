#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"
#include "options/main_options.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;

Node rewrite_13_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_31_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[31]++;
  return utils::mkSpecialBool(children, 31);
}
Node rewrite_31_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[31]++;
  return utils::mkSpecialBool(children, 31);
}
Node rewrite_31_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[31]++;
  return utils::mkSpecialBool(children, 31);
}
Node rewrite_31_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[31]++;
  return utils::mkSpecialBool(children, 31);
}
Node rewrite_11_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[11]++;
  return utils::mkSpecialBool(children, 11);
}
Node rewrite_11_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[11]++;
  return utils::mkSpecialBool(children, 11);
}
Node rewrite_7_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7(TNode node, const bool* predicates) {
  if (predicates[4] && true && predicates[6] && true && true) {
    return rewrite_13_0(node);
  }
  else if (predicates[4] && predicates[2] && true && true && true) {
    return rewrite_13_1(node);
  }
  else if (predicates[4] && true && predicates[6] && true && true) {
    return rewrite_13_2(node);
  }
  else if (predicates[4] && predicates[2] && true && true && true) {
    return rewrite_13_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_13(TNode node, const bool* predicates) {
  if (predicates[4] && predicates[3] && true && true && true) {
    return rewrite_31_0(node);
  }
  else if (predicates[4] && true && predicates[5] && true && true) {
    return rewrite_31_1(node);
  }
  else if (predicates[4] && true && predicates[5] && true && true) {
    return rewrite_31_2(node);
  }
  else if (predicates[4] && predicates[3] && true && true && true) {
    return rewrite_31_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_31(TNode node, const bool* predicates) {
  if (predicates[4] && true && predicates[0] && true) {
    return rewrite_11_0(node);
  }
  else if (predicates[4] && predicates[1] && true && true) {
    return rewrite_11_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_11(TNode node, const bool* predicates) {
  if (predicates[4] && true && true) {
    return rewrite_7_0(node);
  }
  else if (predicates[4] && true && true) {
    return rewrite_7_1(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBoolSpecialRewriter::RewriteIFF(TNode node,  bool prewrite) {
  bool predicates[7];
  for (int i = 0; i < 7; i++) {
    predicates[i] = false;
  }
  predicates[4] = node.getKind() == kind::IFF && node.getNumChildren() == 2;
  if (node.getNumChildren() > 0) {
    predicates[1] = node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1;
    predicates[2] = node[0].getKind() == kind::AND && node[0].getNumChildren() == 2;
    predicates[3] = node[0].getKind() == kind::OR && node[0].getNumChildren() == 2;
  }
  if (node.getNumChildren() > 1) {
    predicates[0] = node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1;
    predicates[5] = node[1].getKind() == kind::OR && node[1].getNumChildren() == 2;
    predicates[6] = node[1].getKind() == kind::AND && node[1].getNumChildren() == 2;
  }
  Node response;
  if (TheoryBoolSpecialRewriter::enabled[13]) {
    response = rewrite_13(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[31]) {
    response = rewrite_31(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[11]) {
    response = rewrite_11(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[7]) {
    response = rewrite_7(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
