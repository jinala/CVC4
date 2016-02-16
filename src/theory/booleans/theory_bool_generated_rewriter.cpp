#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;

int counter[100];
static RewriteResponse RewriteAND(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && true && node[0][0] == node[2]) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    counter[39]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 39));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && node[0] == node[1][1] && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[2]);
    counter[39]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 39));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::OR && node[2].getNumChildren() == 2 && node[0] == node[2][0] && true) {
    std::vector<Node> children;
    children.push_back(node[2][1]);
    children.push_back(node[2][0]);
    children.push_back(node[1]);
    counter[39]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 39));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && node[0][1] == node[1] && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    counter[39]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 39));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && node[0] == node[1][0] && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[2]);
    counter[39]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 39));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::OR && node[2].getNumChildren() == 2 && true && node[1] == node[2][1]) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[2][1]);
    children.push_back(node[0]);
    counter[39]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 39));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && true && node[0][1] == node[2]) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    counter[39]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 39));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && true && node[1][0] == node[2]) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    counter[39]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 39));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::OR && node[2].getNumChildren() == 2 && true && node[0] == node[2][1]) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[2][1]);
    children.push_back(node[1]);
    counter[39]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 39));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::OR && node[2].getNumChildren() == 2 && node[1] == node[2][0] && true) {
    std::vector<Node> children;
    children.push_back(node[2][1]);
    children.push_back(node[2][0]);
    children.push_back(node[0]);
    counter[39]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 39));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && true && node[1][1] == node[2]) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    counter[39]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 39));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && node[0][0] == node[1] && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    counter[39]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 39));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    counter[24]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 24));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    counter[24]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 24));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    counter[24]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 24));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    counter[24]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 24));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    counter[36]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 36));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[0]);
    children.push_back(node[1]);
    counter[36]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 36));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[1]);
    children.push_back(node[0]);
    counter[36]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 36));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    children.push_back(node[2]);
    counter[36]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 36));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    counter[36]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 36));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    counter[36]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 36));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    counter[10]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 10));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    counter[10]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 10));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[1]);
    children.push_back(node[0]);
    counter[20]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 20));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[0]);
    children.push_back(node[1]);
    counter[20]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 20));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0]);
    children.push_back(node[2]);
    counter[20]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 20));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    counter[20]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 20));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    counter[20]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 20));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    counter[20]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 20));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0]);
    counter[8]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 8));
  }
  else if (node.getKind() == kind::AND && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    counter[8]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 8));
  }
  counter[99]++;
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteIMPLIES(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::IMPLIES && node.getNumChildren() == 2 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    counter[33]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 33));
  }
  else if (node.getKind() == kind::IMPLIES && node.getNumChildren() == 2 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    counter[33]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 33));
  }
  else if (node.getKind() == kind::IMPLIES && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    counter[9]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 9));
  }
  else if (node.getKind() == kind::IMPLIES && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    counter[4]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 4));
  }
  counter[99]++;
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteITE(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::ITE && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    counter[3]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 3));
  }
  counter[99]++;
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteIFF(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    counter[13]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 13));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    counter[13]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 13));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    counter[13]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 13));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    counter[13]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 13));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    counter[31]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 31));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    counter[31]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 31));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && true && node[1].getKind() == kind::OR && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    counter[31]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 31));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    counter[31]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 31));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    counter[11]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 11));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    counter[11]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 11));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0]);
    counter[7]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 7));
  }
  else if (node.getKind() == kind::IFF && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    counter[7]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 7));
  }
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteNOT(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][2]);
    children.push_back(node[0][0]);
    counter[42]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 42));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[0][2]);
    counter[42]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 42));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2]);
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    counter[42]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 42));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][2]);
    children.push_back(node[0][1]);
    counter[42]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 42));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][2]);
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    counter[42]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 42));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[0][2]);
    counter[42]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 42));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    counter[15]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 15));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    counter[15]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 15));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    counter[26]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 26));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::OR && node[0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    counter[26]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 26));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    counter[45]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 45));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    counter[45]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 45));
  }
  else if (node.getKind() == kind::NOT && node.getNumChildren() == 1 && node[0].getKind() == kind::IMPLIES && node[0].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    counter[52]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 52));
  }
  counter[99]++;
  return RewriteResponse(REWRITE_DONE, node);
}
static RewriteResponse RewriteOR(TNode node, bool prerewrite = false) {
  if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::AND && node[2].getNumChildren() == 2 && node[1] == node[2][0] && true) {
    std::vector<Node> children;
    children.push_back(node[2][1]);
    children.push_back(node[2][0]);
    children.push_back(node[0]);
    counter[53]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 53));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && node[0] == node[1][1] && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[2]);
    counter[53]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 53));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::AND && node[2].getNumChildren() == 2 && true && node[0] == node[2][1]) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[2][1]);
    children.push_back(node[1]);
    counter[53]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 53));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && true && true && node[0][0] == node[2]) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    counter[53]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 53));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::AND && node[2].getNumChildren() == 2 && true && node[1] == node[2][1]) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[2][1]);
    children.push_back(node[0]);
    counter[53]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 53));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && true && node[1][1] == node[2]) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    counter[53]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 53));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && node[0] == node[1][0] && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[2]);
    counter[53]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 53));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && true && node[1][0] == node[2]) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    counter[53]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 53));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && true && node[0][1] == node[1] && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    counter[53]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 53));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && true && true && node[0][1] == node[2]) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    counter[53]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 53));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::AND && node[2].getNumChildren() == 2 && node[0] == node[2][0] && true) {
    std::vector<Node> children;
    children.push_back(node[2][1]);
    children.push_back(node[2][0]);
    children.push_back(node[1]);
    counter[53]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 53));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && true && node[0][0] == node[1] && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    counter[53]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 53));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][1]);
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    counter[22]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 22));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][1]);
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    counter[22]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 22));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::AND && node[0].getNumChildren() == 2 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[0][1]);
    children.push_back(node[1]);
    counter[22]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 22));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::AND && node[1].getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[1][1]);
    children.push_back(node[0]);
    counter[22]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 22));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    counter[30]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 30));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[0]);
    children.push_back(node[1]);
    counter[30]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 30));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    children.push_back(node[2]);
    counter[30]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 30));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && true && node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[2][0]);
    children.push_back(node[1]);
    children.push_back(node[0]);
    counter[30]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 30));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    counter[30]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 30));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    counter[30]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 30));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1 && true) {
    std::vector<Node> children;
    children.push_back(node[1][0]);
    children.push_back(node[0]);
    counter[12]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 12));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0][0]);
    children.push_back(node[1]);
    counter[12]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 12));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[2]);
    children.push_back(node[1]);
    counter[21]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 21));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0]);
    children.push_back(node[2]);
    counter[21]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 21));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[0]);
    children.push_back(node[1]);
    counter[21]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 21));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    children.push_back(node[2]);
    counter[21]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 21));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[2]);
    children.push_back(node[0]);
    counter[21]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 21));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 3 && true && true && true) {
    std::vector<Node> children;
    children.push_back(node[2]);
    children.push_back(node[1]);
    children.push_back(node[0]);
    counter[21]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 21));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[1]);
    children.push_back(node[0]);
    counter[6]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 6));
  }
  else if (node.getKind() == kind::OR && node.getNumChildren() == 2 && true && true) {
    std::vector<Node> children;
    children.push_back(node[0]);
    children.push_back(node[1]);
    counter[6]++;
    return RewriteResponse(REWRITE_DONE, utils::mkSpecialBool(children, 6));
  }
  counter[99]++;
  return RewriteResponse(REWRITE_DONE, node);
}
RewriteResponse TheoryBoolSpecialRewriter::rewrite(TNode node) {
  switch(node.getKind()) {
    case kind::AND : return RewriteAND(node);
    case kind::IMPLIES : return RewriteIMPLIES(node);
    case kind::ITE : return RewriteITE(node);
    case kind::IFF : return RewriteIFF(node);
    case kind::NOT : return RewriteNOT(node);
    case kind::OR : return RewriteOR(node);
    default:
      counter[99]++;
      return RewriteResponse(REWRITE_DONE, node);
  }
}

void TheoryBoolSpecialRewriter::initialize() {
  for (int i = 0; i < 100; i++) {
    counter[i] = 0;
  }
}

void TheoryBoolSpecialRewriter::print() {
  Chat() << "Rewrite statistics" << std::endl;
  for (int i = 0; i < 100; i++) {
    if (counter[i] > 0)
      Chat() << i << " " << counter[i] << std::endl;
  }
}
