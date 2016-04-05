#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"
#include "options/main_options.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;

Node rewrite_20_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[20]++;
  return utils::mkSpecialBool(children, 20);
}
Node rewrite_20_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][2][0]);
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[20]++;
  return utils::mkSpecialBool(children, 20);
}
Node rewrite_20_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[20]++;
  return utils::mkSpecialBool(children, 20);
}
Node rewrite_20_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[20]++;
  return utils::mkSpecialBool(children, 20);
}
Node rewrite_20_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[20]++;
  return utils::mkSpecialBool(children, 20);
}
Node rewrite_20_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1][0]);
  children.push_back(node[1][2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[20]++;
  return utils::mkSpecialBool(children, 20);
}
Node rewrite_20_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0]);
  children.push_back(node[1][2][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[20]++;
  return utils::mkSpecialBool(children, 20);
}
Node rewrite_20_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][2][0]);
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[20]++;
  return utils::mkSpecialBool(children, 20);
}
Node rewrite_20_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[20]++;
  return utils::mkSpecialBool(children, 20);
}
Node rewrite_20_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0]);
  children.push_back(node[1][2][0]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[20]++;
  return utils::mkSpecialBool(children, 20);
}
Node rewrite_20_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0][0]);
  children.push_back(node[1][2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[20]++;
  return utils::mkSpecialBool(children, 20);
}
Node rewrite_20_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[20]++;
  return utils::mkSpecialBool(children, 20);
}
Node rewrite_21_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[21]++;
  return utils::mkSpecialBool(children, 21);
}
Node rewrite_21_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[21]++;
  return utils::mkSpecialBool(children, 21);
}
Node rewrite_21_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[21]++;
  return utils::mkSpecialBool(children, 21);
}
Node rewrite_21_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[21]++;
  return utils::mkSpecialBool(children, 21);
}
Node rewrite_18_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1]);
  children.push_back(node[1][2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[18]++;
  return utils::mkSpecialBool(children, 18);
}
Node rewrite_18_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[18]++;
  return utils::mkSpecialBool(children, 18);
}
Node rewrite_18_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[18]++;
  return utils::mkSpecialBool(children, 18);
}
Node rewrite_18_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][2][0]);
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[18]++;
  return utils::mkSpecialBool(children, 18);
}
Node rewrite_18_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[18]++;
  return utils::mkSpecialBool(children, 18);
}
Node rewrite_18_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[18]++;
  return utils::mkSpecialBool(children, 18);
}
Node rewrite_18_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0]);
  children.push_back(node[1][2]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[18]++;
  return utils::mkSpecialBool(children, 18);
}
Node rewrite_18_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][2][0]);
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[18]++;
  return utils::mkSpecialBool(children, 18);
}
Node rewrite_18_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0]);
  children.push_back(node[1][2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[18]++;
  return utils::mkSpecialBool(children, 18);
}
Node rewrite_18_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[18]++;
  return utils::mkSpecialBool(children, 18);
}
Node rewrite_18_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0]);
  children.push_back(node[1][2]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[18]++;
  return utils::mkSpecialBool(children, 18);
}
Node rewrite_18_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[18]++;
  return utils::mkSpecialBool(children, 18);
}
Node rewrite_6_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[6]++;
  return utils::mkSpecialBool(children, 6);
}
Node rewrite_6_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[6]++;
  return utils::mkSpecialBool(children, 6);
}
Node rewrite_6_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[6]++;
  return utils::mkSpecialBool(children, 6);
}
Node rewrite_6_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[6]++;
  return utils::mkSpecialBool(children, 6);
}
Node rewrite_2_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][2]);
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[2]++;
  return utils::mkSpecialBool(children, 2);
}
Node rewrite_2_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][2]);
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[2]++;
  return utils::mkSpecialBool(children, 2);
}
Node rewrite_2_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][2]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[2]++;
  return utils::mkSpecialBool(children, 2);
}
Node rewrite_2_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][2]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[2]++;
  return utils::mkSpecialBool(children, 2);
}
Node rewrite_2_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[2]++;
  return utils::mkSpecialBool(children, 2);
}
Node rewrite_2_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[1][2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[2]++;
  return utils::mkSpecialBool(children, 2);
}
Node rewrite_2_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[2]++;
  return utils::mkSpecialBool(children, 2);
}
Node rewrite_2_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[2]++;
  return utils::mkSpecialBool(children, 2);
}
Node rewrite_2_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[1][2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[2]++;
  return utils::mkSpecialBool(children, 2);
}
Node rewrite_2_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[2]++;
  return utils::mkSpecialBool(children, 2);
}
Node rewrite_2_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[2]++;
  return utils::mkSpecialBool(children, 2);
}
Node rewrite_2_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[2]++;
  return utils::mkSpecialBool(children, 2);
}
Node rewrite_7_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[1][2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][2]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][2]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][2]);
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][2]);
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[1][2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_0_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[0]++;
  return utils::mkSpecialBool(children, 0);
}
Node rewrite_0_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[0]++;
  return utils::mkSpecialBool(children, 0);
}
Node rewrite_0_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[0]++;
  return utils::mkSpecialBool(children, 0);
}
Node rewrite_0_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[0]++;
  return utils::mkSpecialBool(children, 0);
}
Node rewrite_5_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[5]++;
  return utils::mkSpecialBool(children, 5);
}
Node rewrite_5_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[5]++;
  return utils::mkSpecialBool(children, 5);
}
Node rewrite_5_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[5]++;
  return utils::mkSpecialBool(children, 5);
}
Node rewrite_5_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[5]++;
  return utils::mkSpecialBool(children, 5);
}
Node rewrite_3_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[3]++;
  return utils::mkSpecialBool(children, 3);
}
Node rewrite_3_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[3]++;
  return utils::mkSpecialBool(children, 3);
}
Node rewrite_26_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[26]++;
  return utils::mkSpecialBool(children, 26);
}
Node rewrite_26_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[26]++;
  return utils::mkSpecialBool(children, 26);
}
Node rewrite_26(TNode node, const bool* predicates) {
  if (predicates[16] && predicates[10] && predicates[8] && true && predicates[6] && true && true && true) {
    return rewrite_20_0(node);
  }
  else if (predicates[16] && true && predicates[11] && true && predicates[0] && true && predicates[12] && true) {
    return rewrite_20_1(node);
  }
  else if (predicates[16] && predicates[10] && predicates[8] && true && true && predicates[13] && true && true) {
    return rewrite_20_2(node);
  }
  else if (predicates[16] && predicates[10] && true && predicates[6] && true && predicates[13] && true && true) {
    return rewrite_20_3(node);
  }
  else if (predicates[16] && predicates[10] && predicates[8] && true && true && predicates[13] && true && true) {
    return rewrite_20_4(node);
  }
  else if (predicates[16] && true && predicates[11] && predicates[14] && true && predicates[0] && true && true) {
    return rewrite_20_5(node);
  }
  else if (predicates[16] && true && predicates[11] && predicates[14] && true && true && predicates[12] && true) {
    return rewrite_20_6(node);
  }
  else if (predicates[16] && true && predicates[11] && predicates[14] && true && true && predicates[12] && true) {
    return rewrite_20_7(node);
  }
  else if (predicates[16] && predicates[10] && predicates[8] && true && predicates[6] && true && true && true) {
    return rewrite_20_8(node);
  }
  else if (predicates[16] && true && predicates[11] && true && predicates[0] && true && predicates[12] && true) {
    return rewrite_20_9(node);
  }
  else if (predicates[16] && true && predicates[11] && predicates[14] && true && predicates[0] && true && true) {
    return rewrite_20_10(node);
  }
  else if (predicates[16] && predicates[10] && true && predicates[6] && true && predicates[13] && true && true) {
    return rewrite_20_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_20(TNode node, const bool* predicates) {
  if (predicates[16] && predicates[1] && predicates[8] && true && predicates[6] && true && true) {
    return rewrite_21_0(node);
  }
  else if (predicates[16] && predicates[1] && predicates[8] && true && predicates[6] && true && true) {
    return rewrite_21_1(node);
  }
  else if (predicates[16] && true && predicates[3] && predicates[14] && true && predicates[0] && true) {
    return rewrite_21_2(node);
  }
  else if (predicates[16] && true && predicates[3] && predicates[14] && true && predicates[0] && true) {
    return rewrite_21_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_21(TNode node, const bool* predicates) {
  if (predicates[16] && true && predicates[11] && predicates[14] && true && true && true) {
    return rewrite_18_0(node);
  }
  else if (predicates[16] && predicates[10] && true && true && predicates[13] && true && true) {
    return rewrite_18_1(node);
  }
  else if (predicates[16] && predicates[10] && true && true && predicates[13] && true && true) {
    return rewrite_18_2(node);
  }
  else if (predicates[16] && true && predicates[11] && true && true && predicates[12] && true) {
    return rewrite_18_3(node);
  }
  else if (predicates[16] && predicates[10] && true && predicates[6] && true && true && true) {
    return rewrite_18_4(node);
  }
  else if (predicates[16] && predicates[10] && predicates[8] && true && true && true && true) {
    return rewrite_18_5(node);
  }
  else if (predicates[16] && true && predicates[11] && true && predicates[0] && true && true) {
    return rewrite_18_6(node);
  }
  else if (predicates[16] && true && predicates[11] && true && true && predicates[12] && true) {
    return rewrite_18_7(node);
  }
  else if (predicates[16] && true && predicates[11] && true && predicates[0] && true && true) {
    return rewrite_18_8(node);
  }
  else if (predicates[16] && predicates[10] && predicates[8] && true && true && true && true) {
    return rewrite_18_9(node);
  }
  else if (predicates[16] && true && predicates[11] && predicates[14] && true && true && true) {
    return rewrite_18_10(node);
  }
  else if (predicates[16] && predicates[10] && true && predicates[6] && true && true && true) {
    return rewrite_18_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_18(TNode node, const bool* predicates) {
  if (predicates[16] && predicates[1] && predicates[8] && true && true && true) {
    return rewrite_6_0(node);
  }
  else if (predicates[16] && true && predicates[3] && predicates[14] && true && true) {
    return rewrite_6_1(node);
  }
  else if (predicates[16] && predicates[1] && true && predicates[6] && true && true) {
    return rewrite_6_2(node);
  }
  else if (predicates[16] && true && predicates[3] && true && predicates[0] && true) {
    return rewrite_6_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_6(TNode node, const bool* predicates) {
  if (predicates[16] && true && predicates[11] && true && true && true) {
    return rewrite_2_0(node);
  }
  else if (predicates[16] && true && predicates[11] && true && true && true) {
    return rewrite_2_1(node);
  }
  else if (predicates[16] && true && predicates[11] && true && true && true) {
    return rewrite_2_2(node);
  }
  else if (predicates[16] && true && predicates[11] && true && true && true) {
    return rewrite_2_3(node);
  }
  else if (predicates[16] && predicates[10] && true && true && true && true) {
    return rewrite_2_4(node);
  }
  else if (predicates[16] && true && predicates[11] && true && true && true) {
    return rewrite_2_5(node);
  }
  else if (predicates[16] && predicates[10] && true && true && true && true) {
    return rewrite_2_6(node);
  }
  else if (predicates[16] && predicates[10] && true && true && true && true) {
    return rewrite_2_7(node);
  }
  else if (predicates[16] && true && predicates[11] && true && true && true) {
    return rewrite_2_8(node);
  }
  else if (predicates[16] && predicates[10] && true && true && true && true) {
    return rewrite_2_9(node);
  }
  else if (predicates[16] && predicates[10] && true && true && true && true) {
    return rewrite_2_10(node);
  }
  else if (predicates[16] && predicates[10] && true && true && true && true) {
    return rewrite_2_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_2(TNode node, const bool* predicates) {
  if (predicates[16] && true && predicates[5] && true && true && true) {
    return rewrite_7_0(node);
  }
  else if (predicates[16] && true && predicates[5] && true && true && true) {
    return rewrite_7_1(node);
  }
  else if (predicates[16] && true && predicates[5] && true && true && true) {
    return rewrite_7_2(node);
  }
  else if (predicates[16] && true && predicates[5] && true && true && true) {
    return rewrite_7_3(node);
  }
  else if (predicates[16] && true && predicates[5] && true && true && true) {
    return rewrite_7_4(node);
  }
  else if (predicates[16] && predicates[4] && true && true && true && true) {
    return rewrite_7_5(node);
  }
  else if (predicates[16] && predicates[4] && true && true && true && true) {
    return rewrite_7_6(node);
  }
  else if (predicates[16] && predicates[4] && true && true && true && true) {
    return rewrite_7_7(node);
  }
  else if (predicates[16] && predicates[4] && true && true && true && true) {
    return rewrite_7_8(node);
  }
  else if (predicates[16] && true && predicates[5] && true && true && true) {
    return rewrite_7_9(node);
  }
  else if (predicates[16] && predicates[4] && true && true && true && true) {
    return rewrite_7_10(node);
  }
  else if (predicates[16] && predicates[4] && true && true && true && true) {
    return rewrite_7_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_7(TNode node, const bool* predicates) {
  if (predicates[16] && true && predicates[3] && true && true) {
    return rewrite_0_0(node);
  }
  else if (predicates[16] && predicates[1] && true && true && true) {
    return rewrite_0_1(node);
  }
  else if (predicates[16] && true && predicates[3] && true && true) {
    return rewrite_0_2(node);
  }
  else if (predicates[16] && predicates[1] && true && true && true) {
    return rewrite_0_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_0(TNode node, const bool* predicates) {
  if (predicates[16] && predicates[9] && true && true && true) {
    return rewrite_5_0(node);
  }
  else if (predicates[16] && true && predicates[15] && true && true) {
    return rewrite_5_1(node);
  }
  else if (predicates[16] && true && predicates[15] && true && true) {
    return rewrite_5_2(node);
  }
  else if (predicates[16] && predicates[9] && true && true && true) {
    return rewrite_5_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_5(TNode node, const bool* predicates) {
  if (predicates[16] && true && predicates[7] && true) {
    return rewrite_3_0(node);
  }
  else if (predicates[16] && predicates[2] && true && true) {
    return rewrite_3_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_3(TNode node, const bool* predicates) {
  if (predicates[16] && true && true) {
    return rewrite_26_0(node);
  }
  else if (predicates[16] && true && true) {
    return rewrite_26_1(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBoolSpecialRewriter::RewriteIFF(TNode node,  bool prewrite) {
  bool predicates[17];
  for (int i = 0; i < 17; i++) {
    predicates[i] = false;
  }
  predicates[16] = node.getKind() == kind::IFF && node.getNumChildren() == 2;
  if (node.getNumChildren() > 0) {
    predicates[1] = node[0].getKind() == kind::AND && node[0].getNumChildren() == 2;
    predicates[2] = node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1;
    predicates[4] = node[0].getKind() == kind::OR && node[0].getNumChildren() == 3;
    predicates[9] = node[0].getKind() == kind::OR && node[0].getNumChildren() == 2;
    predicates[10] = node[0].getKind() == kind::AND && node[0].getNumChildren() == 3;
    if (node[0].getNumChildren() > 2) {
      predicates[13] = node[0][2].getKind() == kind::NOT && node[0][2].getNumChildren() == 1;
    }
    if (node[0].getNumChildren() > 0) {
      predicates[8] = node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1;
    }
    if (node[0].getNumChildren() > 1) {
      predicates[6] = node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1;
    }
  }
  if (node.getNumChildren() > 1) {
    predicates[3] = node[1].getKind() == kind::AND && node[1].getNumChildren() == 2;
    predicates[5] = node[1].getKind() == kind::OR && node[1].getNumChildren() == 3;
    predicates[7] = node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1;
    predicates[11] = node[1].getKind() == kind::AND && node[1].getNumChildren() == 3;
    predicates[15] = node[1].getKind() == kind::OR && node[1].getNumChildren() == 2;
    if (node[1].getNumChildren() > 2) {
      predicates[12] = node[1][2].getKind() == kind::NOT && node[1][2].getNumChildren() == 1;
    }
    if (node[1].getNumChildren() > 1) {
      predicates[0] = node[1][1].getKind() == kind::NOT && node[1][1].getNumChildren() == 1;
    }
    if (node[1].getNumChildren() > 0) {
      predicates[14] = node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1;
    }
  }
  Node response;
  if (TheoryBoolSpecialRewriter::enabled[20]) {
    response = rewrite_20(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[21]) {
    response = rewrite_21(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[18]) {
    response = rewrite_18(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[6]) {
    response = rewrite_6(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[2]) {
    response = rewrite_2(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[7]) {
    response = rewrite_7(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[0]) {
    response = rewrite_0(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[5]) {
    response = rewrite_5(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[3]) {
    response = rewrite_3(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[26]) {
    response = rewrite_26(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
