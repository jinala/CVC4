#include "options/bv_options.h"
#include "options/main_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

Node rewrite_23_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[23]++;
  return utils::mkSpecialFixedWidth(children, 23);
}
Node rewrite_23_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[23]++;
  return utils::mkSpecialFixedWidth(children, 23);
}
Node rewrite_23(TNode node, const bool* predicates) {
  if (predicates[0] && true && true) {
    return rewrite_23_0(node);
  }
  else if (predicates[0] && true && true) {
    return rewrite_23_1(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBVSpecialRewriter::RewriteBITVECTOR_OR(TNode node,  bool prewrite) {
  bool predicates[1];
  for (int i = 0; i < 1; i++) {
    predicates[i] = false;
  }
  predicates[0] = node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2;
  Node response;
  if (TheoryBVSpecialRewriter::enabled[23]) {
    response = rewrite_23(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBVSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
