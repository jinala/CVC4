#include "options/bv_options.h"
#include "options/main_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

Node rewrite_34_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[34]++;
  return utils::mkSpecialFixedWidth(children, 34);
}
Node rewrite_34_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[34]++;
  return utils::mkSpecialFixedWidth(children, 34);
}
Node rewrite_34_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[34]++;
  return utils::mkSpecialFixedWidth(children, 34);
}
Node rewrite_34_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[34]++;
  return utils::mkSpecialFixedWidth(children, 34);
}
Node rewrite_34_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[34]++;
  return utils::mkSpecialFixedWidth(children, 34);
}
Node rewrite_34_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[34]++;
  return utils::mkSpecialFixedWidth(children, 34);
}
Node rewrite_51_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[51]++;
  return utils::mkSpecialFixedWidth(children, 51);
}
Node rewrite_51_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[51]++;
  return utils::mkSpecialFixedWidth(children, 51);
}
Node rewrite_51_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[51]++;
  return utils::mkSpecialFixedWidth(children, 51);
}
Node rewrite_51_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[51]++;
  return utils::mkSpecialFixedWidth(children, 51);
}
Node rewrite_51_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[51]++;
  return utils::mkSpecialFixedWidth(children, 51);
}
Node rewrite_51_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[51]++;
  return utils::mkSpecialFixedWidth(children, 51);
}
Node rewrite_29_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[29]++;
  return utils::mkSpecialFixedWidth(children, 29);
}
Node rewrite_29_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[29]++;
  return utils::mkSpecialFixedWidth(children, 29);
}
Node rewrite_44_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[44]++;
  return utils::mkSpecialFixedWidth(children, 44);
}
Node rewrite_44_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[44]++;
  return utils::mkSpecialFixedWidth(children, 44);
}
Node rewrite_44(TNode node, const bool* predicates) {
  if (predicates[4] && predicates[2] && true && true && true) {
    return rewrite_34_0(node);
  }
  else if (predicates[4] && predicates[2] && true && true && true) {
    return rewrite_34_1(node);
  }
  else if (predicates[4] && predicates[2] && true && true && true) {
    return rewrite_34_2(node);
  }
  else if (predicates[4] && predicates[2] && true && true && true) {
    return rewrite_34_3(node);
  }
  else if (predicates[4] && predicates[2] && true && true && true) {
    return rewrite_34_4(node);
  }
  else if (predicates[4] && predicates[2] && true && true && true) {
    return rewrite_34_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_34(TNode node, const bool* predicates) {
  if (predicates[4] && predicates[3] && true && true && true) {
    return rewrite_51_0(node);
  }
  else if (predicates[4] && predicates[3] && true && true && true) {
    return rewrite_51_1(node);
  }
  else if (predicates[4] && predicates[3] && true && true && true) {
    return rewrite_51_2(node);
  }
  else if (predicates[4] && predicates[3] && true && true && true) {
    return rewrite_51_3(node);
  }
  else if (predicates[4] && predicates[3] && true && true && true) {
    return rewrite_51_4(node);
  }
  else if (predicates[4] && predicates[3] && true && true && true) {
    return rewrite_51_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_51(TNode node, const bool* predicates) {
  if (predicates[4] && predicates[0] && true && true) {
    return rewrite_29_0(node);
  }
  else if (predicates[4] && predicates[0] && true && true) {
    return rewrite_29_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_29(TNode node, const bool* predicates) {
  if (predicates[4] && predicates[1] && true && true) {
    return rewrite_44_0(node);
  }
  else if (predicates[4] && predicates[1] && true && true) {
    return rewrite_44_1(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBVSpecialRewriter::RewriteBITVECTOR_NOT(TNode node,  bool prewrite) {
  bool predicates[5];
  for (int i = 0; i < 5; i++) {
    predicates[i] = false;
  }
  predicates[4] = node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1;
  if (node.getNumChildren() > 0) {
    predicates[0] = node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2;
    predicates[1] = node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2;
    predicates[2] = node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3;
    predicates[3] = node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3;
  }
  Node response;
  if (TheoryBVSpecialRewriter::enabled[34]) {
    response = rewrite_34(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[51]) {
    response = rewrite_51(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[29]) {
    response = rewrite_29(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[44]) {
    response = rewrite_44(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBVSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
