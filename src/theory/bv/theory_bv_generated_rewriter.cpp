#include "options/bv_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

static RewriteResponse RewriteBITVECTOR_PLUS(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::BITVECTOR_PLUS && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 0));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteBITVECTOR_ULT(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::BITVECTOR_ULT && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 1));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteBITVECTOR_AND(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 2));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
void TheoryBVSpecialRewriter::initializeRewrites() {
  for (unsigned i = 0; i < kind::LAST_KIND; i++) {
    d_rewriteTable[i] = IdentityRewrite;
  }
  d_rewriteTable[kind::BITVECTOR_PLUS] = RewriteBITVECTOR_PLUS;
  d_rewriteTable[kind::BITVECTOR_ULT] = RewriteBITVECTOR_ULT;
  d_rewriteTable[kind::BITVECTOR_AND] = RewriteBITVECTOR_AND;
}
