#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"
#include "options/main_options.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;

RewriteResponse TheoryBoolSpecialRewriter::RewriteOR(TNode node, bool prerewrite) {
  if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::AND && node[0][1][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && node[0][0] == node[1][0][0] && node[1][0][1].getKind() == kind::NOT && node[1][0][1].getNumChildren() == 1 && node[1][0][1][0].getKind() == kind::AND && node[1][0][1][0].getNumChildren() == 2 && node[0][1][0][0] == node[1][0][1][0][0] && node[0][1][0][1] == node[1][0][1][0][1]) {
    std::vector<Node> children;
    children.push_back(node[1][0][1][0][1]);
    children.push_back(node[1][0][1][0][0]);
    children.push_back(node[1][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[175]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 175));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 3 && true && node[0][0][1].getKind() == kind::AND && node[0][0][1].getNumChildren() == 2 && true && true && node[0][0][1][1] == node[0][0][2] && true && true && node[2].getKind() == kind::AND && node[2].getNumChildren() == 2 && node[0][0][2] == node[2][0] && node[0][0][1][0] == node[2][1]) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[2][1]);
    children.push_back(node[2][0]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[58]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 58));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::OR && node[1][0].getNumChildren() == 2 && true && true && node[0][0][0] == node[1][1] && node[0][0][2] == node[1][2]) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[0][0][1]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[146]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 146));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::IFF && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::AND && node[0][0][1].getNumChildren() == 2 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && node[0][0][1][1] == node[1][0][0] && node[0][0][1][0] == node[1][0][1]) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[176]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 176));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::OR && node[1][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::OR && node[1][1].getNumChildren() == 2 && true && node[1][1][1].getKind() == kind::AND && node[1][1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0]);
    children.push_back(node[1][1][1][1]);
    children.push_back(node[1][1][1][0]);
    children.push_back(node[1][1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[80]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 80));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && true && node[2].getKind() == kind::AND && node[2].getNumChildren() == 2 && true && node[2][1].getKind() == kind::OR && node[2][1].getNumChildren() == 2 && true && node[2][1][1].getKind() == kind::NOT && node[2][1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    children.push_back(node[2][1][1][0]);
    children.push_back(node[2][1][0]);
    children.push_back(node[2][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[98]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 98));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::OR && node[1][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::OR && node[1][1].getNumChildren() == 2 && node[1][1][0].getKind() == kind::NOT && node[1][1][0].getNumChildren() == 1 && node[1][0][1] == node[1][1][0][0] && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[0]);
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[122]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 122));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::AND && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::OR && node[2][0].getNumChildren() == 2 && true && node[2][0][1].getKind() == kind::NOT && node[2][0][1].getNumChildren() == 1 && true && node[2][1].getKind() == kind::OR && node[2][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][1][1]);
    children.push_back(node[0]);
    children.push_back(node[1]);
    children.push_back(node[2][0][1][0]);
    children.push_back(node[2][0][0]);
    children.push_back(node[2][1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[128]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 128));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::OR && node[0][2].getNumChildren() == 2 && true && node[0][2][1].getKind() == kind::AND && node[0][2][1].getNumChildren() == 2 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0][2][1][1]);
    children.push_back(node[0][2][1][0]);
    children.push_back(node[0][2][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[169]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 169));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[0][0][0] == node[1][0] && node[1][1].getKind() == kind::NOT && node[1][1].getNumChildren() == 1 && node[0][0][1][0] == node[1][1][0]) {
    std::vector<Node> children;
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[187]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 187));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 3 && node[0][2] == node[1][0][0] && node[1][0][1].getKind() == kind::NOT && node[1][0][1].getNumChildren() == 1 && true && node[0][0] == node[1][0][2]) {
    std::vector<Node> children;
    children.push_back(node[1][0][1][0]);
    children.push_back(node[1][0][2]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[197]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 197));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::OR && node[1][1].getNumChildren() == 2 && true && node[1][1][1].getKind() == kind::AND && node[1][1][1].getNumChildren() == 2 && node[1][1][1][0].getKind() == kind::NOT && node[1][1][1][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][2]);
    children.push_back(node[0]);
    children.push_back(node[1][1][1][0][0]);
    children.push_back(node[1][1][1][1]);
    children.push_back(node[1][1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[211]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 211));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::OR && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::AND && node[1][0][0].getNumChildren() == 2 && true && true && node[1][0][1].getKind() == kind::NOT && node[1][0][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][2]);
    children.push_back(node[0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[218]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 218));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3 && node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1 && node[0][0][0][0].getKind() == kind::AND && node[0][0][0][0].getNumChildren() == 3 && true && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][1]);
    children.push_back(node[1]);
    children.push_back(node[0][0][0][0][1]);
    children.push_back(node[0][0][0][0][2]);
    children.push_back(node[0][0][0][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[249]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 249));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::OR && node[1][1].getNumChildren() == 2 && true && node[1][1][1].getKind() == kind::NOT && node[1][1][1].getNumChildren() == 1 && node[1][1][1][0].getKind() == kind::AND && node[1][1][1][0].getNumChildren() == 2 && true && node[1][0] == node[1][1][1][0][1] && node[1][1][1][0][0] == node[1][2]) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1][2]);
    children.push_back(node[1][1][1][0][1]);
    children.push_back(node[1][1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[277]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 277));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::IFF && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 2 && node[1][1][0].getKind() == kind::NOT && node[1][1][0].getNumChildren() == 1 && node[1][1][0][0].getKind() == kind::AND && node[1][1][0][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    children.push_back(node[1][1][0][0][1]);
    children.push_back(node[1][1][0][0][0]);
    children.push_back(node[1][1][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[83]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 83));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1 && true && true && node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 2 && node[0][0][0][0] == node[0][1][0] && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[116]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 116));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::AND && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::OR && node[2][0].getNumChildren() == 2 && node[2][0][0].getKind() == kind::NOT && node[2][0][0].getNumChildren() == 1 && true && node[2][0][1].getKind() == kind::NOT && node[2][0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    children.push_back(node[2][0][1][0]);
    children.push_back(node[2][0][0][0]);
    children.push_back(node[2][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[130]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 130));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::NOT && node[1][1].getNumChildren() == 1 && node[1][1][0].getKind() == kind::AND && node[1][1][0].getNumChildren() == 2 && true && true && node[1][1][0][0] == node[1][2]) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1][2]);
    children.push_back(node[1][1][0][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[165]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 165));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && true && true && node[1][2].getKind() == kind::OR && node[1][2].getNumChildren() == 2 && node[1][2][0].getKind() == kind::NOT && node[1][2][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1][2][0][0]);
    children.push_back(node[1][2][1]);
    children.push_back(node[1][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[195]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 195));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::OR && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::NOT && node[1][0][0].getNumChildren() == 1 && true && node[1][0][1].getKind() == kind::NOT && node[1][0][1].getNumChildren() == 1 && true && node[1][0][0][0] == node[1][1] && node[1][0][1][0] == node[2]) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[221]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 221));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::NOT && node[0][2].getNumChildren() == 1 && node[0][2][0].getKind() == kind::AND && node[0][2][0].getNumChildren() == 2 && node[0][1] == node[0][2][0][0] && node[0][2][0][1].getKind() == kind::NOT && node[0][2][0][1].getNumChildren() == 1 && node[0][0] == node[0][2][0][1][0] && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][0][1][0]);
    children.push_back(node[0][2][0][0]);
    children.push_back(node[1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[252]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 252));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && node[0][0][1][0].getKind() == kind::AND && node[0][0][1][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    children.push_back(node[0][0][1][0][0]);
    children.push_back(node[0][0][1][0][1]);
    children.push_back(node[0][0][2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[256]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 256));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::OR && node[1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][2]);
    children.push_back(node[0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[24]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 24));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::NOT && node[0][1][1].getNumChildren() == 1 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[45]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 45));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && true && true && node[2].getKind() == kind::AND && node[2].getNumChildren() == 2 && true && node[2][1].getKind() == kind::OR && node[2][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[2][1][1]);
    children.push_back(node[2][1][0]);
    children.push_back(node[2][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[57]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 57));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::IFF && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::NOT && node[1][0][0].getNumChildren() == 1 && true && node[1][0][1].getKind() == kind::NOT && node[1][0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1][0][1][0]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[66]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 66));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::OR && node[1][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::OR && node[1][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][1]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[87]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 87));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[92]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 92));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::AND && node[0][0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[97]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 97));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && true && node[0][0][1] == node[1][1] && node[0][0][2] == node[1][2]) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][2]);
    children.push_back(node[1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[113]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 113));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::IFF && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::AND && node[1][0][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[119]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 119));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1][0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[134]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 134));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && node[0][0][1][0].getKind() == kind::AND && node[0][0][1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][0][1][0][1]);
    children.push_back(node[0][0][1][0][0]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[136]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 136));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::AND && node[0][0][0].getNumChildren() == 2 && true && node[0][0][0][1].getKind() == kind::NOT && node[0][0][0][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][0][0][1][0]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[138]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 138));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::OR && node[1][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[1][2]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1][1][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[140]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 140));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::OR && node[0][2].getNumChildren() == 2 && node[0][2][0].getKind() == kind::AND && node[0][2][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[0][2][0][1]);
    children.push_back(node[0][2][0][0]);
    children.push_back(node[0][2][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[141]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 141));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::AND && node[1][0][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[164]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 164));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::AND && node[0][0][0].getNumChildren() == 2 && true && true && true && node[0][0][0][1] == node[0][1] && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2]);
    children.push_back(node[1]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[196]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 196));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::IFF && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::AND && node[1][0][0].getNumChildren() == 2 && node[1][0][0][0].getKind() == kind::NOT && node[1][0][0][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1][0][0][0][0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[217]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 217));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 2 && true && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 13));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && true && node[1][1].getKind() == kind::NOT && node[1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[26]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 26));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::OR && node[1][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::OR && node[1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[53]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 53));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[55]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 55));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::AND && node[0][0][0].getNumChildren() == 2 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[70]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 70));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::NOT && node[0][1][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[2]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[90]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 90));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && true && true && node[1][2].getKind() == kind::OR && node[1][2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][2][1]);
    children.push_back(node[1][2][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[114]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 114));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::IFF && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 3 && node[1][1][0].getKind() == kind::NOT && node[1][1][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][1][2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[171]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 171));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[186]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 186));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::NOT && node[1][1].getNumChildren() == 1 && node[1][1][0].getKind() == kind::AND && node[1][1][0].getNumChildren() == 2 && true && true && node[1][1][0][1] == node[1][2]) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1][2]);
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[188]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 188));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::OR && node[1][1].getNumChildren() == 2 && node[1][1][0].getKind() == kind::NOT && node[1][1][0].getNumChildren() == 1 && true && true && node[1][1][0][0] == node[2]) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[2]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[222]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 222));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::OR && node[1][1].getNumChildren() == 2 && node[1][1][0].getKind() == kind::NOT && node[1][1][0].getNumChildren() == 1 && node[1][0] == node[1][1][0][0] && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[236]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 236));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[237]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 237));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 2 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[14]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 14));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[27]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 27));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3 && true && true && node[0][0][2].getKind() == kind::NOT && node[0][0][2].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][0][2][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[47]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 47));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && node[0][1][0].getKind() == kind::NOT && node[0][1][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[50]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 50));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[59]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 59));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && true && node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1 && node[2][0].getKind() == kind::IFF && node[2][0].getNumChildren() == 2 && node[0][0] == node[2][0][0] && true) {
    std::vector<Node> children;
    children.push_back(node[2][0][0]);
    children.push_back(node[2][0][1]);
    children.push_back(node[1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[63]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 63));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::AND && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::OR && node[2][0].getNumChildren() == 3 && true && true && node[0] == node[2][0][2] && true) {
    std::vector<Node> children;
    children.push_back(node[2][1]);
    children.push_back(node[1]);
    children.push_back(node[2][0][0]);
    children.push_back(node[2][0][1]);
    children.push_back(node[2][0][2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[64]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 64));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::NOT && node[0][1][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[78]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 78));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::OR && node[0][2].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[0][2][2]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][2][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[84]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 84));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::NOT && node[1][1].getNumChildren() == 1 && node[1][1][0].getKind() == kind::AND && node[1][1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1][1][0][1]);
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[86]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 86));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[0][2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[101]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 101));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::IFF && node[1][0].getNumChildren() == 2 && true && node[1][0][1].getKind() == kind::AND && node[1][0][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1][1]);
    children.push_back(node[1][0][1][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[105]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 105));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::OR && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::NOT && node[1][0][0].getNumChildren() == 1 && true && true && node[1][0][0][0] == node[1][1]) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[107]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 107));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[126]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 126));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::NOT && node[1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[17]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 17));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::OR && node[1][0].getNumChildren() == 2 && true && true && true && node[1][0][1] == node[1][2]) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][2]);
    children.push_back(node[1][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[18]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 18));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[21]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 21));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[28]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 28));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][2]);
    children.push_back(node[1][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[40]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 40));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && true && node[2].getKind() == kind::AND && node[2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][1]);
    children.push_back(node[0]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[2][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[46]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 46));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 2 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[1]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[76]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 76));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::IFF && node[0][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[81]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 81));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::IFF && node[0][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[0][0][0] == node[1][0]) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[96]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 96));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::OR && node[1][1].getNumChildren() == 2 && true && true && node[1][1][1] == node[2]) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[2]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[120]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 120));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && true && true && node[1][2].getKind() == kind::OR && node[1][2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    children.push_back(node[1][2][1]);
    children.push_back(node[1][2][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[148]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 148));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[179]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 179));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::IFF && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[225]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 225));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 10));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[20]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 20));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[42]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 42));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1 && node[2][0].getKind() == kind::IFF && node[2][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[2][0][0]);
    children.push_back(node[2][0][1]);
    children.push_back(node[0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[75]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 75));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1][2]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[93]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 93));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[142]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 142));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::IFF && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[163]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 163));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[2]);
    children.push_back(node[0][2]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[41]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 41));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::IFF && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[51]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 51));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1][0]);
    children.push_back(node[2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[67]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 67));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[77]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 77));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::IFF && node[0][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[189]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 189));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[239]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 239));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[35]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 35));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[69]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 69));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::AND && node[2].getNumChildren() == 2 && node[1] == node[2][0] && true) {
    std::vector<Node> children;
    children.push_back(node[2][1]);
    children.push_back(node[2][0]);
    children.push_back(node[0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[79]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 79));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[200]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 200));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[54]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 54));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
