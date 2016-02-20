#include "options/bv_options.h"
#include "options/main_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

int bvcounter[538];
static RewriteResponse RewriteBITVECTOR_OR(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && true && true && node[2].getKind() == kind::BITVECTOR_AND && node[2].getNumChildren() == 3 && true && node[2][1].getKind() == kind::BITVECTOR_NOT && node[2][1].getNumChildren() == 1 && node[2][1][0].getKind() == kind::BITVECTOR_AND && node[2][1][0].getNumChildren() == 2 && node[0][1] == node[2][1][0][0] && node[2][1][0][1].getKind() == kind::BITVECTOR_NOT && node[2][1][0][1].getNumChildren() == 1 && node[0][0][0] == node[2][1][0][1][0] && true) {
    std::vector<Node> children;
    children.push_back(node[2][1][0][1][0]);
    children.push_back(node[2][1][0][0]);
    children.push_back(node[2][0]);
    children.push_back(node[2][2]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[478]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 478));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && true && node[2].getKind() == kind::BITVECTOR_AND && node[2].getNumChildren() == 3 && true && node[2][1].getKind() == kind::BITVECTOR_NOT && node[2][1].getNumChildren() == 1 && node[2][1][0].getKind() == kind::BITVECTOR_AND && node[2][1][0].getNumChildren() == 2 && node[0][0] == node[2][1][0][0] && node[0][1] == node[2][1][0][1] && true) {
    std::vector<Node> children;
    children.push_back(node[2][1][0][0]);
    children.push_back(node[2][1][0][1]);
    children.push_back(node[2][2]);
    children.push_back(node[2][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[409]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 409));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && true && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][2]);
    children.push_back(node[0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    if (options::printStats()) bvcounter[302]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 302));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2 && true && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][2]);
    children.push_back(node[1][0]);
    if (options::printStats()) bvcounter[325]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 325));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::BITVECTOR_OR && node[0][2].getNumChildren() == 2 && node[0][2][0].getKind() == kind::BITVECTOR_AND && node[0][2][0].getNumChildren() == 2 && true && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][0][1]);
    children.push_back(node[0][2][0][0]);
    children.push_back(node[0][2][1]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) bvcounter[337]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 337));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_OR && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::BITVECTOR_AND && node[1][0][0].getNumChildren() == 2 && true && true && true && node[1][1].getKind() == kind::BITVECTOR_OR && node[1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[344]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 344));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && true && node[0][2].getKind() == kind::BITVECTOR_OR && node[0][2].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][2][1]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[346]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 346));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::BITVECTOR_OR && node[1][1].getNumChildren() == 2 && true && node[1][1][1].getKind() == kind::BITVECTOR_AND && node[1][1][1].getNumChildren() == 2 && true && true && node[1][2].getKind() == kind::BITVECTOR_NOT && node[1][2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][2][0]);
    children.push_back(node[1][1][1][0]);
    children.push_back(node[1][1][1][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[359]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 359));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_OR && node[1][1].getNumChildren() == 2 && node[1][1][0].getKind() == kind::BITVECTOR_AND && node[1][1][0].getNumChildren() == 2 && true && true && node[1][1][1].getKind() == kind::BITVECTOR_AND && node[1][1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][1][0][1]);
    children.push_back(node[1][1][1][0]);
    children.push_back(node[1][1][1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[361]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 361));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_OR && node[1][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && node[1][1][0].getKind() == kind::BITVECTOR_OR && node[1][1][0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0][2]);
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][1][0][1]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[362]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 362));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_OR && node[1][0].getNumChildren() == 2 && true && node[1][0][1].getKind() == kind::BITVECTOR_AND && node[1][0][1].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1][1]);
    children.push_back(node[1][0][1][0]);
    children.push_back(node[1][0][1][2]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[365]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 365));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::BITVECTOR_OR && node[0][2].getNumChildren() == 2 && node[0][2][0].getKind() == kind::BITVECTOR_NOT && node[0][2][0].getNumChildren() == 1 && true && node[0][2][1].getKind() == kind::BITVECTOR_AND && node[0][2][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][1][0]);
    children.push_back(node[0][2][1][1]);
    children.push_back(node[0][2][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[396]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 396));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::BITVECTOR_OR && node[0][0][0].getNumChildren() == 3 && node[0][0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0][0].getNumChildren() == 2 && true && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0][0]);
    children.push_back(node[0][0][0][0][1]);
    children.push_back(node[0][0][0][2]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[400]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 400));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::BITVECTOR_NOT && node[0][0][0].getNumChildren() == 1 && true && true && true && node[0][2].getKind() == kind::BITVECTOR_OR && node[0][2].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][2][1]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[406]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 406));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::BITVECTOR_NOT && node[0][2].getNumChildren() == 1 && node[0][2][0].getKind() == kind::BITVECTOR_OR && node[0][2][0].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][0][1]);
    children.push_back(node[0][2][0][0]);
    children.push_back(node[0][2][0][2]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) bvcounter[408]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 408));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::BITVECTOR_OR && node[1][1].getNumChildren() == 2 && true && true && node[1][2].getKind() == kind::BITVECTOR_OR && node[1][2].getNumChildren() == 2 && true && node[1][2][1].getKind() == kind::BITVECTOR_NOT && node[1][2][1].getNumChildren() == 1 && node[1][1][1] == node[1][2][1][0]) {
    std::vector<Node> children;
    children.push_back(node[1][2][1][0]);
    children.push_back(node[1][2][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[411]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 411));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::BITVECTOR_OR && node[1][0].getNumChildren() == 2 && true && true && true && node[1][2].getKind() == kind::BITVECTOR_NOT && node[1][2].getNumChildren() == 1 && node[1][2][0].getKind() == kind::BITVECTOR_AND && node[1][2][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][2][0][1]);
    children.push_back(node[1][2][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[412]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 412));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::BITVECTOR_NOT && node[0][0][0].getNumChildren() == 1 && true && node[0][0][1].getKind() == kind::BITVECTOR_AND && node[0][0][1].getNumChildren() == 3 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][1]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][1][2]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[429]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 429));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::BITVECTOR_OR && node[1][1].getNumChildren() == 2 && node[1][1][0].getKind() == kind::BITVECTOR_AND && node[1][1][0].getNumChildren() == 2 && true && node[1][1][0][1].getKind() == kind::BITVECTOR_NOT && node[1][1][0][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0][1][0]);
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[1][2]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[437]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 437));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0].getNumChildren() == 3 && true && node[0][0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][0][1].getNumChildren() == 1 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][1][0]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][0][2]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[446]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 446));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::BITVECTOR_OR && node[1][0].getNumChildren() == 2 && true && node[1][0][1].getKind() == kind::BITVECTOR_NOT && node[1][0][1].getNumChildren() == 1 && node[1][0][1][0].getKind() == kind::BITVECTOR_AND && node[1][0][1][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1][0][0]);
    children.push_back(node[1][0][1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][2]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[470]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 470));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2 && true && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][2]);
    if (options::printStats()) bvcounter[490]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 490));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::BITVECTOR_NOT && node[0][2].getNumChildren() == 1 && true && true && node[2].getKind() == kind::BITVECTOR_AND && node[2].getNumChildren() == 2 && true && node[2][1].getKind() == kind::BITVECTOR_NOT && node[2][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[2][1][0]);
    children.push_back(node[2][0]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[492]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 492));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::BITVECTOR_OR && node[1][1].getNumChildren() == 2 && true && node[1][1][1].getKind() == kind::BITVECTOR_NOT && node[1][1][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][1][1][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][2]);
    children.push_back(node[1][0]);
    if (options::printStats()) bvcounter[501]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 501));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::BITVECTOR_OR && node[1][0][0].getNumChildren() == 2 && true && node[1][0][0][1].getKind() == kind::BITVECTOR_AND && node[1][0][0][1].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][1][0]);
    children.push_back(node[1][0][0][1][1]);
    children.push_back(node[1][0][0][1][2]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[507]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 507));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && node[1][1][0].getKind() == kind::BITVECTOR_AND && node[1][1][0].getNumChildren() == 2 && node[1][1][0][0].getKind() == kind::BITVECTOR_NOT && node[1][1][0][0].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0][0][0]);
    children.push_back(node[1][1][0][1]);
    children.push_back(node[1][2]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[526]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 526));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::BITVECTOR_AND && node[0][1][1].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) bvcounter[295]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 295));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2 && true && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][2]);
    children.push_back(node[1][0]);
    if (options::printStats()) bvcounter[297]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 297));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_OR && node[1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) bvcounter[299]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 299));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true && node[2].getKind() == kind::BITVECTOR_AND && node[2].getNumChildren() == 2 && true && node[2][1].getKind() == kind::BITVECTOR_NOT && node[2][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[2][1][0]);
    children.push_back(node[2][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[310]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 310));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_AND && node[0][0][1].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][1][1]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[314]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 314));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) bvcounter[321]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 321));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::BITVECTOR_OR && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::BITVECTOR_NOT && node[1][0][0].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][2]);
    children.push_back(node[1][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[328]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 328));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    if (options::printStats()) bvcounter[335]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 335));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][2]);
    children.push_back(node[1][1]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) bvcounter[340]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 340));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && true && node[1][2].getKind() == kind::BITVECTOR_OR && node[1][2].getNumChildren() == 2 && node[1][2][0].getKind() == kind::BITVECTOR_NOT && node[1][2][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][2][0][0]);
    children.push_back(node[1][2][1]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[352]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 352));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::BITVECTOR_OR && node[1][0][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][0][1]);
    if (options::printStats()) bvcounter[366]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 366));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::BITVECTOR_OR && node[0][0][0].getNumChildren() == 3 && true && true && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][0][2]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) bvcounter[378]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 378));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::BITVECTOR_AND && node[0][1][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][1]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) bvcounter[379]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 379));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::BITVECTOR_AND && node[1][0][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][1]);
    children.push_back(node[1][2]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[398]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 398));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::BITVECTOR_OR && node[0][0][0].getNumChildren() == 2 && node[0][0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0][0].getNumChildren() == 2 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0][1]);
    children.push_back(node[0][0][0][0][0]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][1]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[417]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 417));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::BITVECTOR_OR && node[0][1][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][1]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) bvcounter[418]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 418));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 3 && node[0][0][0].getKind() == kind::BITVECTOR_NOT && node[0][0][0].getNumChildren() == 1 && true && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][1]);
    if (options::printStats()) bvcounter[419]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 419));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0].getNumChildren() == 2 && true && node[0][0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][0][1].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][1][0]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[426]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 426));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::BITVECTOR_NOT && node[0][0][0].getNumChildren() == 1 && true && true && node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2 && node[0][0][0][0] == node[0][1][0] && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1][1]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[439]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 439));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::BITVECTOR_NOT && node[0][0][0].getNumChildren() == 1 && true && true && node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[441]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 441));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::BITVECTOR_NOT && node[1][0][0].getNumChildren() == 1 && node[1][0][0][0].getKind() == kind::BITVECTOR_OR && node[1][0][0][0].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][0][2]);
    children.push_back(node[1][0][0][0][0]);
    children.push_back(node[1][0][0][0][1]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[449]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 449));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::BITVECTOR_NOT && node[0][1][1].getNumChildren() == 1 && node[0][1][1][0].getKind() == kind::BITVECTOR_AND && node[0][1][1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1][0][1]);
    children.push_back(node[0][1][1][0][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[451]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 451));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0].getNumChildren() == 2 && true && node[0][0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][0][1].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][1][0]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][2]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[456]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 456));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && node[1][1][0].getKind() == kind::BITVECTOR_OR && node[1][1][0].getNumChildren() == 2 && node[1][1][0][0].getKind() == kind::BITVECTOR_AND && node[1][1][0][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0][0][0]);
    children.push_back(node[1][1][0][0][1]);
    children.push_back(node[1][1][0][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[475]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 475));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 3 && true && node[1][0][1].getKind() == kind::BITVECTOR_NOT && node[1][0][1].getNumChildren() == 1 && node[1][0][1][0].getKind() == kind::BITVECTOR_AND && node[1][0][1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1][0][1]);
    children.push_back(node[1][0][1][0][0]);
    children.push_back(node[1][0][2]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[479]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 479));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2 && node[0][1][0].getKind() == kind::BITVECTOR_NOT && node[0][1][0].getNumChildren() == 1 && true && node[0][1][1].getKind() == kind::BITVECTOR_AND && node[0][1][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1][1]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[535]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 535));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) bvcounter[316]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 316));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[324]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 324));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][1].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) bvcounter[364]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 364));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::BITVECTOR_AND && node[1][0][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[367]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 367));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_OR && node[1][1].getNumChildren() == 2 && true && node[1][1][1].getKind() == kind::BITVECTOR_NOT && node[1][1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][1][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[381]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 381));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && true && true && node[2].getKind() == kind::BITVECTOR_AND && node[2].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[2][2]);
    children.push_back(node[2][0]);
    children.push_back(node[2][1]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[389]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 389));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) bvcounter[395]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 395));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::BITVECTOR_NOT && node[1][0][0].getNumChildren() == 1 && true && node[1][0][1].getKind() == kind::BITVECTOR_OR && node[1][0][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1][1]);
    children.push_back(node[1][0][1][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[427]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 427));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::BITVECTOR_AND && node[1][0][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[430]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 430));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::BITVECTOR_AND && node[1][0][0].getNumChildren() == 2 && true && node[1][0][0][1].getKind() == kind::BITVECTOR_NOT && node[1][0][0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][1][0]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[435]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 435));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && true && node[2].getKind() == kind::BITVECTOR_AND && node[2].getNumChildren() == 3 && true && node[2][1].getKind() == kind::BITVECTOR_NOT && node[2][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[2][1][0]);
    children.push_back(node[2][2]);
    children.push_back(node[2][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[463]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 463));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && true && node[1][2].getKind() == kind::BITVECTOR_NOT && node[1][2].getNumChildren() == 1 && node[1][2][0].getKind() == kind::BITVECTOR_OR && node[1][2][0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][2][0][1]);
    children.push_back(node[1][2][0][0]);
    children.push_back(node[1][2][0][2]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[466]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 466));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::BITVECTOR_OR && node[0][2].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][2][1]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[485]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 485));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::BITVECTOR_AND && node[2].getNumChildren() == 3 && true && node[2][1].getKind() == kind::BITVECTOR_NOT && node[2][1].getNumChildren() == 1 && node[2][1][0].getKind() == kind::BITVECTOR_AND && node[2][1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][1][0][0]);
    children.push_back(node[2][1][0][1]);
    children.push_back(node[2][0]);
    children.push_back(node[2][2]);
    children.push_back(node[0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[491]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 491));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    if (options::printStats()) bvcounter[505]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 505));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[1][2]);
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) bvcounter[506]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 506));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::BITVECTOR_AND && node[0][1][1].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1][1]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][2]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[512]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 512));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && true && node[2].getKind() == kind::BITVECTOR_AND && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::BITVECTOR_NOT && node[2][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][0][0]);
    children.push_back(node[2][1]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[281]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 281));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::BITVECTOR_AND && node[0][1][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1][1]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[303]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 303));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][2]);
    children.push_back(node[1][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    if (options::printStats()) bvcounter[318]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 318));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::BITVECTOR_NOT && node[0][2].getNumChildren() == 1 && node[0][2][0].getKind() == kind::BITVECTOR_AND && node[0][2][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][0][0]);
    children.push_back(node[0][2][0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[370]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 370));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[374]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 374));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][2]);
    if (options::printStats()) bvcounter[384]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 384));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::BITVECTOR_OR && node[0][1][0].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][1]);
    children.push_back(node[0][1][0][2]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[402]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 402));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::BITVECTOR_OR && node[1][1].getNumChildren() == 2 && true && node[1][1][1].getKind() == kind::BITVECTOR_NOT && node[1][1][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][1][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][2]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[447]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 447));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][2]);
    children.push_back(node[1][1]);
    if (options::printStats()) bvcounter[489]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 489));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_OR && node[1][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::BITVECTOR_OR && node[1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[496]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 496));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && true && node[1][2].getKind() == kind::BITVECTOR_OR && node[1][2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][2][1]);
    children.push_back(node[1][2][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[524]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 524));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[284]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 284));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][2]);
    children.push_back(node[1][0]);
    if (options::printStats()) bvcounter[306]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 306));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_OR && node[1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[341]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 341));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && true && true && node[2].getKind() == kind::BITVECTOR_AND && node[2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[2][1]);
    children.push_back(node[1][2]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[350]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 350));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[403]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 403));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 3 && true && true && node[1][0][2].getKind() == kind::BITVECTOR_NOT && node[1][0][2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][2][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[416]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 416));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::BITVECTOR_OR && node[0][1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][1][0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[424]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 424));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[432]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 432));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[513]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 513));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    if (options::printStats()) bvcounter[527]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 527));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[282]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 282));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) bvcounter[322]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 322));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[360]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 360));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true && true && node[1][1][0] == node[2]) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[1][0]);
    children.push_back(node[1][2]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[428]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 428));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::BITVECTOR_AND && node[2].getNumChildren() == 3 && true && node[2][1].getKind() == kind::BITVECTOR_NOT && node[2][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][1][0]);
    children.push_back(node[2][0]);
    children.push_back(node[2][2]);
    children.push_back(node[0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[471]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 471));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[0][2]);
    if (options::printStats()) bvcounter[517]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 517));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1]);
    children.push_back(node[0][2]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[519]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 519));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[283]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 283));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[285]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 285));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][2]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[308]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 308));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[1][2]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[354]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 354));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][2]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[452]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 452));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[287]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 287));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[421]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 421));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][2]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[448]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 448));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::BITVECTOR_AND && node[2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][1]);
    children.push_back(node[2][0]);
    children.push_back(node[1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[309]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 309));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][2]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[468]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 468));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[385]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 385));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteBITVECTOR_PLUS(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::BITVECTOR_PLUS && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NEG && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[0]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 0));
  }
  else if (node.getKind() == kind::BITVECTOR_PLUS && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[5]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 5));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteBITVECTOR_NOT(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && true && node[0][2].getKind() == kind::BITVECTOR_AND && node[0][2].getNumChildren() == 3 && node[0][2][0].getKind() == kind::BITVECTOR_NOT && node[0][2][0].getNumChildren() == 1 && node[0][2][0][0].getKind() == kind::BITVECTOR_AND && node[0][2][0][0].getNumChildren() == 2 && node[0][0][0] == node[0][2][0][0][0] && node[0][0][1] == node[0][2][0][0][1] && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][0][0][0]);
    children.push_back(node[0][2][0][0][1]);
    children.push_back(node[0][2][1]);
    children.push_back(node[0][2][2]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[502]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 502));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][1].getNumChildren() == 1 && true && true && node[0][2].getKind() == kind::BITVECTOR_AND && node[0][2].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][2][1]);
    children.push_back(node[0][2][2]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[499]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 499));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 3 && true && node[0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][1].getNumChildren() == 1 && true && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][2]);
    if (options::printStats()) bvcounter[509]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 509));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::BITVECTOR_OR && node[0][2].getNumChildren() == 2 && node[0][2][0].getKind() == kind::BITVECTOR_AND && node[0][2][0].getNumChildren() == 2 && true && node[0][2][0][1].getKind() == kind::BITVECTOR_OR && node[0][2][0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][0][1][0]);
    children.push_back(node[0][2][0][1][1]);
    children.push_back(node[0][2][0][0]);
    children.push_back(node[0][2][1]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[523]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 523));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::BITVECTOR_OR && node[0][1][0].getNumChildren() == 3 && true && node[0][1][0][1].getKind() == kind::BITVECTOR_AND && node[0][1][0][1].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][1][1]);
    children.push_back(node[0][1][0][1][0]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][1][0][2]);
    children.push_back(node[0][0]);
    children.push_back(node[0][2]);
    if (options::printStats()) bvcounter[537]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 537));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::BITVECTOR_NOT && node[0][0][0].getNumChildren() == 1 && true && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][2]);
    if (options::printStats()) bvcounter[305]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 305));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::BITVECTOR_OR && node[0][1][0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][1]);
    children.push_back(node[0][1][0][2]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) bvcounter[401]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 401));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::BITVECTOR_OR && node[0][1][0].getNumChildren() == 3 && true && node[0][1][0][1].getKind() == kind::BITVECTOR_AND && node[0][1][0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][1][0]);
    children.push_back(node[0][1][0][1][1]);
    children.push_back(node[0][1][0][2]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[413]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 413));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2 && node[0][1][0].getKind() == kind::BITVECTOR_AND && node[0][1][0].getNumChildren() == 2 && true && true && node[0][1][1].getKind() == kind::BITVECTOR_AND && node[0][1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][1][0][1]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][1][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[414]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 414));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::BITVECTOR_OR && node[0][1][1].getNumChildren() == 2 && true && node[0][1][1][1].getKind() == kind::BITVECTOR_AND && node[0][1][1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1][1][0]);
    children.push_back(node[0][1][1][1][1]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[461]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 461));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][1].getNumChildren() == 1 && node[0][0][1][0].getKind() == kind::BITVECTOR_OR && node[0][0][1][0].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][0][0]);
    children.push_back(node[0][0][1][0][1]);
    children.push_back(node[0][0][1][0][2]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[480]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 480));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 3 && node[0][0][0].getKind() == kind::BITVECTOR_NOT && node[0][0][0].getNumChildren() == 1 && node[0][0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0][0].getNumChildren() == 2 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0][0]);
    children.push_back(node[0][0][0][0][1]);
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[510]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 510));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_AND && node[0][0][1].getNumChildren() == 2 && true && true && true && node[0][2].getKind() == kind::BITVECTOR_NOT && node[0][2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][0]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][1][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[528]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 528));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_AND && node[0][0][1].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][1][1]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) bvcounter[336]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 336));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && true && node[0][2].getKind() == kind::BITVECTOR_AND && node[0][2].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][2][1]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][2][2]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[464]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 464));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::BITVECTOR_NOT && node[0][0][0].getNumChildren() == 1 && true && node[0][0][1].getKind() == kind::BITVECTOR_OR && node[0][0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][1][1]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[465]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 465));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::BITVECTOR_NOT && node[0][2].getNumChildren() == 1 && node[0][2][0].getKind() == kind::BITVECTOR_AND && node[0][2][0].getNumChildren() == 2 && node[0][2][0][0].getKind() == kind::BITVECTOR_NOT && node[0][2][0][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][0][0][0]);
    children.push_back(node[0][2][0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[481]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 481));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::BITVECTOR_NOT && node[0][0][0].getNumChildren() == 1 && true && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    if (options::printStats()) bvcounter[516]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 516));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && true && node[0][2].getKind() == kind::BITVECTOR_OR && node[0][2].getNumChildren() == 2 && true && node[0][2][1].getKind() == kind::BITVECTOR_NOT && node[0][2][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][2][1][0]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[522]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 522));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && true && node[0][2].getKind() == kind::BITVECTOR_AND && node[0][2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][0]);
    children.push_back(node[0][2][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[288]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 288));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 3 && true && node[0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][1].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][2]);
    children.push_back(node[0][2]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[482]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 482));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::BITVECTOR_AND && node[0][2].getNumChildren() == 3 && true && true && node[0][2][2].getKind() == kind::BITVECTOR_NOT && node[0][2][2].getNumChildren() == 1 && node[0][0] == node[0][2][2][0]) {
    std::vector<Node> children;
    children.push_back(node[0][2][2][0]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][2][1]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[487]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 487));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::BITVECTOR_AND && node[0][2].getNumChildren() == 2 && true && node[0][2][1].getKind() == kind::BITVECTOR_NOT && node[0][2][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][1][0]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[289]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 289));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][1]);
    children.push_back(node[0][2]);
    if (options::printStats()) bvcounter[383]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 383));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_AND && node[0][0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][1]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[392]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 392));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::BITVECTOR_OR && node[0][0][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[444]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 444));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::BITVECTOR_OR && node[0][0][0].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][2]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[454]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 454));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 3 && true && node[0][1][1].getKind() == kind::BITVECTOR_NOT && node[0][1][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][2]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[483]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 483));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    if (options::printStats()) bvcounter[500]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 500));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[436]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 436));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][2]);
    children.push_back(node[0][0]);
    children.push_back(node[0][2]);
    if (options::printStats()) bvcounter[472]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 472));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::BITVECTOR_AND && node[0][2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][0]);
    children.push_back(node[0][2][1]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[296]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 296));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[474]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 474));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][0]);
    if (options::printStats()) bvcounter[497]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 497));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[382]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 382));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::BITVECTOR_NOT && node[0][2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][0]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[399]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 399));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[331]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 331));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteBITVECTOR_NEG(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::BITVECTOR_NEG && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[8]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 8));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteBITVECTOR_AND(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && node[1][1][0].getKind() == kind::BITVECTOR_AND && node[1][1][0].getNumChildren() == 2 && true && true && node[2].getKind() == kind::BITVECTOR_OR && node[2].getNumChildren() == 2 && true && node[2][1].getKind() == kind::BITVECTOR_AND && node[2][1].getNumChildren() == 2 && node[1][1][0][1] == node[2][1][0] && node[1][1][0][0] == node[2][1][1]) {
    std::vector<Node> children;
    children.push_back(node[2][1][1]);
    children.push_back(node[2][1][0]);
    children.push_back(node[2][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[332]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 332));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::BITVECTOR_AND && node[1][0][0].getNumChildren() == 2 && node[0][0][0] == node[1][0][0][0] && node[0][0][1] == node[1][0][0][1] && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[0][1]);
    children.push_back(node[1][1]);
    if (options::printStats()) bvcounter[369]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 369));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && true && true && node[2].getKind() == kind::BITVECTOR_NOT && node[2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[286]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 286));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true && node[2].getKind() == kind::BITVECTOR_NOT && node[2].getNumChildren() == 1 && node[2][0].getKind() == kind::BITVECTOR_OR && node[2][0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][0][1]);
    children.push_back(node[2][0][0]);
    children.push_back(node[2][0][2]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[300]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 300));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true && node[2].getKind() == kind::BITVECTOR_OR && node[2].getNumChildren() == 2 && true && node[1][1][0] == node[2][1]) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[2][1]);
    children.push_back(node[2][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[301]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 301));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::BITVECTOR_OR && node[0][1][1].getNumChildren() == 2 && true && true && true && node[2].getKind() == kind::BITVECTOR_NOT && node[2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[304]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 304));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[311]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 311));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 2 && true && node[1][1][1].getKind() == kind::BITVECTOR_OR && node[1][1][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][1][0]);
    children.push_back(node[1][1][1][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[312]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 312));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[323]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 323));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && node[0][1][0].getKind() == kind::BITVECTOR_NOT && node[0][1][0].getNumChildren() == 1 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[326]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 326));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[330]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 330));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true && node[2].getKind() == kind::BITVECTOR_NOT && node[2].getNumChildren() == 1 && node[2][0].getKind() == kind::BITVECTOR_AND && node[2][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][0][1]);
    children.push_back(node[2][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) bvcounter[343]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 343));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 3 && true && node[0][1][1].getKind() == kind::BITVECTOR_OR && node[0][1][1].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][1][1]);
    children.push_back(node[0][1][2]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[349]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 349));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 3 && node[0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0].getNumChildren() == 2 && true && true && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][2]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) bvcounter[353]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 353));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && node[0][1] == node[1][0][0] && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0]);
    children.push_back(node[1][1][2]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[358]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 358));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 3 && true && node[0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][1].getNumChildren() == 1 && true && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) bvcounter[368]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 368));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][2]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[373]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 373));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 3 && node[1][0][0].getKind() == kind::BITVECTOR_NOT && node[1][0][0].getNumChildren() == 1 && true && node[1][0][1].getKind() == kind::BITVECTOR_OR && node[1][0][1].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1][1]);
    children.push_back(node[1][0][1][0]);
    children.push_back(node[1][0][2]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[387]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 387));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && true && node[2].getKind() == kind::BITVECTOR_OR && node[2].getNumChildren() == 2 && true && node[2][1].getKind() == kind::BITVECTOR_AND && node[2][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[2][1][1]);
    children.push_back(node[2][1][0]);
    children.push_back(node[2][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[390]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 390));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][2]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) bvcounter[393]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 393));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][2]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[404]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 404));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::BITVECTOR_OR && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::BITVECTOR_AND && node[2][0].getNumChildren() == 2 && true && true && node[2][1].getKind() == kind::BITVECTOR_NOT && node[2][1].getNumChildren() == 1 && node[2][1][0].getKind() == kind::BITVECTOR_AND && node[2][1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][0][0]);
    children.push_back(node[2][0][1]);
    children.push_back(node[2][1][0][1]);
    children.push_back(node[2][1][0][0]);
    children.push_back(node[0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[405]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 405));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::BITVECTOR_NOT && node[2].getNumChildren() == 1 && node[2][0].getKind() == kind::BITVECTOR_OR && node[2][0].getNumChildren() == 3 && node[2][0][0].getKind() == kind::BITVECTOR_AND && node[2][0][0].getNumChildren() == 2 && node[2][0][0][0].getKind() == kind::BITVECTOR_NOT && node[2][0][0][0].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][0][0][0][0]);
    children.push_back(node[2][0][0][1]);
    children.push_back(node[2][0][2]);
    children.push_back(node[2][0][1]);
    children.push_back(node[1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[415]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 415));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::BITVECTOR_NOT && node[1][0][0].getNumChildren() == 1 && true && node[1][0][1].getKind() == kind::BITVECTOR_OR && node[1][0][1].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1][0]);
    children.push_back(node[1][0][1][1]);
    children.push_back(node[1][1]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[420]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 420));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 3 && true && node[1][1][1].getKind() == kind::BITVECTOR_OR && node[1][1][1].getNumChildren() == 2 && node[1][1][1][0].getKind() == kind::BITVECTOR_NOT && node[1][1][1][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][1][0][0]);
    children.push_back(node[1][1][1][1]);
    children.push_back(node[1][1][2]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[422]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 422));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true && node[2].getKind() == kind::BITVECTOR_OR && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::BITVECTOR_NOT && node[2][0].getNumChildren() == 1 && node[2][0][0].getKind() == kind::BITVECTOR_AND && node[2][0][0].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[2][0][0][1]);
    children.push_back(node[2][0][0][2]);
    children.push_back(node[2][0][0][0]);
    children.push_back(node[2][1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[425]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 425));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 3 && true && node[0][0][1].getKind() == kind::BITVECTOR_AND && node[0][0][1].getNumChildren() == 2 && true && true && node[0][0][2].getKind() == kind::BITVECTOR_AND && node[0][0][2].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][1]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][2][0]);
    children.push_back(node[0][0][2][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[433]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 433));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 3 && true && node[0][1][1].getKind() == kind::BITVECTOR_NOT && node[0][1][1].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][2]);
    children.push_back(node[0][0][0]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[443]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 443));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::BITVECTOR_OR && node[0][1][1].getNumChildren() == 2 && node[0][1][1][0].getKind() == kind::BITVECTOR_NOT && node[0][1][1][0].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1][0][0]);
    children.push_back(node[0][1][1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[458]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 458));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::BITVECTOR_AND && node[1][0][0].getNumChildren() == 2 && node[1][0][0][0].getKind() == kind::BITVECTOR_OR && node[1][0][0][0].getNumChildren() == 2 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][0][1]);
    children.push_back(node[1][0][0][0][0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[459]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 459));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0].getNumChildren() == 3 && true && node[0][0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][0][1].getNumChildren() == 1 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][1][0]);
    children.push_back(node[0][0][0][2]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[467]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 467));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 3 && true && true && node[0][0][2].getKind() == kind::BITVECTOR_NOT && node[0][0][2].getNumChildren() == 1 && node[0][0][2][0].getKind() == kind::BITVECTOR_AND && node[0][0][2][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][2][0][0]);
    children.push_back(node[0][0][2][0][1]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[473]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 473));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::BITVECTOR_NOT && node[1][0][0].getNumChildren() == 1 && node[1][0][0][0].getKind() == kind::BITVECTOR_AND && node[1][0][0][0].getNumChildren() == 2 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][0][1]);
    children.push_back(node[1][0][0][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][1]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[476]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 476));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][2]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[514]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 514));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 3 && node[1][0][0].getKind() == kind::BITVECTOR_NOT && node[1][0][0].getNumChildren() == 1 && true && true && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][2]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[518]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 518));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) bvcounter[529]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 529));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 3 && true && node[1][0][1].getKind() == kind::BITVECTOR_OR && node[1][0][1].getNumChildren() == 2 && true && true && node[1][0][2].getKind() == kind::BITVECTOR_OR && node[1][0][2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][2][1]);
    children.push_back(node[1][0][2][0]);
    children.push_back(node[1][0][1][0]);
    children.push_back(node[1][0][1][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[532]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 532));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && true && node[2].getKind() == kind::BITVECTOR_OR && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::BITVECTOR_AND && node[2][0].getNumChildren() == 2 && true && true && node[2][1].getKind() == kind::BITVECTOR_NOT && node[2][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[2][0][0]);
    children.push_back(node[2][0][1]);
    children.push_back(node[2][1][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[291]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 291));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true && node[2].getKind() == kind::BITVECTOR_OR && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::BITVECTOR_NOT && node[2][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[2][0][0]);
    children.push_back(node[2][1]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) bvcounter[292]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 292));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[0][0][0] == node[1][0] && true && node[2].getKind() == kind::BITVECTOR_NOT && node[2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1][1]);
    if (options::printStats()) bvcounter[294]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 294));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true && node[2].getKind() == kind::BITVECTOR_OR && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::BITVECTOR_NOT && node[2][0].getNumChildren() == 1 && true && node[1][1][0] == node[2][1]) {
    std::vector<Node> children;
    children.push_back(node[2][1]);
    children.push_back(node[1][0]);
    children.push_back(node[2][0][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[317]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 317));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::BITVECTOR_NOT && node[0][1][1].getNumChildren() == 1 && true && true && node[2].getKind() == kind::BITVECTOR_NOT && node[2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[320]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 320));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][1].getNumChildren() == 1 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) bvcounter[327]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 327));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::BITVECTOR_NOT && node[1][0][0].getNumChildren() == 1 && true && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[334]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 334));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 2 && node[1][1][0].getKind() == kind::BITVECTOR_NOT && node[1][1][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[338]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 338));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && true && node[2].getKind() == kind::BITVECTOR_OR && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::BITVECTOR_NOT && node[2][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[2][0][0]);
    children.push_back(node[2][1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[347]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 347));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    if (options::printStats()) bvcounter[355]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 355));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) bvcounter[356]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 356));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::BITVECTOR_AND && node[1][0][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][1]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[375]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 375));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && node[1][0][1].getKind() == kind::BITVECTOR_NOT && node[1][0][1].getNumChildren() == 1 && true && node[2].getKind() == kind::BITVECTOR_OR && node[2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[2][0]);
    children.push_back(node[2][1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[377]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 377));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && node[0][0] == node[1][1][0]) {
    std::vector<Node> children;
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) bvcounter[391]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 391));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 3 && node[1][1][0].getKind() == kind::BITVECTOR_NOT && node[1][1][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][1][2]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[407]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 407));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && node[1][1][0].getKind() == kind::BITVECTOR_AND && node[1][1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][1][0][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[440]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 440));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 3 && true && true && node[0][0][2].getKind() == kind::BITVECTOR_AND && node[0][0][2].getNumChildren() == 2 && node[0][0][2][0].getKind() == kind::BITVECTOR_NOT && node[0][0][2][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][2][0][0]);
    children.push_back(node[0][0][2][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[442]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 442));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::BITVECTOR_NOT && node[0][1][1].getNumChildren() == 1 && node[0][1][1][0].getKind() == kind::BITVECTOR_AND && node[0][1][1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1][0][1]);
    children.push_back(node[0][1][1][0][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[453]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 453));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::BITVECTOR_NOT && node[1][0][0].getNumChildren() == 1 && true && node[1][0][1].getKind() == kind::BITVECTOR_NOT && node[1][0][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1][0]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[455]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 455));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::BITVECTOR_AND && node[1][0][0].getNumChildren() == 2 && node[1][0][0][0].getKind() == kind::BITVECTOR_NOT && node[1][0][0][0].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][0][0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[457]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 457));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_OR && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::BITVECTOR_AND && node[1][0][0].getNumChildren() == 2 && node[1][0][0][0].getKind() == kind::BITVECTOR_OR && node[1][0][0][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][0][1]);
    children.push_back(node[1][0][0][0][0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[469]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 469));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && true && true && node[2].getKind() == kind::BITVECTOR_OR && node[2].getNumChildren() == 2 && true && node[2][1].getKind() == kind::BITVECTOR_NOT && node[2][1].getNumChildren() == 1 && node[0][0] == node[2][1][0]) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[2][1][0]);
    children.push_back(node[2][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[488]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 488));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_OR && node[1][0].getNumChildren() == 2 && true && node[1][0][1].getKind() == kind::BITVECTOR_AND && node[1][0][1].getNumChildren() == 3 && true && node[1][0][1][1].getKind() == kind::BITVECTOR_NOT && node[1][0][1][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1][1][0]);
    children.push_back(node[1][0][1][0]);
    children.push_back(node[1][0][1][2]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[504]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 504));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[520]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 520));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[1][0][2]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    if (options::printStats()) bvcounter[531]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 531));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[533]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 533));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 3 && node[0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0].getNumChildren() == 2 && true && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][2]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[339]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 339));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 3 && true && true && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[372]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 372));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::BITVECTOR_NOT && node[1][0][0].getNumChildren() == 1 && true && node[1][0][1].getKind() == kind::BITVECTOR_NOT && node[1][0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[431]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 431));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && node[1][1][0].getKind() == kind::BITVECTOR_AND && node[1][1][0].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][1][0][1]);
    children.push_back(node[1][1][0][2]);
    children.push_back(node[1][0]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[450]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 450));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_AND && node[0][0][1].getNumChildren() == 2 && true && node[0][0][1][1].getKind() == kind::BITVECTOR_NOT && node[0][0][1][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][1][0]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[484]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 484));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][1][2]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[511]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 511));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 3 && true && true && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][2]);
    children.push_back(node[0][1]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) bvcounter[515]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 515));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    if (options::printStats()) bvcounter[521]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 521));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::BITVECTOR_OR && node[0][1][1].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[525]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 525));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[298]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 298));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][1]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[313]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 313));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::BITVECTOR_NOT && node[1][0][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[333]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 333));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && true && node[2].getKind() == kind::BITVECTOR_OR && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::BITVECTOR_NOT && node[2][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][0][0]);
    children.push_back(node[2][1]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[345]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 345));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_OR && node[1][0].getNumChildren() == 3 && node[1][0][0].getKind() == kind::BITVECTOR_AND && node[1][0][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][2]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[357]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 357));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[376]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 376));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[394]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 394));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) bvcounter[410]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 410));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 2 && node[1][1][0].getKind() == kind::BITVECTOR_NOT && node[1][1][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[462]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 462));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_AND && node[0][0][1].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][1]);
    children.push_back(node[0][0][1][2]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[477]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 477));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0].getNumChildren() == 2 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[508]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 508));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::BITVECTOR_NOT && node[0][0][0].getNumChildren() == 1 && true && node[0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[534]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 534));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[307]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 307));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_AND && node[0][0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][1]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[342]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 342));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[348]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 348));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[388]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 388));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::BITVECTOR_AND && node[1][0][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[423]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 423));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && node[1][0][1].getKind() == kind::BITVECTOR_NOT && node[1][0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[445]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 445));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) bvcounter[486]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 486));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[0][0][0] == node[1][0] && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1][1]);
    if (options::printStats()) bvcounter[494]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 494));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[293]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 293));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::BITVECTOR_NOT && node[1][0][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[351]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 351));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[498]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 498));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[363]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 363));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[371]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 371));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][2]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[493]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 493));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) bvcounter[495]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 495));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[503]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 503));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[290]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 290));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_OR && node[1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[380]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 380));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[315]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 315));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteBITVECTOR_SLT(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::BITVECTOR_SLT && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[9]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialPredicate(children, 9));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteEQUAL(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::EQUAL && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[4]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialPredicate(children, 4));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteBITVECTOR_ULT(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::BITVECTOR_ULT && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[6]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialPredicate(children, 6));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
