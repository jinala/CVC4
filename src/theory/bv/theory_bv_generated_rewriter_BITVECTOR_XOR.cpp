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
  children.push_back(node[0]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[25]++;
  return utils::mkSpecialFixedWidth(children, 25);
}
Node rewrite_25_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[2]);
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[25]++;
  return utils::mkSpecialFixedWidth(children, 25);
}
Node rewrite_25_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[25]++;
  return utils::mkSpecialFixedWidth(children, 25);
}
Node rewrite_25_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[25]++;
  return utils::mkSpecialFixedWidth(children, 25);
}
Node rewrite_25_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[25]++;
  return utils::mkSpecialFixedWidth(children, 25);
}
Node rewrite_25_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[2]);
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[25]++;
  return utils::mkSpecialFixedWidth(children, 25);
}
Node rewrite_24_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[24]++;
  return utils::mkSpecialFixedWidth(children, 24);
}
Node rewrite_24_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[24]++;
  return utils::mkSpecialFixedWidth(children, 24);
}
Node rewrite_24(TNode node, const bool* predicates) {
  if (predicates[0] && true && true && true) {
    return rewrite_25_0(node);
  }
  else if (predicates[0] && true && true && true) {
    return rewrite_25_1(node);
  }
  else if (predicates[0] && true && true && true) {
    return rewrite_25_2(node);
  }
  else if (predicates[0] && true && true && true) {
    return rewrite_25_3(node);
  }
  else if (predicates[0] && true && true && true) {
    return rewrite_25_4(node);
  }
  else if (predicates[0] && true && true && true) {
    return rewrite_25_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_25(TNode node, const bool* predicates) {
  if (predicates[1] && true && true) {
    return rewrite_24_0(node);
  }
  else if (predicates[1] && true && true) {
    return rewrite_24_1(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBVSpecialRewriter::RewriteBITVECTOR_XOR(TNode node,  bool prewrite) {
  bool predicates[2];
  for (int i = 0; i < 2; i++) {
    predicates[i] = false;
  }
  predicates[0] = node.getKind() == kind::BITVECTOR_XOR && node.getNumChildren() == 3;
  predicates[1] = node.getKind() == kind::BITVECTOR_XOR && node.getNumChildren() == 2;
  Node response;
  if (TheoryBVSpecialRewriter::enabled[25]) {
    response = rewrite_25(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBVSpecialRewriter::enabled[24]) {
    response = rewrite_24(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBVSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
