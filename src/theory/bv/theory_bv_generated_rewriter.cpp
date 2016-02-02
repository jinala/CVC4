#include "options/bv_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

static RewriteResponse RewritePlus(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::BITVECTOR_PLUS &&
      node.getNumChildren() == 2) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 1));
  }
  return RewriteResponse(REWRITE_DONE, node);
}



void TheoryBVSpecialRewriter::initializeRewrites() {

  for(unsigned i = 0; i < kind::LAST_KIND; ++i) {
    d_rewriteTable[i] = IdentityRewrite; //UndefinedRewrite;
  }
  
  d_rewriteTable[kind::BITVECTOR_PLUS] = RewritePlus;
  
}

