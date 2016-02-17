#include "options/bv_options.h"
#include "options/main_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

int bvcounter[100];
static RewriteResponse RewriteBITVECTOR_OR(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[25]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 25));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[25]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 25));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[25]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 25));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[25]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 25));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[27]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 27));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[27]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 27));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[46]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 46));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[46]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 46));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[46]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 46));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[46]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 46));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[46]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 46));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[46]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 46));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[0]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 0));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[0]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 0));
  }
  if (options::printStats()) bvcounter[99]++;
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteBITVECTOR_NEG(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::BITVECTOR_NEG && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[18]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 18));
  }
  else if (node.getKind() == kind::BITVECTOR_NEG && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[18]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 18));
  }
  if (options::printStats()) bvcounter[99]++;
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteBITVECTOR_AND(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[28]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 28));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[28]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 28));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[28]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 28));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[28]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 28));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[38]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 38));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[38]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 38));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::BITVECTOR_NOT && node[2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[38]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 38));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[38]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 38));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[38]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 38));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::BITVECTOR_NOT && node[2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[38]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 38));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_XOR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[50]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 50));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_XOR && node[0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[50]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 50));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_XOR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[50]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 50));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_XOR && node[0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[50]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 50));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[23]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 23));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[23]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 23));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[32]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 32));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[32]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 32));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[32]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 32));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[32]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 32));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[32]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 32));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[32]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 32));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[14]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 14));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[14]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 14));
  }
  if (options::printStats()) bvcounter[99]++;
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteBITVECTOR_NOT(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][2]);
    if (options::printStats()) bvcounter[34]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 34));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][2]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[34]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 34));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[34]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 34));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[34]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 34));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[0][2]);
    if (options::printStats()) bvcounter[34]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 34));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][2]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[34]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 34));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][2]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[51]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 51));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][2]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[51]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 51));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[51]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 51));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][2]);
    if (options::printStats()) bvcounter[51]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 51));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[0][2]);
    if (options::printStats()) bvcounter[51]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 51));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[51]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 51));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[29]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 29));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[29]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 29));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[44]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 44));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[44]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 44));
  }
  if (options::printStats()) bvcounter[99]++;
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteBITVECTOR_XOR(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::BITVECTOR_XOR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[48]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 48));
  }
  else if (node.getKind() == kind::BITVECTOR_XOR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[48]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 48));
  }
  else if (node.getKind() == kind::BITVECTOR_XOR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[48]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 48));
  }
  else if (node.getKind() == kind::BITVECTOR_XOR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[48]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 48));
  }
  else if (node.getKind() == kind::BITVECTOR_XOR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[49]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 49));
  }
  else if (node.getKind() == kind::BITVECTOR_XOR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[49]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 49));
  }
  else if (node.getKind() == kind::BITVECTOR_XOR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[49]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 49));
  }
  else if (node.getKind() == kind::BITVECTOR_XOR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[49]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 49));
  }
  else if (node.getKind() == kind::BITVECTOR_XOR && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[41]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 41));
  }
  else if (node.getKind() == kind::BITVECTOR_XOR && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[41]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 41));
  }
  else if (node.getKind() == kind::BITVECTOR_XOR && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[41]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 41));
  }
  else if (node.getKind() == kind::BITVECTOR_XOR && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[41]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 41));
  }
  else if (node.getKind() == kind::BITVECTOR_XOR && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0]);
    children.push_back(node[2]);
    if (options::printStats()) bvcounter[41]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 41));
  }
  else if (node.getKind() == kind::BITVECTOR_XOR && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[41]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 41));
  }
  else if (node.getKind() == kind::BITVECTOR_XOR && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[16]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 16));
  }
  else if (node.getKind() == kind::BITVECTOR_XOR && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[16]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 16));
  }
  if (options::printStats()) bvcounter[99]++;
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteBITVECTOR_PLUS(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::BITVECTOR_PLUS && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NEG && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[19]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 19));
  }
  else if (node.getKind() == kind::BITVECTOR_PLUS && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NEG && node[0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[19]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 19));
  }
  else if (node.getKind() == kind::BITVECTOR_PLUS && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[2]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 2));
  }
  else if (node.getKind() == kind::BITVECTOR_PLUS && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[2]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 2));
  }
  if (options::printStats()) bvcounter[99]++;
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteBITVECTOR_SLT(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::BITVECTOR_SLT && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_PLUS && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_PLUS && node[1].getNumChildren() == 2 && node[0][1] == node[1][0] && node[0][0] == node[1][1]) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) bvcounter[47]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialPredicate(children, 47));
  }
  else if (node.getKind() == kind::BITVECTOR_SLT && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_PLUS && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_PLUS && node[1].getNumChildren() == 2 && node[0][1] == node[1][0] && node[0][0] == node[1][1]) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) bvcounter[47]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialPredicate(children, 47));
  }
  else if (node.getKind() == kind::BITVECTOR_SLT && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_PLUS && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_PLUS && node[1].getNumChildren() == 2 && node[0][0] == node[1][0] && node[0][1] == node[1][1]) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) bvcounter[47]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialPredicate(children, 47));
  }
  else if (node.getKind() == kind::BITVECTOR_SLT && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_PLUS && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_PLUS && node[1].getNumChildren() == 2 && node[0][0] == node[1][0] && node[0][1] == node[1][1]) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) bvcounter[47]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialPredicate(children, 47));
  }
  else if (node.getKind() == kind::BITVECTOR_SLT && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[17]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialPredicate(children, 17));
  }
  if (options::printStats()) bvcounter[99]++;
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteEQUAL(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::EQUAL && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[54]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialPredicate(children, 54));
  }
  else if (node.getKind() == kind::EQUAL && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[54]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialPredicate(children, 54));
  }
  else if (node.getKind() == kind::EQUAL && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[1]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialPredicate(children, 1));
  }
  else if (node.getKind() == kind::EQUAL && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0]);
    if (options::printStats()) bvcounter[1]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialPredicate(children, 1));
  }
  if (options::printStats()) bvcounter[99]++;
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteBITVECTOR_ULT(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::BITVECTOR_ULT && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_PLUS && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_PLUS && node[1].getNumChildren() == 2 && node[0][1] == node[1][0] && node[0][0] == node[1][1]) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) bvcounter[35]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialPredicate(children, 35));
  }
  else if (node.getKind() == kind::BITVECTOR_ULT && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_PLUS && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_PLUS && node[1].getNumChildren() == 2 && node[0][0] == node[1][0] && node[0][1] == node[1][1]) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) bvcounter[35]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialPredicate(children, 35));
  }
  else if (node.getKind() == kind::BITVECTOR_ULT && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_PLUS && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_PLUS && node[1].getNumChildren() == 2 && node[0][1] == node[1][0] && node[0][0] == node[1][1]) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) bvcounter[35]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialPredicate(children, 35));
  }
  else if (node.getKind() == kind::BITVECTOR_ULT && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_PLUS && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_PLUS && node[1].getNumChildren() == 2 && node[0][0] == node[1][0] && node[0][1] == node[1][1]) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) bvcounter[35]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialPredicate(children, 35));
  }
  else if (node.getKind() == kind::BITVECTOR_ULT && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[0][0] == node[1][0] && node[0][1] == node[1][1]) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) bvcounter[43]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialPredicate(children, 43));
  }
  else if (node.getKind() == kind::BITVECTOR_ULT && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[0][0] == node[1][0] && node[0][1] == node[1][1]) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) bvcounter[43]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialPredicate(children, 43));
  }
  else if (node.getKind() == kind::BITVECTOR_ULT && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[0][1] == node[1][0] && node[0][0] == node[1][1]) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) bvcounter[43]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialPredicate(children, 43));
  }
  else if (node.getKind() == kind::BITVECTOR_ULT && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[0][1] == node[1][0] && node[0][0] == node[1][1]) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) bvcounter[43]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialPredicate(children, 43));
  }
  else if (node.getKind() == kind::BITVECTOR_ULT && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_PLUS && node[0].getNumChildren() == 2 && true && true && node[0][0] == node[1]) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][1]);
    if (options::printStats()) bvcounter[40]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialPredicate(children, 40));
  }
  else if (node.getKind() == kind::BITVECTOR_ULT && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_PLUS && node[0].getNumChildren() == 2 && true && true && node[0][1] == node[1]) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][0]);
    if (options::printStats()) bvcounter[40]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialPredicate(children, 40));
  }
  else if (node.getKind() == kind::BITVECTOR_ULT && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    if (options::printStats()) bvcounter[5]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialPredicate(children, 5));
  }
  if (options::printStats()) bvcounter[99]++;
  return RewriteResponse(REWRITE_DONE, node);
}
void TheoryBVSpecialRewriter::initializeRewrites() {
  for (unsigned i = 0; i < kind::LAST_KIND; i++) {
    d_rewriteTable[i] = IdentityRewrite;
  }
  for (int i = 0; i < 100; i++) {
    bvcounter[i] = 0;
  }
  d_rewriteTable[kind::BITVECTOR_OR] = RewriteBITVECTOR_OR;
  d_rewriteTable[kind::BITVECTOR_NEG] = RewriteBITVECTOR_NEG;
  d_rewriteTable[kind::BITVECTOR_AND] = RewriteBITVECTOR_AND;
  d_rewriteTable[kind::BITVECTOR_NOT] = RewriteBITVECTOR_NOT;
  d_rewriteTable[kind::BITVECTOR_XOR] = RewriteBITVECTOR_XOR;
  d_rewriteTable[kind::BITVECTOR_PLUS] = RewriteBITVECTOR_PLUS;
  d_rewriteTable[kind::BITVECTOR_SLT] = RewriteBITVECTOR_SLT;
  d_rewriteTable[kind::EQUAL] = RewriteEQUAL;
  d_rewriteTable[kind::BITVECTOR_ULT] = RewriteBITVECTOR_ULT;
}

void TheoryBVSpecialRewriter::print() {
  Chat() << "BV rewrite statistics" << std::endl;
  for (int i = 0; i < 100; i++) {
    if (bvcounter[i] > 0)
      Chat() << i << " " << bvcounter[i] << std::endl;
  }

}
