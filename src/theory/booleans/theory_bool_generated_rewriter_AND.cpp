#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"
#include "options/main_options.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;

Node rewrite_39_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[39]++;
  return utils::mkSpecialBool(children, 39);
}
Node rewrite_39_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[39]++;
  return utils::mkSpecialBool(children, 39);
}
Node rewrite_39_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[39]++;
  return utils::mkSpecialBool(children, 39);
}
Node rewrite_39_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[39]++;
  return utils::mkSpecialBool(children, 39);
}
Node rewrite_39_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[39]++;
  return utils::mkSpecialBool(children, 39);
}
Node rewrite_39_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[39]++;
  return utils::mkSpecialBool(children, 39);
}
Node rewrite_39_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[39]++;
  return utils::mkSpecialBool(children, 39);
}
Node rewrite_39_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[39]++;
  return utils::mkSpecialBool(children, 39);
}
Node rewrite_39_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[39]++;
  return utils::mkSpecialBool(children, 39);
}
Node rewrite_39_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[39]++;
  return utils::mkSpecialBool(children, 39);
}
Node rewrite_39_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[39]++;
  return utils::mkSpecialBool(children, 39);
}
Node rewrite_39_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[39]++;
  return utils::mkSpecialBool(children, 39);
}
Node rewrite_24_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[24]++;
  return utils::mkSpecialBool(children, 24);
}
Node rewrite_24_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[24]++;
  return utils::mkSpecialBool(children, 24);
}
Node rewrite_24_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[24]++;
  return utils::mkSpecialBool(children, 24);
}
Node rewrite_24_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[24]++;
  return utils::mkSpecialBool(children, 24);
}
Node rewrite_36_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[36]++;
  return utils::mkSpecialBool(children, 36);
}
Node rewrite_36_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[36]++;
  return utils::mkSpecialBool(children, 36);
}
Node rewrite_36_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[36]++;
  return utils::mkSpecialBool(children, 36);
}
Node rewrite_36_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[36]++;
  return utils::mkSpecialBool(children, 36);
}
Node rewrite_36_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[36]++;
  return utils::mkSpecialBool(children, 36);
}
Node rewrite_36_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[36]++;
  return utils::mkSpecialBool(children, 36);
}
Node rewrite_10_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_20_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[2]);
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[20]++;
  return utils::mkSpecialBool(children, 20);
}
Node rewrite_20_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[2]);
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[20]++;
  return utils::mkSpecialBool(children, 20);
}
Node rewrite_20_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[20]++;
  return utils::mkSpecialBool(children, 20);
}
Node rewrite_20_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[20]++;
  return utils::mkSpecialBool(children, 20);
}
Node rewrite_20_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[20]++;
  return utils::mkSpecialBool(children, 20);
}
Node rewrite_20_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[20]++;
  return utils::mkSpecialBool(children, 20);
}
Node rewrite_8_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8(TNode node, const bool* predicates) {
  if (predicates[4] && predicates[3] && true && true && true && node[0][0] == node[2]) {
    return rewrite_39_0(node);
  }
  else if (predicates[4] && true && predicates[6] && true && node[0] == node[1][1] && true) {
    return rewrite_39_1(node);
  }
  else if (predicates[4] && true && true && predicates[7] && node[0] == node[2][0] && true) {
    return rewrite_39_2(node);
  }
  else if (predicates[4] && predicates[3] && true && true && node[0][1] == node[1] && true) {
    return rewrite_39_3(node);
  }
  else if (predicates[4] && true && predicates[6] && node[0] == node[1][0] && true && true) {
    return rewrite_39_4(node);
  }
  else if (predicates[4] && true && true && predicates[7] && true && node[1] == node[2][1]) {
    return rewrite_39_5(node);
  }
  else if (predicates[4] && predicates[3] && true && true && true && node[0][1] == node[2]) {
    return rewrite_39_6(node);
  }
  else if (predicates[4] && true && predicates[6] && true && true && node[1][0] == node[2]) {
    return rewrite_39_7(node);
  }
  else if (predicates[4] && true && true && predicates[7] && true && node[0] == node[2][1]) {
    return rewrite_39_8(node);
  }
  else if (predicates[4] && true && true && predicates[7] && node[1] == node[2][0] && true) {
    return rewrite_39_9(node);
  }
  else if (predicates[4] && true && predicates[6] && true && true && node[1][1] == node[2]) {
    return rewrite_39_10(node);
  }
  else if (predicates[4] && predicates[3] && true && true && node[0][0] == node[1] && true) {
    return rewrite_39_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_39(TNode node, const bool* predicates) {
  if (predicates[1] && true && predicates[6] && true && true) {
    return rewrite_24_0(node);
  }
  else if (predicates[1] && true && predicates[6] && true && true) {
    return rewrite_24_1(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true) {
    return rewrite_24_2(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true) {
    return rewrite_24_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_24(TNode node, const bool* predicates) {
  if (predicates[4] && predicates[2] && true && true && true) {
    return rewrite_36_0(node);
  }
  else if (predicates[4] && true && true && predicates[5] && true) {
    return rewrite_36_1(node);
  }
  else if (predicates[4] && true && true && predicates[5] && true) {
    return rewrite_36_2(node);
  }
  else if (predicates[4] && true && predicates[0] && true && true) {
    return rewrite_36_3(node);
  }
  else if (predicates[4] && true && predicates[0] && true && true) {
    return rewrite_36_4(node);
  }
  else if (predicates[4] && predicates[2] && true && true && true) {
    return rewrite_36_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_36(TNode node, const bool* predicates) {
  if (predicates[1] && true && predicates[0] && true) {
    return rewrite_10_0(node);
  }
  else if (predicates[1] && predicates[2] && true && true) {
    return rewrite_10_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_10(TNode node, const bool* predicates) {
  if (predicates[4] && true && true && true) {
    return rewrite_20_0(node);
  }
  else if (predicates[4] && true && true && true) {
    return rewrite_20_1(node);
  }
  else if (predicates[4] && true && true && true) {
    return rewrite_20_2(node);
  }
  else if (predicates[4] && true && true && true) {
    return rewrite_20_3(node);
  }
  else if (predicates[4] && true && true && true) {
    return rewrite_20_4(node);
  }
  else if (predicates[4] && true && true && true) {
    return rewrite_20_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_20(TNode node, const bool* predicates) {
  if (predicates[1] && true && true) {
    return rewrite_8_0(node);
  }
  else if (predicates[1] && true && true) {
    return rewrite_8_1(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBoolSpecialRewriter::RewriteAND(TNode node,  bool prewrite) {
  bool predicates[8];
  for (int i = 0; i < 8; i++) {
    predicates[i] = false;
  }
  predicates[1] = node.getKind() == kind::AND && node.getNumChildren() == 2;
  predicates[4] = node.getKind() == kind::AND && node.getNumChildren() == 3;
  if (node.getNumChildren() > 0) {
    predicates[2] = node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1;
    predicates[3] = node[0].getKind() == kind::OR && node[0].getNumChildren() == 2;
  }
  if (node.getNumChildren() > 1) {
    predicates[0] = node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1;
    predicates[6] = node[1].getKind() == kind::OR && node[1].getNumChildren() == 2;
  }
  if (node.getNumChildren() > 2) {
    predicates[5] = node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1;
    predicates[7] = node[2].getKind() == kind::OR && node[2].getNumChildren() == 2;
  }
  Node response;
  if (TheoryBoolSpecialRewriter::enabled[39]) {
    response = rewrite_39(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[24]) {
    response = rewrite_24(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[36]) {
    response = rewrite_36(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[10]) {
    response = rewrite_10(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[20]) {
    response = rewrite_20(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[8]) {
    response = rewrite_8(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
