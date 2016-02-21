#include "options/bv_options.h"
#include "options/main_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

RewriteResponse TheoryBVSpecialRewriter::RewriteBITVECTOR_OR(TNode node, bool prerewrite) {
  if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && true && true && node[2].getKind() == kind::BITVECTOR_AND && node[2].getNumChildren() == 3 && true && node[2][1].getKind() == kind::BITVECTOR_NOT && node[2][1].getNumChildren() == 1 && node[2][1][0].getKind() == kind::BITVECTOR_AND && node[2][1][0].getNumChildren() == 2 && node[0][1] == node[2][1][0][0] && node[2][1][0][1].getKind() == kind::BITVECTOR_NOT && node[2][1][0][1].getNumChildren() == 1 && node[0][0][0] == node[2][1][0][1][0] && true) {
    std::vector<Node> children;
    children.push_back(node[2][2]);
    children.push_back(node[1]);
    children.push_back(node[2][1][0][1][0]);
    children.push_back(node[2][1][0][0]);
    children.push_back(node[2][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[478]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 478));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && true && node[2].getKind() == kind::BITVECTOR_AND && node[2].getNumChildren() == 3 && true && node[2][1].getKind() == kind::BITVECTOR_NOT && node[2][1].getNumChildren() == 1 && node[2][1][0].getKind() == kind::BITVECTOR_AND && node[2][1][0].getNumChildren() == 2 && node[0][0] == node[2][1][0][0] && node[0][1] == node[2][1][0][1] && true) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[1]);
    children.push_back(node[2][1][0][0]);
    children.push_back(node[2][1][0][1]);
    children.push_back(node[2][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[409]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 409));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && true && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[302]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 302));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2 && true && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][2]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[325]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 325));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::BITVECTOR_OR && node[0][2].getNumChildren() == 2 && node[0][2][0].getKind() == kind::BITVECTOR_AND && node[0][2][0].getNumChildren() == 2 && true && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][2][0][1]);
    children.push_back(node[0][2][0][0]);
    children.push_back(node[0][2][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[337]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 337));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_OR && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::BITVECTOR_AND && node[1][0][0].getNumChildren() == 2 && true && true && true && node[1][1].getKind() == kind::BITVECTOR_OR && node[1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[0]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][0][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[344]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 344));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && true && node[0][2].getKind() == kind::BITVECTOR_OR && node[0][2].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][2][1]);
    children.push_back(node[0][2][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[346]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 346));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::BITVECTOR_OR && node[1][1].getNumChildren() == 2 && true && node[1][1][1].getKind() == kind::BITVECTOR_AND && node[1][1][1].getNumChildren() == 2 && true && true && node[1][2].getKind() == kind::BITVECTOR_NOT && node[1][2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    children.push_back(node[1][2][0]);
    children.push_back(node[1][1][1][0]);
    children.push_back(node[1][1][1][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[359]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 359));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_OR && node[1][1].getNumChildren() == 2 && node[1][1][0].getKind() == kind::BITVECTOR_AND && node[1][1][0].getNumChildren() == 2 && true && true && node[1][1][1].getKind() == kind::BITVECTOR_AND && node[1][1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][1][0][1]);
    children.push_back(node[1][1][1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[361]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 361));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_OR && node[1][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && node[1][1][0].getKind() == kind::BITVECTOR_OR && node[1][1][0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0]);
    children.push_back(node[1][1][0][2]);
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][1][0][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[362]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 362));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_OR && node[1][0].getNumChildren() == 2 && true && node[1][0][1].getKind() == kind::BITVECTOR_AND && node[1][0][1].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0][1][1]);
    children.push_back(node[1][0][1][0]);
    children.push_back(node[1][0][1][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[365]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 365));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::BITVECTOR_OR && node[0][2].getNumChildren() == 2 && node[0][2][0].getKind() == kind::BITVECTOR_NOT && node[0][2][0].getNumChildren() == 1 && true && node[0][2][1].getKind() == kind::BITVECTOR_AND && node[0][2][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[0][2][1][0]);
    children.push_back(node[0][2][1][1]);
    children.push_back(node[0][2][0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[396]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 396));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::BITVECTOR_OR && node[0][0][0].getNumChildren() == 3 && node[0][0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0][0].getNumChildren() == 2 && true && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[0][0][0][0][0]);
    children.push_back(node[0][0][0][0][1]);
    children.push_back(node[0][0][0][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[400]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 400));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::BITVECTOR_NOT && node[0][0][0].getNumChildren() == 1 && true && true && true && node[0][2].getKind() == kind::BITVECTOR_OR && node[0][2].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][1]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][2][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[406]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 406));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::BITVECTOR_NOT && node[0][2].getNumChildren() == 1 && node[0][2][0].getKind() == kind::BITVECTOR_OR && node[0][2][0].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][2][0][1]);
    children.push_back(node[0][2][0][0]);
    children.push_back(node[0][2][0][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[408]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 408));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::BITVECTOR_OR && node[1][1].getNumChildren() == 2 && true && true && node[1][2].getKind() == kind::BITVECTOR_OR && node[1][2].getNumChildren() == 2 && true && node[1][2][1].getKind() == kind::BITVECTOR_NOT && node[1][2][1].getNumChildren() == 1 && node[1][1][1] == node[1][2][1][0]) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    children.push_back(node[1][2][1][0]);
    children.push_back(node[1][2][0]);
    children.push_back(node[1][1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[411]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 411));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::BITVECTOR_OR && node[1][0].getNumChildren() == 2 && true && true && true && node[1][2].getKind() == kind::BITVECTOR_NOT && node[1][2].getNumChildren() == 1 && node[1][2][0].getKind() == kind::BITVECTOR_AND && node[1][2][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    children.push_back(node[1][2][0][1]);
    children.push_back(node[1][2][0][0]);
    children.push_back(node[1][0][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[412]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 412));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::BITVECTOR_NOT && node[0][0][0].getNumChildren() == 1 && true && node[0][0][1].getKind() == kind::BITVECTOR_AND && node[0][0][1].getNumChildren() == 3 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[0][0][1][1]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][1][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[429]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 429));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::BITVECTOR_OR && node[1][1].getNumChildren() == 2 && node[1][1][0].getKind() == kind::BITVECTOR_AND && node[1][1][0].getNumChildren() == 2 && true && node[1][1][0][1].getKind() == kind::BITVECTOR_NOT && node[1][1][0][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][2]);
    children.push_back(node[0]);
    children.push_back(node[1][1][0][1][0]);
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][1][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[437]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 437));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0].getNumChildren() == 3 && true && node[0][0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][0][1].getNumChildren() == 1 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[0][0][0][1][0]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][0][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[446]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 446));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::BITVECTOR_OR && node[1][0].getNumChildren() == 2 && true && node[1][0][1].getKind() == kind::BITVECTOR_NOT && node[1][0][1].getNumChildren() == 1 && node[1][0][1][0].getKind() == kind::BITVECTOR_AND && node[1][0][1][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][2]);
    children.push_back(node[0]);
    children.push_back(node[1][0][1][0][0]);
    children.push_back(node[1][0][1][0][1]);
    children.push_back(node[1][0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[470]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 470));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2 && true && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][2]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[490]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 490));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::BITVECTOR_NOT && node[0][2].getNumChildren() == 1 && true && true && node[2].getKind() == kind::BITVECTOR_AND && node[2].getNumChildren() == 2 && true && node[2][1].getKind() == kind::BITVECTOR_NOT && node[2][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[2][1][0]);
    children.push_back(node[2][0]);
    children.push_back(node[0][2][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[492]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 492));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::BITVECTOR_OR && node[1][1].getNumChildren() == 2 && true && node[1][1][1].getKind() == kind::BITVECTOR_NOT && node[1][1][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0]);
    children.push_back(node[1][2]);
    children.push_back(node[1][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][1][1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[501]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 501));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::BITVECTOR_OR && node[1][0][0].getNumChildren() == 2 && true && node[1][0][0][1].getKind() == kind::BITVECTOR_AND && node[1][0][0][1].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    children.push_back(node[1][0][0][1][0]);
    children.push_back(node[1][0][0][1][1]);
    children.push_back(node[1][0][0][1][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[507]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 507));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && node[1][1][0].getKind() == kind::BITVECTOR_AND && node[1][1][0].getNumChildren() == 2 && node[1][1][0][0].getKind() == kind::BITVECTOR_NOT && node[1][1][0][0].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    children.push_back(node[2]);
    children.push_back(node[1][1][0][0][0]);
    children.push_back(node[1][1][0][1]);
    children.push_back(node[1][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[526]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 526));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::BITVECTOR_AND && node[0][1][1].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][1][1]);
    children.push_back(node[0][1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[295]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 295));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2 && true && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][2]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[297]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 297));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_OR && node[1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[299]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 299));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true && node[2].getKind() == kind::BITVECTOR_AND && node[2].getNumChildren() == 2 && true && node[2][1].getKind() == kind::BITVECTOR_NOT && node[2][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    children.push_back(node[2][1][0]);
    children.push_back(node[2][0]);
    children.push_back(node[1][1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[310]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 310));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_AND && node[0][0][1].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][1][1]);
    children.push_back(node[0][0][1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[314]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 314));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[321]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 321));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::BITVECTOR_OR && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::BITVECTOR_NOT && node[1][0][0].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[328]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 328));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[335]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 335));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][2]);
    children.push_back(node[1][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[340]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 340));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && true && node[1][2].getKind() == kind::BITVECTOR_OR && node[1][2].getNumChildren() == 2 && node[1][2][0].getKind() == kind::BITVECTOR_NOT && node[1][2][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][2][0][0]);
    children.push_back(node[1][2][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[352]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 352));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::BITVECTOR_OR && node[1][0][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0][0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[366]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 366));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::BITVECTOR_OR && node[0][0][0].getNumChildren() == 3 && true && true && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][0][2]);
    children.push_back(node[0][0][0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[378]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 378));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::BITVECTOR_AND && node[0][1][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][1][0][1]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[379]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 379));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::BITVECTOR_AND && node[1][0][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][2]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[398]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 398));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::BITVECTOR_OR && node[0][0][0].getNumChildren() == 2 && node[0][0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0][0].getNumChildren() == 2 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[1]);
    children.push_back(node[0][0][0][0][1]);
    children.push_back(node[0][0][0][0][0]);
    children.push_back(node[0][0][0][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[417]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 417));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::BITVECTOR_OR && node[0][1][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][1][0][1]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[418]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 418));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 3 && node[0][0][0].getKind() == kind::BITVECTOR_NOT && node[0][0][0].getNumChildren() == 1 && true && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][1]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0][0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[419]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 419));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0].getNumChildren() == 2 && true && node[0][0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][0][1].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[0][0][0][1][0]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[426]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 426));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::BITVECTOR_NOT && node[0][0][0].getNumChildren() == 1 && true && true && node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2 && node[0][0][0][0] == node[0][1][0] && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[439]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 439));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::BITVECTOR_NOT && node[0][0][0].getNumChildren() == 1 && true && true && node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[441]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 441));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::BITVECTOR_NOT && node[1][0][0].getNumChildren() == 1 && node[1][0][0][0].getKind() == kind::BITVECTOR_OR && node[1][0][0][0].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[0]);
    children.push_back(node[1][0][0][0][2]);
    children.push_back(node[1][0][0][0][0]);
    children.push_back(node[1][0][0][0][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[449]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 449));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::BITVECTOR_NOT && node[0][1][1].getNumChildren() == 1 && node[0][1][1][0].getKind() == kind::BITVECTOR_AND && node[0][1][1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[0][1][1][0][1]);
    children.push_back(node[0][1][1][0][0]);
    children.push_back(node[0][1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[451]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 451));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0].getNumChildren() == 2 && true && node[0][0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][0][1].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2]);
    children.push_back(node[1]);
    children.push_back(node[0][0][0][1][0]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[456]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 456));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && node[1][1][0].getKind() == kind::BITVECTOR_OR && node[1][1][0].getNumChildren() == 2 && node[1][1][0][0].getKind() == kind::BITVECTOR_AND && node[1][1][0][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    children.push_back(node[1][1][0][0][0]);
    children.push_back(node[1][1][0][0][1]);
    children.push_back(node[1][1][0][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[475]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 475));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 3 && true && node[1][0][1].getKind() == kind::BITVECTOR_NOT && node[1][0][1].getNumChildren() == 1 && node[1][0][1][0].getKind() == kind::BITVECTOR_AND && node[1][0][1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[0]);
    children.push_back(node[1][0][1][0][1]);
    children.push_back(node[1][0][1][0][0]);
    children.push_back(node[1][0][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 479));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2 && node[0][1][0].getKind() == kind::BITVECTOR_NOT && node[0][1][0].getNumChildren() == 1 && true && node[0][1][1].getKind() == kind::BITVECTOR_AND && node[0][1][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[0][1][1][1]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[535]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 535));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[316]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 316));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[324]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 324));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][1].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0][0][1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[364]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 364));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::BITVECTOR_AND && node[1][0][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[367]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 367));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_OR && node[1][1].getNumChildren() == 2 && true && node[1][1][1].getKind() == kind::BITVECTOR_NOT && node[1][1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1][1][1][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[381]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 381));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && true && true && node[2].getKind() == kind::BITVECTOR_AND && node[2].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[2][1]);
    children.push_back(node[1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[2][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[389]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 389));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[395]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 395));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::BITVECTOR_NOT && node[1][0][0].getNumChildren() == 1 && true && node[1][0][1].getKind() == kind::BITVECTOR_OR && node[1][0][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1][1]);
    children.push_back(node[1][0][1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[427]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 427));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::BITVECTOR_AND && node[1][0][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[430]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 430));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::BITVECTOR_AND && node[1][0][0].getNumChildren() == 2 && true && node[1][0][0][1].getKind() == kind::BITVECTOR_NOT && node[1][0][0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1][0][0][1][0]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[435]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 435));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && true && node[2].getKind() == kind::BITVECTOR_AND && node[2].getNumChildren() == 3 && true && node[2][1].getKind() == kind::BITVECTOR_NOT && node[2][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][2]);
    children.push_back(node[2][0]);
    children.push_back(node[1]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[2][1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[463]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 463));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && true && node[1][2].getKind() == kind::BITVECTOR_NOT && node[1][2].getNumChildren() == 1 && node[1][2][0].getKind() == kind::BITVECTOR_OR && node[1][2][0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    children.push_back(node[1][2][0][1]);
    children.push_back(node[1][2][0][0]);
    children.push_back(node[1][2][0][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[466]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 466));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::BITVECTOR_OR && node[0][2].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][0]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][2][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[485]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 485));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::BITVECTOR_AND && node[2].getNumChildren() == 3 && true && node[2][1].getKind() == kind::BITVECTOR_NOT && node[2][1].getNumChildren() == 1 && node[2][1][0].getKind() == kind::BITVECTOR_AND && node[2][1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][2]);
    children.push_back(node[0]);
    children.push_back(node[1]);
    children.push_back(node[2][1][0][0]);
    children.push_back(node[2][1][0][1]);
    children.push_back(node[2][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[491]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 491));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[505]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 505));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[1][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[506]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 506));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::BITVECTOR_AND && node[0][1][1].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[0][1][1][1]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[512]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 512));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && true && node[2].getKind() == kind::BITVECTOR_AND && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::BITVECTOR_NOT && node[2][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[2][0][0]);
    children.push_back(node[2][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[281]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 281));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::BITVECTOR_AND && node[0][1][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[0][1][1][1]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[303]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 303));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[1][0]);
    children.push_back(node[1][2]);
    children.push_back(node[1][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[318]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 318));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::BITVECTOR_NOT && node[0][2].getNumChildren() == 1 && node[0][2][0].getKind() == kind::BITVECTOR_AND && node[0][2][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[0][2][0][0]);
    children.push_back(node[0][2][0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[370]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 370));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[374]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 374));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][2]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[384]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 384));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::BITVECTOR_OR && node[0][1][0].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[0][1][0][1]);
    children.push_back(node[0][1][0][2]);
    children.push_back(node[0][1][0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[402]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 402));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::BITVECTOR_OR && node[1][1].getNumChildren() == 2 && true && node[1][1][1].getKind() == kind::BITVECTOR_NOT && node[1][1][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    children.push_back(node[1][1][1][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[447]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 447));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][2]);
    children.push_back(node[1][1]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[489]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 489));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_OR && node[1][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::BITVECTOR_OR && node[1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[496]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 496));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && true && node[1][2].getKind() == kind::BITVECTOR_OR && node[1][2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1][2][1]);
    children.push_back(node[1][2][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[524]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 524));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[284]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 284));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[306]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 306));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_OR && node[1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[341]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 341));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && true && true && node[2].getKind() == kind::BITVECTOR_AND && node[2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    children.push_back(node[2][0]);
    children.push_back(node[2][1]);
    children.push_back(node[1][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[350]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 350));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[403]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 403));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 3 && true && true && node[1][0][2].getKind() == kind::BITVECTOR_NOT && node[1][0][2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1][0][2][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[416]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 416));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::BITVECTOR_OR && node[0][1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][1][0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[424]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 424));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[432]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 432));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[513]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 513));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[527]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 527));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[2]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[282]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 282));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[322]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 322));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[360]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 360));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true && true && node[1][1][0] == node[2]) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[2]);
    children.push_back(node[1][0]);
    children.push_back(node[1][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[428]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 428));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::BITVECTOR_AND && node[2].getNumChildren() == 3 && true && node[2][1].getKind() == kind::BITVECTOR_NOT && node[2][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    children.push_back(node[2][1][0]);
    children.push_back(node[2][0]);
    children.push_back(node[2][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[471]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 471));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][2]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[517]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 517));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2]);
    children.push_back(node[1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[519]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 519));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[2]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[283]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 283));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[285]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 285));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[308]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 308));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[1][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[354]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 354));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1][0][2]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[452]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 452));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[287]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 287));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[421]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 421));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[2]);
    children.push_back(node[1][2]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[448]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 448));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::BITVECTOR_AND && node[2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[2][1]);
    children.push_back(node[2][0]);
    children.push_back(node[1]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[309]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 309));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[468]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 468));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[385]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 385));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
