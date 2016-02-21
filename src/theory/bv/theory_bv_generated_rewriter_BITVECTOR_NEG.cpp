#include "options/bv_options.h"
#include "options/main_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

RewriteResponse TheoryBVSpecialRewriter::RewriteBITVECTOR_NEG(TNode node, bool prerewrite) {
  if (node.getKind() == kind::BITVECTOR_NEG && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[8]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 8));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
