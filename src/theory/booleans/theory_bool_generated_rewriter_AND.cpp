#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"
#include "options/main_options.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;

RewriteResponse TheoryBoolSpecialRewriter::RewriteAND(TNode node, bool prerewrite) {
  if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 3 && true && true && node[1][1][2].getKind() == kind::OR && node[1][1][2].getNumChildren() == 2 && node[1][1][1] == node[1][1][2][0] && true && node[2].getKind() == kind::OR && node[2].getNumChildren() == 2 && node[1][1][2][1] == node[2][0] && node[1][1][2][0] == node[2][1]) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    children.push_back(node[2][0]);
    children.push_back(node[2][1]);
    children.push_back(node[1][1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[19]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 19));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::AND && node[1][0][0].getNumChildren() == 3 && true && true && true && node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 3 && node[1][0][0][0] == node[1][1][0] && true && node[1][0][0][1] == node[1][1][2] && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][2]);
    children.push_back(node[0]);
    children.push_back(node[2]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][1][2]);
    children.push_back(node[1][1][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[243]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 243));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::OR && node[0][1][1].getNumChildren() == 2 && true && true && node[0][1][1][0] == node[0][2] && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[266]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 266));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 2 && node[1][1][0].getKind() == kind::OR && node[1][1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0]);
    children.push_back(node[1][1][0][1]);
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][1][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[49]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 49));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true && node[2].getKind() == kind::OR && node[2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][1]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[2][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[139]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 139));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && node[0][0][1][0].getKind() == kind::AND && node[0][0][1][0].getNumChildren() == 2 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    children.push_back(node[0][0][1][0][0]);
    children.push_back(node[0][0][1][0][1]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[198]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 198));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::NOT && node[1][1].getNumChildren() == 1 && node[1][1][0].getKind() == kind::AND && node[1][1][0].getNumChildren() == 2 && true && node[0] == node[1][1][0][1] && node[1][1][0][0] == node[2]) {
    std::vector<Node> children;
    children.push_back(node[1][1][0][1]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[235]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 235));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::AND && node[0][0][0].getNumChildren() == 3 && true && true && node[0][0][0][2].getKind() == kind::NOT && node[0][0][0][2].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    children.push_back(node[0][0][0][2][0]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[240]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 240));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::AND && node[0][0][0].getNumChildren() == 3 && true && true && true && true && true && node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][2]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[2][0]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[242]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 242));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 3 && true && node[0][1][1].getKind() == kind::NOT && node[0][1][1].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[258]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 258));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3 && node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1 && node[0][0][0][0].getKind() == kind::AND && node[0][0][0][0].getNumChildren() == 2 && true && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][2]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    children.push_back(node[0][0][0][0][0]);
    children.push_back(node[0][0][0][0][1]);
    children.push_back(node[0][0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[262]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 262));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[1][2]);
    children.push_back(node[1][1]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[265]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 265));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 2 && true && node[1][1][1].getKind() == kind::OR && node[1][1][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[1][2]);
    children.push_back(node[0][0]);
    children.push_back(node[1][1][1][0]);
    children.push_back(node[1][1][1][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[272]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 272));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && true && node[2].getKind() == kind::OR && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::AND && node[2][0].getNumChildren() == 3 && true && true && node[0][1] == node[2][0][2] && true) {
    std::vector<Node> children;
    children.push_back(node[2][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[2][0][1]);
    children.push_back(node[2][0][2]);
    children.push_back(node[2][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[68]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 68));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 3 && node[0][1][0].getKind() == kind::OR && node[0][1][0].getNumChildren() == 2 && true && true && node[0][1][0][1] == node[0][1][1] && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[95]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 95));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::NOT && node[1][1].getNumChildren() == 1 && node[1][1][0].getKind() == kind::IFF && node[1][1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][1][0][1]);
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[118]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 118));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && true && true && node[2].getKind() == kind::OR && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::NOT && node[2][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][1]);
    children.push_back(node[1]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[2][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[132]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 132));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && true && node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 2 && true && node[1][1][1].getKind() == kind::NOT && node[1][1][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[2]);
    children.push_back(node[1][1][1][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[145]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 145));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && true && node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[2][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[149]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 149));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::NOT && node[1][1].getNumChildren() == 1 && node[0][1] == node[1][1][0] && node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[2][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[158]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 158));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::NOT && node[1][0][0].getNumChildren() == 1 && true && true && node[2].getKind() == kind::OR && node[2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[0]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[2][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[202]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 202));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::OR && node[0][1][1].getNumChildren() == 2 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0][1][1][1]);
    children.push_back(node[0][1][1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[205]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 205));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[1][1]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[216]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 216));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::IFF && node[0][0][0].getNumChildren() == 2 && node[0][0][0][0].getKind() == kind::AND && node[0][0][0][0].getNumChildren() == 2 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[0][0][0][0][0]);
    children.push_back(node[0][0][0][0][1]);
    children.push_back(node[0][0][0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[219]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 219));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && true && node[0][0][0] == node[1][1] && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[1][1]);
    children.push_back(node[0][1]);
    children.push_back(node[1][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[231]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 231));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && node[0][1][0].getKind() == kind::NOT && node[0][1][0].getNumChildren() == 1 && true && node[0][1][1].getKind() == kind::NOT && node[0][1][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[2]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[234]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 234));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1 && true && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][2]);
    children.push_back(node[1][1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[260]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 260));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 2 && true && node[1][1][1].getKind() == kind::OR && node[1][1][1].getNumChildren() == 2 && node[1][1][1][0].getKind() == kind::NOT && node[1][1][1][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    children.push_back(node[1][1][1][0][0]);
    children.push_back(node[1][1][1][1]);
    children.push_back(node[1][1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[278]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 278));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && true && node[0][0][2].getKind() == kind::NOT && node[0][0][2].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[2]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][2][0]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[280]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 280));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && true && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[1][2]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 12));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && node[0][1] == node[1][0][0] && node[1][1].getKind() == kind::NOT && node[1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[100]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 100));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::IFF && node[0][0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[123]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 123));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && true && true && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[0][2]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0][1][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[127]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 127));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[144]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 144));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 3 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][2]);
    children.push_back(node[0][1][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[154]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 154));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::OR && node[1][0][0].getNumChildren() == 2 && true && true && true && true && node[1][0][0][1] == node[1][2]) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    children.push_back(node[1][2]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[174]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 174));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::NOT && node[1][0][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[178]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 178));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 3 && node[0][1][0].getKind() == kind::NOT && node[0][1][0].getNumChildren() == 1 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[220]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 220));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 3 && true && true && node[1][2].getKind() == kind::AND && node[1][2].getNumChildren() == 2 && node[1][2][0].getKind() == kind::OR && node[1][2][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    children.push_back(node[1][2][0][1]);
    children.push_back(node[1][2][0][0]);
    children.push_back(node[1][2][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[230]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 230));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && node[1][0][1].getKind() == kind::NOT && node[1][0][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1][0][1][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[273]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 273));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1]);
    children.push_back(node[1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[23]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 23));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && true && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[34]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 34));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::OR && node[0][0][0].getNumChildren() == 2 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[38]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 38));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[88]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 88));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3 && node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[108]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 108));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 2 && true && node[1][1][1].getKind() == kind::NOT && node[1][1][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[0]);
    children.push_back(node[1][1][1][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[112]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 112));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && true && node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[117]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 117));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::AND && node[0][0][0].getNumChildren() == 2 && true && true && true && node[0][0][0][1] == node[1] && node[0][0][0][0] == node[2]) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[1]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[153]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 153));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::AND && node[0][2].getNumChildren() == 2 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0][2][1]);
    children.push_back(node[0][2][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[155]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 155));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0][2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[201]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 201));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && true && node[2].getKind() == kind::OR && node[2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[2][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[204]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 204));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true && node[2].getKind() == kind::OR && node[2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[2][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[224]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 224));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[227]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 227));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::OR && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::AND && node[2][0].getNumChildren() == 3 && true && node[1] == node[2][0][1] && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][1]);
    children.push_back(node[0]);
    children.push_back(node[2][0][0]);
    children.push_back(node[2][0][2]);
    children.push_back(node[2][0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[25]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 25));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3 && true && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[39]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 39));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::OR && node[2].getNumChildren() == 3 && true && true && node[2][2].getKind() == kind::AND && node[2][2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][1]);
    children.push_back(node[0]);
    children.push_back(node[1]);
    children.push_back(node[2][2][0]);
    children.push_back(node[2][2][1]);
    children.push_back(node[2][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[44]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 44));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && node[0][1][0] == node[1][1]) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[61]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 61));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[89]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 89));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true && node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1 && node[2][0].getKind() == kind::AND && node[2][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[2][0][0]);
    children.push_back(node[2][0][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[104]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 104));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[137]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 137));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[183]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 183));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::IFF && node[0][0][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[184]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 184));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && true && node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[2][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[191]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 191));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1 && node[2][0].getKind() == kind::AND && node[2][0].getNumChildren() == 2 && node[0] == node[2][0][0] && node[2][0][1].getKind() == kind::NOT && node[2][0][1].getNumChildren() == 1 && node[1] == node[2][0][1][0]) {
    std::vector<Node> children;
    children.push_back(node[2][0][1][0]);
    children.push_back(node[2][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[206]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 206));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[253]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 253));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && true && node[2].getKind() == kind::OR && node[2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[0]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[2][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[15]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 15));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][2]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[16]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 16));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 3 && true && true && node[1][2].getKind() == kind::AND && node[1][2].getNumChildren() == 2 && true && node[1][0] == node[1][2][1]) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1][2][0]);
    children.push_back(node[1][2][1]);
    children.push_back(node[1][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[60]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 60));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[65]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 65));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[85]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 85));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[103]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 103));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[110]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 110));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[115]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 115));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::AND && node[0][2].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][2][1]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[129]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 129));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 2 && true && node[0] == node[1][1][1] && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[173]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 173));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true && node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[180]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 180));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && node[0] == node[1][0][0] && node[1][1].getKind() == kind::NOT && node[1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[259]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 259));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[11]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 11));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[43]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 43));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[91]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 91));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[124]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 124));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1 && node[2][0].getKind() == kind::AND && node[2][0].getNumChildren() == 2 && node[1] == node[2][0][0] && true) {
    std::vector<Node> children;
    children.push_back(node[2][0][0]);
    children.push_back(node[2][0][1]);
    children.push_back(node[0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[157]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 157));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][2]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[238]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 238));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[72]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 72));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][2]);
    children.push_back(node[1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[73]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 73));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[111]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 111));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && node[0][1][0] == node[1]) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[121]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 121));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[210]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 210));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && true && node[0][0] == node[2]) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[29]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 29));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[31]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 31));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[32]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 32));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[48]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 48));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[22]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 22));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[37]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 37));
  }
  return RewriteResponse(REWRITE_DONE, node);
}

