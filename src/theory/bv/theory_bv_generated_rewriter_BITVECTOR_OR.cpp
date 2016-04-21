#include "options/bv_options.h"
#include "options/main_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

Node rewrite_25_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[25]++;
  return utils::mkSpecialFixedWidth(children, 25);
}
Node rewrite_25_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[25]++;
  return utils::mkSpecialFixedWidth(children, 25);
}
Node rewrite_25_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[25]++;
  return utils::mkSpecialFixedWidth(children, 25);
}
Node rewrite_25_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[25]++;
  return utils::mkSpecialFixedWidth(children, 25);
}
Node rewrite_27_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[27]++;
  return utils::mkSpecialFixedWidth(children, 27);
}
Node rewrite_27_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[27]++;
  return utils::mkSpecialFixedWidth(children, 27);
}
Node rewrite_46_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[2]);
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[46]++;
  return utils::mkSpecialFixedWidth(children, 46);
}
Node rewrite_46_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[46]++;
  return utils::mkSpecialFixedWidth(children, 46);
}
Node rewrite_46_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[46]++;
  return utils::mkSpecialFixedWidth(children, 46);
}
Node rewrite_46_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[2]);
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[46]++;
  return utils::mkSpecialFixedWidth(children, 46);
}
Node rewrite_46_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[46]++;
  return utils::mkSpecialFixedWidth(children, 46);
}
Node rewrite_46_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[46]++;
  return utils::mkSpecialFixedWidth(children, 46);
}
Node rewrite_0_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[0]++;
  return utils::mkSpecialFixedWidth(children, 0);
}
Node rewrite_0_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[0]++;
  return utils::mkSpecialFixedWidth(children, 0);
}
Node rewrite_0(TNode node, const bool* predicates) {
  if (predicates[1] && true && predicates[4] && true && true) {
    return rewrite_25_0(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true) {
    return rewrite_25_1(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true) {
    return rewrite_25_2(node);
  }
  else if (predicates[1] && true && predicates[4] && true && true) {
    return rewrite_25_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_25(TNode node, const bool* predicates) {
  if (predicates[1] && true && predicates[0] && true) {
    return rewrite_27_0(node);
  }
  else if (predicates[1] && predicates[2] && true && true) {
    return rewrite_27_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_27(TNode node, const bool* predicates) {
  if (predicates[5] && true && true && true) {
    return rewrite_46_0(node);
  }
  else if (predicates[5] && true && true && true) {
    return rewrite_46_1(node);
  }
  else if (predicates[5] && true && true && true) {
    return rewrite_46_2(node);
  }
  else if (predicates[5] && true && true && true) {
    return rewrite_46_3(node);
  }
  else if (predicates[5] && true && true && true) {
    return rewrite_46_4(node);
  }
  else if (predicates[5] && true && true && true) {
    return rewrite_46_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_46(TNode node, const bool* predicates) {
  if (predicates[1] && true && true) {
    return rewrite_0_0(node);
  }
  else if (predicates[1] && true && true) {
    return rewrite_0_1(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBVSpecialRewriter::RewriteBITVECTOR_OR(TNode node,  bool prewrite) {
  bool predicates[6];
  for (int i = 0; i < 6; i++) {
    predicates[i] = false;
  }
  predicates[1] = node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2;
  predicates[5] = node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3;
  if (node.getNumChildren() > 0) {
    predicates[2] = node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1;
    predicates[3] = node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2;
  }
  if (node.getNumChildren() > 1) {
    predicates[0] = node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1;
    predicates[4] = node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2;
  }
  Node response;
  if (TheoryBVSpecialRewriter::enabled[25]) {
    response = rewrite_25(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[27]) {
    response = rewrite_27(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[46]) {
    response = rewrite_46(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[0]) {
    response = rewrite_0(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBVSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
