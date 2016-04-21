#include "options/bv_options.h"
#include "options/main_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

Node rewrite_48_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[48]++;
  return utils::mkSpecialFixedWidth(children, 48);
}
Node rewrite_48_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[48]++;
  return utils::mkSpecialFixedWidth(children, 48);
}
Node rewrite_48_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[48]++;
  return utils::mkSpecialFixedWidth(children, 48);
}
Node rewrite_48_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[48]++;
  return utils::mkSpecialFixedWidth(children, 48);
}
Node rewrite_49_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[49]++;
  return utils::mkSpecialFixedWidth(children, 49);
}
Node rewrite_49_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[49]++;
  return utils::mkSpecialFixedWidth(children, 49);
}
Node rewrite_49_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[49]++;
  return utils::mkSpecialFixedWidth(children, 49);
}
Node rewrite_49_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[49]++;
  return utils::mkSpecialFixedWidth(children, 49);
}
Node rewrite_41_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[41]++;
  return utils::mkSpecialFixedWidth(children, 41);
}
Node rewrite_41_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[2]);
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[41]++;
  return utils::mkSpecialFixedWidth(children, 41);
}
Node rewrite_41_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[41]++;
  return utils::mkSpecialFixedWidth(children, 41);
}
Node rewrite_41_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[41]++;
  return utils::mkSpecialFixedWidth(children, 41);
}
Node rewrite_41_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[41]++;
  return utils::mkSpecialFixedWidth(children, 41);
}
Node rewrite_41_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[2]);
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[41]++;
  return utils::mkSpecialFixedWidth(children, 41);
}
Node rewrite_16_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[16]++;
  return utils::mkSpecialFixedWidth(children, 16);
}
Node rewrite_16_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[16]++;
  return utils::mkSpecialFixedWidth(children, 16);
}
Node rewrite_16(TNode node, const bool* predicates) {
  if (predicates[0] && true && predicates[5] && true && true) {
    return rewrite_48_0(node);
  }
  else if (predicates[0] && predicates[2] && true && true && true) {
    return rewrite_48_1(node);
  }
  else if (predicates[0] && true && predicates[5] && true && true) {
    return rewrite_48_2(node);
  }
  else if (predicates[0] && predicates[2] && true && true && true) {
    return rewrite_48_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_48(TNode node, const bool* predicates) {
  if (predicates[0] && true && predicates[4] && true && true) {
    return rewrite_49_0(node);
  }
  else if (predicates[0] && predicates[3] && true && true && true) {
    return rewrite_49_1(node);
  }
  else if (predicates[0] && predicates[3] && true && true && true) {
    return rewrite_49_2(node);
  }
  else if (predicates[0] && true && predicates[4] && true && true) {
    return rewrite_49_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_49(TNode node, const bool* predicates) {
  if (predicates[1] && true && true && true) {
    return rewrite_41_0(node);
  }
  else if (predicates[1] && true && true && true) {
    return rewrite_41_1(node);
  }
  else if (predicates[1] && true && true && true) {
    return rewrite_41_2(node);
  }
  else if (predicates[1] && true && true && true) {
    return rewrite_41_3(node);
  }
  else if (predicates[1] && true && true && true) {
    return rewrite_41_4(node);
  }
  else if (predicates[1] && true && true && true) {
    return rewrite_41_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_41(TNode node, const bool* predicates) {
  if (predicates[0] && true && true) {
    return rewrite_16_0(node);
  }
  else if (predicates[0] && true && true) {
    return rewrite_16_1(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBVSpecialRewriter::RewriteBITVECTOR_XOR(TNode node,  bool prewrite) {
  bool predicates[6];
  for (int i = 0; i < 6; i++) {
    predicates[i] = false;
  }
  predicates[0] = node.getKind() == kind::BITVECTOR_XOR && node.getNumChildren() == 2;
  predicates[1] = node.getKind() == kind::BITVECTOR_XOR && node.getNumChildren() == 3;
  if (node.getNumChildren() > 0) {
    predicates[2] = node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2;
    predicates[3] = node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2;
  }
  if (node.getNumChildren() > 1) {
    predicates[4] = node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2;
    predicates[5] = node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2;
  }
  Node response;
  if (TheoryBVSpecialRewriter::enabled[48]) {
    response = rewrite_48(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[49]) {
    response = rewrite_49(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[41]) {
    response = rewrite_41(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[16]) {
    response = rewrite_16(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBVSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
