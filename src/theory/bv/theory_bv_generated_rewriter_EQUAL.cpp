#include "options/bv_options.h"
#include "options/main_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

RewriteResponse TheoryBVSpecialRewriter::RewriteEQUAL(TNode node, bool prerewrite) {
  if (node.getKind() == kind::EQUAL && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[4]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialPredicate(children, 4));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
