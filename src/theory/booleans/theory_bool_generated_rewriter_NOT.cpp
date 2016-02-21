#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"
#include "options/main_options.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;

Node rewrite_330_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][1][1]);
  children.push_back(node[0][0][1][1][0]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][1][0]);
  children.push_back(node[0][1][1][1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1][1]);
  children.push_back(node[0][0][0][1][0]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][2][1]);
  children.push_back(node[0][1][0][2][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][2][1]);
  children.push_back(node[0][0][0][2][0]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][2][1]);
  children.push_back(node[0][1][1][2][0]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0][0]);
  children.push_back(node[0][0][1][0][1]);
  children.push_back(node[0][0][1][2]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1][1]);
  children.push_back(node[0][1][0][1][0]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1][0]);
  children.push_back(node[0][1][0][1][1]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][2][0]);
  children.push_back(node[0][1][0][2][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][2][0]);
  children.push_back(node[0][0][0][2][1]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][2][0]);
  children.push_back(node[0][0][1][2][1]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0][0]);
  children.push_back(node[0][1][1][0][1]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1][0]);
  children.push_back(node[0][0][0][1][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0][1]);
  children.push_back(node[0][0][1][0][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1][1]);
  children.push_back(node[0][1][0][1][0]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1][0]);
  children.push_back(node[0][1][0][1][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0][1]);
  children.push_back(node[0][1][1][0][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0][1]);
  children.push_back(node[0][1][1][0][0]);
  children.push_back(node[0][1][1][2]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_24(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][1][1]);
  children.push_back(node[0][1][1][1][0]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_25(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][1][1]);
  children.push_back(node[0][0][1][1][0]);
  children.push_back(node[0][0][1][2]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_26(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0][0]);
  children.push_back(node[0][1][1][0][1]);
  children.push_back(node[0][1][1][2]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_27(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1][0]);
  children.push_back(node[0][0][0][1][1]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_28(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0][1]);
  children.push_back(node[0][0][1][0][0]);
  children.push_back(node[0][0][1][2]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_29(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_30(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0][0]);
  children.push_back(node[0][0][1][0][1]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_31(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][2][0]);
  children.push_back(node[0][1][1][2][1]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_32(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_33(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][2][1]);
  children.push_back(node[0][1][1][2][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_34(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_35(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][1][0]);
  children.push_back(node[0][0][1][1][1]);
  children.push_back(node[0][0][1][2]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_36(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][2][0]);
  children.push_back(node[0][0][0][2][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_37(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][2][0]);
  children.push_back(node[0][1][0][2][1]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_38(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][2][0]);
  children.push_back(node[0][1][1][2][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_39(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][2][1]);
  children.push_back(node[0][1][0][2][0]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_40(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1][1]);
  children.push_back(node[0][0][0][1][0]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_41(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][2][1]);
  children.push_back(node[0][0][0][2][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_42(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][1][1]);
  children.push_back(node[0][1][1][1][0]);
  children.push_back(node[0][1][1][2]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_43(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][2][1]);
  children.push_back(node[0][0][1][2][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_44(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][1][0]);
  children.push_back(node[0][1][1][1][1]);
  children.push_back(node[0][1][1][2]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_45(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][2][0]);
  children.push_back(node[0][0][1][2][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_46(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][2][1]);
  children.push_back(node[0][0][1][2][0]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_330_47(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][1][0]);
  children.push_back(node[0][0][1][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[330]++;
  return utils::mkSpecialBool(children, 330);
}
Node rewrite_233_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[233]++;
  return utils::mkSpecialBool(children, 233);
}
Node rewrite_233_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[233]++;
  return utils::mkSpecialBool(children, 233);
}
Node rewrite_233_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[233]++;
  return utils::mkSpecialBool(children, 233);
}
Node rewrite_233_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[233]++;
  return utils::mkSpecialBool(children, 233);
}
Node rewrite_233_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[233]++;
  return utils::mkSpecialBool(children, 233);
}
Node rewrite_233_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][2]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[233]++;
  return utils::mkSpecialBool(children, 233);
}
Node rewrite_233_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[233]++;
  return utils::mkSpecialBool(children, 233);
}
Node rewrite_233_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][2]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[233]++;
  return utils::mkSpecialBool(children, 233);
}
Node rewrite_233_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[233]++;
  return utils::mkSpecialBool(children, 233);
}
Node rewrite_233_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[233]++;
  return utils::mkSpecialBool(children, 233);
}
Node rewrite_233_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][2]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[233]++;
  return utils::mkSpecialBool(children, 233);
}
Node rewrite_233_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[233]++;
  return utils::mkSpecialBool(children, 233);
}
Node rewrite_233_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[233]++;
  return utils::mkSpecialBool(children, 233);
}
Node rewrite_233_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][2]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[233]++;
  return utils::mkSpecialBool(children, 233);
}
Node rewrite_233_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][2]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[233]++;
  return utils::mkSpecialBool(children, 233);
}
Node rewrite_233_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][2]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[233]++;
  return utils::mkSpecialBool(children, 233);
}
Node rewrite_233_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][2]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[233]++;
  return utils::mkSpecialBool(children, 233);
}
Node rewrite_233_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[233]++;
  return utils::mkSpecialBool(children, 233);
}
Node rewrite_233_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[233]++;
  return utils::mkSpecialBool(children, 233);
}
Node rewrite_233_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[233]++;
  return utils::mkSpecialBool(children, 233);
}
Node rewrite_233_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[233]++;
  return utils::mkSpecialBool(children, 233);
}
Node rewrite_233_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[233]++;
  return utils::mkSpecialBool(children, 233);
}
Node rewrite_233_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[233]++;
  return utils::mkSpecialBool(children, 233);
}
Node rewrite_233_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][2]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[233]++;
  return utils::mkSpecialBool(children, 233);
}
Node rewrite_247_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[247]++;
  return utils::mkSpecialBool(children, 247);
}
Node rewrite_247_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[247]++;
  return utils::mkSpecialBool(children, 247);
}
Node rewrite_247_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[247]++;
  return utils::mkSpecialBool(children, 247);
}
Node rewrite_247_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[247]++;
  return utils::mkSpecialBool(children, 247);
}
Node rewrite_247_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[247]++;
  return utils::mkSpecialBool(children, 247);
}
Node rewrite_247_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[247]++;
  return utils::mkSpecialBool(children, 247);
}
Node rewrite_247_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1][2]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[247]++;
  return utils::mkSpecialBool(children, 247);
}
Node rewrite_247_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[247]++;
  return utils::mkSpecialBool(children, 247);
}
Node rewrite_247_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1][2]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[247]++;
  return utils::mkSpecialBool(children, 247);
}
Node rewrite_247_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[247]++;
  return utils::mkSpecialBool(children, 247);
}
Node rewrite_247_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[247]++;
  return utils::mkSpecialBool(children, 247);
}
Node rewrite_247_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[247]++;
  return utils::mkSpecialBool(children, 247);
}
Node rewrite_247_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[247]++;
  return utils::mkSpecialBool(children, 247);
}
Node rewrite_247_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][2]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[247]++;
  return utils::mkSpecialBool(children, 247);
}
Node rewrite_247_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1][2]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[247]++;
  return utils::mkSpecialBool(children, 247);
}
Node rewrite_247_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][2]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[247]++;
  return utils::mkSpecialBool(children, 247);
}
Node rewrite_247_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[247]++;
  return utils::mkSpecialBool(children, 247);
}
Node rewrite_247_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][2]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[247]++;
  return utils::mkSpecialBool(children, 247);
}
Node rewrite_247_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[247]++;
  return utils::mkSpecialBool(children, 247);
}
Node rewrite_247_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[247]++;
  return utils::mkSpecialBool(children, 247);
}
Node rewrite_247_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][2]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[247]++;
  return utils::mkSpecialBool(children, 247);
}
Node rewrite_247_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[247]++;
  return utils::mkSpecialBool(children, 247);
}
Node rewrite_247_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[247]++;
  return utils::mkSpecialBool(children, 247);
}
Node rewrite_247_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1][2]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[247]++;
  return utils::mkSpecialBool(children, 247);
}
Node rewrite_345_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[345]++;
  return utils::mkSpecialBool(children, 345);
}
Node rewrite_345_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[345]++;
  return utils::mkSpecialBool(children, 345);
}
Node rewrite_345_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[345]++;
  return utils::mkSpecialBool(children, 345);
}
Node rewrite_345_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[345]++;
  return utils::mkSpecialBool(children, 345);
}
Node rewrite_345_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[345]++;
  return utils::mkSpecialBool(children, 345);
}
Node rewrite_345_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[345]++;
  return utils::mkSpecialBool(children, 345);
}
Node rewrite_345_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[345]++;
  return utils::mkSpecialBool(children, 345);
}
Node rewrite_345_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[345]++;
  return utils::mkSpecialBool(children, 345);
}
Node rewrite_345_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[345]++;
  return utils::mkSpecialBool(children, 345);
}
Node rewrite_345_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[345]++;
  return utils::mkSpecialBool(children, 345);
}
Node rewrite_345_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[345]++;
  return utils::mkSpecialBool(children, 345);
}
Node rewrite_345_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[345]++;
  return utils::mkSpecialBool(children, 345);
}
Node rewrite_345_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[345]++;
  return utils::mkSpecialBool(children, 345);
}
Node rewrite_345_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[345]++;
  return utils::mkSpecialBool(children, 345);
}
Node rewrite_345_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[345]++;
  return utils::mkSpecialBool(children, 345);
}
Node rewrite_345_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[345]++;
  return utils::mkSpecialBool(children, 345);
}
Node rewrite_345_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[345]++;
  return utils::mkSpecialBool(children, 345);
}
Node rewrite_345_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[345]++;
  return utils::mkSpecialBool(children, 345);
}
Node rewrite_345_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[345]++;
  return utils::mkSpecialBool(children, 345);
}
Node rewrite_345_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[345]++;
  return utils::mkSpecialBool(children, 345);
}
Node rewrite_345_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[345]++;
  return utils::mkSpecialBool(children, 345);
}
Node rewrite_345_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[345]++;
  return utils::mkSpecialBool(children, 345);
}
Node rewrite_345_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[345]++;
  return utils::mkSpecialBool(children, 345);
}
Node rewrite_345_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[345]++;
  return utils::mkSpecialBool(children, 345);
}
Node rewrite_268_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[268]++;
  return utils::mkSpecialBool(children, 268);
}
Node rewrite_268_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[268]++;
  return utils::mkSpecialBool(children, 268);
}
Node rewrite_268_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[268]++;
  return utils::mkSpecialBool(children, 268);
}
Node rewrite_268_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[268]++;
  return utils::mkSpecialBool(children, 268);
}
Node rewrite_268_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[268]++;
  return utils::mkSpecialBool(children, 268);
}
Node rewrite_268_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[268]++;
  return utils::mkSpecialBool(children, 268);
}
Node rewrite_268_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[268]++;
  return utils::mkSpecialBool(children, 268);
}
Node rewrite_268_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[268]++;
  return utils::mkSpecialBool(children, 268);
}
Node rewrite_327_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[327]++;
  return utils::mkSpecialBool(children, 327);
}
Node rewrite_327_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[327]++;
  return utils::mkSpecialBool(children, 327);
}
Node rewrite_327_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[327]++;
  return utils::mkSpecialBool(children, 327);
}
Node rewrite_327_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[327]++;
  return utils::mkSpecialBool(children, 327);
}
Node rewrite_327_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[327]++;
  return utils::mkSpecialBool(children, 327);
}
Node rewrite_327_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[327]++;
  return utils::mkSpecialBool(children, 327);
}
Node rewrite_327_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[327]++;
  return utils::mkSpecialBool(children, 327);
}
Node rewrite_327_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[327]++;
  return utils::mkSpecialBool(children, 327);
}
Node rewrite_327_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[327]++;
  return utils::mkSpecialBool(children, 327);
}
Node rewrite_327_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[327]++;
  return utils::mkSpecialBool(children, 327);
}
Node rewrite_327_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[327]++;
  return utils::mkSpecialBool(children, 327);
}
Node rewrite_327_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[327]++;
  return utils::mkSpecialBool(children, 327);
}
Node rewrite_328_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[328]++;
  return utils::mkSpecialBool(children, 328);
}
Node rewrite_328_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[328]++;
  return utils::mkSpecialBool(children, 328);
}
Node rewrite_328_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[328]++;
  return utils::mkSpecialBool(children, 328);
}
Node rewrite_328_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[328]++;
  return utils::mkSpecialBool(children, 328);
}
Node rewrite_328_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[328]++;
  return utils::mkSpecialBool(children, 328);
}
Node rewrite_328_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[328]++;
  return utils::mkSpecialBool(children, 328);
}
Node rewrite_328_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[328]++;
  return utils::mkSpecialBool(children, 328);
}
Node rewrite_328_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[328]++;
  return utils::mkSpecialBool(children, 328);
}
Node rewrite_181_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][2]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[181]++;
  return utils::mkSpecialBool(children, 181);
}
Node rewrite_181_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[181]++;
  return utils::mkSpecialBool(children, 181);
}
Node rewrite_181_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[181]++;
  return utils::mkSpecialBool(children, 181);
}
Node rewrite_181_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[181]++;
  return utils::mkSpecialBool(children, 181);
}
Node rewrite_181_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[181]++;
  return utils::mkSpecialBool(children, 181);
}
Node rewrite_181_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[181]++;
  return utils::mkSpecialBool(children, 181);
}
Node rewrite_181_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[181]++;
  return utils::mkSpecialBool(children, 181);
}
Node rewrite_181_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[181]++;
  return utils::mkSpecialBool(children, 181);
}
Node rewrite_181_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][2]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[181]++;
  return utils::mkSpecialBool(children, 181);
}
Node rewrite_181_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[181]++;
  return utils::mkSpecialBool(children, 181);
}
Node rewrite_181_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][2]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[181]++;
  return utils::mkSpecialBool(children, 181);
}
Node rewrite_181_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[181]++;
  return utils::mkSpecialBool(children, 181);
}
Node rewrite_181_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][2]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[181]++;
  return utils::mkSpecialBool(children, 181);
}
Node rewrite_181_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[181]++;
  return utils::mkSpecialBool(children, 181);
}
Node rewrite_181_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[181]++;
  return utils::mkSpecialBool(children, 181);
}
Node rewrite_181_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[181]++;
  return utils::mkSpecialBool(children, 181);
}
Node rewrite_181_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[181]++;
  return utils::mkSpecialBool(children, 181);
}
Node rewrite_181_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][2]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[181]++;
  return utils::mkSpecialBool(children, 181);
}
Node rewrite_181_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[181]++;
  return utils::mkSpecialBool(children, 181);
}
Node rewrite_181_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[181]++;
  return utils::mkSpecialBool(children, 181);
}
Node rewrite_181_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[181]++;
  return utils::mkSpecialBool(children, 181);
}
Node rewrite_181_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][2]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[181]++;
  return utils::mkSpecialBool(children, 181);
}
Node rewrite_181_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][2]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[181]++;
  return utils::mkSpecialBool(children, 181);
}
Node rewrite_181_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][2]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[181]++;
  return utils::mkSpecialBool(children, 181);
}
Node rewrite_257_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[257]++;
  return utils::mkSpecialBool(children, 257);
}
Node rewrite_257_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[257]++;
  return utils::mkSpecialBool(children, 257);
}
Node rewrite_257_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[257]++;
  return utils::mkSpecialBool(children, 257);
}
Node rewrite_257_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[257]++;
  return utils::mkSpecialBool(children, 257);
}
Node rewrite_296_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1][0]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[296]++;
  return utils::mkSpecialBool(children, 296);
}
Node rewrite_296_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[296]++;
  return utils::mkSpecialBool(children, 296);
}
Node rewrite_296_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[296]++;
  return utils::mkSpecialBool(children, 296);
}
Node rewrite_296_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1][0]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[296]++;
  return utils::mkSpecialBool(children, 296);
}
Node rewrite_120_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[120]++;
  return utils::mkSpecialBool(children, 120);
}
Node rewrite_120_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[120]++;
  return utils::mkSpecialBool(children, 120);
}
Node rewrite_120_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[120]++;
  return utils::mkSpecialBool(children, 120);
}
Node rewrite_120_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[120]++;
  return utils::mkSpecialBool(children, 120);
}
Node rewrite_120_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[120]++;
  return utils::mkSpecialBool(children, 120);
}
Node rewrite_120_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[120]++;
  return utils::mkSpecialBool(children, 120);
}
Node rewrite_120_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[120]++;
  return utils::mkSpecialBool(children, 120);
}
Node rewrite_120_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[120]++;
  return utils::mkSpecialBool(children, 120);
}
Node rewrite_149_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[149]++;
  return utils::mkSpecialBool(children, 149);
}
Node rewrite_149_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[149]++;
  return utils::mkSpecialBool(children, 149);
}
Node rewrite_149_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[149]++;
  return utils::mkSpecialBool(children, 149);
}
Node rewrite_149_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[149]++;
  return utils::mkSpecialBool(children, 149);
}
Node rewrite_149_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[149]++;
  return utils::mkSpecialBool(children, 149);
}
Node rewrite_149_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[149]++;
  return utils::mkSpecialBool(children, 149);
}
Node rewrite_149_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[149]++;
  return utils::mkSpecialBool(children, 149);
}
Node rewrite_149_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[149]++;
  return utils::mkSpecialBool(children, 149);
}
Node rewrite_149_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[149]++;
  return utils::mkSpecialBool(children, 149);
}
Node rewrite_149_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[149]++;
  return utils::mkSpecialBool(children, 149);
}
Node rewrite_149_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[149]++;
  return utils::mkSpecialBool(children, 149);
}
Node rewrite_149_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[149]++;
  return utils::mkSpecialBool(children, 149);
}
Node rewrite_175_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[175]++;
  return utils::mkSpecialBool(children, 175);
}
Node rewrite_175_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[175]++;
  return utils::mkSpecialBool(children, 175);
}
Node rewrite_175_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[175]++;
  return utils::mkSpecialBool(children, 175);
}
Node rewrite_175_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[175]++;
  return utils::mkSpecialBool(children, 175);
}
Node rewrite_175_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[175]++;
  return utils::mkSpecialBool(children, 175);
}
Node rewrite_175_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[175]++;
  return utils::mkSpecialBool(children, 175);
}
Node rewrite_175_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[175]++;
  return utils::mkSpecialBool(children, 175);
}
Node rewrite_175_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[175]++;
  return utils::mkSpecialBool(children, 175);
}
Node rewrite_175_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[175]++;
  return utils::mkSpecialBool(children, 175);
}
Node rewrite_175_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[175]++;
  return utils::mkSpecialBool(children, 175);
}
Node rewrite_175_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[175]++;
  return utils::mkSpecialBool(children, 175);
}
Node rewrite_175_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[175]++;
  return utils::mkSpecialBool(children, 175);
}
Node rewrite_225_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[225]++;
  return utils::mkSpecialBool(children, 225);
}
Node rewrite_225_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[225]++;
  return utils::mkSpecialBool(children, 225);
}
Node rewrite_225_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[225]++;
  return utils::mkSpecialBool(children, 225);
}
Node rewrite_225_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[225]++;
  return utils::mkSpecialBool(children, 225);
}
Node rewrite_225_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[225]++;
  return utils::mkSpecialBool(children, 225);
}
Node rewrite_225_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[225]++;
  return utils::mkSpecialBool(children, 225);
}
Node rewrite_225_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[225]++;
  return utils::mkSpecialBool(children, 225);
}
Node rewrite_225_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[225]++;
  return utils::mkSpecialBool(children, 225);
}
Node rewrite_225_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[225]++;
  return utils::mkSpecialBool(children, 225);
}
Node rewrite_225_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[225]++;
  return utils::mkSpecialBool(children, 225);
}
Node rewrite_225_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[225]++;
  return utils::mkSpecialBool(children, 225);
}
Node rewrite_225_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[225]++;
  return utils::mkSpecialBool(children, 225);
}
Node rewrite_236_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[236]++;
  return utils::mkSpecialBool(children, 236);
}
Node rewrite_236_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[236]++;
  return utils::mkSpecialBool(children, 236);
}
Node rewrite_236_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[236]++;
  return utils::mkSpecialBool(children, 236);
}
Node rewrite_236_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[236]++;
  return utils::mkSpecialBool(children, 236);
}
Node rewrite_236_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[236]++;
  return utils::mkSpecialBool(children, 236);
}
Node rewrite_236_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[236]++;
  return utils::mkSpecialBool(children, 236);
}
Node rewrite_236_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[236]++;
  return utils::mkSpecialBool(children, 236);
}
Node rewrite_236_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[236]++;
  return utils::mkSpecialBool(children, 236);
}
Node rewrite_44_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[44]++;
  return utils::mkSpecialBool(children, 44);
}
Node rewrite_44_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[44]++;
  return utils::mkSpecialBool(children, 44);
}
Node rewrite_44_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[44]++;
  return utils::mkSpecialBool(children, 44);
}
Node rewrite_44_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[44]++;
  return utils::mkSpecialBool(children, 44);
}
Node rewrite_44_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[44]++;
  return utils::mkSpecialBool(children, 44);
}
Node rewrite_44_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[44]++;
  return utils::mkSpecialBool(children, 44);
}
Node rewrite_125_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[125]++;
  return utils::mkSpecialBool(children, 125);
}
Node rewrite_125_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[125]++;
  return utils::mkSpecialBool(children, 125);
}
Node rewrite_125_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[125]++;
  return utils::mkSpecialBool(children, 125);
}
Node rewrite_125_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[125]++;
  return utils::mkSpecialBool(children, 125);
}
Node rewrite_134_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[134]++;
  return utils::mkSpecialBool(children, 134);
}
Node rewrite_134_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[134]++;
  return utils::mkSpecialBool(children, 134);
}
Node rewrite_134_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[134]++;
  return utils::mkSpecialBool(children, 134);
}
Node rewrite_134_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[134]++;
  return utils::mkSpecialBool(children, 134);
}
Node rewrite_343_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[343]++;
  return utils::mkSpecialBool(children, 343);
}
Node rewrite_343_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[343]++;
  return utils::mkSpecialBool(children, 343);
}
Node rewrite_343_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[343]++;
  return utils::mkSpecialBool(children, 343);
}
Node rewrite_343_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[343]++;
  return utils::mkSpecialBool(children, 343);
}
Node rewrite_30_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[30]++;
  return utils::mkSpecialBool(children, 30);
}
Node rewrite_30_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[30]++;
  return utils::mkSpecialBool(children, 30);
}
Node rewrite_150_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[150]++;
  return utils::mkSpecialBool(children, 150);
}
Node rewrite_150_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[150]++;
  return utils::mkSpecialBool(children, 150);
}
Node rewrite_150_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[150]++;
  return utils::mkSpecialBool(children, 150);
}
Node rewrite_150_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[150]++;
  return utils::mkSpecialBool(children, 150);
}
Node rewrite_150_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[150]++;
  return utils::mkSpecialBool(children, 150);
}
Node rewrite_150_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[150]++;
  return utils::mkSpecialBool(children, 150);
}
Node rewrite_150_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[150]++;
  return utils::mkSpecialBool(children, 150);
}
Node rewrite_150_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[150]++;
  return utils::mkSpecialBool(children, 150);
}
Node rewrite_150_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[150]++;
  return utils::mkSpecialBool(children, 150);
}
Node rewrite_150_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[150]++;
  return utils::mkSpecialBool(children, 150);
}
Node rewrite_150_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[150]++;
  return utils::mkSpecialBool(children, 150);
}
Node rewrite_150_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[150]++;
  return utils::mkSpecialBool(children, 150);
}
Node rewrite_363_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[363]++;
  return utils::mkSpecialBool(children, 363);
}
Node rewrite_363_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[363]++;
  return utils::mkSpecialBool(children, 363);
}
Node rewrite_363_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[363]++;
  return utils::mkSpecialBool(children, 363);
}
Node rewrite_363_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[363]++;
  return utils::mkSpecialBool(children, 363);
}
Node rewrite_363_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[363]++;
  return utils::mkSpecialBool(children, 363);
}
Node rewrite_363_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[363]++;
  return utils::mkSpecialBool(children, 363);
}
Node rewrite_363_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[363]++;
  return utils::mkSpecialBool(children, 363);
}
Node rewrite_363_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[363]++;
  return utils::mkSpecialBool(children, 363);
}
Node rewrite_363_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[363]++;
  return utils::mkSpecialBool(children, 363);
}
Node rewrite_363_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[363]++;
  return utils::mkSpecialBool(children, 363);
}
Node rewrite_363_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[363]++;
  return utils::mkSpecialBool(children, 363);
}
Node rewrite_363_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[363]++;
  return utils::mkSpecialBool(children, 363);
}
Node rewrite_39_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[39]++;
  return utils::mkSpecialBool(children, 39);
}
Node rewrite_39_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[39]++;
  return utils::mkSpecialBool(children, 39);
}
Node rewrite_39_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[39]++;
  return utils::mkSpecialBool(children, 39);
}
Node rewrite_39_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[39]++;
  return utils::mkSpecialBool(children, 39);
}
Node rewrite_39_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[39]++;
  return utils::mkSpecialBool(children, 39);
}
Node rewrite_39_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[39]++;
  return utils::mkSpecialBool(children, 39);
}
Node rewrite_118_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[118]++;
  return utils::mkSpecialBool(children, 118);
}
Node rewrite_118_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[118]++;
  return utils::mkSpecialBool(children, 118);
}
Node rewrite_118_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[118]++;
  return utils::mkSpecialBool(children, 118);
}
Node rewrite_118_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[118]++;
  return utils::mkSpecialBool(children, 118);
}
Node rewrite_164_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[164]++;
  return utils::mkSpecialBool(children, 164);
}
Node rewrite_164_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[164]++;
  return utils::mkSpecialBool(children, 164);
}
Node rewrite_164_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[164]++;
  return utils::mkSpecialBool(children, 164);
}
Node rewrite_164_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[164]++;
  return utils::mkSpecialBool(children, 164);
}
Node rewrite_360_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[360]++;
  return utils::mkSpecialBool(children, 360);
}
Node rewrite_360_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[360]++;
  return utils::mkSpecialBool(children, 360);
}
Node rewrite_360_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[360]++;
  return utils::mkSpecialBool(children, 360);
}
Node rewrite_360_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[360]++;
  return utils::mkSpecialBool(children, 360);
}
Node rewrite_29_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[29]++;
  return utils::mkSpecialBool(children, 29);
}
Node rewrite_29_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[29]++;
  return utils::mkSpecialBool(children, 29);
}
Node rewrite_151_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[151]++;
  return utils::mkSpecialBool(children, 151);
}
Node rewrite_151_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[151]++;
  return utils::mkSpecialBool(children, 151);
}
Node rewrite_42_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[42]++;
  return utils::mkSpecialBool(children, 42);
}
Node rewrite_42_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[42]++;
  return utils::mkSpecialBool(children, 42);
}
Node rewrite_42_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[42]++;
  return utils::mkSpecialBool(children, 42);
}
Node rewrite_42_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[42]++;
  return utils::mkSpecialBool(children, 42);
}
Node rewrite_42_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[42]++;
  return utils::mkSpecialBool(children, 42);
}
Node rewrite_42_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[42]++;
  return utils::mkSpecialBool(children, 42);
}
Node rewrite_163_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[163]++;
  return utils::mkSpecialBool(children, 163);
}
Node rewrite_163_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[163]++;
  return utils::mkSpecialBool(children, 163);
}
Node rewrite_163_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[163]++;
  return utils::mkSpecialBool(children, 163);
}
Node rewrite_163_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[163]++;
  return utils::mkSpecialBool(children, 163);
}
Node rewrite_163_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[163]++;
  return utils::mkSpecialBool(children, 163);
}
Node rewrite_163_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[163]++;
  return utils::mkSpecialBool(children, 163);
}
Node rewrite_38_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[38]++;
  return utils::mkSpecialBool(children, 38);
}
Node rewrite_38_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[38]++;
  return utils::mkSpecialBool(children, 38);
}
Node rewrite_103_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[103]++;
  return utils::mkSpecialBool(children, 103);
}
Node rewrite_103_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[103]++;
  return utils::mkSpecialBool(children, 103);
}
Node rewrite_361_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[361]++;
  return utils::mkSpecialBool(children, 361);
}
Node rewrite_361_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[361]++;
  return utils::mkSpecialBool(children, 361);
}
Node rewrite_365_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[365]++;
  return utils::mkSpecialBool(children, 365);
}
Node rewrite_365(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[32] && predicates[30] && true && predicates[24] && true && predicates[21] && true && true && true && true) {
    return rewrite_330_0(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && true && predicates[27] && true && predicates[2] && true && true && true) {
    return rewrite_330_1(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && true && predicates[0] && true && true && true && true && true) {
    return rewrite_330_2(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[28] && true && true && predicates[12] && true && true && true) {
    return rewrite_330_3(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && true && true && predicates[38] && true && true && true && true) {
    return rewrite_330_4(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && true && predicates[27] && true && true && predicates[9] && true && true) {
    return rewrite_330_5(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && predicates[24] && predicates[31] && true && true && true && true && true) {
    return rewrite_330_6(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[28] && predicates[35] && true && true && true && true && true) {
    return rewrite_330_7(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[28] && true && predicates[34] && true && true && true && true) {
    return rewrite_330_8(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[28] && true && predicates[34] && true && true && true && true) {
    return rewrite_330_9(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[28] && true && true && predicates[12] && true && true && true) {
    return rewrite_330_10(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && true && true && predicates[38] && true && true && true && true) {
    return rewrite_330_11(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && predicates[24] && true && true && predicates[40] && true && true && true) {
    return rewrite_330_12(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && true && predicates[27] && predicates[8] && true && true && true && true) {
    return rewrite_330_13(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && true && predicates[0] && true && true && true && true && true) {
    return rewrite_330_14(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && predicates[39] && true && true && true && true && true && true) {
    return rewrite_330_15(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && predicates[39] && true && true && true && true && true && true) {
    return rewrite_330_16(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[28] && predicates[35] && true && true && true && true && true) {
    return rewrite_330_17(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && predicates[24] && predicates[31] && true && true && true && true && true) {
    return rewrite_330_18(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[28] && true && predicates[34] && true && true && true && true) {
    return rewrite_330_19(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[28] && true && predicates[34] && true && true && true && true) {
    return rewrite_330_20(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && true && predicates[27] && predicates[8] && true && true && true && true) {
    return rewrite_330_21(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && true && predicates[27] && predicates[8] && true && true && true && true) {
    return rewrite_330_22(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[28] && predicates[35] && true && true && true && true && true) {
    return rewrite_330_23(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && true && predicates[27] && true && predicates[2] && true && true && true) {
    return rewrite_330_24(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && predicates[24] && true && predicates[21] && true && true && true && true) {
    return rewrite_330_25(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && true && predicates[27] && predicates[8] && true && true && true && true) {
    return rewrite_330_26(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && true && predicates[0] && true && true && true && true && true) {
    return rewrite_330_27(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && predicates[24] && predicates[31] && true && true && true && true && true) {
    return rewrite_330_28(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[28] && predicates[35] && true && true && true && true && true) {
    return rewrite_330_29(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && predicates[24] && predicates[31] && true && true && true && true && true) {
    return rewrite_330_30(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && true && predicates[27] && true && true && predicates[9] && true && true) {
    return rewrite_330_31(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && predicates[39] && true && true && true && true && true && true) {
    return rewrite_330_32(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && true && predicates[27] && true && true && predicates[9] && true && true) {
    return rewrite_330_33(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && predicates[39] && true && true && true && true && true && true) {
    return rewrite_330_34(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && predicates[24] && true && predicates[21] && true && true && true && true) {
    return rewrite_330_35(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && true && true && predicates[38] && true && true && true && true) {
    return rewrite_330_36(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[28] && true && true && predicates[12] && true && true && true) {
    return rewrite_330_37(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && true && predicates[27] && true && true && predicates[9] && true && true) {
    return rewrite_330_38(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[28] && true && true && predicates[12] && true && true && true) {
    return rewrite_330_39(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && true && predicates[0] && true && true && true && true && true) {
    return rewrite_330_40(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && true && true && predicates[38] && true && true && true && true) {
    return rewrite_330_41(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && true && predicates[27] && true && predicates[2] && true && true && true) {
    return rewrite_330_42(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && predicates[24] && true && true && predicates[40] && true && true && true) {
    return rewrite_330_43(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && true && predicates[27] && true && predicates[2] && true && true && true) {
    return rewrite_330_44(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && predicates[24] && true && true && predicates[40] && true && true && true) {
    return rewrite_330_45(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && predicates[24] && true && true && predicates[40] && true && true && true) {
    return rewrite_330_46(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && predicates[24] && true && predicates[21] && true && true && true && true) {
    return rewrite_330_47(node);
  }
  else {
    return node;
  }
}
Node rewrite_330(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[32] && predicates[30] && true && predicates[24] && true && true && true && predicates[42] && true) {
    return rewrite_233_0(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && true && true && true && true && predicates[42] && true) {
    return rewrite_233_1(node);
  }
  else if (predicates[14] && predicates[32] && predicates[43] && true && predicates[3] && predicates[28] && true && true && true && true) {
    return rewrite_233_2(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && true && true && true && true && predicates[42] && true) {
    return rewrite_233_3(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && predicates[24] && true && true && true && predicates[42] && true) {
    return rewrite_233_4(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && predicates[24] && true && true && true && predicates[42] && true) {
    return rewrite_233_5(node);
  }
  else if (predicates[14] && predicates[32] && predicates[43] && true && predicates[3] && true && predicates[27] && true && true && true) {
    return rewrite_233_6(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && predicates[24] && true && true && true && predicates[42] && true) {
    return rewrite_233_7(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && true && true && true && true && predicates[42] && true) {
    return rewrite_233_8(node);
  }
  else if (predicates[14] && predicates[32] && predicates[43] && true && predicates[3] && predicates[28] && true && true && true && true) {
    return rewrite_233_9(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && predicates[24] && true && true && true && predicates[42] && true) {
    return rewrite_233_10(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && true && true && true && true && predicates[42] && true) {
    return rewrite_233_11(node);
  }
  else if (predicates[14] && predicates[32] && predicates[43] && true && predicates[3] && predicates[28] && true && true && true && true) {
    return rewrite_233_12(node);
  }
  else if (predicates[14] && predicates[32] && predicates[43] && true && predicates[3] && true && predicates[27] && true && true && true) {
    return rewrite_233_13(node);
  }
  else if (predicates[14] && predicates[32] && predicates[43] && true && predicates[3] && true && predicates[27] && true && true && true) {
    return rewrite_233_14(node);
  }
  else if (predicates[14] && predicates[32] && predicates[43] && true && predicates[3] && true && predicates[27] && true && true && true) {
    return rewrite_233_15(node);
  }
  else if (predicates[14] && predicates[32] && predicates[43] && true && predicates[3] && true && predicates[27] && true && true && true) {
    return rewrite_233_16(node);
  }
  else if (predicates[14] && predicates[32] && predicates[43] && true && predicates[3] && predicates[28] && true && true && true && true) {
    return rewrite_233_17(node);
  }
  else if (predicates[14] && predicates[32] && predicates[43] && true && predicates[3] && true && predicates[27] && true && true && true) {
    return rewrite_233_18(node);
  }
  else if (predicates[14] && predicates[32] && predicates[43] && true && predicates[3] && predicates[28] && true && true && true && true) {
    return rewrite_233_19(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && true && true && true && true && predicates[42] && true) {
    return rewrite_233_20(node);
  }
  else if (predicates[14] && predicates[32] && predicates[43] && true && predicates[3] && predicates[28] && true && true && true && true) {
    return rewrite_233_21(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && true && true && true && true && predicates[42] && true) {
    return rewrite_233_22(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && predicates[24] && true && true && true && predicates[42] && true) {
    return rewrite_233_23(node);
  }
  else {
    return node;
  }
}
Node rewrite_233(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[32] && true && predicates[3] && predicates[28] && true && true && true && predicates[36] && true) {
    return rewrite_247_0(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[28] && true && true && true && predicates[36] && true) {
    return rewrite_247_1(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[28] && true && true && true && predicates[36] && true) {
    return rewrite_247_2(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && true && true && true && predicates[37] && true && true) {
    return rewrite_247_3(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[28] && true && true && true && predicates[36] && true) {
    return rewrite_247_4(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && true && true && true && predicates[37] && true && true) {
    return rewrite_247_5(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[6] && true && predicates[24] && true && true && true && true) {
    return rewrite_247_6(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[6] && true && predicates[24] && true && true && true && true) {
    return rewrite_247_7(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[1] && true && predicates[27] && true && true && true) {
    return rewrite_247_8(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[1] && true && predicates[27] && true && true && true) {
    return rewrite_247_9(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && true && true && true && predicates[37] && true && true) {
    return rewrite_247_10(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && true && true && true && predicates[37] && true && true) {
    return rewrite_247_11(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && true && true && true && predicates[37] && true && true) {
    return rewrite_247_12(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[1] && true && predicates[27] && true && true && true) {
    return rewrite_247_13(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[1] && true && predicates[27] && true && true && true) {
    return rewrite_247_14(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[1] && true && predicates[27] && true && true && true) {
    return rewrite_247_15(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[28] && true && true && true && predicates[36] && true) {
    return rewrite_247_16(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[6] && true && predicates[24] && true && true && true && true) {
    return rewrite_247_17(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[6] && true && predicates[24] && true && true && true && true) {
    return rewrite_247_18(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[28] && true && true && true && predicates[36] && true) {
    return rewrite_247_19(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[6] && true && predicates[24] && true && true && true && true) {
    return rewrite_247_20(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[1] && true && predicates[27] && true && true && true) {
    return rewrite_247_21(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && true && true && true && predicates[37] && true && true) {
    return rewrite_247_22(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[6] && true && predicates[24] && true && true && true && true) {
    return rewrite_247_23(node);
  }
  else {
    return node;
  }
}
Node rewrite_247(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[23] && predicates[44] && predicates[6] && true && true && true && predicates[33] && true && true) {
    return rewrite_345_0(node);
  }
  else if (predicates[14] && predicates[23] && true && predicates[19] && true && predicates[36] && true && predicates[33] && true && true) {
    return rewrite_345_1(node);
  }
  else if (predicates[14] && predicates[23] && predicates[44] && predicates[6] && true && true && true && predicates[33] && true && true) {
    return rewrite_345_2(node);
  }
  else if (predicates[14] && predicates[23] && predicates[44] && predicates[6] && true && true && predicates[19] && true && true && true) {
    return rewrite_345_3(node);
  }
  else if (predicates[14] && predicates[23] && predicates[44] && true && true && true && predicates[33] && true && predicates[10] && true) {
    return rewrite_345_4(node);
  }
  else if (predicates[14] && predicates[23] && predicates[44] && true && true && predicates[19] && true && predicates[36] && true && true) {
    return rewrite_345_5(node);
  }
  else if (predicates[14] && predicates[23] && predicates[44] && predicates[6] && true && true && predicates[19] && true && true && true) {
    return rewrite_345_6(node);
  }
  else if (predicates[14] && predicates[23] && true && predicates[19] && true && true && predicates[33] && predicates[13] && true && true) {
    return rewrite_345_7(node);
  }
  else if (predicates[14] && predicates[23] && predicates[44] && true && true && true && predicates[33] && predicates[13] && true && true) {
    return rewrite_345_8(node);
  }
  else if (predicates[14] && predicates[23] && true && predicates[19] && true && true && predicates[33] && true && predicates[10] && true) {
    return rewrite_345_9(node);
  }
  else if (predicates[14] && predicates[23] && predicates[44] && true && true && true && predicates[33] && true && predicates[10] && true) {
    return rewrite_345_10(node);
  }
  else if (predicates[14] && predicates[23] && predicates[44] && true && predicates[37] && true && true && predicates[33] && true && true) {
    return rewrite_345_11(node);
  }
  else if (predicates[14] && predicates[23] && true && predicates[19] && true && true && predicates[33] && true && predicates[10] && true) {
    return rewrite_345_12(node);
  }
  else if (predicates[14] && predicates[23] && true && predicates[19] && true && true && predicates[33] && predicates[13] && true && true) {
    return rewrite_345_13(node);
  }
  else if (predicates[14] && predicates[23] && true && predicates[19] && predicates[1] && true && true && predicates[33] && true && true) {
    return rewrite_345_14(node);
  }
  else if (predicates[14] && predicates[23] && predicates[44] && true && true && predicates[19] && predicates[1] && true && true && true) {
    return rewrite_345_15(node);
  }
  else if (predicates[14] && predicates[23] && predicates[44] && true && true && true && predicates[33] && predicates[13] && true && true) {
    return rewrite_345_16(node);
  }
  else if (predicates[14] && predicates[23] && true && predicates[19] && true && predicates[36] && true && predicates[33] && true && true) {
    return rewrite_345_17(node);
  }
  else if (predicates[14] && predicates[23] && predicates[44] && true && true && predicates[19] && true && predicates[36] && true && true) {
    return rewrite_345_18(node);
  }
  else if (predicates[14] && predicates[23] && predicates[44] && true && predicates[37] && true && true && predicates[33] && true && true) {
    return rewrite_345_19(node);
  }
  else if (predicates[14] && predicates[23] && predicates[44] && true && true && predicates[19] && predicates[1] && true && true && true) {
    return rewrite_345_20(node);
  }
  else if (predicates[14] && predicates[23] && predicates[44] && true && predicates[37] && true && predicates[19] && true && true && true) {
    return rewrite_345_21(node);
  }
  else if (predicates[14] && predicates[23] && true && predicates[19] && predicates[1] && true && true && predicates[33] && true && true) {
    return rewrite_345_22(node);
  }
  else if (predicates[14] && predicates[23] && predicates[44] && true && predicates[37] && true && predicates[19] && true && true && true) {
    return rewrite_345_23(node);
  }
  else {
    return node;
  }
}
Node rewrite_345(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[32] && predicates[30] && true && true && predicates[3] && true && predicates[36] && true) {
    return rewrite_268_0(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && predicates[37] && true && predicates[3] && true && true) {
    return rewrite_268_1(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[6] && true && true && predicates[3] && true && true) {
    return rewrite_268_2(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && true && predicates[3] && predicates[1] && true && true) {
    return rewrite_268_3(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && true && predicates[3] && predicates[1] && true && true) {
    return rewrite_268_4(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && predicates[37] && true && predicates[3] && true && true) {
    return rewrite_268_5(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && true && predicates[3] && true && predicates[36] && true) {
    return rewrite_268_6(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[6] && true && true && predicates[3] && true && true) {
    return rewrite_268_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_268(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[32] && predicates[7] && true && predicates[37] && true && true && predicates[42] && true) {
    return rewrite_327_0(node);
  }
  else if (predicates[14] && predicates[32] && predicates[43] && true && predicates[5] && true && true && predicates[4] && true) {
    return rewrite_327_1(node);
  }
  else if (predicates[14] && predicates[32] && predicates[43] && true && predicates[5] && true && predicates[36] && true && true) {
    return rewrite_327_2(node);
  }
  else if (predicates[14] && predicates[32] && predicates[7] && true && true && predicates[41] && true && predicates[42] && true) {
    return rewrite_327_3(node);
  }
  else if (predicates[14] && predicates[32] && predicates[43] && true && predicates[5] && true && true && predicates[4] && true) {
    return rewrite_327_4(node);
  }
  else if (predicates[14] && predicates[32] && predicates[7] && true && predicates[37] && true && true && predicates[42] && true) {
    return rewrite_327_5(node);
  }
  else if (predicates[14] && predicates[32] && predicates[43] && true && predicates[5] && true && predicates[36] && true && true) {
    return rewrite_327_6(node);
  }
  else if (predicates[14] && predicates[32] && predicates[7] && predicates[6] && true && true && true && predicates[42] && true) {
    return rewrite_327_7(node);
  }
  else if (predicates[14] && predicates[32] && predicates[43] && true && predicates[5] && predicates[1] && true && true && true) {
    return rewrite_327_8(node);
  }
  else if (predicates[14] && predicates[32] && predicates[7] && true && true && predicates[41] && true && predicates[42] && true) {
    return rewrite_327_9(node);
  }
  else if (predicates[14] && predicates[32] && predicates[43] && true && predicates[5] && predicates[1] && true && true && true) {
    return rewrite_327_10(node);
  }
  else if (predicates[14] && predicates[32] && predicates[7] && predicates[6] && true && true && true && predicates[42] && true) {
    return rewrite_327_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_327(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[16] && predicates[30] && true && predicates[37] && true && predicates[3] && true && true) {
    return rewrite_328_0(node);
  }
  else if (predicates[14] && predicates[16] && predicates[30] && true && true && predicates[3] && true && predicates[36] && true) {
    return rewrite_328_1(node);
  }
  else if (predicates[14] && predicates[16] && predicates[30] && predicates[6] && true && true && predicates[3] && true && true) {
    return rewrite_328_2(node);
  }
  else if (predicates[14] && predicates[16] && predicates[30] && predicates[6] && true && true && predicates[3] && true && true) {
    return rewrite_328_3(node);
  }
  else if (predicates[14] && predicates[16] && predicates[30] && true && true && predicates[3] && true && predicates[36] && true) {
    return rewrite_328_4(node);
  }
  else if (predicates[14] && predicates[16] && predicates[30] && true && true && predicates[3] && predicates[1] && true && true) {
    return rewrite_328_5(node);
  }
  else if (predicates[14] && predicates[16] && predicates[30] && true && predicates[37] && true && predicates[3] && true && true) {
    return rewrite_328_6(node);
  }
  else if (predicates[14] && predicates[16] && predicates[30] && true && true && predicates[3] && predicates[1] && true && true) {
    return rewrite_328_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_328(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[32] && predicates[30] && true && predicates[24] && true && true && true && true) {
    return rewrite_181_0(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && true && true && true && true && true) {
    return rewrite_181_1(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[28] && true && true && true && true) {
    return rewrite_181_2(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && true && predicates[27] && true && true && true) {
    return rewrite_181_3(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && true && true && true && true && true) {
    return rewrite_181_4(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[28] && true && true && true && true) {
    return rewrite_181_5(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && true && true && true && true && true) {
    return rewrite_181_6(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && true && predicates[27] && true && true && true) {
    return rewrite_181_7(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && true && predicates[27] && true && true && true) {
    return rewrite_181_8(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[28] && true && true && true && true) {
    return rewrite_181_9(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && predicates[24] && true && true && true && true) {
    return rewrite_181_10(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[28] && true && true && true && true) {
    return rewrite_181_11(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && predicates[24] && true && true && true && true) {
    return rewrite_181_12(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[28] && true && true && true && true) {
    return rewrite_181_13(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && true && true && true && true && true) {
    return rewrite_181_14(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && true && true && true && true && true) {
    return rewrite_181_15(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && predicates[24] && true && true && true && true) {
    return rewrite_181_16(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && true && predicates[27] && true && true && true) {
    return rewrite_181_17(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && predicates[24] && true && true && true && true) {
    return rewrite_181_18(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[20] && true && true && true && true && true) {
    return rewrite_181_19(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[28] && true && true && true && true) {
    return rewrite_181_20(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && true && predicates[27] && true && true && true) {
    return rewrite_181_21(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && predicates[24] && true && true && true && true) {
    return rewrite_181_22(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && true && predicates[27] && true && true && true) {
    return rewrite_181_23(node);
  }
  else {
    return node;
  }
}
Node rewrite_181(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[32] && predicates[43] && true && predicates[3] && true && predicates[36] && true) {
    return rewrite_257_0(node);
  }
  else if (predicates[14] && predicates[32] && predicates[43] && true && predicates[3] && predicates[1] && true && true) {
    return rewrite_257_1(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && predicates[6] && true && true && predicates[42] && true) {
    return rewrite_257_2(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && predicates[37] && true && predicates[42] && true) {
    return rewrite_257_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_257(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[18] && predicates[43] && predicates[15] && true && predicates[26] && true && true) {
    return rewrite_296_0(node);
  }
  else if (predicates[14] && predicates[18] && predicates[43] && predicates[15] && predicates[11] && true && true && true) {
    return rewrite_296_1(node);
  }
  else if (predicates[14] && predicates[18] && true && predicates[42] && predicates[25] && predicates[46] && true && true) {
    return rewrite_296_2(node);
  }
  else if (predicates[14] && predicates[18] && true && predicates[42] && predicates[25] && true && predicates[22] && true) {
    return rewrite_296_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_296(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[32] && predicates[30] && true && true && predicates[3] && true && true) {
    return rewrite_120_0(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && true && predicates[3] && true && true) {
    return rewrite_120_1(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && true && predicates[3] && true && true) {
    return rewrite_120_2(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && true && predicates[3] && true && true) {
    return rewrite_120_3(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && true && predicates[3] && true && true) {
    return rewrite_120_4(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && true && predicates[3] && true && true) {
    return rewrite_120_5(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && true && predicates[3] && true && true) {
    return rewrite_120_6(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && true && predicates[3] && true && true) {
    return rewrite_120_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_120(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[32] && predicates[43] && true && predicates[5] && true && true && true) {
    return rewrite_149_0(node);
  }
  else if (predicates[14] && predicates[32] && predicates[43] && true && predicates[5] && true && true && true) {
    return rewrite_149_1(node);
  }
  else if (predicates[14] && predicates[32] && predicates[43] && true && predicates[5] && true && true && true) {
    return rewrite_149_2(node);
  }
  else if (predicates[14] && predicates[32] && predicates[7] && true && true && true && predicates[42] && true) {
    return rewrite_149_3(node);
  }
  else if (predicates[14] && predicates[32] && predicates[43] && true && predicates[5] && true && true && true) {
    return rewrite_149_4(node);
  }
  else if (predicates[14] && predicates[32] && predicates[7] && true && true && true && predicates[42] && true) {
    return rewrite_149_5(node);
  }
  else if (predicates[14] && predicates[32] && predicates[7] && true && true && true && predicates[42] && true) {
    return rewrite_149_6(node);
  }
  else if (predicates[14] && predicates[32] && predicates[7] && true && true && true && predicates[42] && true) {
    return rewrite_149_7(node);
  }
  else if (predicates[14] && predicates[32] && predicates[7] && true && true && true && predicates[42] && true) {
    return rewrite_149_8(node);
  }
  else if (predicates[14] && predicates[32] && predicates[43] && true && predicates[5] && true && true && true) {
    return rewrite_149_9(node);
  }
  else if (predicates[14] && predicates[32] && predicates[7] && true && true && true && predicates[42] && true) {
    return rewrite_149_10(node);
  }
  else if (predicates[14] && predicates[32] && predicates[43] && true && predicates[5] && true && true && true) {
    return rewrite_149_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_149(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[16] && true && predicates[5] && true && predicates[36] && true && true) {
    return rewrite_175_0(node);
  }
  else if (predicates[14] && predicates[16] && predicates[7] && true && true && predicates[41] && true && true) {
    return rewrite_175_1(node);
  }
  else if (predicates[14] && predicates[16] && predicates[7] && true && true && predicates[41] && true && true) {
    return rewrite_175_2(node);
  }
  else if (predicates[14] && predicates[16] && true && predicates[5] && true && true && predicates[4] && true) {
    return rewrite_175_3(node);
  }
  else if (predicates[14] && predicates[16] && true && predicates[5] && true && predicates[36] && true && true) {
    return rewrite_175_4(node);
  }
  else if (predicates[14] && predicates[16] && true && predicates[5] && true && true && predicates[4] && true) {
    return rewrite_175_5(node);
  }
  else if (predicates[14] && predicates[16] && predicates[7] && true && predicates[37] && true && true && true) {
    return rewrite_175_6(node);
  }
  else if (predicates[14] && predicates[16] && predicates[7] && true && predicates[37] && true && true && true) {
    return rewrite_175_7(node);
  }
  else if (predicates[14] && predicates[16] && true && predicates[5] && predicates[1] && true && true && true) {
    return rewrite_175_8(node);
  }
  else if (predicates[14] && predicates[16] && predicates[7] && predicates[6] && true && true && true && true) {
    return rewrite_175_9(node);
  }
  else if (predicates[14] && predicates[16] && true && predicates[5] && predicates[1] && true && true && true) {
    return rewrite_175_10(node);
  }
  else if (predicates[14] && predicates[16] && predicates[7] && predicates[6] && true && true && true && true) {
    return rewrite_175_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_175(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[32] && true && predicates[5] && predicates[1] && true && true && true) {
    return rewrite_225_0(node);
  }
  else if (predicates[14] && predicates[32] && predicates[7] && true && predicates[37] && true && true && true) {
    return rewrite_225_1(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[5] && true && predicates[36] && true && true) {
    return rewrite_225_2(node);
  }
  else if (predicates[14] && predicates[32] && predicates[7] && true && true && predicates[41] && true && true) {
    return rewrite_225_3(node);
  }
  else if (predicates[14] && predicates[32] && predicates[7] && predicates[6] && true && true && true && true) {
    return rewrite_225_4(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[5] && true && true && predicates[4] && true) {
    return rewrite_225_5(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[5] && predicates[1] && true && true && true) {
    return rewrite_225_6(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[5] && true && true && predicates[4] && true) {
    return rewrite_225_7(node);
  }
  else if (predicates[14] && predicates[32] && predicates[7] && true && true && predicates[41] && true && true) {
    return rewrite_225_8(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[5] && true && predicates[36] && true && true) {
    return rewrite_225_9(node);
  }
  else if (predicates[14] && predicates[32] && predicates[7] && true && predicates[37] && true && true && true) {
    return rewrite_225_10(node);
  }
  else if (predicates[14] && predicates[32] && predicates[7] && predicates[6] && true && true && true && true) {
    return rewrite_225_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_225(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[18] && predicates[44] && true && true && predicates[19] && true && true) {
    return rewrite_236_0(node);
  }
  else if (predicates[14] && predicates[18] && predicates[44] && true && true && predicates[19] && true && true) {
    return rewrite_236_1(node);
  }
  else if (predicates[14] && predicates[18] && predicates[44] && true && true && predicates[19] && true && true) {
    return rewrite_236_2(node);
  }
  else if (predicates[14] && predicates[18] && predicates[44] && true && true && predicates[19] && true && true) {
    return rewrite_236_3(node);
  }
  else if (predicates[14] && predicates[18] && predicates[44] && true && true && predicates[19] && true && true) {
    return rewrite_236_4(node);
  }
  else if (predicates[14] && predicates[18] && predicates[44] && true && true && predicates[19] && true && true) {
    return rewrite_236_5(node);
  }
  else if (predicates[14] && predicates[18] && predicates[44] && true && true && predicates[19] && true && true) {
    return rewrite_236_6(node);
  }
  else if (predicates[14] && predicates[18] && predicates[44] && true && true && predicates[19] && true && true) {
    return rewrite_236_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_236(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[23] && predicates[43] && true && true && predicates[45] && true) {
    return rewrite_44_0(node);
  }
  else if (predicates[14] && predicates[23] && true && predicates[42] && true && predicates[45] && true) {
    return rewrite_44_1(node);
  }
  else if (predicates[14] && predicates[23] && predicates[43] && true && predicates[42] && true && true) {
    return rewrite_44_2(node);
  }
  else if (predicates[14] && predicates[23] && predicates[43] && true && true && predicates[45] && true) {
    return rewrite_44_3(node);
  }
  else if (predicates[14] && predicates[23] && true && predicates[42] && true && predicates[45] && true) {
    return rewrite_44_4(node);
  }
  else if (predicates[14] && predicates[23] && predicates[43] && true && predicates[42] && true && true) {
    return rewrite_44_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_44(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[32] && predicates[30] && predicates[6] && true && true && true) {
    return rewrite_125_0(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && predicates[37] && true && true) {
    return rewrite_125_1(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && predicates[1] && true && true) {
    return rewrite_125_2(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && true && predicates[36] && true) {
    return rewrite_125_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_125(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[32] && predicates[43] && true && predicates[3] && true && true) {
    return rewrite_134_0(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && true && predicates[42] && true) {
    return rewrite_134_1(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && true && predicates[42] && true) {
    return rewrite_134_2(node);
  }
  else if (predicates[14] && predicates[32] && predicates[43] && true && predicates[3] && true && true) {
    return rewrite_134_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_134(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[16] && true && predicates[3] && true && predicates[36] && true) {
    return rewrite_343_0(node);
  }
  else if (predicates[14] && predicates[16] && true && predicates[3] && predicates[1] && true && true) {
    return rewrite_343_1(node);
  }
  else if (predicates[14] && predicates[16] && predicates[30] && predicates[6] && true && true && true) {
    return rewrite_343_2(node);
  }
  else if (predicates[14] && predicates[16] && predicates[30] && true && predicates[37] && true && true) {
    return rewrite_343_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_343(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[18] && predicates[43] && true && predicates[42] && true) {
    return rewrite_30_0(node);
  }
  else if (predicates[14] && predicates[18] && predicates[43] && true && predicates[42] && true) {
    return rewrite_30_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_30(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[32] && predicates[7] && true && true && true && true) {
    return rewrite_150_0(node);
  }
  else if (predicates[14] && predicates[32] && predicates[7] && true && true && true && true) {
    return rewrite_150_1(node);
  }
  else if (predicates[14] && predicates[32] && predicates[7] && true && true && true && true) {
    return rewrite_150_2(node);
  }
  else if (predicates[14] && predicates[32] && predicates[7] && true && true && true && true) {
    return rewrite_150_3(node);
  }
  else if (predicates[14] && predicates[32] && predicates[7] && true && true && true && true) {
    return rewrite_150_4(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[5] && true && true && true) {
    return rewrite_150_5(node);
  }
  else if (predicates[14] && predicates[32] && predicates[7] && true && true && true && true) {
    return rewrite_150_6(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[5] && true && true && true) {
    return rewrite_150_7(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[5] && true && true && true) {
    return rewrite_150_8(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[5] && true && true && true) {
    return rewrite_150_9(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[5] && true && true && true) {
    return rewrite_150_10(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[5] && true && true && true) {
    return rewrite_150_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_150(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[16] && predicates[7] && true && true && true && true) {
    return rewrite_363_0(node);
  }
  else if (predicates[14] && predicates[16] && true && predicates[5] && true && true && true) {
    return rewrite_363_1(node);
  }
  else if (predicates[14] && predicates[16] && predicates[7] && true && true && true && true) {
    return rewrite_363_2(node);
  }
  else if (predicates[14] && predicates[16] && true && predicates[5] && true && true && true) {
    return rewrite_363_3(node);
  }
  else if (predicates[14] && predicates[16] && predicates[7] && true && true && true && true) {
    return rewrite_363_4(node);
  }
  else if (predicates[14] && predicates[16] && predicates[7] && true && true && true && true) {
    return rewrite_363_5(node);
  }
  else if (predicates[14] && predicates[16] && predicates[7] && true && true && true && true) {
    return rewrite_363_6(node);
  }
  else if (predicates[14] && predicates[16] && true && predicates[5] && true && true && true) {
    return rewrite_363_7(node);
  }
  else if (predicates[14] && predicates[16] && true && predicates[5] && true && true && true) {
    return rewrite_363_8(node);
  }
  else if (predicates[14] && predicates[16] && predicates[7] && true && true && true && true) {
    return rewrite_363_9(node);
  }
  else if (predicates[14] && predicates[16] && true && predicates[5] && true && true && true) {
    return rewrite_363_10(node);
  }
  else if (predicates[14] && predicates[16] && true && predicates[5] && true && true && true) {
    return rewrite_363_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_363(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[23] && true && true && predicates[45] && true) {
    return rewrite_39_0(node);
  }
  else if (predicates[14] && predicates[23] && predicates[43] && true && true && true) {
    return rewrite_39_1(node);
  }
  else if (predicates[14] && predicates[23] && predicates[43] && true && true && true) {
    return rewrite_39_2(node);
  }
  else if (predicates[14] && predicates[23] && true && predicates[42] && true && true) {
    return rewrite_39_3(node);
  }
  else if (predicates[14] && predicates[23] && true && true && predicates[45] && true) {
    return rewrite_39_4(node);
  }
  else if (predicates[14] && predicates[23] && true && predicates[42] && true && true) {
    return rewrite_39_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_39(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[16] && true && predicates[3] && true && true) {
    return rewrite_118_0(node);
  }
  else if (predicates[14] && predicates[16] && predicates[30] && true && true && true) {
    return rewrite_118_1(node);
  }
  else if (predicates[14] && predicates[16] && predicates[30] && true && true && true) {
    return rewrite_118_2(node);
  }
  else if (predicates[14] && predicates[16] && true && predicates[3] && true && true) {
    return rewrite_118_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_118(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[18] && true && predicates[19] && true && true) {
    return rewrite_164_0(node);
  }
  else if (predicates[14] && predicates[18] && true && predicates[19] && true && true) {
    return rewrite_164_1(node);
  }
  else if (predicates[14] && predicates[18] && predicates[44] && true && true && true) {
    return rewrite_164_2(node);
  }
  else if (predicates[14] && predicates[18] && predicates[44] && true && true && true) {
    return rewrite_164_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_164(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[32] && predicates[30] && true && true && true) {
    return rewrite_360_0(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && true && true) {
    return rewrite_360_1(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[3] && true && true) {
    return rewrite_360_2(node);
  }
  else if (predicates[14] && predicates[32] && predicates[30] && true && true && true) {
    return rewrite_360_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_360(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[18] && predicates[43] && true && true) {
    return rewrite_29_0(node);
  }
  else if (predicates[14] && predicates[18] && true && predicates[42] && true) {
    return rewrite_29_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_29(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[32] && predicates[43] && true && true) {
    return rewrite_151_0(node);
  }
  else if (predicates[14] && predicates[32] && true && predicates[42] && true) {
    return rewrite_151_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_151(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[23] && true && true && true) {
    return rewrite_42_0(node);
  }
  else if (predicates[14] && predicates[23] && true && true && true) {
    return rewrite_42_1(node);
  }
  else if (predicates[14] && predicates[23] && true && true && true) {
    return rewrite_42_2(node);
  }
  else if (predicates[14] && predicates[23] && true && true && true) {
    return rewrite_42_3(node);
  }
  else if (predicates[14] && predicates[23] && true && true && true) {
    return rewrite_42_4(node);
  }
  else if (predicates[14] && predicates[23] && true && true && true) {
    return rewrite_42_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_42(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[29] && true && true && true) {
    return rewrite_163_0(node);
  }
  else if (predicates[14] && predicates[29] && true && true && true) {
    return rewrite_163_1(node);
  }
  else if (predicates[14] && predicates[29] && true && true && true) {
    return rewrite_163_2(node);
  }
  else if (predicates[14] && predicates[29] && true && true && true) {
    return rewrite_163_3(node);
  }
  else if (predicates[14] && predicates[29] && true && true && true) {
    return rewrite_163_4(node);
  }
  else if (predicates[14] && predicates[29] && true && true && true) {
    return rewrite_163_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_163(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[18] && true && true) {
    return rewrite_38_0(node);
  }
  else if (predicates[14] && predicates[18] && true && true) {
    return rewrite_38_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_38(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[32] && true && true) {
    return rewrite_103_0(node);
  }
  else if (predicates[14] && predicates[32] && true && true) {
    return rewrite_103_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_103(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[16] && true && true) {
    return rewrite_361_0(node);
  }
  else if (predicates[14] && predicates[16] && true && true) {
    return rewrite_361_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_361(TNode node, const bool* predicates) {
  if (predicates[14] && predicates[17] && true && true) {
    return rewrite_365_0(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBoolSpecialRewriter::RewriteNOT(TNode node,  bool prewrite) {
  bool predicates[47];
  for (int i = 0; i < 47; i++) {
    predicates[i] = false;
  }
  predicates[14] = node.getKind() == kind::NOT && node.getNumChildren() == 1;
  if (node.getNumChildren() > 0) {
    predicates[16] = node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2;
    predicates[17] = node[0].getKind() == kind::IMPLIES && node[0].getNumChildren() == 2;
    predicates[18] = node[0].getKind() == kind::AND && node[0].getNumChildren() == 2;
    predicates[23] = node[0].getKind() == kind::AND && node[0].getNumChildren() == 3;
    predicates[29] = node[0].getKind() == kind::OR && node[0].getNumChildren() == 3;
    predicates[32] = node[0].getKind() == kind::OR && node[0].getNumChildren() == 2;
    if (node[0].getNumChildren() > 2) {
      predicates[33] = node[0][2].getKind() == kind::OR && node[0][2].getNumChildren() == 2;
      predicates[45] = node[0][2].getKind() == kind::NOT && node[0][2].getNumChildren() == 1;
      if (node[0][2].getNumChildren() > 1) {
        predicates[10] = node[0][2][1].getKind() == kind::NOT && node[0][2][1].getNumChildren() == 1;
      }
      if (node[0][2].getNumChildren() > 0) {
        predicates[13] = node[0][2][0].getKind() == kind::NOT && node[0][2][0].getNumChildren() == 1;
      }
    }
    if (node[0].getNumChildren() > 0) {
      predicates[7] = node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3;
      predicates[30] = node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2;
      predicates[43] = node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1;
      predicates[44] = node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 2;
      if (node[0][0].getNumChildren() > 1) {
        predicates[24] = node[0][0][1].getKind() == kind::OR && node[0][0][1].getNumChildren() == 3;
        predicates[37] = node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1;
        if (node[0][0][1].getNumChildren() > 0) {
          predicates[31] = node[0][0][1][0].getKind() == kind::AND && node[0][0][1][0].getNumChildren() == 2;
        }
        if (node[0][0][1].getNumChildren() > 1) {
          predicates[21] = node[0][0][1][1].getKind() == kind::AND && node[0][0][1][1].getNumChildren() == 2;
        }
        if (node[0][0][1].getNumChildren() > 2) {
          predicates[40] = node[0][0][1][2].getKind() == kind::AND && node[0][0][1][2].getNumChildren() == 2;
        }
      }
      if (node[0][0].getNumChildren() > 2) {
        predicates[41] = node[0][0][2].getKind() == kind::NOT && node[0][0][2].getNumChildren() == 1;
      }
      if (node[0][0].getNumChildren() > 0) {
        predicates[6] = node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1;
        predicates[15] = node[0][0][0].getKind() == kind::AND && node[0][0][0].getNumChildren() == 2;
        predicates[20] = node[0][0][0].getKind() == kind::OR && node[0][0][0].getNumChildren() == 3;
        if (node[0][0][0].getNumChildren() > 1) {
          predicates[0] = node[0][0][0][1].getKind() == kind::AND && node[0][0][0][1].getNumChildren() == 2;
          predicates[26] = node[0][0][0][1].getKind() == kind::NOT && node[0][0][0][1].getNumChildren() == 1;
        }
        if (node[0][0][0].getNumChildren() > 0) {
          predicates[11] = node[0][0][0][0].getKind() == kind::NOT && node[0][0][0][0].getNumChildren() == 1;
          predicates[39] = node[0][0][0][0].getKind() == kind::AND && node[0][0][0][0].getNumChildren() == 2;
        }
        if (node[0][0][0].getNumChildren() > 2) {
          predicates[38] = node[0][0][0][2].getKind() == kind::AND && node[0][0][0][2].getNumChildren() == 2;
        }
      }
    }
    if (node[0].getNumChildren() > 1) {
      predicates[3] = node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2;
      predicates[5] = node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 3;
      predicates[19] = node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 2;
      predicates[42] = node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1;
      if (node[0][1].getNumChildren() > 2) {
        predicates[4] = node[0][1][2].getKind() == kind::NOT && node[0][1][2].getNumChildren() == 1;
      }
      if (node[0][1].getNumChildren() > 1) {
        predicates[27] = node[0][1][1].getKind() == kind::OR && node[0][1][1].getNumChildren() == 3;
        predicates[36] = node[0][1][1].getKind() == kind::NOT && node[0][1][1].getNumChildren() == 1;
        if (node[0][1][1].getNumChildren() > 2) {
          predicates[9] = node[0][1][1][2].getKind() == kind::AND && node[0][1][1][2].getNumChildren() == 2;
        }
        if (node[0][1][1].getNumChildren() > 1) {
          predicates[2] = node[0][1][1][1].getKind() == kind::AND && node[0][1][1][1].getNumChildren() == 2;
        }
        if (node[0][1][1].getNumChildren() > 0) {
          predicates[8] = node[0][1][1][0].getKind() == kind::AND && node[0][1][1][0].getNumChildren() == 2;
        }
      }
      if (node[0][1].getNumChildren() > 0) {
        predicates[1] = node[0][1][0].getKind() == kind::NOT && node[0][1][0].getNumChildren() == 1;
        predicates[25] = node[0][1][0].getKind() == kind::AND && node[0][1][0].getNumChildren() == 2;
        predicates[28] = node[0][1][0].getKind() == kind::OR && node[0][1][0].getNumChildren() == 3;
        if (node[0][1][0].getNumChildren() > 1) {
          predicates[22] = node[0][1][0][1].getKind() == kind::NOT && node[0][1][0][1].getNumChildren() == 1;
          predicates[34] = node[0][1][0][1].getKind() == kind::AND && node[0][1][0][1].getNumChildren() == 2;
        }
        if (node[0][1][0].getNumChildren() > 2) {
          predicates[12] = node[0][1][0][2].getKind() == kind::AND && node[0][1][0][2].getNumChildren() == 2;
        }
        if (node[0][1][0].getNumChildren() > 0) {
          predicates[35] = node[0][1][0][0].getKind() == kind::AND && node[0][1][0][0].getNumChildren() == 2;
          predicates[46] = node[0][1][0][0].getKind() == kind::NOT && node[0][1][0][0].getNumChildren() == 1;
        }
      }
    }
  }
  Node response;
  response = rewrite_330(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_233(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_247(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_345(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_268(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_327(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_328(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_181(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_257(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_296(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_120(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_149(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_175(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_225(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_236(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_44(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_125(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_134(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_343(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_30(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_150(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_363(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_39(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_118(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_164(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_360(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_29(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_151(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_42(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_163(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_38(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_103(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_361(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_365(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
