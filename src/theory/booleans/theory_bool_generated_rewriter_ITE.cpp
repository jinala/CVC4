#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"
#include "options/main_options.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;

Node rewrite_8_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_3_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[3]++;
  return utils::mkSpecialBool(children, 3);
}
Node rewrite_3(TNode node, const bool* predicates) {
  if (predicates[0] && predicates[1] && true && true && true) {
    return rewrite_8_0(node);
  }
  else {
    return node;
  }
}
Node rewrite_8(TNode node, const bool* predicates) {
  if (predicates[0] && true && true && true) {
    return rewrite_3_0(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBoolSpecialRewriter::RewriteITE(TNode node,  bool prewrite) {
  bool predicates[2];
  for (int i = 0; i < 2; i++) {
    predicates[i] = false;
  }
  predicates[0] = node.getKind() == kind::ITE && node.getNumChildren() == 3;
  if (node.getNumChildren() > 0) {
    predicates[1] = node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1;
  }
  Node response;
  if (TheoryBoolSpecialRewriter::enabled[8]) {
    response = rewrite_8(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[3]) {
    response = rewrite_3(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
