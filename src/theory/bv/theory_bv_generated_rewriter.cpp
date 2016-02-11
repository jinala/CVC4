#include "options/bv_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

static RewriteResponse RewriteBITVECTOR_OR(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 2));
  }
  else if (node.getKind() == kind::BITVECTOR_OR && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 29));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteBITVECTOR_NOT(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 20));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteBITVECTOR_XOR(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::BITVECTOR_XOR && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 24));
  }
  else if (node.getKind() == kind::BITVECTOR_XOR && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 22));
  }
  else if (node.getKind() == kind::BITVECTOR_XOR && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 31));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteBITVECTOR_AND(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 5));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 3 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 30));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 3));
  }
  else if (node.getKind() == kind::BITVECTOR_AND && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialFixedWidth(children, 1));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteEQUAL(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::EQUAL && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialPredicate(children, 0));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteBITVECTOR_ULT(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::BITVECTOR_ULT && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialPredicate(children, 10));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
void TheoryBVSpecialRewriter::initializeRewrites() {
  for (unsigned i = 0; i < kind::LAST_KIND; i++) {
    d_rewriteTable[i] = IdentityRewrite;
  }
  d_rewriteTable[kind::BITVECTOR_OR] = RewriteBITVECTOR_OR;
  d_rewriteTable[kind::BITVECTOR_NOT] = RewriteBITVECTOR_NOT;
  d_rewriteTable[kind::BITVECTOR_XOR] = RewriteBITVECTOR_XOR;
  d_rewriteTable[kind::BITVECTOR_AND] = RewriteBITVECTOR_AND;
  d_rewriteTable[kind::EQUAL] = RewriteEQUAL;
  d_rewriteTable[kind::BITVECTOR_ULT] = RewriteBITVECTOR_ULT;
}
