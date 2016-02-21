#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"
#include "options/main_options.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;

RewriteResponse TheoryBoolSpecialRewriter::RewriteITE(TNode node, bool prerewrite) {
  if (node.getKind() == kind::ITE && node.getNumChildren() == 3 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[2]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[250]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 250));
  }
  else if (node.getKind() == kind::ITE && node.getNumChildren() == 3 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[2]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[212]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 212));
  }
  else if (node.getKind() == kind::ITE && node.getNumChildren() == 3 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[2]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[215]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 215));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
