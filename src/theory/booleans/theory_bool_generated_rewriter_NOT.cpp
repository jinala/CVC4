#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"
#include "options/main_options.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;

RewriteResponse TheoryBoolSpecialRewriter::RewriteNOT(TNode node, bool prerewrite) {
  if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::AND && node[0][1][0].getNumChildren() == 3 && true && node[0][1][0][1].getKind() == kind::NOT && node[0][1][0][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][2]);
    children.push_back(node[0][1][0][1][0]);
    children.push_back(node[0][1][0][2]);
    children.push_back(node[0][1][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[213]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 213));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 3 && true && true && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::AND && node[0][1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][2]);
    children.push_back(node[0][1][0][1]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[263]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 263));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3 && node[0][0][0].getKind() == kind::OR && node[0][0][0].getNumChildren() == 2 && node[0][0][0][0].getKind() == kind::NOT && node[0][0][0][0].getNumChildren() == 1 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0][0][0][0]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[267]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 267));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 3 && node[0][1][0].getKind() == kind::AND && node[0][1][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][2]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][0][1]);
    children.push_back(node[0][1][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[275]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 275));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::NOT && node[0][1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[99]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 99));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::AND && node[0][1][0].getNumChildren() == 2 && true && true && node[0][2].getKind() == kind::NOT && node[0][2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1][0][1]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][2][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[199]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 199));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1 && node[0][0][0][0].getKind() == kind::AND && node[0][0][0][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0][0][0][0]);
    children.push_back(node[0][0][0][0][1]);
    children.push_back(node[0][0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[233]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 233));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::AND && node[0][1][0].getNumChildren() == 2 && node[0][1][0][0].getKind() == kind::NOT && node[0][1][0][0].getNumChildren() == 1 && node[0][0] == node[0][1][0][0][0] && true && node[0][1][0][1] == node[0][2]) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][0][0]);
    children.push_back(node[0][2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[255]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 255));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::AND && node[0][1][0].getNumChildren() == 2 && true && node[0][1][0][1].getKind() == kind::NOT && node[0][1][0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2]);
    children.push_back(node[0][1][0][1][0]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[270]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 270));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::AND && node[0][0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][1][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[271]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 271));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::NOT && node[0][2].getNumChildren() == 1 && node[0][2][0].getKind() == kind::AND && node[0][2][0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][2][0][1]);
    children.push_back(node[0][2][0][2]);
    children.push_back(node[0][2][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[167]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 167));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::AND && node[0][0][0].getNumChildren() == 2 && true && node[0][0][0][1].getKind() == kind::NOT && node[0][0][0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][1][0]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[181]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 181));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::AND && node[0][1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][1]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[185]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 185));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 3 && true && node[0][0][1].getKind() == kind::AND && node[0][0][1].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][2]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0][1][1]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[228]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 228));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && node[0][1][0].getKind() == kind::NOT && node[0][1][0].getNumChildren() == 1 && true && node[0][1][1].getKind() == kind::NOT && node[0][1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[276]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 276));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[106]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 106));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::AND && node[0][1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][1][0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[133]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 133));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::AND && node[0][0][0].getNumChildren() == 2 && true && true && node[0][0][0][1] == node[0][1] && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][2]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[159]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 159));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::AND && node[0][0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][1][1]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[207]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 207));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 3 && true && node[0][1][1].getKind() == kind::NOT && node[0][1][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][2]);
    children.push_back(node[0][1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[246]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 246));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 3 && true && true && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][2]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[247]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 247));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[102]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 102));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::AND && node[0][0][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[156]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 156));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && true && node[0][2].getKind() == kind::NOT && node[0][2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[161]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 161));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::NOT && node[0][1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[192]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 192));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[257]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 257));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[30]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 30));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[251]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 251));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::NOT && node[0][2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[36]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 36));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[94]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 94));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBoolSpecialRewriter::counter[71]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 71));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
