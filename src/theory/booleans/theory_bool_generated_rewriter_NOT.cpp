#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"
#include "options/main_options.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;

Node rewrite_1_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[1]++;
  return utils::mkSpecialBool(children, 1);
}
Node rewrite_1_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[1]++;
  return utils::mkSpecialBool(children, 1);
}
Node rewrite_2_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[2]++;
  return utils::mkSpecialBool(children, 2);
}
Node rewrite_2_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[2]++;
  return utils::mkSpecialBool(children, 2);
}
Node rewrite_19_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[19]++;
  return utils::mkSpecialBool(children, 19);
}
Node rewrite_19_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[19]++;
  return utils::mkSpecialBool(children, 19);
}
Node rewrite_19(TNode node, const bool* predicates) {
  if (predicates[1] && predicates[3] && predicates[2] && true && predicates[0] && true) {
    return rewrite_1_0(node);
  }
  else if (predicates[1] && predicates[3] && predicates[2] && true && predicates[0] && true) {
    return rewrite_1_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_1(TNode node, const bool* predicates) {
  if (predicates[1] && predicates[3] && predicates[2] && true && true) {
    return rewrite_2_0(node);
  }
  else if (predicates[1] && predicates[3] && true && predicates[0] && true) {
    return rewrite_2_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_2(TNode node, const bool* predicates) {
  if (predicates[1] && predicates[3] && true && true) {
    return rewrite_19_0(node);
  }
  else if (predicates[1] && predicates[3] && true && true) {
    return rewrite_19_1(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBoolSpecialRewriter::RewriteNOT(TNode node,  bool prewrite) {
  bool predicates[4];
  for (int i = 0; i < 4; i++) {
    predicates[i] = false;
  }
  predicates[1] = node.getKind() == kind::NOT && node.getNumChildren() == 1;
  if (node.getNumChildren() > 0) {
    predicates[3] = node[0].getKind() == kind::AND && node[0].getNumChildren() == 2;
    if (node[0].getNumChildren() > 0) {
      predicates[2] = node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1;
    }
    if (node[0].getNumChildren() > 1) {
      predicates[0] = node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1;
    }
  }
  Node response;
  if (TheoryBoolSpecialRewriter::enabled[1]) {
    response = rewrite_1(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[2]) {
    response = rewrite_2(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[19]) {
    response = rewrite_19(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
