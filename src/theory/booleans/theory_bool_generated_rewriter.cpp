#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;
static RewriteResponse RewriteAND(TNode node, bool prerewrite = false) {
  
  if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 16));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 17));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 32));
  } else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 9));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 15));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteNOT(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::ITE && node[0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][2]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 11));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 12));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 19));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][2]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 25));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 28));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteIFF(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 4));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 27));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteITE(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::ITE && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 7));
  }
  else if (node.getKind() == kind::ITE && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 23));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteOR(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 8));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 18));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 21));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
RewriteResponse TheoryBoolSpecialRewriter::rewrite(TNode n) {
  switch (n.getKind()) {
    case kind::AND : return RewriteAND(n);
    case kind::NOT : return RewriteNOT(n);
    case kind::IFF : return RewriteIFF(n);
    case kind::ITE : return RewriteITE(n);
    case kind::OR : return RewriteOR(n);
    default: return RewriteResponse(REWRITE_DONE, n);
  }
}