void TheoryBVSpecialRewriter::initializeRewrites() {
  for (unsigned i = 0; i < kind::LAST_KIND; i++) {
    d_rewriteTable[i] = IdentityRewrite;
  }
  for (unsigned i = 0; i < 538; i++) {
    bvcounter[i] = 0;
  }
  d_rewriteTable[kind::BITVECTOR_OR] = RewriteBITVECTOR_OR;
  d_rewriteTable[kind::BITVECTOR_PLUS] = RewriteBITVECTOR_PLUS;
  d_rewriteTable[kind::BITVECTOR_NOT] = RewriteBITVECTOR_NOT;
  d_rewriteTable[kind::BITVECTOR_NEG] = RewriteBITVECTOR_NEG;
  d_rewriteTable[kind::BITVECTOR_AND] = RewriteBITVECTOR_AND;
  d_rewriteTable[kind::BITVECTOR_SLT] = RewriteBITVECTOR_SLT;
  d_rewriteTable[kind::EQUAL] = RewriteEQUAL;
  d_rewriteTable[kind::BITVECTOR_ULT] = RewriteBITVECTOR_ULT;
}

void TheoryBVSpecialRewriter::print() {
  Chat() << "BV rewrite statistics" << std::endl;
  for (int i = 0; i < 538; i++) {
    if (bvcounter[i] > 0)
      Chat() << i << " " << bvcounter[i] << std::endl;
  }
}
