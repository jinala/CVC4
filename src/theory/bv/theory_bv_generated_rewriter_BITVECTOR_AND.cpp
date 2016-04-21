#include "options/bv_options.h"
#include "options/main_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

Node rewrite_28_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[28]++;
  return utils::mkSpecialFixedWidth(children, 28);
}
Node rewrite_28_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[28]++;
  return utils::mkSpecialFixedWidth(children, 28);
}
Node rewrite_28_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[28]++;
  return utils::mkSpecialFixedWidth(children, 28);
}
Node rewrite_28_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[28]++;
  return utils::mkSpecialFixedWidth(children, 28);
}
Node rewrite_38_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[38]++;
  return utils::mkSpecialFixedWidth(children, 38);
}
Node rewrite_38_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[38]++;
  return utils::mkSpecialFixedWidth(children, 38);
}
Node rewrite_38_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[38]++;
  return utils::mkSpecialFixedWidth(children, 38);
}
Node rewrite_38_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[38]++;
  return utils::mkSpecialFixedWidth(children, 38);
}
Node rewrite_38_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[38]++;
  return utils::mkSpecialFixedWidth(children, 38);
}
Node rewrite_38_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[38]++;
  return utils::mkSpecialFixedWidth(children, 38);
}
Node rewrite_50_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[50]++;
  return utils::mkSpecialFixedWidth(children, 50);
}
Node rewrite_50_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[50]++;
  return utils::mkSpecialFixedWidth(children, 50);
}
Node rewrite_50_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[50]++;
  return utils::mkSpecialFixedWidth(children, 50);
}
Node rewrite_50_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[50]++;
  return utils::mkSpecialFixedWidth(children, 50);
}
Node rewrite_23_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[23]++;
  return utils::mkSpecialFixedWidth(children, 23);
}
Node rewrite_23_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[23]++;
  return utils::mkSpecialFixedWidth(children, 23);
}
Node rewrite_32_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[32]++;
  return utils::mkSpecialFixedWidth(children, 32);
}
Node rewrite_32_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[2]);
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[32]++;
  return utils::mkSpecialFixedWidth(children, 32);
}
Node rewrite_32_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[2]);
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[32]++;
  return utils::mkSpecialFixedWidth(children, 32);
}
Node rewrite_32_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[32]++;
  return utils::mkSpecialFixedWidth(children, 32);
}
Node rewrite_32_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[32]++;
  return utils::mkSpecialFixedWidth(children, 32);
}
Node rewrite_32_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[32]++;
  return utils::mkSpecialFixedWidth(children, 32);
}
Node rewrite_14_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[14]++;
  return utils::mkSpecialFixedWidth(children, 14);
}
Node rewrite_14_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[14]++;
  return utils::mkSpecialFixedWidth(children, 14);
}
Node rewrite_14(TNode node, const bool* predicates) {
  if (predicates[7] && true && predicates[8] && true && true) {
    return rewrite_28_0(node);
  }
  else if (predicates[7] && true && predicates[8] && true && true) {
    return rewrite_28_1(node);
  }
  else if (predicates[7] && predicates[4] && true && true && true) {
    return rewrite_28_2(node);
  }
  else if (predicates[7] && predicates[4] && true && true && true) {
    return rewrite_28_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_28(TNode node, const bool* predicates) {
  if (predicates[2] && predicates[5] && true && true && true) {
    return rewrite_38_0(node);
  }
  else if (predicates[2] && true && predicates[0] && true && true) {
    return rewrite_38_1(node);
  }
  else if (predicates[2] && true && true && predicates[6] && true) {
    return rewrite_38_2(node);
  }
  else if (predicates[2] && predicates[5] && true && true && true) {
    return rewrite_38_3(node);
  }
  else if (predicates[2] && true && predicates[0] && true && true) {
    return rewrite_38_4(node);
  }
  else if (predicates[2] && true && true && predicates[6] && true) {
    return rewrite_38_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_38(TNode node, const bool* predicates) {
  if (predicates[7] && true && predicates[1] && true && true) {
    return rewrite_50_0(node);
  }
  else if (predicates[7] && predicates[3] && true && true && true) {
    return rewrite_50_1(node);
  }
  else if (predicates[7] && true && predicates[1] && true && true) {
    return rewrite_50_2(node);
  }
  else if (predicates[7] && predicates[3] && true && true && true) {
    return rewrite_50_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_50(TNode node, const bool* predicates) {
  if (predicates[7] && predicates[5] && true && true) {
    return rewrite_23_0(node);
  }
  else if (predicates[7] && true && predicates[0] && true) {
    return rewrite_23_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_23(TNode node, const bool* predicates) {
  if (predicates[2] && true && true && true) {
    return rewrite_32_0(node);
  }
  else if (predicates[2] && true && true && true) {
    return rewrite_32_1(node);
  }
  else if (predicates[2] && true && true && true) {
    return rewrite_32_2(node);
  }
  else if (predicates[2] && true && true && true) {
    return rewrite_32_3(node);
  }
  else if (predicates[2] && true && true && true) {
    return rewrite_32_4(node);
  }
  else if (predicates[2] && true && true && true) {
    return rewrite_32_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_32(TNode node, const bool* predicates) {
  if (predicates[7] && true && true) {
    return rewrite_14_0(node);
  }
  else if (predicates[7] && true && true) {
    return rewrite_14_1(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBVSpecialRewriter::RewriteBITVECTOR_AND(TNode node,  bool prewrite) {
  bool predicates[9];
  for (int i = 0; i < 9; i++) {
    predicates[i] = false;
  }
  predicates[2] = node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3;
  predicates[7] = node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2;
  if (node.getNumChildren() > 0) {
    predicates[3] = node[0].getKind() == kind::BITVECTOR_XOR && node[0].getNumChildren() == 2;
    predicates[4] = node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2;
    predicates[5] = node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1;
  }
  if (node.getNumChildren() > 1) {
    predicates[0] = node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1;
    predicates[1] = node[1].getKind() == kind::BITVECTOR_XOR && node[1].getNumChildren() == 2;
    predicates[8] = node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2;
  }
  if (node.getNumChildren() > 2) {
    predicates[6] = node[2].getKind() == kind::BITVECTOR_NOT && node[2].getNumChildren() == 1;
  }
  Node response;
  if (TheoryBVSpecialRewriter::enabled[28]) {
    response = rewrite_28(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[38]) {
    response = rewrite_38(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[50]) {
    response = rewrite_50(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[23]) {
    response = rewrite_23(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[32]) {
    response = rewrite_32(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[14]) {
    response = rewrite_14(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBVSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
