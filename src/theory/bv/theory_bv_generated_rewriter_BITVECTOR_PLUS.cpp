#include "options/bv_options.h"
#include "options/main_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

RewriteResponse TheoryBVSpecialRewriter::RewriteBITVECTOR_PLUS(TNode node, bool prerewrite) {
  if (node.getKind() == kind::BITVECTOR_PLUS && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NEG && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[0]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 0));
  }
  else if (node.getKind() == kind::BITVECTOR_PLUS && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[5]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 5));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
