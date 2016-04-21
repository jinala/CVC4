#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"
#include "options/main_options.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;

Node rewrite_53_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[53]++;
  return utils::mkSpecialBool(children, 53);
}
Node rewrite_53_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[53]++;
  return utils::mkSpecialBool(children, 53);
}
Node rewrite_53_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[53]++;
  return utils::mkSpecialBool(children, 53);
}
Node rewrite_53_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[53]++;
  return utils::mkSpecialBool(children, 53);
}
Node rewrite_53_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[53]++;
  return utils::mkSpecialBool(children, 53);
}
Node rewrite_53_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[53]++;
  return utils::mkSpecialBool(children, 53);
}
Node rewrite_53_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[53]++;
  return utils::mkSpecialBool(children, 53);
}
Node rewrite_53_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[53]++;
  return utils::mkSpecialBool(children, 53);
}
Node rewrite_53_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[53]++;
  return utils::mkSpecialBool(children, 53);
}
Node rewrite_53_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[53]++;
  return utils::mkSpecialBool(children, 53);
}
Node rewrite_53_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[53]++;
  return utils::mkSpecialBool(children, 53);
}
Node rewrite_53_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[53]++;
  return utils::mkSpecialBool(children, 53);
}
Node rewrite_22_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[22]++;
  return utils::mkSpecialBool(children, 22);
}
Node rewrite_22_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[22]++;
  return utils::mkSpecialBool(children, 22);
}
Node rewrite_22_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[22]++;
  return utils::mkSpecialBool(children, 22);
}
Node rewrite_22_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[22]++;
  return utils::mkSpecialBool(children, 22);
}
Node rewrite_30_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[30]++;
  return utils::mkSpecialBool(children, 30);
}
Node rewrite_30_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[30]++;
  return utils::mkSpecialBool(children, 30);
}
Node rewrite_30_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[30]++;
  return utils::mkSpecialBool(children, 30);
}
Node rewrite_30_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[30]++;
  return utils::mkSpecialBool(children, 30);
}
Node rewrite_30_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[30]++;
  return utils::mkSpecialBool(children, 30);
}
Node rewrite_30_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[30]++;
  return utils::mkSpecialBool(children, 30);
}
Node rewrite_12_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_21_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[21]++;
  return utils::mkSpecialBool(children, 21);
}
Node rewrite_21_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[21]++;
  return utils::mkSpecialBool(children, 21);
}
Node rewrite_21_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[2]);
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[21]++;
  return utils::mkSpecialBool(children, 21);
}
Node rewrite_21_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[21]++;
  return utils::mkSpecialBool(children, 21);
}
Node rewrite_21_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[21]++;
  return utils::mkSpecialBool(children, 21);
}
Node rewrite_21_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[2]);
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[21]++;
  return utils::mkSpecialBool(children, 21);
}
Node rewrite_6_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[6]++;
  return utils::mkSpecialBool(children, 6);
}
Node rewrite_6_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[6]++;
  return utils::mkSpecialBool(children, 6);
}
Node rewrite_6(TNode node, const bool* predicates) {
  if (predicates[1] && true && true && predicates[2] && node[1] == node[2][0] && true) {
    return rewrite_53_0(node);
  }
  else if (predicates[1] && true && predicates[7] && true && node[0] == node[1][1] && true) {
    return rewrite_53_1(node);
  }
  else if (predicates[1] && true && true && predicates[2] && true && node[0] == node[2][1]) {
    return rewrite_53_2(node);
  }
  else if (predicates[1] && predicates[4] && true && true && true && node[0][0] == node[2]) {
    return rewrite_53_3(node);
  }
  else if (predicates[1] && true && true && predicates[2] && true && node[1] == node[2][1]) {
    return rewrite_53_4(node);
  }
  else if (predicates[1] && true && predicates[7] && true && true && node[1][1] == node[2]) {
    return rewrite_53_5(node);
  }
  else if (predicates[1] && true && predicates[7] && node[0] == node[1][0] && true && true) {
    return rewrite_53_6(node);
  }
  else if (predicates[1] && true && predicates[7] && true && true && node[1][0] == node[2]) {
    return rewrite_53_7(node);
  }
  else if (predicates[1] && predicates[4] && true && true && node[0][1] == node[1] && true) {
    return rewrite_53_8(node);
  }
  else if (predicates[1] && predicates[4] && true && true && true && node[0][1] == node[2]) {
    return rewrite_53_9(node);
  }
  else if (predicates[1] && true && true && predicates[2] && node[0] == node[2][0] && true) {
    return rewrite_53_10(node);
  }
  else if (predicates[1] && predicates[4] && true && true && node[0][0] == node[1] && true) {
    return rewrite_53_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_53(TNode node, const bool* predicates) {
  if (predicates[5] && true && predicates[7] && true && true) {
    return rewrite_22_0(node);
  }
  else if (predicates[5] && predicates[4] && true && true && true) {
    return rewrite_22_1(node);
  }
  else if (predicates[5] && predicates[4] && true && true && true) {
    return rewrite_22_2(node);
  }
  else if (predicates[5] && true && predicates[7] && true && true) {
    return rewrite_22_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_22(TNode node, const bool* predicates) {
  if (predicates[1] && true && predicates[0] && true && true) {
    return rewrite_30_0(node);
  }
  else if (predicates[1] && true && true && predicates[6] && true) {
    return rewrite_30_1(node);
  }
  else if (predicates[1] && true && predicates[0] && true && true) {
    return rewrite_30_2(node);
  }
  else if (predicates[1] && true && true && predicates[6] && true) {
    return rewrite_30_3(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true) {
    return rewrite_30_4(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true) {
    return rewrite_30_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_30(TNode node, const bool* predicates) {
  if (predicates[5] && true && predicates[0] && true) {
    return rewrite_12_0(node);
  }
  else if (predicates[5] && predicates[3] && true && true) {
    return rewrite_12_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_12(TNode node, const bool* predicates) {
  if (predicates[1] && true && true && true) {
    return rewrite_21_0(node);
  }
  else if (predicates[1] && true && true && true) {
    return rewrite_21_1(node);
  }
  else if (predicates[1] && true && true && true) {
    return rewrite_21_2(node);
  }
  else if (predicates[1] && true && true && true) {
    return rewrite_21_3(node);
  }
  else if (predicates[1] && true && true && true) {
    return rewrite_21_4(node);
  }
  else if (predicates[1] && true && true && true) {
    return rewrite_21_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_21(TNode node, const bool* predicates) {
  if (predicates[5] && true && true) {
    return rewrite_6_0(node);
  }
  else if (predicates[5] && true && true) {
    return rewrite_6_1(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBoolSpecialRewriter::RewriteOR(TNode node,  bool prewrite) {
  bool predicates[8];
  for (int i = 0; i < 8; i++) {
    predicates[i] = false;
  }
  predicates[1] = node.getKind() == kind::OR && node.getNumChildren() == 3;
  predicates[5] = node.getKind() == kind::OR && node.getNumChildren() == 2;
  if (node.getNumChildren() > 0) {
    predicates[3] = node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1;
    predicates[4] = node[0].getKind() == kind::AND && node[0].getNumChildren() == 2;
  }
  if (node.getNumChildren() > 1) {
    predicates[0] = node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1;
    predicates[7] = node[1].getKind() == kind::AND && node[1].getNumChildren() == 2;
  }
  if (node.getNumChildren() > 2) {
    predicates[2] = node[2].getKind() == kind::AND && node[2].getNumChildren() == 2;
    predicates[6] = node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1;
  }
  Node response;
  if (TheoryBoolSpecialRewriter::enabled[53]) {
    response = rewrite_53(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[22]) {
    response = rewrite_22(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[30]) {
    response = rewrite_30(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[12]) {
    response = rewrite_12(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[21]) {
    response = rewrite_21(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[6]) {
    response = rewrite_6(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
