#include "options/bv_options.h"
#include "options/main_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

Node rewrite_29_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  if (options::checkDuplicates()) {
  if (TheoryBVSpecialRewriter::nodes.find(node[1][0]) != TheoryBVSpecialRewriter::nodes.end()) {
    TheoryBVSpecialRewriter::nodes[node[1][0]] += 1;
  } else {
    TheoryBVSpecialRewriter::nodes[node[1][0]] = 1;
  }}
  children.push_back(node[0]);
  if (options::checkDuplicates()) {
  if (TheoryBVSpecialRewriter::nodes.find(node[0]) != TheoryBVSpecialRewriter::nodes.end()) {
    TheoryBVSpecialRewriter::nodes[node[0]] += 1;
  } else {
    TheoryBVSpecialRewriter::nodes[node[0]] = 1;
  }}
  if (options::printStats()) TheoryBVSpecialRewriter::counter[29]++;
  return utils::mkSpecialFixedWidth(children, 29);
}
Node rewrite_29_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  if (options::checkDuplicates()) {
  if (TheoryBVSpecialRewriter::nodes.find(node[0][0]) != TheoryBVSpecialRewriter::nodes.end()) {
    TheoryBVSpecialRewriter::nodes[node[0][0]] += 1;
  } else {
    TheoryBVSpecialRewriter::nodes[node[0][0]] = 1;
  }}
  children.push_back(node[1]);
  if (options::checkDuplicates()) {
  if (TheoryBVSpecialRewriter::nodes.find(node[1]) != TheoryBVSpecialRewriter::nodes.end()) {
    TheoryBVSpecialRewriter::nodes[node[1]] += 1;
  } else {
    TheoryBVSpecialRewriter::nodes[node[1]] = 1;
  }}
  if (options::printStats()) TheoryBVSpecialRewriter::counter[29]++;
  return utils::mkSpecialFixedWidth(children, 29);
}
Node rewrite_30_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  if (options::checkDuplicates()) {
  if (TheoryBVSpecialRewriter::nodes.find(node[0]) != TheoryBVSpecialRewriter::nodes.end()) {
    TheoryBVSpecialRewriter::nodes[node[0]] += 1;
  } else {
    TheoryBVSpecialRewriter::nodes[node[0]] = 1;
  }}
  children.push_back(node[1]);
  if (options::checkDuplicates()) {
  if (TheoryBVSpecialRewriter::nodes.find(node[1]) != TheoryBVSpecialRewriter::nodes.end()) {
    TheoryBVSpecialRewriter::nodes[node[1]] += 1;
  } else {
    TheoryBVSpecialRewriter::nodes[node[1]] = 1;
  }}
  if (options::printStats()) TheoryBVSpecialRewriter::counter[30]++;
  return utils::mkSpecialFixedWidth(children, 30);
}
Node rewrite_30_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  if (options::checkDuplicates()) {
  if (TheoryBVSpecialRewriter::nodes.find(node[1]) != TheoryBVSpecialRewriter::nodes.end()) {
    TheoryBVSpecialRewriter::nodes[node[1]] += 1;
  } else {
    TheoryBVSpecialRewriter::nodes[node[1]] = 1;
  }}
  children.push_back(node[0]);
  if (options::checkDuplicates()) {
  if (TheoryBVSpecialRewriter::nodes.find(node[0]) != TheoryBVSpecialRewriter::nodes.end()) {
    TheoryBVSpecialRewriter::nodes[node[0]] += 1;
  } else {
    TheoryBVSpecialRewriter::nodes[node[0]] = 1;
  }}
  if (options::printStats()) TheoryBVSpecialRewriter::counter[30]++;
  return utils::mkSpecialFixedWidth(children, 30);
}
Node rewrite_30(TNode node, const bool* predicates) {
  if (predicates[0] && true && predicates[1] && true) {
    return rewrite_29_0(node);
  }
  else if (predicates[0] && predicates[2] && true && true) {
    return rewrite_29_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_29(TNode node, const bool* predicates) {
  if (predicates[0] && true && true) {
    return rewrite_30_0(node);
  }
  else if (predicates[0] && true && true) {
    return rewrite_30_1(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBVSpecialRewriter::RewriteBITVECTOR_PLUS(TNode node,  bool prewrite) {
  bool predicates[3];
  for (int i = 0; i < 3; i++) {
    predicates[i] = false;
  }
  predicates[0] = node.getKind() == kind::BITVECTOR_PLUS && node.getNumChildren() == 2;
  if (node.getNumChildren() > 0) {
    predicates[2] = node[0].getKind() == kind::BITVECTOR_NEG && node[0].getNumChildren() == 1;
  }
  if (node.getNumChildren() > 1) {
    predicates[1] = node[1].getKind() == kind::BITVECTOR_NEG && node[1].getNumChildren() == 1;
  }
  Node response;
  if (TheoryBVSpecialRewriter::enabled[29]) {
    response = rewrite_29(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[30]) {
    response = rewrite_30(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBVSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
