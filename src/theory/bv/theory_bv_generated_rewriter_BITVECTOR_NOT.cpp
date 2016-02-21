#include "options/bv_options.h"
#include "options/main_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

RewriteResponse TheoryBVSpecialRewriter::RewriteBITVECTOR_NOT(TNode node, bool prerewrite) {
  if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && true && node[0][2].getKind() == kind::BITVECTOR_AND && node[0][2].getNumChildren() == 3 && node[0][2][0].getKind() == kind::BITVECTOR_NOT && node[0][2][0].getNumChildren() == 1 && node[0][2][0][0].getKind() == kind::BITVECTOR_AND && node[0][2][0][0].getNumChildren() == 2 && node[0][0][0] == node[0][2][0][0][0] && node[0][0][1] == node[0][2][0][0][1] && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][2]);
    children.push_back(node[0][1]);
    children.push_back(node[0][2][0][0][0]);
    children.push_back(node[0][2][0][0][1]);
    children.push_back(node[0][2][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[502]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 502));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][1].getNumChildren() == 1 && true && true && node[0][2].getKind() == kind::BITVECTOR_AND && node[0][2].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][2]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][2][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[499]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 499));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 3 && true && node[0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][1].getNumChildren() == 1 && true && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][2]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[509]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 509));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::BITVECTOR_OR && node[0][2].getNumChildren() == 2 && node[0][2][0].getKind() == kind::BITVECTOR_AND && node[0][2][0].getNumChildren() == 2 && true && node[0][2][0][1].getKind() == kind::BITVECTOR_OR && node[0][2][0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][1]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][2][0][1][0]);
    children.push_back(node[0][2][0][1][1]);
    children.push_back(node[0][2][0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[523]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 523));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::BITVECTOR_OR && node[0][1][0].getNumChildren() == 3 && true && node[0][1][0][1].getKind() == kind::BITVECTOR_AND && node[0][1][0][1].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][2]);
    children.push_back(node[0][0]);
    children.push_back(node[0][2]);
    children.push_back(node[0][1][0][1][1]);
    children.push_back(node[0][1][0][1][0]);
    children.push_back(node[0][1][0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[537]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 537));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::BITVECTOR_NOT && node[0][0][0].getNumChildren() == 1 && true && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1]);
    children.push_back(node[0][2]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[305]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 305));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::BITVECTOR_OR && node[0][1][0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][0][1]);
    children.push_back(node[0][1][0][2]);
    children.push_back(node[0][1][0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[401]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 401));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && node[0][1][0].getKind() == kind::BITVECTOR_OR && node[0][1][0].getNumChildren() == 3 && true && node[0][1][0][1].getKind() == kind::BITVECTOR_AND && node[0][1][0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1][0][1][0]);
    children.push_back(node[0][1][0][1][1]);
    children.push_back(node[0][1][0][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[413]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 413));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2 && node[0][1][0].getKind() == kind::BITVECTOR_AND && node[0][1][0].getNumChildren() == 2 && true && true && node[0][1][1].getKind() == kind::BITVECTOR_AND && node[0][1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1][1]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1][0][0]);
    children.push_back(node[0][1][0][1]);
    children.push_back(node[0][1][1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[414]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 414));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && node[0][1][1].getKind() == kind::BITVECTOR_OR && node[0][1][1].getNumChildren() == 2 && true && node[0][1][1][1].getKind() == kind::BITVECTOR_AND && node[0][1][1][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1][1][1][0]);
    children.push_back(node[0][1][1][1][1]);
    children.push_back(node[0][1][1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[461]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 461));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][1].getNumChildren() == 1 && node[0][0][1][0].getKind() == kind::BITVECTOR_OR && node[0][0][1][0].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0][1][0][0]);
    children.push_back(node[0][0][1][0][1]);
    children.push_back(node[0][0][1][0][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[480]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 480));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 3 && node[0][0][0].getKind() == kind::BITVECTOR_NOT && node[0][0][0].getNumChildren() == 1 && node[0][0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0][0].getNumChildren() == 2 && true && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0][0][0][0]);
    children.push_back(node[0][0][0][0][1]);
    children.push_back(node[0][0][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[510]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 510));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_AND && node[0][0][1].getNumChildren() == 2 && true && true && true && node[0][2].getKind() == kind::BITVECTOR_NOT && node[0][2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][1][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[528]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 528));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_AND && node[0][0][1].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0][1][1]);
    children.push_back(node[0][0][1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[336]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 336));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && true && node[0][2].getKind() == kind::BITVECTOR_AND && node[0][2].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][0]);
    children.push_back(node[0][2][2]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][2][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[464]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 464));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::BITVECTOR_NOT && node[0][0][0].getNumChildren() == 1 && true && node[0][0][1].getKind() == kind::BITVECTOR_OR && node[0][0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][1][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[465]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 465));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::BITVECTOR_NOT && node[0][2].getNumChildren() == 1 && node[0][2][0].getKind() == kind::BITVECTOR_AND && node[0][2][0].getNumChildren() == 2 && node[0][2][0][0].getKind() == kind::BITVECTOR_NOT && node[0][2][0][0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][2][0][0][0]);
    children.push_back(node[0][2][0][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[481]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 481));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::BITVECTOR_NOT && node[0][0][0].getNumChildren() == 1 && true && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[516]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 516));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && true && node[0][2].getKind() == kind::BITVECTOR_OR && node[0][2].getNumChildren() == 2 && true && node[0][2][1].getKind() == kind::BITVECTOR_NOT && node[0][2][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][2][1][0]);
    children.push_back(node[0][2][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[522]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 522));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && true && node[0][2].getKind() == kind::BITVECTOR_AND && node[0][2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][2][1]);
    children.push_back(node[0][1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[288]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 288));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 3 && true && node[0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][1].getNumChildren() == 1 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][0][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[482]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 482));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::BITVECTOR_AND && node[0][2].getNumChildren() == 3 && true && true && node[0][2][2].getKind() == kind::BITVECTOR_NOT && node[0][2][2].getNumChildren() == 1 && node[0][0] == node[0][2][2][0]) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][2][2][0]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][2][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[487]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 487));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::BITVECTOR_AND && node[0][2].getNumChildren() == 2 && true && node[0][2][1].getKind() == kind::BITVECTOR_NOT && node[0][2][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][2][1][0]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[289]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 289));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[383]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 383));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_AND && node[0][0][1].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0][1][1]);
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[392]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 392));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && node[0][0][0].getKind() == kind::BITVECTOR_OR && node[0][0][0].getNumChildren() == 2 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0][0][0]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[444]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 444));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && node[0][0][0].getKind() == kind::BITVECTOR_OR && node[0][0][0].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0][0][2]);
    children.push_back(node[0][0][0][1]);
    children.push_back(node[0][0][0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[454]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 454));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 3 && true && node[0][1][1].getKind() == kind::BITVECTOR_NOT && node[0][1][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1][1][0]);
    children.push_back(node[0][1][2]);
    children.push_back(node[0][1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[483]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 483));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][1]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[500]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 500));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && node[0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1][0]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[436]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 436));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && true && node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][2]);
    children.push_back(node[0][1][1]);
    children.push_back(node[0][1][0]);
    children.push_back(node[0][1][2]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[472]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 472));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::BITVECTOR_AND && node[0][2].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][2][0]);
    children.push_back(node[0][2][1]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[296]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 296));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 3 && true && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0][2]);
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[474]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 474));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[497]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 497));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0][1]);
    children.push_back(node[0][0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[382]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 382));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3 && true && true && node[0][2].getKind() == kind::BITVECTOR_NOT && node[0][2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][2][0]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[399]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 399));
  }
  else if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[0][1][0]);
    children.push_back(node[0][0]);
    if (options::printStats()) TheoryBVSpecialRewriter::TheoryBVSpecialRewriter::counter[331]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 331));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
