#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"
#include "options/main_options.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;

RewriteResponse TheoryBoolSpecialRewriter::RewriteIFF(TNode node, bool prerewrite) {
  if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 2 && true && true && node[0][2].getKind() == kind::OR && node[0][2].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][1]);
    children.push_back(node[0][2][0]);
    children.push_back(node[1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[162]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 162));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::AND && node[0][1][0].getNumChildren() == 2 && true && true && node[0][2].getKind() == kind::OR && node[0][2].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[0][1][0][1]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][2][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[177]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 177));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::NOT && node[0][1][1].getNumChildren() == 1 && true && node[0][2].getKind() == kind::OR && node[0][2].getNumChildren() == 2 && node[0][1][1][0] == node[0][2][0] && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][2][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[194]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 194));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && true && true && node[0][2].getKind() == kind::OR && node[0][2].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][1]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][2][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[223]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 223));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2]);
    children.push_back(node[1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[160]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 160));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && true && true && node[1][2].getKind() == kind::NOT && node[1][2].getNumChildren() == 1 && node[1][2][0].getKind() == kind::AND && node[1][2][0].getNumChildren() == 2 && node[1][2][0][0].getKind() == kind::NOT && node[1][2][0][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    children.push_back(node[1][2][0][0][0]);
    children.push_back(node[1][2][0][1]);
    children.push_back(node[1][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[264]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 264));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::AND && node[0][1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][1][0][1]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[62]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 62));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::AND && node[1][0][0].getNumChildren() == 2 && node[1][0][0][0].getKind() == kind::NOT && node[1][0][0][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1][0][0][0][0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[82]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 82));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 2 && true && true && true && node[0][2].getKind() == kind::OR && node[0][2].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][2][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[232]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 232));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2]);
    children.push_back(node[1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[143]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 143));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::NOT && node[0][1][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2]);
    children.push_back(node[1]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[190]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 190));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::AND && node[1][0][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][2]);
    children.push_back(node[0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[208]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 208));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::AND && node[1][0][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[52]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 52));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[166]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 166));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[33]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 33));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[170]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 170));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::NOT && node[1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[56]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 56));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[109]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 109));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
