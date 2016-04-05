#include "options/bv_options.h"
#include "options/main_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

Node rewrite_32_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[32]++;
  return utils::mkSpecialPredicate(children, 32);
}
Node rewrite_32(TNode node, const bool* predicates) {
  if (predicates[0] && true && true) {
    return rewrite_32_0(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBVSpecialRewriter::RewriteBITVECTOR_ULT(TNode node,  bool prewrite) {
  bool predicates[1];
  for (int i = 0; i < 1; i++) {
    predicates[i] = false;
  }
  predicates[0] = node.getKind() == kind::BITVECTOR_ULT && node.getNumChildren() == 2;
  Node response;
  if (TheoryBVSpecialRewriter::enabled[32]) {
    response = rewrite_32(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBVSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
