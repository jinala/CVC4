#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"
#include "options/main_options.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;

Node rewrite_13_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[2][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[0][1]);
  children.push_back(node[2][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[1][1]);
  children.push_back(node[2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0][1]);
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[1][1]);
  children.push_back(node[2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[1][0]);
  children.push_back(node[2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[2][1]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[1][1]);
  children.push_back(node[2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[0][1]);
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[0][0]);
  children.push_back(node[2][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0][1]);
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[1][0]);
  children.push_back(node[2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_24(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[0][0]);
  children.push_back(node[2][0]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_25(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[2][1]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_26(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[1][1]);
  children.push_back(node[2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_27(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[1][0]);
  children.push_back(node[2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_28(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_29(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_30(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_31(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[1][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_32(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[1][0]);
  children.push_back(node[2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_33(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_34(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[0][1]);
  children.push_back(node[2][0]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_35(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_36(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_37(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_38(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_39(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[0][1]);
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_40(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_41(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_42(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_43(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_44(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[1][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_45(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_46(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_47(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[2][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_7_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_7_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[7]++;
  return utils::mkSpecialBool(children, 7);
}
Node rewrite_8_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_10_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[2][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1][0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[2][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[1][0]);
  children.push_back(node[2][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[0][0]);
  children.push_back(node[2][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1][1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[0][1]);
  children.push_back(node[2][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[1][0]);
  children.push_back(node[2][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[1][1]);
  children.push_back(node[2][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[1][1]);
  children.push_back(node[2][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1][1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1][0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_9_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[9]++;
  return utils::mkSpecialBool(children, 9);
}
Node rewrite_9_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[9]++;
  return utils::mkSpecialBool(children, 9);
}
Node rewrite_9_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[9]++;
  return utils::mkSpecialBool(children, 9);
}
Node rewrite_9_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[9]++;
  return utils::mkSpecialBool(children, 9);
}
Node rewrite_9_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[9]++;
  return utils::mkSpecialBool(children, 9);
}
Node rewrite_9_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[9]++;
  return utils::mkSpecialBool(children, 9);
}
Node rewrite_9_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[9]++;
  return utils::mkSpecialBool(children, 9);
}
Node rewrite_9_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[9]++;
  return utils::mkSpecialBool(children, 9);
}
Node rewrite_11_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[11]++;
  return utils::mkSpecialBool(children, 11);
}
Node rewrite_11_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[11]++;
  return utils::mkSpecialBool(children, 11);
}
Node rewrite_11_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[11]++;
  return utils::mkSpecialBool(children, 11);
}
Node rewrite_11_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[11]++;
  return utils::mkSpecialBool(children, 11);
}
Node rewrite_11_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[11]++;
  return utils::mkSpecialBool(children, 11);
}
Node rewrite_11_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[11]++;
  return utils::mkSpecialBool(children, 11);
}
Node rewrite_11_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[11]++;
  return utils::mkSpecialBool(children, 11);
}
Node rewrite_11_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[11]++;
  return utils::mkSpecialBool(children, 11);
}
Node rewrite_12_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_14_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[14]++;
  return utils::mkSpecialBool(children, 14);
}
Node rewrite_14_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[14]++;
  return utils::mkSpecialBool(children, 14);
}
Node rewrite_14_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[14]++;
  return utils::mkSpecialBool(children, 14);
}
Node rewrite_14_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[14]++;
  return utils::mkSpecialBool(children, 14);
}
Node rewrite_6_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[6]++;
  return utils::mkSpecialBool(children, 6);
}
Node rewrite_6_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[6]++;
  return utils::mkSpecialBool(children, 6);
}
Node rewrite_6_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[2]);
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[6]++;
  return utils::mkSpecialBool(children, 6);
}
Node rewrite_6_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[6]++;
  return utils::mkSpecialBool(children, 6);
}
Node rewrite_6_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[6]++;
  return utils::mkSpecialBool(children, 6);
}
Node rewrite_6_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[2]);
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[6]++;
  return utils::mkSpecialBool(children, 6);
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
  if (predicates[1] && predicates[3] && true && true && predicates[4] && true && true && predicates[2] && node[0][1] == node[2][0] && node[1][1] == node[2][1]) {
    return rewrite_13_0(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && node[0][1] == node[1][1] && predicates[2] && node[0][0] == node[2][0] && true) {
    return rewrite_13_1(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && true && predicates[2] && node[1][0] == node[2][0] && node[0][0] == node[2][1]) {
    return rewrite_13_2(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && node[0][0] == node[1][1] && predicates[2] && true && node[1][0] == node[2][1]) {
    return rewrite_13_3(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && node[0][1] == node[1][0] && true && predicates[2] && node[1][1] == node[2][0] && true) {
    return rewrite_13_4(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && node[0][0] == node[1][0] && true && predicates[2] && node[1][1] == node[2][0] && true) {
    return rewrite_13_5(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && true && predicates[2] && node[0][0] == node[2][0] && node[1][0] == node[2][1]) {
    return rewrite_13_6(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && node[0][1] == node[1][0] && true && predicates[2] && true && node[0][0] == node[2][1]) {
    return rewrite_13_7(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && node[0][0] == node[1][0] && true && predicates[2] && node[1][1] == node[2][0] && true) {
    return rewrite_13_8(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && true && predicates[2] && node[1][0] == node[2][0] && node[0][1] == node[2][1]) {
    return rewrite_13_9(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && true && predicates[2] && node[0][0] == node[2][0] && node[1][1] == node[2][1]) {
    return rewrite_13_10(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && true && predicates[2] && node[0][1] == node[2][0] && node[1][0] == node[2][1]) {
    return rewrite_13_11(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && true && predicates[2] && node[1][0] == node[2][0] && node[0][0] == node[2][1]) {
    return rewrite_13_12(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && node[0][0] == node[1][0] && true && predicates[2] && true && node[0][1] == node[2][1]) {
    return rewrite_13_13(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && node[0][0] == node[1][1] && predicates[2] && true && node[0][1] == node[2][1]) {
    return rewrite_13_14(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && node[0][1] == node[1][1] && predicates[2] && node[0][0] == node[2][0] && true) {
    return rewrite_13_15(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && node[0][0] == node[1][1] && predicates[2] && true && node[1][0] == node[2][1]) {
    return rewrite_13_16(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && node[0][1] == node[1][0] && true && predicates[2] && node[1][1] == node[2][0] && true) {
    return rewrite_13_17(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && true && predicates[2] && node[1][0] == node[2][0] && node[0][1] == node[2][1]) {
    return rewrite_13_18(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && node[0][1] == node[1][1] && predicates[2] && true && node[0][0] == node[2][1]) {
    return rewrite_13_19(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && node[0][0] == node[1][0] && true && predicates[2] && true && node[1][1] == node[2][1]) {
    return rewrite_13_20(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && true && predicates[2] && node[1][1] == node[2][0] && node[0][0] == node[2][1]) {
    return rewrite_13_21(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && node[0][1] == node[1][0] && true && predicates[2] && node[0][0] == node[2][0] && true) {
    return rewrite_13_22(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && node[0][1] == node[1][0] && true && predicates[2] && true && node[1][1] == node[2][1]) {
    return rewrite_13_23(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && true && predicates[2] && node[1][1] == node[2][0] && node[0][1] == node[2][1]) {
    return rewrite_13_24(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && true && predicates[2] && node[0][0] == node[2][0] && node[1][0] == node[2][1]) {
    return rewrite_13_25(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && true && predicates[2] && node[0][1] == node[2][0] && node[1][0] == node[2][1]) {
    return rewrite_13_26(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && true && predicates[2] && node[1][1] == node[2][0] && node[0][1] == node[2][1]) {
    return rewrite_13_27(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && node[0][1] == node[1][1] && predicates[2] && node[1][0] == node[2][0] && true) {
    return rewrite_13_28(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && node[0][1] == node[1][1] && predicates[2] && true && node[1][0] == node[2][1]) {
    return rewrite_13_29(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && node[0][0] == node[1][0] && true && predicates[2] && node[0][1] == node[2][0] && true) {
    return rewrite_13_30(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && node[0][0] == node[1][1] && predicates[2] && node[1][0] == node[2][0] && true) {
    return rewrite_13_31(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && true && predicates[2] && node[0][1] == node[2][0] && node[1][1] == node[2][1]) {
    return rewrite_13_32(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && node[0][1] == node[1][0] && true && predicates[2] && node[0][0] == node[2][0] && true) {
    return rewrite_13_33(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && true && predicates[2] && node[1][1] == node[2][0] && node[0][0] == node[2][1]) {
    return rewrite_13_34(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && node[0][1] == node[1][1] && predicates[2] && true && node[1][0] == node[2][1]) {
    return rewrite_13_35(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && node[0][0] == node[1][1] && predicates[2] && node[0][1] == node[2][0] && true) {
    return rewrite_13_36(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && node[0][0] == node[1][0] && true && predicates[2] && true && node[0][1] == node[2][1]) {
    return rewrite_13_37(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && node[0][1] == node[1][0] && true && predicates[2] && true && node[0][0] == node[2][1]) {
    return rewrite_13_38(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && node[0][0] == node[1][1] && predicates[2] && node[1][0] == node[2][0] && true) {
    return rewrite_13_39(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && node[0][1] == node[1][1] && predicates[2] && true && node[0][0] == node[2][1]) {
    return rewrite_13_40(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && node[0][0] == node[1][0] && true && predicates[2] && node[0][1] == node[2][0] && true) {
    return rewrite_13_41(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && node[0][0] == node[1][1] && predicates[2] && node[0][1] == node[2][0] && true) {
    return rewrite_13_42(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && node[0][1] == node[1][0] && true && predicates[2] && true && node[1][1] == node[2][1]) {
    return rewrite_13_43(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && node[0][0] == node[1][0] && true && predicates[2] && true && node[1][1] == node[2][1]) {
    return rewrite_13_44(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && node[0][1] == node[1][1] && predicates[2] && node[1][0] == node[2][0] && true) {
    return rewrite_13_45(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && node[0][0] == node[1][1] && predicates[2] && true && node[0][1] == node[2][1]) {
    return rewrite_13_46(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && true && predicates[2] && node[0][0] == node[2][0] && node[1][1] == node[2][1]) {
    return rewrite_13_47(node);
  }
  else {
    return node;
  }
}
Node rewrite_13(TNode node, const bool* predicates) {
  if (predicates[1] && true && predicates[4] && true && true && predicates[2] && true && true) {
    return rewrite_7_0(node);
  }
  else if (predicates[1] && true && predicates[4] && true && true && predicates[2] && true && true) {
    return rewrite_7_1(node);
  }
  else if (predicates[1] && true && predicates[4] && true && true && predicates[2] && true && true) {
    return rewrite_7_2(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && true && true) {
    return rewrite_7_3(node);
  }
  else if (predicates[1] && true && predicates[4] && true && true && predicates[2] && true && true) {
    return rewrite_7_4(node);
  }
  else if (predicates[1] && true && predicates[4] && true && true && predicates[2] && true && true) {
    return rewrite_7_5(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && true && true) {
    return rewrite_7_6(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && true && true) {
    return rewrite_7_7(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && predicates[2] && true && true) {
    return rewrite_7_8(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && true && true) {
    return rewrite_7_9(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && predicates[2] && true && true) {
    return rewrite_7_10(node);
  }
  else if (predicates[1] && true && predicates[4] && true && true && predicates[2] && true && true) {
    return rewrite_7_11(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && predicates[2] && true && true) {
    return rewrite_7_12(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && predicates[2] && true && true) {
    return rewrite_7_13(node);
  }
  else if (predicates[1] && true && predicates[4] && true && true && predicates[2] && true && true) {
    return rewrite_7_14(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && predicates[2] && true && true) {
    return rewrite_7_15(node);
  }
  else if (predicates[1] && true && predicates[4] && true && true && predicates[2] && true && true) {
    return rewrite_7_16(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && predicates[2] && true && true) {
    return rewrite_7_17(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && predicates[2] && true && true) {
    return rewrite_7_18(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && true && true) {
    return rewrite_7_19(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && true && true) {
    return rewrite_7_20(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && predicates[2] && true && true) {
    return rewrite_7_21(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && true && true) {
    return rewrite_7_22(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && true && true) {
    return rewrite_7_23(node);
  }
  else {
    return node;
  }
}
Node rewrite_7(TNode node, const bool* predicates) {
  if (predicates[1] && true && predicates[4] && true && true && predicates[2] && true && node[1][1] == node[2][1]) {
    return rewrite_8_0(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && predicates[2] && true && node[0][1] == node[2][1]) {
    return rewrite_8_1(node);
  }
  else if (predicates[1] && true && predicates[4] && true && true && predicates[2] && true && node[1][1] == node[2][1]) {
    return rewrite_8_2(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && predicates[2] && node[0][1] == node[2][0] && true) {
    return rewrite_8_3(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && node[0][1] == node[1][1] && true) {
    return rewrite_8_4(node);
  }
  else if (predicates[1] && true && predicates[4] && true && true && predicates[2] && true && node[1][0] == node[2][1]) {
    return rewrite_8_5(node);
  }
  else if (predicates[1] && true && predicates[4] && true && true && predicates[2] && node[1][0] == node[2][0] && true) {
    return rewrite_8_6(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && predicates[2] && node[0][0] == node[2][0] && true) {
    return rewrite_8_7(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && node[0][1] == node[1][1] && true) {
    return rewrite_8_8(node);
  }
  else if (predicates[1] && true && predicates[4] && true && true && predicates[2] && true && node[1][0] == node[2][1]) {
    return rewrite_8_9(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && node[0][0] == node[1][0] && true && true) {
    return rewrite_8_10(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && node[0][1] == node[1][0] && true && true) {
    return rewrite_8_11(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && node[0][0] == node[1][1] && true) {
    return rewrite_8_12(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && predicates[2] && node[0][1] == node[2][0] && true) {
    return rewrite_8_13(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && node[0][0] == node[1][1] && true) {
    return rewrite_8_14(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && node[0][0] == node[1][0] && true && true) {
    return rewrite_8_15(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && node[0][1] == node[1][0] && true && true) {
    return rewrite_8_16(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && predicates[2] && true && node[0][1] == node[2][1]) {
    return rewrite_8_17(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && predicates[2] && true && node[0][0] == node[2][1]) {
    return rewrite_8_18(node);
  }
  else if (predicates[1] && true && predicates[4] && true && true && predicates[2] && node[1][1] == node[2][0] && true) {
    return rewrite_8_19(node);
  }
  else if (predicates[1] && true && predicates[4] && true && true && predicates[2] && node[1][0] == node[2][0] && true) {
    return rewrite_8_20(node);
  }
  else if (predicates[1] && true && predicates[4] && true && true && predicates[2] && node[1][1] == node[2][0] && true) {
    return rewrite_8_21(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && predicates[2] && true && node[0][0] == node[2][1]) {
    return rewrite_8_22(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && predicates[2] && node[0][0] == node[2][0] && true) {
    return rewrite_8_23(node);
  }
  else {
    return node;
  }
}
Node rewrite_8(TNode node, const bool* predicates) {
  if (predicates[1] && predicates[3] && true && true && true && predicates[2] && node[0][0] == node[2][0] && true) {
    return rewrite_10_0(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && node[0][1] == node[1][0] && true && true) {
    return rewrite_10_1(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && predicates[2] && node[0][0] == node[2][0] && true) {
    return rewrite_10_2(node);
  }
  else if (predicates[1] && true && predicates[4] && true && true && predicates[2] && node[1][0] == node[2][0] && true) {
    return rewrite_10_3(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && node[0][0] == node[1][1] && true) {
    return rewrite_10_4(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && predicates[2] && true && node[0][0] == node[2][1]) {
    return rewrite_10_5(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && predicates[2] && node[0][1] == node[2][0] && true) {
    return rewrite_10_6(node);
  }
  else if (predicates[1] && true && predicates[4] && true && true && predicates[2] && true && node[1][1] == node[2][1]) {
    return rewrite_10_7(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && node[0][0] == node[1][1] && true) {
    return rewrite_10_8(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && predicates[2] && true && node[0][1] == node[2][1]) {
    return rewrite_10_9(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && node[0][0] == node[1][0] && true && true) {
    return rewrite_10_10(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && predicates[2] && true && node[0][0] == node[2][1]) {
    return rewrite_10_11(node);
  }
  else if (predicates[1] && true && predicates[4] && true && true && predicates[2] && true && node[1][1] == node[2][1]) {
    return rewrite_10_12(node);
  }
  else if (predicates[1] && true && predicates[4] && true && true && predicates[2] && node[1][1] == node[2][0] && true) {
    return rewrite_10_13(node);
  }
  else if (predicates[1] && true && predicates[4] && true && true && predicates[2] && true && node[1][0] == node[2][1]) {
    return rewrite_10_14(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && predicates[2] && node[0][1] == node[2][0] && true) {
    return rewrite_10_15(node);
  }
  else if (predicates[1] && true && predicates[4] && true && true && predicates[2] && node[1][1] == node[2][0] && true) {
    return rewrite_10_16(node);
  }
  else if (predicates[1] && true && predicates[4] && true && true && predicates[2] && node[1][0] == node[2][0] && true) {
    return rewrite_10_17(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && node[0][0] == node[1][0] && true && true) {
    return rewrite_10_18(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && node[0][1] == node[1][0] && true && true) {
    return rewrite_10_19(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && node[0][1] == node[1][1] && true) {
    return rewrite_10_20(node);
  }
  else if (predicates[1] && predicates[3] && true && true && predicates[4] && true && node[0][1] == node[1][1] && true) {
    return rewrite_10_21(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && predicates[2] && true && node[0][1] == node[2][1]) {
    return rewrite_10_22(node);
  }
  else if (predicates[1] && true && predicates[4] && true && true && predicates[2] && true && node[1][0] == node[2][1]) {
    return rewrite_10_23(node);
  }
  else {
    return node;
  }
}
Node rewrite_10(TNode node, const bool* predicates) {
  if (predicates[0] && predicates[3] && true && true && predicates[4] && true && true) {
    return rewrite_9_0(node);
  }
  else if (predicates[0] && predicates[3] && true && true && predicates[4] && true && true) {
    return rewrite_9_1(node);
  }
  else if (predicates[0] && predicates[3] && true && true && predicates[4] && true && true) {
    return rewrite_9_2(node);
  }
  else if (predicates[0] && predicates[3] && true && true && predicates[4] && true && true) {
    return rewrite_9_3(node);
  }
  else if (predicates[0] && predicates[3] && true && true && predicates[4] && true && true) {
    return rewrite_9_4(node);
  }
  else if (predicates[0] && predicates[3] && true && true && predicates[4] && true && true) {
    return rewrite_9_5(node);
  }
  else if (predicates[0] && predicates[3] && true && true && predicates[4] && true && true) {
    return rewrite_9_6(node);
  }
  else if (predicates[0] && predicates[3] && true && true && predicates[4] && true && true) {
    return rewrite_9_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_9(TNode node, const bool* predicates) {
  if (predicates[0] && predicates[3] && true && true && predicates[4] && node[0][0] == node[1][0] && true) {
    return rewrite_11_0(node);
  }
  else if (predicates[0] && predicates[3] && true && true && predicates[4] && node[0][0] == node[1][0] && true) {
    return rewrite_11_1(node);
  }
  else if (predicates[0] && predicates[3] && true && true && predicates[4] && true && node[0][0] == node[1][1]) {
    return rewrite_11_2(node);
  }
  else if (predicates[0] && predicates[3] && true && true && predicates[4] && true && node[0][1] == node[1][1]) {
    return rewrite_11_3(node);
  }
  else if (predicates[0] && predicates[3] && true && true && predicates[4] && true && node[0][0] == node[1][1]) {
    return rewrite_11_4(node);
  }
  else if (predicates[0] && predicates[3] && true && true && predicates[4] && node[0][1] == node[1][0] && true) {
    return rewrite_11_5(node);
  }
  else if (predicates[0] && predicates[3] && true && true && predicates[4] && true && node[0][1] == node[1][1]) {
    return rewrite_11_6(node);
  }
  else if (predicates[0] && predicates[3] && true && true && predicates[4] && node[0][1] == node[1][0] && true) {
    return rewrite_11_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_11(TNode node, const bool* predicates) {
  if (predicates[1] && true && predicates[4] && true && true && true) {
    return rewrite_12_0(node);
  }
  else if (predicates[1] && true && predicates[4] && true && true && true) {
    return rewrite_12_1(node);
  }
  else if (predicates[1] && true && true && predicates[2] && true && true) {
    return rewrite_12_2(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && true) {
    return rewrite_12_3(node);
  }
  else if (predicates[1] && true && true && predicates[2] && true && true) {
    return rewrite_12_4(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && true) {
    return rewrite_12_5(node);
  }
  else if (predicates[1] && true && predicates[4] && true && true && true) {
    return rewrite_12_6(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && true) {
    return rewrite_12_7(node);
  }
  else if (predicates[1] && predicates[3] && true && true && true && true) {
    return rewrite_12_8(node);
  }
  else if (predicates[1] && true && true && predicates[2] && true && true) {
    return rewrite_12_9(node);
  }
  else if (predicates[1] && true && predicates[4] && true && true && true) {
    return rewrite_12_10(node);
  }
  else if (predicates[1] && true && true && predicates[2] && true && true) {
    return rewrite_12_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_12(TNode node, const bool* predicates) {
  if (predicates[0] && true && predicates[4] && true && true) {
    return rewrite_14_0(node);
  }
  else if (predicates[0] && predicates[3] && true && true && true) {
    return rewrite_14_1(node);
  }
  else if (predicates[0] && predicates[3] && true && true && true) {
    return rewrite_14_2(node);
  }
  else if (predicates[0] && true && predicates[4] && true && true) {
    return rewrite_14_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_14(TNode node, const bool* predicates) {
  if (predicates[1] && true && true && true) {
    return rewrite_6_0(node);
  }
  else if (predicates[1] && true && true && true) {
    return rewrite_6_1(node);
  }
  else if (predicates[1] && true && true && true) {
    return rewrite_6_2(node);
  }
  else if (predicates[1] && true && true && true) {
    return rewrite_6_3(node);
  }
  else if (predicates[1] && true && true && true) {
    return rewrite_6_4(node);
  }
  else if (predicates[1] && true && true && true) {
    return rewrite_6_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_6(TNode node, const bool* predicates) {
  if (predicates[0] && true && true) {
    return rewrite_16_0(node);
  }
  else if (predicates[0] && true && true) {
    return rewrite_16_1(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBoolSpecialRewriter::RewriteOR(TNode node,  bool prewrite) {
  bool predicates[5];
  for (int i = 0; i < 5; i++) {
    predicates[i] = false;
  }
  predicates[0] = node.getKind() == kind::OR && node.getNumChildren() == 2;
  predicates[1] = node.getKind() == kind::OR && node.getNumChildren() == 3;
  if (node.getNumChildren() > 0) {
    predicates[3] = node[0].getKind() == kind::AND && node[0].getNumChildren() == 2;
  }
  if (node.getNumChildren() > 1) {
    predicates[4] = node[1].getKind() == kind::AND && node[1].getNumChildren() == 2;
  }
  if (node.getNumChildren() > 2) {
    predicates[2] = node[2].getKind() == kind::AND && node[2].getNumChildren() == 2;
  }
  Node response;
  if (TheoryBoolSpecialRewriter::enabled[13]) {
    response = rewrite_13(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[7]) {
    response = rewrite_7(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[8]) {
    response = rewrite_8(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[10]) {
    response = rewrite_10(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[9]) {
    response = rewrite_9(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[11]) {
    response = rewrite_11(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[12]) {
    response = rewrite_12(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[14]) {
    response = rewrite_14(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[6]) {
    response = rewrite_6(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[16]) {
    response = rewrite_16(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
