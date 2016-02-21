#include "options/bv_options.h"
#include "options/main_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

RewriteResponse TheoryBVSpecialRewriter::RewriteBITVECTOR_AND(TNode node, bool prerewrite) {
  if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && node[1][1][0].getKind() == kind::BITVECTOR_AND && node[1][1][0].getNumChildren() == 2 && true && true && node[2].getKind() == kind::BITVECTOR_OR && node[2].getNumChildren() == 2 && true && node[2][1].getKind() == kind::BITVECTOR_AND && node[2][1].getNumChildren() == 2 && node[1][1][0][1] == node[2][1][0] && node[1][1][0][0] == node[2][1][1]) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    children.push_back(node[2][1][1]);
    children.push_back(node[2][1][0]);
    children.push_back(node[2][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::counter[332]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 332));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::BITVECTOR_AND && node[1][0][0].getNumChildren() == 2 && node[0][0][0] == node[1][0][0][0] && node[0][0][1] == node[1][0][0][1] && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[0][1]);
    if (options::printStats()) counter[369]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 369));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && true && true && node[2].getKind() == kind::BITVECTOR_NOT && node[2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[2][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    if (options::printStats()) counter[286]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 286));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true && node[2].getKind() == kind::BITVECTOR_NOT && node[2].getNumChildren() == 1 && node[2][0].getKind() == kind::BITVECTOR_OR && node[2][0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    children.push_back(node[2][0][1]);
    children.push_back(node[2][0][0]);
    children.push_back(node[2][0][2]);
    if (options::printStats()) counter[300]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 300));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true && node[2].getKind() == kind::BITVECTOR_OR && node[2].getNumChildren() == 2 && true && node[1][1][0] == node[2][1]) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[2][1]);
    if (options::printStats()) counter[301]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 301));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::BITVECTOR_OR && node[0][1][1].getNumChildren() == 2 && true && true && true && node[2].getKind() == kind::BITVECTOR_NOT && node[2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[2][0]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][1][1]);
    if (options::printStats()) counter[304]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 304));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[2]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) counter[311]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 311));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 2 && true && node[1][1][1].getKind() == kind::BITVECTOR_OR && node[1][1][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[0]);
    children.push_back(node[2]);
    children.push_back(node[1][1][1][0]);
    children.push_back(node[1][1][1][1]);
    children.push_back(node[1][1][0]);
    if (options::printStats()) counter[312]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 312));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[2]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0][0]);
    if (options::printStats()) counter[323]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 323));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && node[0][1][0].getKind() == kind::BITVECTOR_NOT && node[0][1][0].getNumChildren() == 1 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[2]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[326]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 326));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0][1]);
    if (options::printStats()) counter[330]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 330));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true && node[2].getKind() == kind::BITVECTOR_NOT && node[2].getNumChildren() == 1 && node[2][0].getKind() == kind::BITVECTOR_AND && node[2][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[2][0][1]);
    children.push_back(node[2][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) counter[343]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 343));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 3 && true && node[0][1][1].getKind() == kind::BITVECTOR_OR && node[0][1][1].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][1][1]);
    children.push_back(node[0][1][2]);
    if (options::printStats()) counter[349]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 349));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 3 && node[0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0].getNumChildren() == 2 && true && true && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][2]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1]);
    if (options::printStats()) counter[353]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 353));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && node[0][1] == node[1][0][0] && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][1][2]);
    children.push_back(node[1][1][1]);
    if (options::printStats()) counter[358]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 358));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 3 && true && node[0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][1].getNumChildren() == 1 && true && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) counter[368]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 368));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[2]);
    children.push_back(node[1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][2]);
    if (options::printStats()) counter[373]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 373));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 3 && node[1][0][0].getKind() == kind::BITVECTOR_NOT && node[1][0][0].getNumChildren() == 1 && true && node[1][0][1].getKind() == kind::BITVECTOR_OR && node[1][0][1].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][2]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1][1]);
    children.push_back(node[1][0][1][0]);
    if (options::printStats()) counter[387]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 387));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && true && node[2].getKind() == kind::BITVECTOR_OR && node[2].getNumChildren() == 2 && true && node[2][1].getKind() == kind::BITVECTOR_AND && node[2][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][1][0]);
    children.push_back(node[2][0]);
    children.push_back(node[1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[2][1][1]);
    if (options::printStats()) counter[390]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 390));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][2]);
    children.push_back(node[0][1][0]);
    if (options::printStats()) counter[393]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 393));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[1]);
    children.push_back(node[0][1][2]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    if (options::printStats()) counter[404]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 404));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::BITVECTOR_OR && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::BITVECTOR_AND && node[2][0].getNumChildren() == 2 && true && true && node[2][1].getKind() == kind::BITVECTOR_NOT && node[2][1].getNumChildren() == 1 && node[2][1][0].getKind() == kind::BITVECTOR_AND && node[2][1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][1][0][0]);
    children.push_back(node[0]);
    children.push_back(node[1]);
    children.push_back(node[2][0][0]);
    children.push_back(node[2][0][1]);
    children.push_back(node[2][1][0][1]);
    if (options::printStats()) counter[405]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 405));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::BITVECTOR_NOT && node[2].getNumChildren() == 1 && node[2][0].getKind() == kind::BITVECTOR_OR && node[2][0].getNumChildren() == 3 && node[2][0][0].getKind() == kind::BITVECTOR_AND && node[2][0][0].getNumChildren() == 2 && node[2][0][0][0].getKind() == kind::BITVECTOR_NOT && node[2][0][0][0].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][0][1]);
    children.push_back(node[1]);
    children.push_back(node[0]);
    children.push_back(node[2][0][0][0][0]);
    children.push_back(node[2][0][0][1]);
    children.push_back(node[2][0][2]);
    if (options::printStats()) counter[415]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 415));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::BITVECTOR_NOT && node[1][0][0].getNumChildren() == 1 && true && node[1][0][1].getKind() == kind::BITVECTOR_OR && node[1][0][1].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1][0]);
    children.push_back(node[1][0][1][1]);
    if (options::printStats()) counter[420]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 420));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 3 && true && node[1][1][1].getKind() == kind::BITVECTOR_OR && node[1][1][1].getNumChildren() == 2 && node[1][1][1][0].getKind() == kind::BITVECTOR_NOT && node[1][1][1][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    children.push_back(node[1][1][1][0][0]);
    children.push_back(node[1][1][1][1]);
    children.push_back(node[1][1][2]);
    if (options::printStats()) counter[422]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 422));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true && node[2].getKind() == kind::BITVECTOR_OR && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::BITVECTOR_NOT && node[2][0].getNumChildren() == 1 && node[2][0][0].getKind() == kind::BITVECTOR_AND && node[2][0][0].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][0][0][0]);
    children.push_back(node[2][1]);
    children.push_back(node[0]);
    children.push_back(node[1][0]);
    children.push_back(node[2][0][0][1]);
    children.push_back(node[2][0][0][2]);
    if (options::printStats()) counter[425]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 425));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 3 && true && node[0][0][1].getKind() == kind::BITVECTOR_AND && node[0][0][1].getNumChildren() == 2 && true && true && node[0][0][2].getKind() == kind::BITVECTOR_AND && node[0][0][2].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][2][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    children.push_back(node[0][0][1][1]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][2][0]);
    if (options::printStats()) counter[433]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 433));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 3 && true && node[0][1][1].getKind() == kind::BITVECTOR_NOT && node[0][1][1].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][2]);
    if (options::printStats()) counter[443]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 443));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::BITVECTOR_OR && node[0][1][1].getNumChildren() == 2 && node[0][1][1][0].getKind() == kind::BITVECTOR_NOT && node[0][1][1][0].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    children.push_back(node[0][1][1][0][0]);
    children.push_back(node[0][1][1][1]);
    children.push_back(node[0][1][0]);
    if (options::printStats()) counter[458]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 458));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::BITVECTOR_AND && node[1][0][0].getNumChildren() == 2 && node[1][0][0][0].getKind() == kind::BITVECTOR_OR && node[1][0][0][0].getNumChildren() == 2 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    children.push_back(node[2]);
    children.push_back(node[1][0][0][0][1]);
    children.push_back(node[1][0][0][0][0]);
    children.push_back(node[1][0][0][1]);
    if (options::printStats()) counter[459]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 459));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0].getNumChildren() == 3 && true && node[0][0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][0][1].getNumChildren() == 1 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    children.push_back(node[0][0][0][1][0]);
    children.push_back(node[0][0][0][2]);
    children.push_back(node[0][0][0][0]);
    if (options::printStats()) counter[467]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 467));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 3 && true && true && node[0][0][2].getKind() == kind::BITVECTOR_NOT && node[0][0][2].getNumChildren() == 1 && node[0][0][2][0].getKind() == kind::BITVECTOR_AND && node[0][0][2][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[0][0][2][0][0]);
    children.push_back(node[0][0][2][0][1]);
    children.push_back(node[0][0][1]);
    if (options::printStats()) counter[473]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 473));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::BITVECTOR_NOT && node[1][0][0].getNumChildren() == 1 && node[1][0][0][0].getKind() == kind::BITVECTOR_AND && node[1][0][0][0].getNumChildren() == 2 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    children.push_back(node[1][0][0][0][1]);
    children.push_back(node[1][0][0][0][0]);
    children.push_back(node[1][0][1]);
    if (options::printStats()) counter[476]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 476));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1][1][2]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][1][0]);
    if (options::printStats()) counter[514]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 514));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 3 && node[1][0][0].getKind() == kind::BITVECTOR_NOT && node[1][0][0].getNumChildren() == 1 && true && true && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][2]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0][0][0]);
    if (options::printStats()) counter[518]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 518));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[529]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 529));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 3 && true && node[1][0][1].getKind() == kind::BITVECTOR_OR && node[1][0][1].getNumChildren() == 2 && true && true && node[1][0][2].getKind() == kind::BITVECTOR_OR && node[1][0][2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0]);
    children.push_back(node[1][0][2][1]);
    children.push_back(node[1][0][2][0]);
    children.push_back(node[1][0][1][0]);
    if (options::printStats()) counter[532]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 532));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && true && node[2].getKind() == kind::BITVECTOR_OR && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::BITVECTOR_AND && node[2][0].getNumChildren() == 2 && true && true && node[2][1].getKind() == kind::BITVECTOR_NOT && node[2][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[2][1][0]);
    children.push_back(node[1]);
    children.push_back(node[0][0]);
    children.push_back(node[2][0][0]);
    children.push_back(node[2][0][1]);
    if (options::printStats()) counter[291]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 291));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true && node[2].getKind() == kind::BITVECTOR_OR && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::BITVECTOR_NOT && node[2][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0][0]);
    children.push_back(node[2][0][0]);
    children.push_back(node[2][1]);
    if (options::printStats()) counter[292]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 292));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[0][0][0] == node[1][0] && true && node[2].getKind() == kind::BITVECTOR_NOT && node[2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[2][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) counter[294]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 294));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true && node[2].getKind() == kind::BITVECTOR_OR && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::BITVECTOR_NOT && node[2][0].getNumChildren() == 1 && true && node[1][1][0] == node[2][1]) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[2][1]);
    children.push_back(node[1][0]);
    children.push_back(node[2][0][0]);
    if (options::printStats()) counter[317]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 317));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::BITVECTOR_NOT && node[0][1][1].getNumChildren() == 1 && true && true && node[2].getKind() == kind::BITVECTOR_NOT && node[2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[2][0]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][0]);
    if (options::printStats()) counter[320]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 320));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][1].getNumChildren() == 1 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) counter[327]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 327));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::BITVECTOR_NOT && node[1][0][0].getNumChildren() == 1 && true && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][1]);
    children.push_back(node[0]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][1][0]);
    if (options::printStats()) counter[334]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 334));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 2 && node[1][1][0].getKind() == kind::BITVECTOR_NOT && node[1][1][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[0]);
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][0][0]);
    if (options::printStats()) counter[338]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 338));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && true && node[2].getKind() == kind::BITVECTOR_OR && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::BITVECTOR_NOT && node[2][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][1]);
    children.push_back(node[0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[2][0][0]);
    if (options::printStats()) counter[347]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 347));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][1][0]);
    if (options::printStats()) counter[355]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 355));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) counter[356]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 356));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::BITVECTOR_AND && node[1][0][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[2]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][0][1]);
    if (options::printStats()) counter[375]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 375));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && node[1][0][1].getKind() == kind::BITVECTOR_NOT && node[1][0][1].getNumChildren() == 1 && true && node[2].getKind() == kind::BITVECTOR_OR && node[2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2][1]);
    children.push_back(node[0]);
    children.push_back(node[1][0][1][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[2][0]);
    if (options::printStats()) counter[377]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 377));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && node[0][0] == node[1][1][0]) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[1][1][0]);
    if (options::printStats()) counter[391]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 391));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 3 && node[1][1][0].getKind() == kind::BITVECTOR_NOT && node[1][1][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[0]);
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][1][2]);
    if (options::printStats()) counter[407]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 407));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && node[1][1][0].getKind() == kind::BITVECTOR_AND && node[1][1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][1][0][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) counter[440]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 440));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 3 && true && true && node[0][0][2].getKind() == kind::BITVECTOR_AND && node[0][0][2].getNumChildren() == 2 && node[0][0][2][0].getKind() == kind::BITVECTOR_NOT && node[0][0][2][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[1]);
    children.push_back(node[0][0][2][0][0]);
    children.push_back(node[0][0][2][1]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) counter[442]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 442));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::BITVECTOR_NOT && node[0][1][1].getNumChildren() == 1 && node[0][1][1][0].getKind() == kind::BITVECTOR_AND && node[0][1][1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[0][1][1][0][1]);
    children.push_back(node[0][1][1][0][0]);
    children.push_back(node[0][1][0]);
    if (options::printStats()) counter[453]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 453));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::BITVECTOR_NOT && node[1][0][0].getNumChildren() == 1 && true && node[1][0][1].getKind() == kind::BITVECTOR_NOT && node[1][0][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[0]);
    children.push_back(node[1][0][1][0]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) counter[455]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 455));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::BITVECTOR_AND && node[1][0][0].getNumChildren() == 2 && node[1][0][0][0].getKind() == kind::BITVECTOR_NOT && node[1][0][0][0].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[2]);
    children.push_back(node[1][0][0][0][0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][1]);
    if (options::printStats()) counter[457]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 457));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_OR && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::BITVECTOR_AND && node[1][0][0].getNumChildren() == 2 && node[1][0][0][0].getKind() == kind::BITVECTOR_OR && node[1][0][0][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[0]);
    children.push_back(node[1][0][0][0][1]);
    children.push_back(node[1][0][0][0][0]);
    children.push_back(node[1][0][0][1]);
    if (options::printStats()) counter[469]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 469));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && true && true && node[2].getKind() == kind::BITVECTOR_OR && node[2].getNumChildren() == 2 && true && node[2][1].getKind() == kind::BITVECTOR_NOT && node[2][1].getNumChildren() == 1 && node[0][0] == node[2][1][0]) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[2][1][0]);
    children.push_back(node[2][0]);
    if (options::printStats()) counter[488]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 488));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_OR && node[1][0].getNumChildren() == 2 && true && node[1][0][1].getKind() == kind::BITVECTOR_AND && node[1][0][1].getNumChildren() == 3 && true && node[1][0][1][1].getKind() == kind::BITVECTOR_NOT && node[1][0][1][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0]);
    children.push_back(node[0]);
    children.push_back(node[1][0][1][1][0]);
    children.push_back(node[1][0][1][0]);
    children.push_back(node[1][0][1][2]);
    if (options::printStats()) counter[504]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 504));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][1][0]);
    if (options::printStats()) counter[520]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 520));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[1][0][2]);
    if (options::printStats()) counter[531]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 531));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0][0][1]);
    if (options::printStats()) counter[533]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 533));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 3 && node[0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0].getNumChildren() == 2 && true && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][2]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][1]);
    if (options::printStats()) counter[339]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 339));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 3 && true && true && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) counter[372]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 372));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::BITVECTOR_NOT && node[1][0][0].getNumChildren() == 1 && true && node[1][0][1].getKind() == kind::BITVECTOR_NOT && node[1][0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) counter[431]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 431));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && node[1][1][0].getKind() == kind::BITVECTOR_AND && node[1][1][0].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][1][0][1]);
    children.push_back(node[1][1][0][2]);
    if (options::printStats()) counter[450]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 450));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_AND && node[0][0][1].getNumChildren() == 2 && true && node[0][0][1][1].getKind() == kind::BITVECTOR_NOT && node[0][0][1][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][0][1][1][0]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) counter[484]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 484));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1][1]);
    children.push_back(node[1][1][2]);
    children.push_back(node[0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1][0]);
    if (options::printStats()) counter[511]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 511));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 3 && true && true && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][2]);
    if (options::printStats()) counter[515]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 515));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1][0][0]);
    if (options::printStats()) counter[521]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 521));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::BITVECTOR_OR && node[0][1][1].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][1][1]);
    children.push_back(node[0][1][0]);
    if (options::printStats()) counter[525]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 525));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[1]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][1]);
    if (options::printStats()) counter[298]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 298));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[1][1]);
    if (options::printStats()) counter[313]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 313));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::BITVECTOR_NOT && node[1][0][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[333]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 333));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && true && node[2].getKind() == kind::BITVECTOR_OR && node[2].getNumChildren() == 2 && node[2][0].getKind() == kind::BITVECTOR_NOT && node[2][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[2][0][0]);
    children.push_back(node[2][1]);
    children.push_back(node[0][1]);
    if (options::printStats()) counter[345]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 345));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_OR && node[1][0].getNumChildren() == 3 && node[1][0][0].getKind() == kind::BITVECTOR_AND && node[1][0][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][2]);
    children.push_back(node[0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1]);
    if (options::printStats()) counter[357]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 357));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[2]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) counter[376]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 376));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[2]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0][0]);
    if (options::printStats()) counter[394]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 394));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 3 && true && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) counter[410]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 410));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 2 && node[1][1][0].getKind() == kind::BITVECTOR_NOT && node[1][1][0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[0]);
    children.push_back(node[1][1][0][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) counter[462]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 462));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_AND && node[0][0][1].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[1]);
    children.push_back(node[0][0][1][1]);
    children.push_back(node[0][0][1][2]);
    children.push_back(node[0][0][1][0]);
    if (options::printStats()) counter[477]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 477));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0].getNumChildren() == 2 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[2]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][1]);
    if (options::printStats()) counter[508]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 508));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::BITVECTOR_NOT && node[0][0][0].getNumChildren() == 1 && true && node[0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[534]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 534));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    if (options::printStats()) counter[307]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 307));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_AND && node[0][0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][0][1][1]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) counter[342]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 342));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[0][0]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) counter[348]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 348));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][1].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[2]);
    if (options::printStats()) counter[388]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 388));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1 && node[1][0][0].getKind() == kind::BITVECTOR_AND && node[1][0][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][0][1]);
    children.push_back(node[1][1]);
    if (options::printStats()) counter[423]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 423));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && node[1][0][1].getKind() == kind::BITVECTOR_NOT && node[1][0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1][0][1][0]);
    children.push_back(node[1][0][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) counter[445]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 445));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1][0]);
    if (options::printStats()) counter[486]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 486));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && node[0][0][0] == node[1][0] && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1][1]);
    if (options::printStats()) counter[494]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 494));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[293]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 293));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_AND && node[1][0].getNumChildren() == 2 && node[1][0][0].getKind() == kind::BITVECTOR_NOT && node[1][0][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][0][0]);
    children.push_back(node[1][0][1]);
    children.push_back(node[0]);
    if (options::printStats()) counter[351]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 351));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_AND && node[1][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[2]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][1][1]);
    children.push_back(node[1][0]);
    if (options::printStats()) counter[498]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 498));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[363]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 363));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[2]);
    if (options::printStats()) counter[371]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 371));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][2]);
    if (options::printStats()) counter[493]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 493));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1][1]);
    if (options::printStats()) counter[495]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 495));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2 && true && node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[1][1][0]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[503]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 503));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    if (options::printStats()) counter[290]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 290));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && node[1][0].getKind() == kind::BITVECTOR_OR && node[1][0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0][1]);
    children.push_back(node[1][0][0]);
    children.push_back(node[0]);
    if (options::printStats()) counter[380]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 380));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) counter[315]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 315));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
