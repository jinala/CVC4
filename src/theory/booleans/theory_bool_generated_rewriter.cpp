#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"
#include "options/main_options.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;

int counter[538];
static RewriteResponse RewriteAND(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 3 && true && true && node[1][1][2].getKind() == kind::OR && node[1][1][2].getNumChildren() == 2 && node[1][1][1] == node[1][1][2][0] && true && node[2].getKind() == kind::OR && node[2].getNumChildren() == 2 && node[1][1][2][1] == node[2][0] && node[1][1][2][0] == node[2][1]) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[2][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[19]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 19));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::AND && node[1][0][0].getNumChildren() == 3 && true && true && true && node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 3 && node[1][0][0][0] == node[1][1][0] && true && node[1][0][0][1] == node[1][1][2] && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0]);
    children.push_back(node[1][1][2]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][0][0][2]);
    children.push_back(node[0]);
    children.push_back(node[2]);
    if (options::printStats()) counter[243]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 243));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::OR && node[0][1][1].getNumChildren() == 2 && true && true && node[0][1][1][0] == node[0][2] && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][2]);
    children.push_back(node[0][1][1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[266]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 266));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 2 && node[1][1][0].getKind() == kind::OR && node[1][1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0][1]);
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0]);
    if (options::printStats()) counter[49]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 49));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true && node[2].getKind() == kind::OR && node[2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[2][0]);
    children.push_back(node[2][1]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) counter[139]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 139));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && node[0][0][1][0].getKind() == kind::AND && node[0][0][1][0].getNumChildren() == 2 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][0][0]);
    children.push_back(node[0][0][1][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    if (options::printStats()) counter[198]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 198));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::NOT && node[1][1].getNumChildren() == 1 && node[1][1][0].getKind() == kind::AND && node[1][1][0].getNumChildren() == 2 && true && node[0] == node[1][1][0][1] && node[1][1][0][0] == node[2]) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[2]);
    children.push_back(node[1][1][0][1]);
    if (options::printStats()) counter[235]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 235));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::AND && node[0][0][0].getNumChildren() == 3 && true && true && node[0][0][0][2].getKind() == kind::NOT && node[0][0][0][2].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][2][0]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    if (options::printStats()) counter[240]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 240));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::AND && node[0][0][0].getNumChildren() == 3 && true && true && true && true && true && node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][0][2]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) counter[242]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 242));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 3 && true && node[0][1][1].getKind() == kind::NOT && node[0][1][1].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][2]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    if (options::printStats()) counter[258]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 258));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3 && node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1 && node[0][0][0][0].getKind() == kind::AND && node[0][0][0][0].getNumChildren() == 2 && true && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0][0]);
    children.push_back(node[0][0][0][0][1]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][2]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    if (options::printStats()) counter[262]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 262));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][2]);
    children.push_back(node[1][1]);
    if (options::printStats()) counter[265]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 265));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 2 && true && node[1][1][1].getKind() == kind::OR && node[1][1][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1][1][1][0]);
    children.push_back(node[1][1][1][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[1][2]);
    if (options::printStats()) counter[272]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 272));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && true && node[2].getKind() == kind::OR && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::AND && node[2][0].getNumChildren() == 3 && true && true && node[0][1] == node[2][0][2] && true) {
    std::vector<Node> children;
    children.push_back(node[2][0][1]);
    children.push_back(node[2][0][2]);
    children.push_back(node[2][0][0]);
    children.push_back(node[2][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[68]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 68));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 3 && node[0][1][0].getKind() == kind::OR && node[0][1][0].getNumChildren() == 2 && true && true && node[0][1][0][1] == node[0][1][1] && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][2]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    if (options::printStats()) counter[95]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 95));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::NOT && node[1][1].getNumChildren() == 1 && node[1][1][0].getKind() == kind::IFF && node[1][1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0][1]);
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[118]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 118));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && true && true && node[2].getKind() == kind::OR && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::NOT && node[2][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[2][0][0]);
    children.push_back(node[2][1]);
    children.push_back(node[1]);
    if (options::printStats()) counter[132]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 132));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && true && node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 2 && true && node[1][1][1].getKind() == kind::NOT && node[1][1][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][1][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0]);
    children.push_back(node[2]);
    if (options::printStats()) counter[145]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 145));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && true && node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) counter[149]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 149));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::NOT && node[1][1].getNumChildren() == 1 && node[0][1] == node[1][1][0] && node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[158]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 158));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::NOT && node[1][0][0].getNumChildren() == 1 && true && true && node[2].getKind() == kind::OR && node[2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[2][1]);
    children.push_back(node[2][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[202]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 202));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::OR && node[0][1][1].getNumChildren() == 2 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][1][1][1]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[205]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 205));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][1]);
    if (options::printStats()) counter[216]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 216));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::IFF && node[0][0][0].getNumChildren() == 2 && node[0][0][0][0].getKind() == kind::AND && node[0][0][0][0].getNumChildren() == 2 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0][0]);
    children.push_back(node[0][0][0][0][1]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) counter[219]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 219));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && true && node[0][0][0] == node[1][1] && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[2]);
    if (options::printStats()) counter[231]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 231));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && node[0][1][0].getKind() == kind::NOT && node[0][1][0].getNumChildren() == 1 && true && node[0][1][1].getKind() == kind::NOT && node[0][1][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    if (options::printStats()) counter[234]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 234));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1 && true && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[1][0]);
    children.push_back(node[1][2]);
    children.push_back(node[1][1]);
    if (options::printStats()) counter[260]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 260));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 2 && true && node[1][1][1].getKind() == kind::OR && node[1][1][1].getNumChildren() == 2 && node[1][1][1][0].getKind() == kind::NOT && node[1][1][1][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][1][0][0]);
    children.push_back(node[1][1][1][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[278]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 278));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && true && node[0][0][2].getKind() == kind::NOT && node[0][0][2].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][2][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    if (options::printStats()) counter[280]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 280));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && true && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[1][2]);
    if (options::printStats()) counter[12]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 12));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && node[0][1] == node[1][0][0] && node[1][1].getKind() == kind::NOT && node[1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[100]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 100));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::IFF && node[0][0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[123]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 123));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && true && true && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[0][2]);
    if (options::printStats()) counter[127]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 127));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    if (options::printStats()) counter[144]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 144));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 3 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][2]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    if (options::printStats()) counter[154]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 154));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::OR && node[1][0][0].getNumChildren() == 2 && true && true && true && true && node[1][0][0][1] == node[1][2]) {
    std::vector<Node> children;
    children.push_back(node[1][2]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) counter[174]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 174));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::NOT && node[1][0][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[2]);
    if (options::printStats()) counter[178]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 178));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 3 && node[0][1][0].getKind() == kind::NOT && node[0][1][0].getNumChildren() == 1 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][2]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    if (options::printStats()) counter[220]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 220));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 3 && true && true && node[1][2].getKind() == kind::AND && node[1][2].getNumChildren() == 2 && node[1][2][0].getKind() == kind::OR && node[1][2][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][2][0][1]);
    children.push_back(node[1][2][0][0]);
    children.push_back(node[1][2][1]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[230]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 230));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && node[1][0][1].getKind() == kind::NOT && node[1][0][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[273]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 273));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[1]);
    if (options::printStats()) counter[23]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 23));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && true && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) counter[34]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 34));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::OR && node[0][0][0].getNumChildren() == 2 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) counter[38]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 38));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) counter[88]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 88));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3 && node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][1]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    if (options::printStats()) counter[108]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 108));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 2 && true && node[1][1][1].getKind() == kind::NOT && node[1][1][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][1][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    if (options::printStats()) counter[112]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 112));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && true && node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    if (options::printStats()) counter[117]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 117));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::AND && node[0][0][0].getNumChildren() == 2 && true && true && true && node[0][0][0][1] == node[1] && node[0][0][0][0] == node[2]) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[1]);
    children.push_back(node[0][1]);
    if (options::printStats()) counter[153]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 153));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::AND && node[0][2].getNumChildren() == 2 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][2][1]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[155]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 155));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0][2]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[201]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 201));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && true && node[2].getKind() == kind::OR && node[2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[2][1]);
    children.push_back(node[2][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[204]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 204));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true && node[2].getKind() == kind::OR && node[2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[2][1]);
    children.push_back(node[2][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[224]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 224));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[227]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 227));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::OR && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::AND && node[2][0].getNumChildren() == 3 && true && node[1] == node[2][0][1] && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][0][0]);
    children.push_back(node[2][0][2]);
    children.push_back(node[2][0][1]);
    children.push_back(node[2][1]);
    children.push_back(node[0]);
    if (options::printStats()) counter[25]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 25));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3 && true && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][2]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) counter[39]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 39));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::OR && node[2].getNumChildren() == 3 && true && true && node[2][2].getKind() == kind::AND && node[2][2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][2][0]);
    children.push_back(node[2][2][1]);
    children.push_back(node[2][0]);
    children.push_back(node[2][1]);
    children.push_back(node[0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[44]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 44));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && node[0][1][0] == node[1][1]) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) counter[61]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 61));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) counter[89]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 89));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true && node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1 && node[2][0].getKind() == kind::AND && node[2][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][0][0]);
    children.push_back(node[2][0][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[104]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 104));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    if (options::printStats()) counter[137]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 137));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[183]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 183));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::IFF && node[0][0][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) counter[184]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 184));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && true && node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[191]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 191));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1 && node[2][0].getKind() == kind::AND && node[2][0].getNumChildren() == 2 && node[0] == node[2][0][0] && node[2][0][1].getKind() == kind::NOT && node[2][0][1].getNumChildren() == 1 && node[1] == node[2][0][1][0]) {
    std::vector<Node> children;
    children.push_back(node[2][0][1][0]);
    children.push_back(node[2][0][0]);
    if (options::printStats()) counter[206]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 206));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[253]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 253));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && true && node[2].getKind() == kind::OR && node[2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[2][1]);
    children.push_back(node[2][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[15]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 15));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[1][2]);
    if (options::printStats()) counter[16]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 16));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 3 && true && true && node[1][2].getKind() == kind::AND && node[1][2].getNumChildren() == 2 && true && node[1][0] == node[1][2][1]) {
    std::vector<Node> children;
    children.push_back(node[1][2][0]);
    children.push_back(node[1][2][1]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) counter[60]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 60));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[65]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 65));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[85]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 85));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][2]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    if (options::printStats()) counter[103]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 103));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    if (options::printStats()) counter[110]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 110));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[115]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 115));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::AND && node[0][2].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][0]);
    children.push_back(node[0][2][1]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[129]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 129));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 2 && true && node[0] == node[1][1][1] && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[2]);
    if (options::printStats()) counter[173]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 173));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true && node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[180]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 180));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && node[0] == node[1][0][0] && node[1][1].getKind() == kind::NOT && node[1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1][0]);
    if (options::printStats()) counter[259]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 259));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[11]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 11));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[43]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 43));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0]);
    children.push_back(node[2]);
    if (options::printStats()) counter[91]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 91));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    if (options::printStats()) counter[124]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 124));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1 && node[2][0].getKind() == kind::AND && node[2][0].getNumChildren() == 2 && node[1] == node[2][0][0] && true) {
    std::vector<Node> children;
    children.push_back(node[2][0][0]);
    children.push_back(node[2][0][1]);
    children.push_back(node[0]);
    if (options::printStats()) counter[157]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 157));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][2]);
    if (options::printStats()) counter[238]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 238));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) counter[72]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 72));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][2]);
    children.push_back(node[1][0]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    if (options::printStats()) counter[73]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 73));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[2]);
    if (options::printStats()) counter[111]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 111));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && node[0][1][0] == node[1]) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[121]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 121));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[210]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 210));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && true && node[0][0] == node[2]) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    if (options::printStats()) counter[29]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 29));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[31]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 31));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][2]);
    children.push_back(node[0]);
    if (options::printStats()) counter[32]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 32));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    if (options::printStats()) counter[48]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 48));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[22]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 22));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    if (options::printStats()) counter[37]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 37));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteNOT(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::AND && node[0][1][0].getNumChildren() == 3 && true && node[0][1][0][1].getKind() == kind::NOT && node[0][1][0][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][1][0]);
    children.push_back(node[0][1][0][2]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][0]);
    children.push_back(node[0][2]);
    if (options::printStats()) counter[213]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 213));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 3 && true && true && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::AND && node[0][1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][1]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][2]);
    if (options::printStats()) counter[263]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 263));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3 && node[0][0][0].getKind() == kind::OR && node[0][0][0].getNumChildren() == 2 && node[0][0][0][0].getKind() == kind::NOT && node[0][0][0][0].getNumChildren() == 1 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0][0]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1]);
    if (options::printStats()) counter[267]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 267));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 3 && node[0][1][0].getKind() == kind::AND && node[0][1][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][0][1]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][1][2]);
    children.push_back(node[0][1][1]);
    if (options::printStats()) counter[275]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 275));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::NOT && node[0][1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) counter[99]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 99));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::AND && node[0][1][0].getNumChildren() == 2 && true && true && node[0][2].getKind() == kind::NOT && node[0][2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][1]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[199]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 199));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1 && node[0][0][0][0].getKind() == kind::AND && node[0][0][0][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0][0]);
    children.push_back(node[0][0][0][0][1]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1]);
    if (options::printStats()) counter[233]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 233));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::AND && node[0][1][0].getNumChildren() == 2 && node[0][1][0][0].getKind() == kind::NOT && node[0][1][0][0].getNumChildren() == 1 && node[0][0] == node[0][1][0][0][0] && true && node[0][1][0][1] == node[0][2]) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][0][0]);
    children.push_back(node[0][2]);
    if (options::printStats()) counter[255]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 255));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::AND && node[0][1][0].getNumChildren() == 2 && true && node[0][1][0][1].getKind() == kind::NOT && node[0][1][0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][1][0]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][0]);
    children.push_back(node[0][2]);
    if (options::printStats()) counter[270]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 270));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::AND && node[0][0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][0]);
    if (options::printStats()) counter[271]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 271));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::NOT && node[0][2].getNumChildren() == 1 && node[0][2][0].getKind() == kind::AND && node[0][2][0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][0][1]);
    children.push_back(node[0][2][0][2]);
    children.push_back(node[0][2][0][0]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) counter[167]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 167));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::AND && node[0][0][0].getNumChildren() == 2 && true && node[0][0][0][1].getKind() == kind::NOT && node[0][0][0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][1][0]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) counter[181]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 181));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::AND && node[0][1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][1]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) counter[185]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 185));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 3 && true && node[0][0][1].getKind() == kind::AND && node[0][0][1].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][1]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][2]);
    children.push_back(node[0][1]);
    if (options::printStats()) counter[228]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 228));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && node[0][1][0].getKind() == kind::NOT && node[0][1][0].getNumChildren() == 1 && true && node[0][1][1].getKind() == kind::NOT && node[0][1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[276]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 276));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) counter[106]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 106));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::AND && node[0][1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][1][0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[0][2]);
    if (options::printStats()) counter[133]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 133));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::AND && node[0][0][0].getNumChildren() == 2 && true && true && node[0][0][0][1] == node[0][1] && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][2]);
    if (options::printStats()) counter[159]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 159));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::AND && node[0][0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][1][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) counter[207]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 207));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 3 && true && node[0][1][1].getKind() == kind::NOT && node[0][1][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][2]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[246]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 246));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 3 && true && true && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][2]);
    if (options::printStats()) counter[247]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 247));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1]);
    if (options::printStats()) counter[102]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 102));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::AND && node[0][0][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) counter[156]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 156));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && true && node[0][2].getKind() == kind::NOT && node[0][2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) counter[161]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 161));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::NOT && node[0][1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[192]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 192));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) counter[257]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 257));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][0]);
    if (options::printStats()) counter[30]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 30));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) counter[251]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 251));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::NOT && node[0][2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[36]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 36));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[94]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 94));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[71]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 71));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteIFF(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 2 && true && true && node[0][2].getKind() == kind::OR && node[0][2].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][2][1]);
    children.push_back(node[0][2][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[162]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 162));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::AND && node[0][1][0].getNumChildren() == 2 && true && true && node[0][2].getKind() == kind::OR && node[0][2].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][1]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][2][1]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[177]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 177));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::NOT && node[0][1][1].getNumChildren() == 1 && true && node[0][2].getKind() == kind::OR && node[0][2].getNumChildren() == 2 && node[0][1][1][0] == node[0][2][0] && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][2][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[194]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 194));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && true && true && node[0][2].getKind() == kind::OR && node[0][2].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][2][1]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) counter[223]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 223));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][2]);
    children.push_back(node[1]);
    if (options::printStats()) counter[160]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 160));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && true && true && node[1][2].getKind() == kind::NOT && node[1][2].getNumChildren() == 1 && node[1][2][0].getKind() == kind::AND && node[1][2][0].getNumChildren() == 2 && node[1][2][0][0].getKind() == kind::NOT && node[1][2][0][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][2][0][0][0]);
    children.push_back(node[1][2][0][1]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[264]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 264));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::AND && node[0][1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][1][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[62]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 62));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::AND && node[1][0][0].getNumChildren() == 2 && node[1][0][0][0].getKind() == kind::NOT && node[1][0][0][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][0][0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) counter[82]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 82));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 2 && true && true && true && node[0][2].getKind() == kind::OR && node[0][2].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][2][1]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) counter[232]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 232));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][2]);
    children.push_back(node[1]);
    if (options::printStats()) counter[143]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 143));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::NOT && node[0][1][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[0][2]);
    children.push_back(node[1]);
    if (options::printStats()) counter[190]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 190));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::AND && node[1][0][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][2]);
    children.push_back(node[0]);
    if (options::printStats()) counter[208]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 208));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::AND && node[1][0][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) counter[52]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 52));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][2]);
    children.push_back(node[1]);
    if (options::printStats()) counter[166]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 166));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[33]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 33));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][2]);
    children.push_back(node[0]);
    if (options::printStats()) counter[170]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 170));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::NOT && node[1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[56]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 56));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[109]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 109));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteITE(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::ITE && node.getNumChildren() == 3 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    if (options::printStats()) counter[250]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 250));
  }
  else if (node.getKind() == kind::ITE && node.getNumChildren() == 3 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    if (options::printStats()) counter[212]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 212));
  }
  else if (node.getKind() == kind::ITE && node.getNumChildren() == 3 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    if (options::printStats()) counter[215]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 215));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteOR(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::AND && node[0][1][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && node[0][0] == node[1][0][0] && node[1][0][1].getKind() == kind::NOT && node[1][0][1].getNumChildren() == 1 && node[1][0][1][0].getKind() == kind::AND && node[1][0][1][0].getNumChildren() == 2 && node[0][1][0][0] == node[1][0][1][0][0] && node[0][1][0][1] == node[1][0][1][0][1]) {
    std::vector<Node> children;
    children.push_back(node[1][0][1][0][1]);
    children.push_back(node[1][0][1][0][0]);
    children.push_back(node[1][0][0]);
    if (options::printStats()) counter[175]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 175));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 3 && true && node[0][0][1].getKind() == kind::AND && node[0][0][1].getNumChildren() == 2 && true && true && node[0][0][1][1] == node[0][0][2] && true && true && node[2].getKind() == kind::AND && node[2].getNumChildren() == 2 && node[0][0][2] == node[2][0] && node[0][0][1][0] == node[2][1]) {
    std::vector<Node> children;
    children.push_back(node[2][1]);
    children.push_back(node[2][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) counter[58]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 58));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::OR && node[1][0].getNumChildren() == 2 && true && true && node[0][0][0] == node[1][1] && node[0][0][2] == node[1][2]) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][2]);
    children.push_back(node[1][1]);
    children.push_back(node[0][0][1]);
    if (options::printStats()) counter[146]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 146));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::IFF && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::AND && node[0][0][1].getNumChildren() == 2 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && node[0][0][1][1] == node[1][0][0] && node[0][0][1][0] == node[1][0][1]) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) counter[176]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 176));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::OR && node[1][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::OR && node[1][1].getNumChildren() == 2 && true && node[1][1][1].getKind() == kind::AND && node[1][1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][1][1]);
    children.push_back(node[1][1][1][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0]);
    if (options::printStats()) counter[80]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 80));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && true && node[2].getKind() == kind::AND && node[2].getNumChildren() == 2 && true && node[2][1].getKind() == kind::OR && node[2][1].getNumChildren() == 2 && true && node[2][1][1].getKind() == kind::NOT && node[2][1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[2][1][1][0]);
    children.push_back(node[2][1][0]);
    children.push_back(node[2][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[98]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 98));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::OR && node[1][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::OR && node[1][1].getNumChildren() == 2 && node[1][1][0].getKind() == kind::NOT && node[1][1][0].getNumChildren() == 1 && node[1][0][1] == node[1][1][0][0] && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    if (options::printStats()) counter[122]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 122));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::AND && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::OR && node[2][0].getNumChildren() == 2 && true && node[2][0][1].getKind() == kind::NOT && node[2][0][1].getNumChildren() == 1 && true && node[2][1].getKind() == kind::OR && node[2][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][0][1][0]);
    children.push_back(node[2][0][0]);
    children.push_back(node[2][1][0]);
    children.push_back(node[2][1][1]);
    children.push_back(node[0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[128]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 128));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::OR && node[0][2].getNumChildren() == 2 && true && node[0][2][1].getKind() == kind::AND && node[0][2][1].getNumChildren() == 2 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][1][1]);
    children.push_back(node[0][2][1][0]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) counter[169]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 169));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[0][0][0] == node[1][0] && node[1][1].getKind() == kind::NOT && node[1][1].getNumChildren() == 1 && node[0][0][1][0] == node[1][1][0]) {
    std::vector<Node> children;
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) counter[187]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 187));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 3 && node[0][2] == node[1][0][0] && node[1][0][1].getKind() == kind::NOT && node[1][0][1].getNumChildren() == 1 && true && node[0][0] == node[1][0][2]) {
    std::vector<Node> children;
    children.push_back(node[1][0][2]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1][0][1][0]);
    if (options::printStats()) counter[197]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 197));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::OR && node[1][1].getNumChildren() == 2 && true && node[1][1][1].getKind() == kind::AND && node[1][1][1].getNumChildren() == 2 && node[1][1][1][0].getKind() == kind::NOT && node[1][1][1][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][1][0][0]);
    children.push_back(node[1][1][1][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[1][2]);
    children.push_back(node[0]);
    if (options::printStats()) counter[211]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 211));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::OR && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::AND && node[1][0][0].getNumChildren() == 2 && true && true && node[1][0][1].getKind() == kind::NOT && node[1][0][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][2]);
    children.push_back(node[0]);
    if (options::printStats()) counter[218]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 218));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3 && node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1 && node[0][0][0][0].getKind() == kind::AND && node[0][0][0][0].getNumChildren() == 3 && true && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0][1]);
    children.push_back(node[0][0][0][0][2]);
    children.push_back(node[0][0][0][0][0]);
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][1]);
    children.push_back(node[1]);
    if (options::printStats()) counter[249]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 249));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::OR && node[1][1].getNumChildren() == 2 && true && node[1][1][1].getKind() == kind::NOT && node[1][1][1].getNumChildren() == 1 && node[1][1][1][0].getKind() == kind::AND && node[1][1][1][0].getNumChildren() == 2 && true && node[1][0] == node[1][1][1][0][1] && node[1][1][1][0][0] == node[1][2]) {
    std::vector<Node> children;
    children.push_back(node[1][2]);
    children.push_back(node[1][1][1][0][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[277]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 277));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::IFF && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 2 && node[1][1][0].getKind() == kind::NOT && node[1][1][0].getNumChildren() == 1 && node[1][1][0][0].getKind() == kind::AND && node[1][1][0][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0][0][1]);
    children.push_back(node[1][1][0][0][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[83]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 83));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1 && true && true && node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 2 && node[0][0][0][0] == node[0][1][0] && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1][1]);
    children.push_back(node[1]);
    if (options::printStats()) counter[116]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 116));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::AND && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::OR && node[2][0].getNumChildren() == 2 && node[2][0][0].getKind() == kind::NOT && node[2][0][0].getNumChildren() == 1 && true && node[2][0][1].getKind() == kind::NOT && node[2][0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][0][1][0]);
    children.push_back(node[2][0][0][0]);
    children.push_back(node[2][1]);
    children.push_back(node[0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[130]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 130));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::NOT && node[1][1].getNumChildren() == 1 && node[1][1][0].getKind() == kind::AND && node[1][1][0].getNumChildren() == 2 && true && true && node[1][1][0][0] == node[1][2]) {
    std::vector<Node> children;
    children.push_back(node[1][2]);
    children.push_back(node[1][1][0][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[165]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 165));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && true && true && node[1][2].getKind() == kind::OR && node[1][2].getNumChildren() == 2 && node[1][2][0].getKind() == kind::NOT && node[1][2][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][2][0][0]);
    children.push_back(node[1][2][1]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[195]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 195));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::OR && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::NOT && node[1][0][0].getNumChildren() == 1 && true && node[1][0][1].getKind() == kind::NOT && node[1][0][1].getNumChildren() == 1 && true && node[1][0][0][0] == node[1][1] && node[1][0][1][0] == node[2]) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    if (options::printStats()) counter[221]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 221));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::NOT && node[0][2].getNumChildren() == 1 && node[0][2][0].getKind() == kind::AND && node[0][2][0].getNumChildren() == 2 && node[0][1] == node[0][2][0][0] && node[0][2][0][1].getKind() == kind::NOT && node[0][2][0][1].getNumChildren() == 1 && node[0][0] == node[0][2][0][1][0] && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][0][1][0]);
    children.push_back(node[0][2][0][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[252]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 252));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && node[0][0][1][0].getKind() == kind::AND && node[0][0][1][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][0][0]);
    children.push_back(node[0][0][1][0][1]);
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[256]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 256));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::OR && node[1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][1]);
    children.push_back(node[0][0]);
    children.push_back(node[0][2]);
    children.push_back(node[0][1]);
    if (options::printStats()) counter[24]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 24));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::NOT && node[0][1][1].getNumChildren() == 1 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) counter[45]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 45));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && true && true && node[2].getKind() == kind::AND && node[2].getNumChildren() == 2 && true && node[2][1].getKind() == kind::OR && node[2][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][1][1]);
    children.push_back(node[2][1][0]);
    children.push_back(node[2][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[57]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 57));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::IFF && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::NOT && node[1][0][0].getNumChildren() == 1 && true && node[1][0][1].getKind() == kind::NOT && node[1][0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1][0]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) counter[66]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 66));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::OR && node[1][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::OR && node[1][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    if (options::printStats()) counter[87]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 87));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) counter[92]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 92));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::AND && node[0][0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[97]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 97));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && true && node[0][0][1] == node[1][1] && node[0][0][2] == node[1][2]) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][2]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) counter[113]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 113));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::IFF && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::AND && node[1][0][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[119]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 119));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    if (options::printStats()) counter[134]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 134));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && node[0][0][1][0].getKind() == kind::AND && node[0][0][1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][0][1]);
    children.push_back(node[0][0][1][0][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[136]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 136));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::AND && node[0][0][0].getNumChildren() == 2 && true && node[0][0][0][1].getKind() == kind::NOT && node[0][0][0][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][1][0]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) counter[138]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 138));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::OR && node[1][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[1][2]);
    if (options::printStats()) counter[140]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 140));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::OR && node[0][2].getNumChildren() == 2 && node[0][2][0].getKind() == kind::AND && node[0][2][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][0][1]);
    children.push_back(node[0][2][0][0]);
    children.push_back(node[0][2][1]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[141]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 141));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::AND && node[1][0][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[164]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 164));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::AND && node[0][0][0].getNumChildren() == 2 && true && true && true && node[0][0][0][1] == node[0][1] && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][2]);
    children.push_back(node[1]);
    if (options::printStats()) counter[196]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 196));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::IFF && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::AND && node[1][0][0].getNumChildren() == 2 && node[1][0][0][0].getKind() == kind::NOT && node[1][0][0][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][0][0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0]);
    if (options::printStats()) counter[217]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 217));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 2 && true && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) counter[13]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 13));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && true && node[1][1].getKind() == kind::NOT && node[1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[26]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 26));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::OR && node[1][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::OR && node[1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[53]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 53));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[55]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 55));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::AND && node[0][0][0].getNumChildren() == 2 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) counter[70]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 70));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::NOT && node[0][1][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    if (options::printStats()) counter[90]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 90));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && true && true && node[1][2].getKind() == kind::OR && node[1][2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][2][1]);
    children.push_back(node[1][2][0]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[114]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 114));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::IFF && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 3 && node[1][1][0].getKind() == kind::NOT && node[1][1][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][1][2]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[171]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 171));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][2]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) counter[186]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 186));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::NOT && node[1][1].getNumChildren() == 1 && node[1][1][0].getKind() == kind::AND && node[1][1][0].getNumChildren() == 2 && true && true && node[1][1][0][1] == node[1][2]) {
    std::vector<Node> children;
    children.push_back(node[1][2]);
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[188]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 188));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::OR && node[1][1].getNumChildren() == 2 && node[1][1][0].getKind() == kind::NOT && node[1][1][0].getNumChildren() == 1 && true && true && node[1][1][0][0] == node[2]) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[222]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 222));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::OR && node[1][1].getNumChildren() == 2 && node[1][1][0].getKind() == kind::NOT && node[1][1][0].getNumChildren() == 1 && node[1][0] == node[1][1][0][0] && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[0]);
    children.push_back(node[2]);
    if (options::printStats()) counter[236]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 236));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) counter[237]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 237));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 2 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0]);
    children.push_back(node[0][2]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    if (options::printStats()) counter[14]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 14));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) counter[27]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 27));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3 && true && true && node[0][0][2].getKind() == kind::NOT && node[0][0][2].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][2][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[47]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 47));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && node[0][1][0].getKind() == kind::NOT && node[0][1][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[50]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 50));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[59]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 59));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && true && node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1 && node[2][0].getKind() == kind::IFF && node[2][0].getNumChildren() == 2 && node[0][0] == node[2][0][0] && true) {
    std::vector<Node> children;
    children.push_back(node[2][0][0]);
    children.push_back(node[2][0][1]);
    children.push_back(node[1]);
    if (options::printStats()) counter[63]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 63));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::AND && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::OR && node[2][0].getNumChildren() == 3 && true && true && node[0] == node[2][0][2] && true) {
    std::vector<Node> children;
    children.push_back(node[2][0][0]);
    children.push_back(node[2][0][1]);
    children.push_back(node[2][0][2]);
    children.push_back(node[2][1]);
    children.push_back(node[1]);
    if (options::printStats()) counter[64]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 64));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::NOT && node[0][1][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[78]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 78));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::OR && node[0][2].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][2]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][2][1]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) counter[84]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 84));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::NOT && node[1][1].getNumChildren() == 1 && node[1][1][0].getKind() == kind::AND && node[1][1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0][1]);
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[86]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 86));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[0][2]);
    children.push_back(node[1][0]);
    if (options::printStats()) counter[101]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 101));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::IFF && node[1][0].getNumChildren() == 2 && true && node[1][0][1].getKind() == kind::AND && node[1][0][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1][1]);
    children.push_back(node[1][0][1][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[105]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 105));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::OR && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::NOT && node[1][0][0].getNumChildren() == 1 && true && true && node[1][0][0][0] == node[1][1]) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0]);
    if (options::printStats()) counter[107]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 107));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    if (options::printStats()) counter[126]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 126));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::NOT && node[1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[17]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 17));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::OR && node[1][0].getNumChildren() == 2 && true && true && true && node[1][0][1] == node[1][2]) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][2]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) counter[18]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 18));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[1]);
    if (options::printStats()) counter[21]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 21));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[28]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 28));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][2]);
    children.push_back(node[1][0]);
    if (options::printStats()) counter[40]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 40));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && true && node[2].getKind() == kind::AND && node[2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[2][0]);
    children.push_back(node[2][1]);
    children.push_back(node[0]);
    if (options::printStats()) counter[46]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 46));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 2 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    if (options::printStats()) counter[76]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 76));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::IFF && node[0][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) counter[81]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 81));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::IFF && node[0][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[0][0][0] == node[1][0]) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][0][1]);
    if (options::printStats()) counter[96]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 96));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::OR && node[1][1].getNumChildren() == 2 && true && true && node[1][1][1] == node[2]) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[120]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 120));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && true && true && node[1][2].getKind() == kind::OR && node[1][2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][2][1]);
    children.push_back(node[1][2][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[148]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 148));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[179]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 179));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::IFF && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][2]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) counter[225]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 225));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) counter[10]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 10));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[20]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 20));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[42]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 42));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1 && node[2][0].getKind() == kind::IFF && node[2][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][0][0]);
    children.push_back(node[2][0][1]);
    children.push_back(node[0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[75]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 75));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][2]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[93]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 93));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][2]);
    children.push_back(node[1]);
    if (options::printStats()) counter[142]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 142));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::IFF && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[163]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 163));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    if (options::printStats()) counter[41]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 41));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::IFF && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[51]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 51));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1][0]);
    children.push_back(node[2]);
    if (options::printStats()) counter[67]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 67));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) counter[77]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 77));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::IFF && node[0][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[189]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 189));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0]);
    if (options::printStats()) counter[239]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 239));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][2]);
    children.push_back(node[1]);
    if (options::printStats()) counter[35]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 35));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    if (options::printStats()) counter[69]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 69));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::AND && node[2].getNumChildren() == 2 && node[1] == node[2][0] && true) {
    std::vector<Node> children;
    children.push_back(node[2][1]);
    children.push_back(node[2][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[79]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 79));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[200]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 200));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[54]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 54));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
RewriteResponse TheoryBoolSpecialRewriter::rewrite(TNode node) {
  switch(node.getKind()) {
    case kind::AND : return RewriteAND(node);
    case kind::NOT : return RewriteNOT(node);
    case kind::IFF : return RewriteIFF(node);
    case kind::ITE : return RewriteITE(node);
    case kind::OR : return RewriteOR(node);
    default: return RewriteResponse(REWRITE_DONE, node);
  }
}
void TheoryBoolSpecialRewriter::initialize() {
  for (int i = 0; i < 538; i++) {
     counter[i] = 0;
  }
}

void TheoryBoolSpecialRewriter::print() {
  Chat() << "Rewrite statistics" << std::endl;
  for (int i = 0; i < 538; i++) {
     if (counter[i] > 0)
       Chat() << i << " " << counter[i] << std::endl;
  }
}
