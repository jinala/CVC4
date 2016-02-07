#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;

static RewriteResponse RewriteAND(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 3));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
void TheoryBoolSpecialRewriter::initializeRewrites() {
  for (unsigned i = 0; i < kind::LAST_KIND; i++) {
    d_rewriteTable[i] = IdentityRewrite;
  }
  d_rewriteTable[kind::AND] = RewriteAND;
}
