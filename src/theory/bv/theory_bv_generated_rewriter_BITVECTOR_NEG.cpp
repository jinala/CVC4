#include "options/bv_options.h"
#include "options/main_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

Node rewrite_18_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[18]++;
  return utils::mkSpecialFixedWidth(children, 18);
}
Node rewrite_18_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[18]++;
  return utils::mkSpecialFixedWidth(children, 18);
}
Node rewrite_18(TNode node, const bool* predicates) {
  if (predicates[1] && predicates[0] && true && true) {
    return rewrite_18_0(node);
  }
  else if (predicates[1] && predicates[0] && true && true) {
    return rewrite_18_1(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBVSpecialRewriter::RewriteBITVECTOR_NEG(TNode node,  bool prewrite) {
  bool predicates[2];
  for (int i = 0; i < 2; i++) {
    predicates[i] = false;
  }
  predicates[1] = node.getKind() == kind::BITVECTOR_NEG && node.getNumChildren() == 1;
  if (node.getNumChildren() > 0) {
    predicates[0] = node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2;
  }
  Node response;
  if (TheoryBVSpecialRewriter::enabled[18]) {
    response = rewrite_18(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBVSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
