#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"
#include "options/main_options.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;

Node rewrite_12_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0][0]);
  children.push_back(node[2][0][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1]);
  children.push_back(node[1][0][0]);
  children.push_back(node[2][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[2][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[2][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0][1]);
  children.push_back(node[2][0][0]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0][0]);
  children.push_back(node[2][0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0][1]);
  children.push_back(node[2][0][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1]);
  children.push_back(node[1][0][0]);
  children.push_back(node[0][0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[1][0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[1][0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[2][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_15_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[15]++;
  return utils::mkSpecialBool(children, 15);
}
Node rewrite_15_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0][0][0]);
  children.push_back(node[2][0][1]);
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[15]++;
  return utils::mkSpecialBool(children, 15);
}
Node rewrite_15_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[15]++;
  return utils::mkSpecialBool(children, 15);
}
Node rewrite_15_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0][1][0]);
  children.push_back(node[2][0][0]);
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[15]++;
  return utils::mkSpecialBool(children, 15);
}
Node rewrite_15_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[15]++;
  return utils::mkSpecialBool(children, 15);
}
Node rewrite_15_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0][1][0]);
  children.push_back(node[2][0][0]);
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[15]++;
  return utils::mkSpecialBool(children, 15);
}
Node rewrite_15_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[15]++;
  return utils::mkSpecialBool(children, 15);
}
Node rewrite_15_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[15]++;
  return utils::mkSpecialBool(children, 15);
}
Node rewrite_15_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][0][0]);
  children.push_back(node[0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[15]++;
  return utils::mkSpecialBool(children, 15);
}
Node rewrite_15_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][0][0]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[15]++;
  return utils::mkSpecialBool(children, 15);
}
Node rewrite_15_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0][0][0]);
  children.push_back(node[2][0][1]);
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[15]++;
  return utils::mkSpecialBool(children, 15);
}
Node rewrite_15_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[15]++;
  return utils::mkSpecialBool(children, 15);
}
Node rewrite_6_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[6]++;
  return utils::mkSpecialBool(children, 6);
}
Node rewrite_6_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[6]++;
  return utils::mkSpecialBool(children, 6);
}
Node rewrite_6_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[2][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[6]++;
  return utils::mkSpecialBool(children, 6);
}
Node rewrite_6_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[6]++;
  return utils::mkSpecialBool(children, 6);
}
Node rewrite_6_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1][0]);
  children.push_back(node[2][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[6]++;
  return utils::mkSpecialBool(children, 6);
}
Node rewrite_6_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[2][0]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[6]++;
  return utils::mkSpecialBool(children, 6);
}
Node rewrite_11_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[11]++;
  return utils::mkSpecialBool(children, 11);
}
Node rewrite_11_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1]);
  children.push_back(node[1][0][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[11]++;
  return utils::mkSpecialBool(children, 11);
}
Node rewrite_11_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[11]++;
  return utils::mkSpecialBool(children, 11);
}
Node rewrite_11_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[11]++;
  return utils::mkSpecialBool(children, 11);
}
Node rewrite_14_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[14]++;
  return utils::mkSpecialBool(children, 14);
}
Node rewrite_14_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[14]++;
  return utils::mkSpecialBool(children, 14);
}
Node rewrite_14_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[14]++;
  return utils::mkSpecialBool(children, 14);
}
Node rewrite_14_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][0][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[14]++;
  return utils::mkSpecialBool(children, 14);
}
Node rewrite_13_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0][1]);
  children.push_back(node[2][0][0]);
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0][0]);
  children.push_back(node[2][0][1]);
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1]);
  children.push_back(node[1][0][0]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1]);
  children.push_back(node[1][0][0]);
  children.push_back(node[0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0][1]);
  children.push_back(node[2][0][0]);
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0][0]);
  children.push_back(node[2][0][1]);
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_4_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[4]++;
  return utils::mkSpecialBool(children, 4);
}
Node rewrite_4_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1][0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[4]++;
  return utils::mkSpecialBool(children, 4);
}
Node rewrite_4_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[2][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[4]++;
  return utils::mkSpecialBool(children, 4);
}
Node rewrite_4_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[4]++;
  return utils::mkSpecialBool(children, 4);
}
Node rewrite_4_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[4]++;
  return utils::mkSpecialBool(children, 4);
}
Node rewrite_4_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[2][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[4]++;
  return utils::mkSpecialBool(children, 4);
}
Node rewrite_10_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[2][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[2][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_18_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[18]++;
  return utils::mkSpecialBool(children, 18);
}
Node rewrite_18_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[18]++;
  return utils::mkSpecialBool(children, 18);
}
Node rewrite_18_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[18]++;
  return utils::mkSpecialBool(children, 18);
}
Node rewrite_18_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1]);
  children.push_back(node[1][0][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[18]++;
  return utils::mkSpecialBool(children, 18);
}
Node rewrite_0_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[0]++;
  return utils::mkSpecialBool(children, 0);
}
Node rewrite_0_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[0]++;
  return utils::mkSpecialBool(children, 0);
}
Node rewrite_5_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[5]++;
  return utils::mkSpecialBool(children, 5);
}
Node rewrite_5_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[5]++;
  return utils::mkSpecialBool(children, 5);
}
Node rewrite_5_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[5]++;
  return utils::mkSpecialBool(children, 5);
}
Node rewrite_5_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[5]++;
  return utils::mkSpecialBool(children, 5);
}
Node rewrite_5_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[5]++;
  return utils::mkSpecialBool(children, 5);
}
Node rewrite_5_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[5]++;
  return utils::mkSpecialBool(children, 5);
}
Node rewrite_17_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[17]++;
  return utils::mkSpecialBool(children, 17);
}
Node rewrite_17_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[17]++;
  return utils::mkSpecialBool(children, 17);
}
Node rewrite_17_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[17]++;
  return utils::mkSpecialBool(children, 17);
}
Node rewrite_17_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[17]++;
  return utils::mkSpecialBool(children, 17);
}
Node rewrite_17_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[17]++;
  return utils::mkSpecialBool(children, 17);
}
Node rewrite_17_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[17]++;
  return utils::mkSpecialBool(children, 17);
}
Node rewrite_7_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_9_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[2]);
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[9]++;
  return utils::mkSpecialBool(children, 9);
}
Node rewrite_9_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[2]);
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[9]++;
  return utils::mkSpecialBool(children, 9);
}
Node rewrite_9_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[9]++;
  return utils::mkSpecialBool(children, 9);
}
Node rewrite_9_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[9]++;
  return utils::mkSpecialBool(children, 9);
}
Node rewrite_9_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[9]++;
  return utils::mkSpecialBool(children, 9);
}
Node rewrite_9_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[9]++;
  return utils::mkSpecialBool(children, 9);
}
Node rewrite_16_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[16]++;
  return utils::mkSpecialBool(children, 16);
}
Node rewrite_16_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[16]++;
  return utils::mkSpecialBool(children, 16);
}
Node rewrite_16(TNode node, const bool* predicates) {
  if (predicates[12] && true && predicates[0] && true && predicates[11] && predicates[7] && true && true) {
    return rewrite_12_0(node);
  }
  else if (predicates[12] && true && predicates[0] && predicates[10] && true && true && predicates[11] && true) {
    return rewrite_12_1(node);
  }
  else if (predicates[12] && true && predicates[0] && predicates[10] && true && true && predicates[11] && true) {
    return rewrite_12_2(node);
  }
  else if (predicates[12] && predicates[6] && predicates[1] && true && true && true && predicates[11] && true) {
    return rewrite_12_3(node);
  }
  else if (predicates[12] && true && predicates[0] && true && predicates[11] && predicates[7] && true && true) {
    return rewrite_12_4(node);
  }
  else if (predicates[12] && predicates[6] && true && true && predicates[11] && predicates[7] && true && true) {
    return rewrite_12_5(node);
  }
  else if (predicates[12] && predicates[6] && true && true && predicates[11] && predicates[7] && true && true) {
    return rewrite_12_6(node);
  }
  else if (predicates[12] && predicates[6] && true && predicates[0] && predicates[10] && true && true && true) {
    return rewrite_12_7(node);
  }
  else if (predicates[12] && predicates[6] && true && predicates[0] && predicates[10] && true && true && true) {
    return rewrite_12_8(node);
  }
  else if (predicates[12] && predicates[6] && predicates[1] && true && true && predicates[0] && true && true) {
    return rewrite_12_9(node);
  }
  else if (predicates[12] && predicates[6] && predicates[1] && true && true && predicates[0] && true && true) {
    return rewrite_12_10(node);
  }
  else if (predicates[12] && predicates[6] && predicates[1] && true && true && true && predicates[11] && true) {
    return rewrite_12_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_12(TNode node, const bool* predicates) {
  if (predicates[12] && predicates[6] && predicates[1] && true && predicates[4] && true && true && true) {
    return rewrite_15_0(node);
  }
  else if (predicates[12] && true && true && predicates[11] && predicates[7] && predicates[8] && true && true) {
    return rewrite_15_1(node);
  }
  else if (predicates[12] && true && predicates[0] && predicates[10] && predicates[3] && true && true && true) {
    return rewrite_15_2(node);
  }
  else if (predicates[12] && true && true && predicates[11] && predicates[7] && true && predicates[5] && true) {
    return rewrite_15_3(node);
  }
  else if (predicates[12] && predicates[6] && predicates[1] && true && predicates[4] && true && true && true) {
    return rewrite_15_4(node);
  }
  else if (predicates[12] && true && true && predicates[11] && predicates[7] && true && predicates[5] && true) {
    return rewrite_15_5(node);
  }
  else if (predicates[12] && predicates[6] && predicates[1] && predicates[9] && true && true && true && true) {
    return rewrite_15_6(node);
  }
  else if (predicates[12] && predicates[6] && predicates[1] && predicates[9] && true && true && true && true) {
    return rewrite_15_7(node);
  }
  else if (predicates[12] && true && predicates[0] && predicates[10] && true && predicates[2] && true && true) {
    return rewrite_15_8(node);
  }
  else if (predicates[12] && true && predicates[0] && predicates[10] && true && predicates[2] && true && true) {
    return rewrite_15_9(node);
  }
  else if (predicates[12] && true && true && predicates[11] && predicates[7] && predicates[8] && true && true) {
    return rewrite_15_10(node);
  }
  else if (predicates[12] && true && predicates[0] && predicates[10] && predicates[3] && true && true && true) {
    return rewrite_15_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_15(TNode node, const bool* predicates) {
  if (predicates[12] && predicates[6] && true && predicates[0] && true && predicates[11] && true) {
    return rewrite_6_0(node);
  }
  else if (predicates[12] && predicates[6] && true && predicates[0] && true && predicates[11] && true) {
    return rewrite_6_1(node);
  }
  else if (predicates[12] && predicates[6] && true && predicates[0] && true && predicates[11] && true) {
    return rewrite_6_2(node);
  }
  else if (predicates[12] && predicates[6] && true && predicates[0] && true && predicates[11] && true) {
    return rewrite_6_3(node);
  }
  else if (predicates[12] && predicates[6] && true && predicates[0] && true && predicates[11] && true) {
    return rewrite_6_4(node);
  }
  else if (predicates[12] && predicates[6] && true && predicates[0] && true && predicates[11] && true) {
    return rewrite_6_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_6(TNode node, const bool* predicates) {
  if (predicates[13] && predicates[6] && true && predicates[0] && predicates[10] && true && true) {
    return rewrite_11_0(node);
  }
  else if (predicates[13] && predicates[6] && true && predicates[0] && predicates[10] && true && true) {
    return rewrite_11_1(node);
  }
  else if (predicates[13] && predicates[6] && predicates[1] && true && true && predicates[0] && true) {
    return rewrite_11_2(node);
  }
  else if (predicates[13] && predicates[6] && predicates[1] && true && true && predicates[0] && true) {
    return rewrite_11_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_11(TNode node, const bool* predicates) {
  if (predicates[13] && predicates[6] && predicates[1] && true && predicates[4] && true && true) {
    return rewrite_14_0(node);
  }
  else if (predicates[13] && predicates[6] && predicates[1] && predicates[9] && true && true && true) {
    return rewrite_14_1(node);
  }
  else if (predicates[13] && true && predicates[0] && predicates[10] && predicates[3] && true && true) {
    return rewrite_14_2(node);
  }
  else if (predicates[13] && true && predicates[0] && predicates[10] && true && predicates[2] && true) {
    return rewrite_14_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_14(TNode node, const bool* predicates) {
  if (predicates[12] && true && predicates[0] && predicates[10] && true && true && true) {
    return rewrite_13_0(node);
  }
  else if (predicates[12] && true && true && predicates[11] && predicates[7] && true && true) {
    return rewrite_13_1(node);
  }
  else if (predicates[12] && true && true && predicates[11] && predicates[7] && true && true) {
    return rewrite_13_2(node);
  }
  else if (predicates[12] && true && predicates[0] && predicates[10] && true && true && true) {
    return rewrite_13_3(node);
  }
  else if (predicates[12] && true && predicates[0] && predicates[10] && true && true && true) {
    return rewrite_13_4(node);
  }
  else if (predicates[12] && true && predicates[0] && predicates[10] && true && true && true) {
    return rewrite_13_5(node);
  }
  else if (predicates[12] && true && true && predicates[11] && predicates[7] && true && true) {
    return rewrite_13_6(node);
  }
  else if (predicates[12] && predicates[6] && predicates[1] && true && true && true && true) {
    return rewrite_13_7(node);
  }
  else if (predicates[12] && predicates[6] && predicates[1] && true && true && true && true) {
    return rewrite_13_8(node);
  }
  else if (predicates[12] && true && true && predicates[11] && predicates[7] && true && true) {
    return rewrite_13_9(node);
  }
  else if (predicates[12] && predicates[6] && predicates[1] && true && true && true && true) {
    return rewrite_13_10(node);
  }
  else if (predicates[12] && predicates[6] && predicates[1] && true && true && true && true) {
    return rewrite_13_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_13(TNode node, const bool* predicates) {
  if (predicates[12] && predicates[6] && true && predicates[0] && true && true) {
    return rewrite_4_0(node);
  }
  else if (predicates[12] && predicates[6] && true && predicates[0] && true && true) {
    return rewrite_4_1(node);
  }
  else if (predicates[12] && true && predicates[0] && true && predicates[11] && true) {
    return rewrite_4_2(node);
  }
  else if (predicates[12] && true && predicates[0] && true && predicates[11] && true) {
    return rewrite_4_3(node);
  }
  else if (predicates[12] && predicates[6] && true && true && predicates[11] && true) {
    return rewrite_4_4(node);
  }
  else if (predicates[12] && predicates[6] && true && true && predicates[11] && true) {
    return rewrite_4_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_4(TNode node, const bool* predicates) {
  if (predicates[12] && true && predicates[0] && node[0] == node[1][0] && predicates[11] && true) {
    return rewrite_10_0(node);
  }
  else if (predicates[12] && predicates[6] && true && predicates[0] && true && node[0][0] == node[2]) {
    return rewrite_10_1(node);
  }
  else if (predicates[12] && predicates[6] && true && true && predicates[11] && node[1] == node[2][0]) {
    return rewrite_10_2(node);
  }
  else if (predicates[12] && true && predicates[0] && true && predicates[11] && node[0] == node[2][0]) {
    return rewrite_10_3(node);
  }
  else if (predicates[12] && predicates[6] && true && predicates[0] && true && node[1][0] == node[2]) {
    return rewrite_10_4(node);
  }
  else if (predicates[12] && predicates[6] && true && node[0][0] == node[1] && predicates[11] && true) {
    return rewrite_10_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_10(TNode node, const bool* predicates) {
  if (predicates[13] && predicates[6] && predicates[1] && true && true && true) {
    return rewrite_18_0(node);
  }
  else if (predicates[13] && predicates[6] && predicates[1] && true && true && true) {
    return rewrite_18_1(node);
  }
  else if (predicates[13] && true && predicates[0] && predicates[10] && true && true) {
    return rewrite_18_2(node);
  }
  else if (predicates[13] && true && predicates[0] && predicates[10] && true && true) {
    return rewrite_18_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_18(TNode node, const bool* predicates) {
  if (predicates[13] && predicates[6] && true && predicates[0] && true) {
    return rewrite_0_0(node);
  }
  else if (predicates[13] && predicates[6] && true && predicates[0] && true) {
    return rewrite_0_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_0(TNode node, const bool* predicates) {
  if (predicates[12] && predicates[6] && true && true && true) {
    return rewrite_5_0(node);
  }
  else if (predicates[12] && true && true && predicates[11] && true) {
    return rewrite_5_1(node);
  }
  else if (predicates[12] && true && true && predicates[11] && true) {
    return rewrite_5_2(node);
  }
  else if (predicates[12] && true && predicates[0] && true && true) {
    return rewrite_5_3(node);
  }
  else if (predicates[12] && true && predicates[0] && true && true) {
    return rewrite_5_4(node);
  }
  else if (predicates[12] && predicates[6] && true && true && true) {
    return rewrite_5_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_5(TNode node, const bool* predicates) {
  if (predicates[12] && true && true && predicates[11] && node[0] == node[2][0]) {
    return rewrite_17_0(node);
  }
  else if (predicates[12] && true && true && predicates[11] && node[1] == node[2][0]) {
    return rewrite_17_1(node);
  }
  else if (predicates[12] && true && predicates[0] && node[0] == node[1][0] && true) {
    return rewrite_17_2(node);
  }
  else if (predicates[12] && predicates[6] && true && node[0][0] == node[1] && true) {
    return rewrite_17_3(node);
  }
  else if (predicates[12] && true && predicates[0] && true && node[1][0] == node[2]) {
    return rewrite_17_4(node);
  }
  else if (predicates[12] && predicates[6] && true && true && node[0][0] == node[2]) {
    return rewrite_17_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_17(TNode node, const bool* predicates) {
  if (predicates[13] && predicates[6] && true && true) {
    return rewrite_7_0(node);
  }
  else if (predicates[13] && true && predicates[0] && true) {
    return rewrite_7_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_7(TNode node, const bool* predicates) {
  if (predicates[12] && true && true && true) {
    return rewrite_9_0(node);
  }
  else if (predicates[12] && true && true && true) {
    return rewrite_9_1(node);
  }
  else if (predicates[12] && true && true && true) {
    return rewrite_9_2(node);
  }
  else if (predicates[12] && true && true && true) {
    return rewrite_9_3(node);
  }
  else if (predicates[12] && true && true && true) {
    return rewrite_9_4(node);
  }
  else if (predicates[12] && true && true && true) {
    return rewrite_9_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_9(TNode node, const bool* predicates) {
  if (predicates[13] && true && true) {
    return rewrite_16_0(node);
  }
  else if (predicates[13] && true && true) {
    return rewrite_16_1(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBoolSpecialRewriter::RewriteAND(TNode node,  bool prewrite) {
  bool predicates[14];
  for (int i = 0; i < 14; i++) {
    predicates[i] = false;
  }
  predicates[12] = node.getKind() == kind::AND && node.getNumChildren() == 3;
  predicates[13] = node.getKind() == kind::AND && node.getNumChildren() == 2;
  if (node.getNumChildren() > 0) {
    predicates[6] = node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1;
    if (node[0].getNumChildren() > 0) {
      predicates[1] = node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2;
      if (node[0][0].getNumChildren() > 1) {
        predicates[4] = node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1;
      }
      if (node[0][0].getNumChildren() > 0) {
        predicates[9] = node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1;
      }
    }
  }
  if (node.getNumChildren() > 1) {
    predicates[0] = node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1;
    if (node[1].getNumChildren() > 0) {
      predicates[10] = node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2;
      if (node[1][0].getNumChildren() > 0) {
        predicates[3] = node[1][0][0].getKind() == kind::NOT && node[1][0][0].getNumChildren() == 1;
      }
      if (node[1][0].getNumChildren() > 1) {
        predicates[2] = node[1][0][1].getKind() == kind::NOT && node[1][0][1].getNumChildren() == 1;
      }
    }
  }
  if (node.getNumChildren() > 2) {
    predicates[11] = node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1;
    if (node[2].getNumChildren() > 0) {
      predicates[7] = node[2][0].getKind() == kind::AND && node[2][0].getNumChildren() == 2;
      if (node[2][0].getNumChildren() > 0) {
        predicates[8] = node[2][0][0].getKind() == kind::NOT && node[2][0][0].getNumChildren() == 1;
      }
      if (node[2][0].getNumChildren() > 1) {
        predicates[5] = node[2][0][1].getKind() == kind::NOT && node[2][0][1].getNumChildren() == 1;
      }
    }
  }
  Node response;
  if (TheoryBoolSpecialRewriter::enabled[12]) {
    response = rewrite_12(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[15]) {
    response = rewrite_15(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[6]) {
    response = rewrite_6(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[11]) {
    response = rewrite_11(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[14]) {
    response = rewrite_14(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[13]) {
    response = rewrite_13(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[4]) {
    response = rewrite_4(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[10]) {
    response = rewrite_10(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[18]) {
    response = rewrite_18(node, predicates);
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
  if (TheoryBoolSpecialRewriter::enabled[17]) {
    response = rewrite_17(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[7]) {
    response = rewrite_7(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[9]) {
    response = rewrite_9(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[16]) {
    response = rewrite_16(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
