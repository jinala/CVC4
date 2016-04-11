#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"
#include "options/main_options.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;

Node rewrite_15_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0][0]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[1]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[1]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[1]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[15]++;
  return utils::mkSpecialBool(children, 15);
}
Node rewrite_15_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1][0]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[1]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[1]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[1]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[15]++;
  return utils::mkSpecialBool(children, 15);
}
Node rewrite_28_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[28]++;
  return utils::mkSpecialBool(children, 28);
}
Node rewrite_28_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[1]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[1]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[1]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[28]++;
  return utils::mkSpecialBool(children, 28);
}
Node rewrite_11_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[11]++;
  return utils::mkSpecialBool(children, 11);
}
Node rewrite_11_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  children.push_back(node[2]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[11]++;
  return utils::mkSpecialBool(children, 11);
}
Node rewrite_11_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[2]);
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[11]++;
  return utils::mkSpecialBool(children, 11);
}
Node rewrite_11_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[11]++;
  return utils::mkSpecialBool(children, 11);
}
Node rewrite_11_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[11]++;
  return utils::mkSpecialBool(children, 11);
}
Node rewrite_11_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[2]);
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[11]++;
  return utils::mkSpecialBool(children, 11);
}
Node rewrite_27_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[27]++;
  return utils::mkSpecialBool(children, 27);
}
Node rewrite_27_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[27]++;
  return utils::mkSpecialBool(children, 27);
}
Node rewrite_27(TNode node, const bool* predicates) {
  if (predicates[2] && predicates[1] && true && predicates[0] && true) {
    return rewrite_15_0(node);
  }
  else if (predicates[2] && predicates[1] && true && predicates[0] && true) {
    return rewrite_15_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_15(TNode node, const bool* predicates) {
  if (predicates[2] && predicates[1] && true && true) {
    return rewrite_28_0(node);
  }
  else if (predicates[2] && true && predicates[0] && true) {
    return rewrite_28_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_28(TNode node, const bool* predicates) {
  if (predicates[3] && true && true && true) {
    return rewrite_11_0(node);
  }
  else if (predicates[3] && true && true && true) {
    return rewrite_11_1(node);
  }
  else if (predicates[3] && true && true && true) {
    return rewrite_11_2(node);
  }
  else if (predicates[3] && true && true && true) {
    return rewrite_11_3(node);
  }
  else if (predicates[3] && true && true && true) {
    return rewrite_11_4(node);
  }
  else if (predicates[3] && true && true && true) {
    return rewrite_11_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_11(TNode node, const bool* predicates) {
  if (predicates[2] && true && true) {
    return rewrite_27_0(node);
  }
  else if (predicates[2] && true && true) {
    return rewrite_27_1(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBoolSpecialRewriter::RewriteOR(TNode node,  bool prewrite) {
  bool predicates[4];
  for (int i = 0; i < 4; i++) {
    predicates[i] = false;
  }
  predicates[2] = node.getKind() == kind::OR && node.getNumChildren() == 2;
  predicates[3] = node.getKind() == kind::OR && node.getNumChildren() == 3;
  if (node.getNumChildren() > 0) {
    predicates[1] = node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1;
  }
  if (node.getNumChildren() > 1) {
    predicates[0] = node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1;
  }
  Node response;
  if (TheoryBoolSpecialRewriter::enabled[15]) {
    response = rewrite_15(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[28]) {
    response = rewrite_28(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[11]) {
    response = rewrite_11(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[27]) {
    response = rewrite_27(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[1999]++;
  if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
    TheoryBoolSpecialRewriter::nodes[node] += 1;
  } else {
    TheoryBoolSpecialRewriter::nodes[node] = 1;
  }
  return RewriteResponse(REWRITE_DONE, node);
}
