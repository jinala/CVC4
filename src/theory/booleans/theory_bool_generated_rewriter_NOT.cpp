#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"
#include "options/main_options.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;

Node rewrite_42_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[42]++;
  return utils::mkSpecialBool(children, 42);
}
Node rewrite_42_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[42]++;
  return utils::mkSpecialBool(children, 42);
}
Node rewrite_42_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[42]++;
  return utils::mkSpecialBool(children, 42);
}
Node rewrite_42_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[42]++;
  return utils::mkSpecialBool(children, 42);
}
Node rewrite_42_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[42]++;
  return utils::mkSpecialBool(children, 42);
}
Node rewrite_42_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[42]++;
  return utils::mkSpecialBool(children, 42);
}
Node rewrite_15_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[15]++;
  return utils::mkSpecialBool(children, 15);
}
Node rewrite_15_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[15]++;
  return utils::mkSpecialBool(children, 15);
}
Node rewrite_26_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[26]++;
  return utils::mkSpecialBool(children, 26);
}
Node rewrite_26_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[26]++;
  return utils::mkSpecialBool(children, 26);
}
Node rewrite_45_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[45]++;
  return utils::mkSpecialBool(children, 45);
}
Node rewrite_45_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[45]++;
  return utils::mkSpecialBool(children, 45);
}
Node rewrite_52_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[52]++;
  return utils::mkSpecialBool(children, 52);
}
Node rewrite_52(TNode node, const bool* predicates) {
  if (predicates[0] && predicates[5] && true && true && true) {
    return rewrite_42_0(node);
  }
  else if (predicates[0] && predicates[5] && true && true && true) {
    return rewrite_42_1(node);
  }
  else if (predicates[0] && predicates[5] && true && true && true) {
    return rewrite_42_2(node);
  }
  else if (predicates[0] && predicates[5] && true && true && true) {
    return rewrite_42_3(node);
  }
  else if (predicates[0] && predicates[5] && true && true && true) {
    return rewrite_42_4(node);
  }
  else if (predicates[0] && predicates[5] && true && true && true) {
    return rewrite_42_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_42(TNode node, const bool* predicates) {
  if (predicates[0] && predicates[2] && true && true) {
    return rewrite_15_0(node);
  }
  else if (predicates[0] && predicates[2] && true && true) {
    return rewrite_15_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_15(TNode node, const bool* predicates) {
  if (predicates[0] && predicates[3] && true && true) {
    return rewrite_26_0(node);
  }
  else if (predicates[0] && predicates[3] && true && true) {
    return rewrite_26_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_26(TNode node, const bool* predicates) {
  if (predicates[0] && predicates[1] && true && true) {
    return rewrite_45_0(node);
  }
  else if (predicates[0] && predicates[1] && true && true) {
    return rewrite_45_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_45(TNode node, const bool* predicates) {
  if (predicates[0] && predicates[4] && true && true) {
    return rewrite_52_0(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBoolSpecialRewriter::RewriteNOT(TNode node,  bool prewrite) {
  bool predicates[6];
  for (int i = 0; i < 6; i++) {
    predicates[i] = false;
  }
  predicates[0] = node.getKind() == kind::NOT && node.getNumChildren() == 1;
  if (node.getNumChildren() > 0) {
    predicates[1] = node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2;
    predicates[2] = node[0].getKind() == kind::AND && node[0].getNumChildren() == 2;
    predicates[3] = node[0].getKind() == kind::OR && node[0].getNumChildren() == 2;
    predicates[4] = node[0].getKind() == kind::IMPLIES && node[0].getNumChildren() == 2;
    predicates[5] = node[0].getKind() == kind::AND && node[0].getNumChildren() == 3;
  }
  Node response;
  if (TheoryBoolSpecialRewriter::enabled[42]) {
    response = rewrite_42(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[15]) {
    response = rewrite_15(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[26]) {
    response = rewrite_26(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[45]) {
    response = rewrite_45(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[52]) {
    response = rewrite_52(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
