#include "options/bv_options.h"
#include "options/main_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

Node rewrite_662_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_24(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_25(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_26(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_27(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_28(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_29(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_30(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_31(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_32(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_33(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_34(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_35(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_36(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_37(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_38(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_39(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_40(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_41(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_42(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_43(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_44(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_45(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_46(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_47(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_48(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_49(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_50(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_51(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_52(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_53(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_54(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_55(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_56(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_57(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_58(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_59(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_60(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_61(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_62(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_63(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_64(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_65(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_66(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_67(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_68(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_69(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_70(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_662_71(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[662]++;
  return utils::mkSpecialFixedWidth(children, 662);
}
Node rewrite_675_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][2][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][2][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][2][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_24(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_25(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_26(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_27(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_28(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_29(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_30(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_31(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][2][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_32(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][2][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_33(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_34(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][2][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_35(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_36(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][2][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_37(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_38(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_39(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_40(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][2][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_41(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_42(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_43(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_44(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_45(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_46(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_47(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][2][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_48(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_49(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_50(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_51(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_52(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_53(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_54(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][2][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_55(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_56(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][2][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_57(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_58(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_59(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_60(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_61(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_62(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_63(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_64(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_65(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_66(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_67(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][2][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_68(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_69(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_70(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_675_71(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[675]++;
  return utils::mkSpecialFixedWidth(children, 675);
}
Node rewrite_689_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0][1]);
  children.push_back(node[0][1][2][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0][1]);
  children.push_back(node[0][0][1][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0][1]);
  children.push_back(node[0][2][1][0][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0][0]);
  children.push_back(node[0][0][2][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0][1]);
  children.push_back(node[0][2][0][0][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0][0]);
  children.push_back(node[0][2][1][0][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0][0]);
  children.push_back(node[0][0][1][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][2][0][1]);
  children.push_back(node[0][2][2][0][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0][0]);
  children.push_back(node[0][2][0][0][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][2][0][1]);
  children.push_back(node[0][2][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0][0]);
  children.push_back(node[0][2][0][0][1]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0][1]);
  children.push_back(node[0][1][2][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0][1]);
  children.push_back(node[0][0][2][0][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0][0]);
  children.push_back(node[0][2][1][0][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0][0]);
  children.push_back(node[0][1][1][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0][1]);
  children.push_back(node[0][1][1][0][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0][1]);
  children.push_back(node[0][1][1][0][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0][1]);
  children.push_back(node[0][1][2][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0][1]);
  children.push_back(node[0][0][2][0][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0][1]);
  children.push_back(node[0][2][0][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_24(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0][1]);
  children.push_back(node[0][0][2][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_25(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_26(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0][1]);
  children.push_back(node[0][2][1][0][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_27(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][2][0][0]);
  children.push_back(node[0][2][2][0][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_28(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0][0]);
  children.push_back(node[0][2][0][0][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_29(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0][1]);
  children.push_back(node[0][0][1][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_30(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0][0]);
  children.push_back(node[0][2][1][0][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_31(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_32(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_33(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0][1]);
  children.push_back(node[0][0][1][0][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_34(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0][0]);
  children.push_back(node[0][1][1][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_35(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0][1]);
  children.push_back(node[0][2][1][0][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_36(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0][0]);
  children.push_back(node[0][1][1][0][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_37(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_38(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_39(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][2][0][0]);
  children.push_back(node[0][2][2][0][1]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_40(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0][0]);
  children.push_back(node[0][0][1][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_41(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0][1]);
  children.push_back(node[0][1][1][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_42(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0][0]);
  children.push_back(node[0][1][2][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_43(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_44(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][2][0][1]);
  children.push_back(node[0][2][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_45(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0][1]);
  children.push_back(node[0][1][1][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_46(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][2][0][1]);
  children.push_back(node[0][2][2][0][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_47(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_48(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0][0]);
  children.push_back(node[0][2][0][0][1]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_49(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0][1]);
  children.push_back(node[0][0][2][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_50(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_51(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0][0]);
  children.push_back(node[0][1][2][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_52(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0][1]);
  children.push_back(node[0][2][0][0][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_53(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0][1]);
  children.push_back(node[0][0][1][0][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_54(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0][0]);
  children.push_back(node[0][1][2][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_55(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][2][0][0]);
  children.push_back(node[0][2][2][0][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_56(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0][1]);
  children.push_back(node[0][2][0][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_57(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][2][0][0]);
  children.push_back(node[0][2][2][0][1]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_58(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0][0]);
  children.push_back(node[0][0][2][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_59(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_60(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0][1]);
  children.push_back(node[0][1][2][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_61(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0][0]);
  children.push_back(node[0][0][2][0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_62(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0][1]);
  children.push_back(node[0][2][1][0][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_63(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_64(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0][0]);
  children.push_back(node[0][0][1][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_65(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_66(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0][0]);
  children.push_back(node[0][0][1][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_67(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0][0]);
  children.push_back(node[0][1][1][0][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_68(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0][0]);
  children.push_back(node[0][0][2][0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_69(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0][0]);
  children.push_back(node[0][1][2][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_70(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_689_71(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0][0]);
  children.push_back(node[0][2][1][0][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[689]++;
  return utils::mkSpecialFixedWidth(children, 689);
}
Node rewrite_545_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[545]++;
  return utils::mkSpecialFixedWidth(children, 545);
}
Node rewrite_545_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[545]++;
  return utils::mkSpecialFixedWidth(children, 545);
}
Node rewrite_545_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[545]++;
  return utils::mkSpecialFixedWidth(children, 545);
}
Node rewrite_545_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[545]++;
  return utils::mkSpecialFixedWidth(children, 545);
}
Node rewrite_545_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[545]++;
  return utils::mkSpecialFixedWidth(children, 545);
}
Node rewrite_545_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[545]++;
  return utils::mkSpecialFixedWidth(children, 545);
}
Node rewrite_545_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[545]++;
  return utils::mkSpecialFixedWidth(children, 545);
}
Node rewrite_545_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[545]++;
  return utils::mkSpecialFixedWidth(children, 545);
}
Node rewrite_545_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[545]++;
  return utils::mkSpecialFixedWidth(children, 545);
}
Node rewrite_545_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[545]++;
  return utils::mkSpecialFixedWidth(children, 545);
}
Node rewrite_545_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[545]++;
  return utils::mkSpecialFixedWidth(children, 545);
}
Node rewrite_545_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[545]++;
  return utils::mkSpecialFixedWidth(children, 545);
}
Node rewrite_545_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[545]++;
  return utils::mkSpecialFixedWidth(children, 545);
}
Node rewrite_545_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[545]++;
  return utils::mkSpecialFixedWidth(children, 545);
}
Node rewrite_545_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[545]++;
  return utils::mkSpecialFixedWidth(children, 545);
}
Node rewrite_545_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[545]++;
  return utils::mkSpecialFixedWidth(children, 545);
}
Node rewrite_545_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[545]++;
  return utils::mkSpecialFixedWidth(children, 545);
}
Node rewrite_545_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[545]++;
  return utils::mkSpecialFixedWidth(children, 545);
}
Node rewrite_545_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[545]++;
  return utils::mkSpecialFixedWidth(children, 545);
}
Node rewrite_545_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[545]++;
  return utils::mkSpecialFixedWidth(children, 545);
}
Node rewrite_545_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[545]++;
  return utils::mkSpecialFixedWidth(children, 545);
}
Node rewrite_545_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[545]++;
  return utils::mkSpecialFixedWidth(children, 545);
}
Node rewrite_545_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[545]++;
  return utils::mkSpecialFixedWidth(children, 545);
}
Node rewrite_545_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[545]++;
  return utils::mkSpecialFixedWidth(children, 545);
}
Node rewrite_601_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[601]++;
  return utils::mkSpecialFixedWidth(children, 601);
}
Node rewrite_601_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[601]++;
  return utils::mkSpecialFixedWidth(children, 601);
}
Node rewrite_601_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[601]++;
  return utils::mkSpecialFixedWidth(children, 601);
}
Node rewrite_601_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[601]++;
  return utils::mkSpecialFixedWidth(children, 601);
}
Node rewrite_601_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[601]++;
  return utils::mkSpecialFixedWidth(children, 601);
}
Node rewrite_601_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[601]++;
  return utils::mkSpecialFixedWidth(children, 601);
}
Node rewrite_601_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[601]++;
  return utils::mkSpecialFixedWidth(children, 601);
}
Node rewrite_601_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[601]++;
  return utils::mkSpecialFixedWidth(children, 601);
}
Node rewrite_601_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[601]++;
  return utils::mkSpecialFixedWidth(children, 601);
}
Node rewrite_601_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[601]++;
  return utils::mkSpecialFixedWidth(children, 601);
}
Node rewrite_601_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[601]++;
  return utils::mkSpecialFixedWidth(children, 601);
}
Node rewrite_601_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[601]++;
  return utils::mkSpecialFixedWidth(children, 601);
}
Node rewrite_601_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[601]++;
  return utils::mkSpecialFixedWidth(children, 601);
}
Node rewrite_601_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[601]++;
  return utils::mkSpecialFixedWidth(children, 601);
}
Node rewrite_601_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[601]++;
  return utils::mkSpecialFixedWidth(children, 601);
}
Node rewrite_601_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[601]++;
  return utils::mkSpecialFixedWidth(children, 601);
}
Node rewrite_601_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[601]++;
  return utils::mkSpecialFixedWidth(children, 601);
}
Node rewrite_601_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[601]++;
  return utils::mkSpecialFixedWidth(children, 601);
}
Node rewrite_601_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[601]++;
  return utils::mkSpecialFixedWidth(children, 601);
}
Node rewrite_601_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[601]++;
  return utils::mkSpecialFixedWidth(children, 601);
}
Node rewrite_601_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[601]++;
  return utils::mkSpecialFixedWidth(children, 601);
}
Node rewrite_601_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[601]++;
  return utils::mkSpecialFixedWidth(children, 601);
}
Node rewrite_601_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[601]++;
  return utils::mkSpecialFixedWidth(children, 601);
}
Node rewrite_601_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[601]++;
  return utils::mkSpecialFixedWidth(children, 601);
}
Node rewrite_617_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[617]++;
  return utils::mkSpecialFixedWidth(children, 617);
}
Node rewrite_617_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[617]++;
  return utils::mkSpecialFixedWidth(children, 617);
}
Node rewrite_617_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[617]++;
  return utils::mkSpecialFixedWidth(children, 617);
}
Node rewrite_617_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[617]++;
  return utils::mkSpecialFixedWidth(children, 617);
}
Node rewrite_617_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[617]++;
  return utils::mkSpecialFixedWidth(children, 617);
}
Node rewrite_617_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[617]++;
  return utils::mkSpecialFixedWidth(children, 617);
}
Node rewrite_617_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[617]++;
  return utils::mkSpecialFixedWidth(children, 617);
}
Node rewrite_617_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[617]++;
  return utils::mkSpecialFixedWidth(children, 617);
}
Node rewrite_617_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[617]++;
  return utils::mkSpecialFixedWidth(children, 617);
}
Node rewrite_617_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[617]++;
  return utils::mkSpecialFixedWidth(children, 617);
}
Node rewrite_617_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[617]++;
  return utils::mkSpecialFixedWidth(children, 617);
}
Node rewrite_617_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[617]++;
  return utils::mkSpecialFixedWidth(children, 617);
}
Node rewrite_617_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[617]++;
  return utils::mkSpecialFixedWidth(children, 617);
}
Node rewrite_617_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[617]++;
  return utils::mkSpecialFixedWidth(children, 617);
}
Node rewrite_617_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[617]++;
  return utils::mkSpecialFixedWidth(children, 617);
}
Node rewrite_617_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[617]++;
  return utils::mkSpecialFixedWidth(children, 617);
}
Node rewrite_621_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1][0]);
  children.push_back(node[0][1][0][1][1]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[621]++;
  return utils::mkSpecialFixedWidth(children, 621);
}
Node rewrite_621_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1][1]);
  children.push_back(node[0][1][0][1][0]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[621]++;
  return utils::mkSpecialFixedWidth(children, 621);
}
Node rewrite_621_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][2][0]);
  children.push_back(node[0][0][0][2][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[621]++;
  return utils::mkSpecialFixedWidth(children, 621);
}
Node rewrite_621_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1][1]);
  children.push_back(node[0][1][0][1][0]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[621]++;
  return utils::mkSpecialFixedWidth(children, 621);
}
Node rewrite_621_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[621]++;
  return utils::mkSpecialFixedWidth(children, 621);
}
Node rewrite_621_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][2][1]);
  children.push_back(node[0][0][0][2][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[621]++;
  return utils::mkSpecialFixedWidth(children, 621);
}
Node rewrite_621_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1][0]);
  children.push_back(node[0][0][0][1][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[621]++;
  return utils::mkSpecialFixedWidth(children, 621);
}
Node rewrite_621_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[621]++;
  return utils::mkSpecialFixedWidth(children, 621);
}
Node rewrite_621_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1][0]);
  children.push_back(node[0][0][0][1][1]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[621]++;
  return utils::mkSpecialFixedWidth(children, 621);
}
Node rewrite_621_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[621]++;
  return utils::mkSpecialFixedWidth(children, 621);
}
Node rewrite_621_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][2][1]);
  children.push_back(node[0][1][0][2][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[621]++;
  return utils::mkSpecialFixedWidth(children, 621);
}
Node rewrite_621_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][2][0]);
  children.push_back(node[0][1][0][2][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[621]++;
  return utils::mkSpecialFixedWidth(children, 621);
}
Node rewrite_621_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1][1]);
  children.push_back(node[0][0][0][1][0]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[621]++;
  return utils::mkSpecialFixedWidth(children, 621);
}
Node rewrite_621_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][2][0]);
  children.push_back(node[0][1][0][2][1]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[621]++;
  return utils::mkSpecialFixedWidth(children, 621);
}
Node rewrite_621_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1][1]);
  children.push_back(node[0][0][0][1][0]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[621]++;
  return utils::mkSpecialFixedWidth(children, 621);
}
Node rewrite_621_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][2][1]);
  children.push_back(node[0][1][0][2][0]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[621]++;
  return utils::mkSpecialFixedWidth(children, 621);
}
Node rewrite_621_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[621]++;
  return utils::mkSpecialFixedWidth(children, 621);
}
Node rewrite_621_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[621]++;
  return utils::mkSpecialFixedWidth(children, 621);
}
Node rewrite_621_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][2][0]);
  children.push_back(node[0][0][0][2][1]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[621]++;
  return utils::mkSpecialFixedWidth(children, 621);
}
Node rewrite_621_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[621]++;
  return utils::mkSpecialFixedWidth(children, 621);
}
Node rewrite_621_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[621]++;
  return utils::mkSpecialFixedWidth(children, 621);
}
Node rewrite_621_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[621]++;
  return utils::mkSpecialFixedWidth(children, 621);
}
Node rewrite_621_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][2][1]);
  children.push_back(node[0][0][0][2][0]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[621]++;
  return utils::mkSpecialFixedWidth(children, 621);
}
Node rewrite_621_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1][0]);
  children.push_back(node[0][1][0][1][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[621]++;
  return utils::mkSpecialFixedWidth(children, 621);
}
Node rewrite_647_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][1][0]);
  children.push_back(node[0][1][1][1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[647]++;
  return utils::mkSpecialFixedWidth(children, 647);
}
Node rewrite_647_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0][1]);
  children.push_back(node[0][0][1][0][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[647]++;
  return utils::mkSpecialFixedWidth(children, 647);
}
Node rewrite_647_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[647]++;
  return utils::mkSpecialFixedWidth(children, 647);
}
Node rewrite_647_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0][0]);
  children.push_back(node[0][1][1][0][1]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[647]++;
  return utils::mkSpecialFixedWidth(children, 647);
}
Node rewrite_647_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[647]++;
  return utils::mkSpecialFixedWidth(children, 647);
}
Node rewrite_647_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1][0]);
  children.push_back(node[0][0][0][1][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[647]++;
  return utils::mkSpecialFixedWidth(children, 647);
}
Node rewrite_647_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][1][1]);
  children.push_back(node[0][0][1][1][0]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[647]++;
  return utils::mkSpecialFixedWidth(children, 647);
}
Node rewrite_647_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[647]++;
  return utils::mkSpecialFixedWidth(children, 647);
}
Node rewrite_647_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0][0]);
  children.push_back(node[0][0][1][0][1]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[647]++;
  return utils::mkSpecialFixedWidth(children, 647);
}
Node rewrite_647_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][1][0]);
  children.push_back(node[0][0][1][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[647]++;
  return utils::mkSpecialFixedWidth(children, 647);
}
Node rewrite_647_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1][1]);
  children.push_back(node[0][0][0][1][0]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[647]++;
  return utils::mkSpecialFixedWidth(children, 647);
}
Node rewrite_647_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0][1]);
  children.push_back(node[0][1][1][0][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[647]++;
  return utils::mkSpecialFixedWidth(children, 647);
}
Node rewrite_647_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1][0]);
  children.push_back(node[0][1][0][1][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[647]++;
  return utils::mkSpecialFixedWidth(children, 647);
}
Node rewrite_647_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][1][1]);
  children.push_back(node[0][1][1][1][0]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[647]++;
  return utils::mkSpecialFixedWidth(children, 647);
}
Node rewrite_647_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1][1]);
  children.push_back(node[0][1][0][1][0]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[647]++;
  return utils::mkSpecialFixedWidth(children, 647);
}
Node rewrite_647_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[647]++;
  return utils::mkSpecialFixedWidth(children, 647);
}
Node rewrite_649_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0][0]);
  children.push_back(node[0][0][1][0][1]);
  children.push_back(node[0][0][1][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[649]++;
  return utils::mkSpecialFixedWidth(children, 649);
}
Node rewrite_649_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][0][0][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[649]++;
  return utils::mkSpecialFixedWidth(children, 649);
}
Node rewrite_649_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0][0]);
  children.push_back(node[0][1][1][0][1]);
  children.push_back(node[0][1][1][0][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[649]++;
  return utils::mkSpecialFixedWidth(children, 649);
}
Node rewrite_649_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0][2]);
  children.push_back(node[0][0][1][0][0]);
  children.push_back(node[0][0][1][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[649]++;
  return utils::mkSpecialFixedWidth(children, 649);
}
Node rewrite_649_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0][2]);
  children.push_back(node[0][1][1][0][1]);
  children.push_back(node[0][1][1][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[649]++;
  return utils::mkSpecialFixedWidth(children, 649);
}
Node rewrite_649_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0][1]);
  children.push_back(node[0][0][1][0][2]);
  children.push_back(node[0][0][1][0][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[649]++;
  return utils::mkSpecialFixedWidth(children, 649);
}
Node rewrite_649_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][2]);
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[649]++;
  return utils::mkSpecialFixedWidth(children, 649);
}
Node rewrite_649_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0][2]);
  children.push_back(node[0][0][1][0][1]);
  children.push_back(node[0][0][1][0][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[649]++;
  return utils::mkSpecialFixedWidth(children, 649);
}
Node rewrite_649_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][2]);
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[649]++;
  return utils::mkSpecialFixedWidth(children, 649);
}
Node rewrite_649_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0][0]);
  children.push_back(node[0][1][1][0][2]);
  children.push_back(node[0][1][1][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[649]++;
  return utils::mkSpecialFixedWidth(children, 649);
}
Node rewrite_649_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][0][0][2]);
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[649]++;
  return utils::mkSpecialFixedWidth(children, 649);
}
Node rewrite_649_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[649]++;
  return utils::mkSpecialFixedWidth(children, 649);
}
Node rewrite_649_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0][1]);
  children.push_back(node[0][1][1][0][0]);
  children.push_back(node[0][1][1][0][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[649]++;
  return utils::mkSpecialFixedWidth(children, 649);
}
Node rewrite_649_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][2]);
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[649]++;
  return utils::mkSpecialFixedWidth(children, 649);
}
Node rewrite_649_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0][1]);
  children.push_back(node[0][0][1][0][0]);
  children.push_back(node[0][0][1][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[649]++;
  return utils::mkSpecialFixedWidth(children, 649);
}
Node rewrite_649_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][0][0][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[649]++;
  return utils::mkSpecialFixedWidth(children, 649);
}
Node rewrite_649_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0][0]);
  children.push_back(node[0][0][1][0][2]);
  children.push_back(node[0][0][1][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[649]++;
  return utils::mkSpecialFixedWidth(children, 649);
}
Node rewrite_649_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][0][0][2]);
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[649]++;
  return utils::mkSpecialFixedWidth(children, 649);
}
Node rewrite_649_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][0][0][2]);
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[649]++;
  return utils::mkSpecialFixedWidth(children, 649);
}
Node rewrite_649_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][0][0][2]);
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[649]++;
  return utils::mkSpecialFixedWidth(children, 649);
}
Node rewrite_649_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0][2]);
  children.push_back(node[0][1][1][0][0]);
  children.push_back(node[0][1][1][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[649]++;
  return utils::mkSpecialFixedWidth(children, 649);
}
Node rewrite_649_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][2]);
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[649]++;
  return utils::mkSpecialFixedWidth(children, 649);
}
Node rewrite_649_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0][1]);
  children.push_back(node[0][1][1][0][2]);
  children.push_back(node[0][1][1][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[649]++;
  return utils::mkSpecialFixedWidth(children, 649);
}
Node rewrite_649_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[649]++;
  return utils::mkSpecialFixedWidth(children, 649);
}
Node rewrite_683_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[683]++;
  return utils::mkSpecialFixedWidth(children, 683);
}
Node rewrite_683_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0][0]);
  children.push_back(node[0][0][2][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[683]++;
  return utils::mkSpecialFixedWidth(children, 683);
}
Node rewrite_683_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0][0]);
  children.push_back(node[0][0][2][0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[683]++;
  return utils::mkSpecialFixedWidth(children, 683);
}
Node rewrite_683_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0][1]);
  children.push_back(node[0][0][2][0][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[683]++;
  return utils::mkSpecialFixedWidth(children, 683);
}
Node rewrite_683_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0][1]);
  children.push_back(node[0][1][2][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[683]++;
  return utils::mkSpecialFixedWidth(children, 683);
}
Node rewrite_683_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0][0]);
  children.push_back(node[0][1][1][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[683]++;
  return utils::mkSpecialFixedWidth(children, 683);
}
Node rewrite_683_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0][1]);
  children.push_back(node[0][1][1][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[683]++;
  return utils::mkSpecialFixedWidth(children, 683);
}
Node rewrite_683_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0][0]);
  children.push_back(node[0][1][2][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[683]++;
  return utils::mkSpecialFixedWidth(children, 683);
}
Node rewrite_683_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[683]++;
  return utils::mkSpecialFixedWidth(children, 683);
}
Node rewrite_683_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[683]++;
  return utils::mkSpecialFixedWidth(children, 683);
}
Node rewrite_683_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0][1]);
  children.push_back(node[0][1][2][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[683]++;
  return utils::mkSpecialFixedWidth(children, 683);
}
Node rewrite_683_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0][0]);
  children.push_back(node[0][0][1][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[683]++;
  return utils::mkSpecialFixedWidth(children, 683);
}
Node rewrite_683_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[683]++;
  return utils::mkSpecialFixedWidth(children, 683);
}
Node rewrite_683_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0][0]);
  children.push_back(node[0][0][1][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[683]++;
  return utils::mkSpecialFixedWidth(children, 683);
}
Node rewrite_683_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0][0]);
  children.push_back(node[0][1][1][0][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[683]++;
  return utils::mkSpecialFixedWidth(children, 683);
}
Node rewrite_683_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[683]++;
  return utils::mkSpecialFixedWidth(children, 683);
}
Node rewrite_683_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][0][0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[683]++;
  return utils::mkSpecialFixedWidth(children, 683);
}
Node rewrite_683_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[683]++;
  return utils::mkSpecialFixedWidth(children, 683);
}
Node rewrite_683_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0][1]);
  children.push_back(node[0][0][1][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[683]++;
  return utils::mkSpecialFixedWidth(children, 683);
}
Node rewrite_683_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][0][0][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[683]++;
  return utils::mkSpecialFixedWidth(children, 683);
}
Node rewrite_683_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0][1]);
  children.push_back(node[0][1][1][0][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[683]++;
  return utils::mkSpecialFixedWidth(children, 683);
}
Node rewrite_683_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0][0]);
  children.push_back(node[0][1][2][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[683]++;
  return utils::mkSpecialFixedWidth(children, 683);
}
Node rewrite_683_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0][1]);
  children.push_back(node[0][0][1][0][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[683]++;
  return utils::mkSpecialFixedWidth(children, 683);
}
Node rewrite_683_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0][1]);
  children.push_back(node[0][0][2][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[683]++;
  return utils::mkSpecialFixedWidth(children, 683);
}
Node rewrite_691_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[691]++;
  return utils::mkSpecialFixedWidth(children, 691);
}
Node rewrite_691_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[691]++;
  return utils::mkSpecialFixedWidth(children, 691);
}
Node rewrite_691_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[691]++;
  return utils::mkSpecialFixedWidth(children, 691);
}
Node rewrite_691_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[691]++;
  return utils::mkSpecialFixedWidth(children, 691);
}
Node rewrite_691_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[691]++;
  return utils::mkSpecialFixedWidth(children, 691);
}
Node rewrite_691_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[691]++;
  return utils::mkSpecialFixedWidth(children, 691);
}
Node rewrite_691_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[691]++;
  return utils::mkSpecialFixedWidth(children, 691);
}
Node rewrite_691_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[691]++;
  return utils::mkSpecialFixedWidth(children, 691);
}
Node rewrite_691_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[691]++;
  return utils::mkSpecialFixedWidth(children, 691);
}
Node rewrite_691_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[691]++;
  return utils::mkSpecialFixedWidth(children, 691);
}
Node rewrite_691_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[691]++;
  return utils::mkSpecialFixedWidth(children, 691);
}
Node rewrite_691_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[691]++;
  return utils::mkSpecialFixedWidth(children, 691);
}
Node rewrite_691_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[691]++;
  return utils::mkSpecialFixedWidth(children, 691);
}
Node rewrite_691_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[691]++;
  return utils::mkSpecialFixedWidth(children, 691);
}
Node rewrite_691_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[691]++;
  return utils::mkSpecialFixedWidth(children, 691);
}
Node rewrite_691_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[691]++;
  return utils::mkSpecialFixedWidth(children, 691);
}
Node rewrite_691_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[691]++;
  return utils::mkSpecialFixedWidth(children, 691);
}
Node rewrite_691_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[691]++;
  return utils::mkSpecialFixedWidth(children, 691);
}
Node rewrite_691_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[691]++;
  return utils::mkSpecialFixedWidth(children, 691);
}
Node rewrite_691_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[691]++;
  return utils::mkSpecialFixedWidth(children, 691);
}
Node rewrite_691_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[691]++;
  return utils::mkSpecialFixedWidth(children, 691);
}
Node rewrite_691_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[691]++;
  return utils::mkSpecialFixedWidth(children, 691);
}
Node rewrite_691_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[691]++;
  return utils::mkSpecialFixedWidth(children, 691);
}
Node rewrite_691_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[691]++;
  return utils::mkSpecialFixedWidth(children, 691);
}
Node rewrite_694_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[694]++;
  return utils::mkSpecialFixedWidth(children, 694);
}
Node rewrite_694_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[694]++;
  return utils::mkSpecialFixedWidth(children, 694);
}
Node rewrite_694_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[694]++;
  return utils::mkSpecialFixedWidth(children, 694);
}
Node rewrite_694_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[694]++;
  return utils::mkSpecialFixedWidth(children, 694);
}
Node rewrite_694_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[694]++;
  return utils::mkSpecialFixedWidth(children, 694);
}
Node rewrite_694_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[694]++;
  return utils::mkSpecialFixedWidth(children, 694);
}
Node rewrite_694_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[694]++;
  return utils::mkSpecialFixedWidth(children, 694);
}
Node rewrite_694_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[694]++;
  return utils::mkSpecialFixedWidth(children, 694);
}
Node rewrite_694_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[694]++;
  return utils::mkSpecialFixedWidth(children, 694);
}
Node rewrite_694_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[694]++;
  return utils::mkSpecialFixedWidth(children, 694);
}
Node rewrite_694_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[694]++;
  return utils::mkSpecialFixedWidth(children, 694);
}
Node rewrite_694_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[694]++;
  return utils::mkSpecialFixedWidth(children, 694);
}
Node rewrite_694_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[694]++;
  return utils::mkSpecialFixedWidth(children, 694);
}
Node rewrite_694_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[694]++;
  return utils::mkSpecialFixedWidth(children, 694);
}
Node rewrite_694_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[694]++;
  return utils::mkSpecialFixedWidth(children, 694);
}
Node rewrite_694_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[694]++;
  return utils::mkSpecialFixedWidth(children, 694);
}
Node rewrite_694_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[694]++;
  return utils::mkSpecialFixedWidth(children, 694);
}
Node rewrite_694_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[694]++;
  return utils::mkSpecialFixedWidth(children, 694);
}
Node rewrite_694_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[694]++;
  return utils::mkSpecialFixedWidth(children, 694);
}
Node rewrite_694_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[694]++;
  return utils::mkSpecialFixedWidth(children, 694);
}
Node rewrite_694_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[694]++;
  return utils::mkSpecialFixedWidth(children, 694);
}
Node rewrite_694_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[694]++;
  return utils::mkSpecialFixedWidth(children, 694);
}
Node rewrite_694_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[694]++;
  return utils::mkSpecialFixedWidth(children, 694);
}
Node rewrite_694_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[694]++;
  return utils::mkSpecialFixedWidth(children, 694);
}
Node rewrite_487_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_24(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_25(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_26(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_27(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_28(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_29(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_30(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_31(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_32(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_33(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_34(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_35(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_36(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_37(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_38(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_39(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_40(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_41(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_42(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_43(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_44(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_45(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_46(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_47(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_48(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_49(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_50(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_51(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_52(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_53(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_54(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_55(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_56(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_57(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_58(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_59(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_60(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_61(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_62(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_63(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_64(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_65(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_66(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_67(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_68(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_69(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_70(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_487_71(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[487]++;
  return utils::mkSpecialFixedWidth(children, 487);
}
Node rewrite_571_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[571]++;
  return utils::mkSpecialFixedWidth(children, 571);
}
Node rewrite_571_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[571]++;
  return utils::mkSpecialFixedWidth(children, 571);
}
Node rewrite_571_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[571]++;
  return utils::mkSpecialFixedWidth(children, 571);
}
Node rewrite_571_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[571]++;
  return utils::mkSpecialFixedWidth(children, 571);
}
Node rewrite_571_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[571]++;
  return utils::mkSpecialFixedWidth(children, 571);
}
Node rewrite_571_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[571]++;
  return utils::mkSpecialFixedWidth(children, 571);
}
Node rewrite_571_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[571]++;
  return utils::mkSpecialFixedWidth(children, 571);
}
Node rewrite_571_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[571]++;
  return utils::mkSpecialFixedWidth(children, 571);
}
Node rewrite_645_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[645]++;
  return utils::mkSpecialFixedWidth(children, 645);
}
Node rewrite_645_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[645]++;
  return utils::mkSpecialFixedWidth(children, 645);
}
Node rewrite_645_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[645]++;
  return utils::mkSpecialFixedWidth(children, 645);
}
Node rewrite_645_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[645]++;
  return utils::mkSpecialFixedWidth(children, 645);
}
Node rewrite_645_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[645]++;
  return utils::mkSpecialFixedWidth(children, 645);
}
Node rewrite_645_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[645]++;
  return utils::mkSpecialFixedWidth(children, 645);
}
Node rewrite_645_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[645]++;
  return utils::mkSpecialFixedWidth(children, 645);
}
Node rewrite_645_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[645]++;
  return utils::mkSpecialFixedWidth(children, 645);
}
Node rewrite_650_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0][0]);
  children.push_back(node[0][2][0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[650]++;
  return utils::mkSpecialFixedWidth(children, 650);
}
Node rewrite_650_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1][0]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[650]++;
  return utils::mkSpecialFixedWidth(children, 650);
}
Node rewrite_650_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1][0]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[650]++;
  return utils::mkSpecialFixedWidth(children, 650);
}
Node rewrite_650_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][1][0]);
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[650]++;
  return utils::mkSpecialFixedWidth(children, 650);
}
Node rewrite_650_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[650]++;
  return utils::mkSpecialFixedWidth(children, 650);
}
Node rewrite_650_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0][0]);
  children.push_back(node[0][2][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[650]++;
  return utils::mkSpecialFixedWidth(children, 650);
}
Node rewrite_650_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1][0]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[650]++;
  return utils::mkSpecialFixedWidth(children, 650);
}
Node rewrite_650_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[650]++;
  return utils::mkSpecialFixedWidth(children, 650);
}
Node rewrite_650_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[650]++;
  return utils::mkSpecialFixedWidth(children, 650);
}
Node rewrite_650_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1][0]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[650]++;
  return utils::mkSpecialFixedWidth(children, 650);
}
Node rewrite_650_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[650]++;
  return utils::mkSpecialFixedWidth(children, 650);
}
Node rewrite_650_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][1][0]);
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[650]++;
  return utils::mkSpecialFixedWidth(children, 650);
}
Node rewrite_688_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[688]++;
  return utils::mkSpecialFixedWidth(children, 688);
}
Node rewrite_688_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[688]++;
  return utils::mkSpecialFixedWidth(children, 688);
}
Node rewrite_688_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[688]++;
  return utils::mkSpecialFixedWidth(children, 688);
}
Node rewrite_688_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[688]++;
  return utils::mkSpecialFixedWidth(children, 688);
}
Node rewrite_688_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[688]++;
  return utils::mkSpecialFixedWidth(children, 688);
}
Node rewrite_688_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[688]++;
  return utils::mkSpecialFixedWidth(children, 688);
}
Node rewrite_688_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[688]++;
  return utils::mkSpecialFixedWidth(children, 688);
}
Node rewrite_688_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[688]++;
  return utils::mkSpecialFixedWidth(children, 688);
}
Node rewrite_692_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[692]++;
  return utils::mkSpecialFixedWidth(children, 692);
}
Node rewrite_692_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[692]++;
  return utils::mkSpecialFixedWidth(children, 692);
}
Node rewrite_692_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[692]++;
  return utils::mkSpecialFixedWidth(children, 692);
}
Node rewrite_692_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[692]++;
  return utils::mkSpecialFixedWidth(children, 692);
}
Node rewrite_692_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[692]++;
  return utils::mkSpecialFixedWidth(children, 692);
}
Node rewrite_692_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[692]++;
  return utils::mkSpecialFixedWidth(children, 692);
}
Node rewrite_692_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[692]++;
  return utils::mkSpecialFixedWidth(children, 692);
}
Node rewrite_692_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[692]++;
  return utils::mkSpecialFixedWidth(children, 692);
}
Node rewrite_692_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[692]++;
  return utils::mkSpecialFixedWidth(children, 692);
}
Node rewrite_692_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[692]++;
  return utils::mkSpecialFixedWidth(children, 692);
}
Node rewrite_692_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[692]++;
  return utils::mkSpecialFixedWidth(children, 692);
}
Node rewrite_692_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[692]++;
  return utils::mkSpecialFixedWidth(children, 692);
}
Node rewrite_393_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[393]++;
  return utils::mkSpecialFixedWidth(children, 393);
}
Node rewrite_393_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[393]++;
  return utils::mkSpecialFixedWidth(children, 393);
}
Node rewrite_393_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[393]++;
  return utils::mkSpecialFixedWidth(children, 393);
}
Node rewrite_393_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[393]++;
  return utils::mkSpecialFixedWidth(children, 393);
}
Node rewrite_393_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[393]++;
  return utils::mkSpecialFixedWidth(children, 393);
}
Node rewrite_393_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[393]++;
  return utils::mkSpecialFixedWidth(children, 393);
}
Node rewrite_393_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[393]++;
  return utils::mkSpecialFixedWidth(children, 393);
}
Node rewrite_393_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[393]++;
  return utils::mkSpecialFixedWidth(children, 393);
}
Node rewrite_393_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[393]++;
  return utils::mkSpecialFixedWidth(children, 393);
}
Node rewrite_393_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[393]++;
  return utils::mkSpecialFixedWidth(children, 393);
}
Node rewrite_393_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[393]++;
  return utils::mkSpecialFixedWidth(children, 393);
}
Node rewrite_393_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[393]++;
  return utils::mkSpecialFixedWidth(children, 393);
}
Node rewrite_393_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[393]++;
  return utils::mkSpecialFixedWidth(children, 393);
}
Node rewrite_393_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[393]++;
  return utils::mkSpecialFixedWidth(children, 393);
}
Node rewrite_393_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[393]++;
  return utils::mkSpecialFixedWidth(children, 393);
}
Node rewrite_393_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[393]++;
  return utils::mkSpecialFixedWidth(children, 393);
}
Node rewrite_393_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[393]++;
  return utils::mkSpecialFixedWidth(children, 393);
}
Node rewrite_393_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[393]++;
  return utils::mkSpecialFixedWidth(children, 393);
}
Node rewrite_393_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[393]++;
  return utils::mkSpecialFixedWidth(children, 393);
}
Node rewrite_393_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[393]++;
  return utils::mkSpecialFixedWidth(children, 393);
}
Node rewrite_393_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[393]++;
  return utils::mkSpecialFixedWidth(children, 393);
}
Node rewrite_393_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[393]++;
  return utils::mkSpecialFixedWidth(children, 393);
}
Node rewrite_393_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[393]++;
  return utils::mkSpecialFixedWidth(children, 393);
}
Node rewrite_393_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[393]++;
  return utils::mkSpecialFixedWidth(children, 393);
}
Node rewrite_514_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][2][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_24(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_25(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_26(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_27(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_28(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_29(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][2][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_30(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_31(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_32(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_33(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_34(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_514_35(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[514]++;
  return utils::mkSpecialFixedWidth(children, 514);
}
Node rewrite_520_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][2][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][2][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_24(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_25(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_26(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_27(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_28(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_29(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_30(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_31(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_32(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_33(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_34(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_520_35(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[520]++;
  return utils::mkSpecialFixedWidth(children, 520);
}
Node rewrite_402_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[402]++;
  return utils::mkSpecialFixedWidth(children, 402);
}
Node rewrite_402_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[402]++;
  return utils::mkSpecialFixedWidth(children, 402);
}
Node rewrite_402_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[402]++;
  return utils::mkSpecialFixedWidth(children, 402);
}
Node rewrite_402_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[402]++;
  return utils::mkSpecialFixedWidth(children, 402);
}
Node rewrite_402_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[402]++;
  return utils::mkSpecialFixedWidth(children, 402);
}
Node rewrite_402_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[402]++;
  return utils::mkSpecialFixedWidth(children, 402);
}
Node rewrite_402_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[402]++;
  return utils::mkSpecialFixedWidth(children, 402);
}
Node rewrite_402_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[402]++;
  return utils::mkSpecialFixedWidth(children, 402);
}
Node rewrite_402_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[402]++;
  return utils::mkSpecialFixedWidth(children, 402);
}
Node rewrite_402_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[402]++;
  return utils::mkSpecialFixedWidth(children, 402);
}
Node rewrite_402_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[402]++;
  return utils::mkSpecialFixedWidth(children, 402);
}
Node rewrite_402_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[402]++;
  return utils::mkSpecialFixedWidth(children, 402);
}
Node rewrite_424_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[424]++;
  return utils::mkSpecialFixedWidth(children, 424);
}
Node rewrite_424_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[424]++;
  return utils::mkSpecialFixedWidth(children, 424);
}
Node rewrite_424_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[424]++;
  return utils::mkSpecialFixedWidth(children, 424);
}
Node rewrite_424_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[424]++;
  return utils::mkSpecialFixedWidth(children, 424);
}
Node rewrite_424_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[424]++;
  return utils::mkSpecialFixedWidth(children, 424);
}
Node rewrite_424_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[424]++;
  return utils::mkSpecialFixedWidth(children, 424);
}
Node rewrite_424_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[424]++;
  return utils::mkSpecialFixedWidth(children, 424);
}
Node rewrite_424_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[424]++;
  return utils::mkSpecialFixedWidth(children, 424);
}
Node rewrite_448_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[448]++;
  return utils::mkSpecialFixedWidth(children, 448);
}
Node rewrite_448_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[448]++;
  return utils::mkSpecialFixedWidth(children, 448);
}
Node rewrite_448_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[448]++;
  return utils::mkSpecialFixedWidth(children, 448);
}
Node rewrite_448_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[448]++;
  return utils::mkSpecialFixedWidth(children, 448);
}
Node rewrite_448_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[448]++;
  return utils::mkSpecialFixedWidth(children, 448);
}
Node rewrite_448_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[448]++;
  return utils::mkSpecialFixedWidth(children, 448);
}
Node rewrite_448_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[448]++;
  return utils::mkSpecialFixedWidth(children, 448);
}
Node rewrite_448_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][2]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[448]++;
  return utils::mkSpecialFixedWidth(children, 448);
}
Node rewrite_448_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[448]++;
  return utils::mkSpecialFixedWidth(children, 448);
}
Node rewrite_448_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[448]++;
  return utils::mkSpecialFixedWidth(children, 448);
}
Node rewrite_448_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[448]++;
  return utils::mkSpecialFixedWidth(children, 448);
}
Node rewrite_448_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][2]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[448]++;
  return utils::mkSpecialFixedWidth(children, 448);
}
Node rewrite_469_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[469]++;
  return utils::mkSpecialFixedWidth(children, 469);
}
Node rewrite_469_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[469]++;
  return utils::mkSpecialFixedWidth(children, 469);
}
Node rewrite_469_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][1]);
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[469]++;
  return utils::mkSpecialFixedWidth(children, 469);
}
Node rewrite_469_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[469]++;
  return utils::mkSpecialFixedWidth(children, 469);
}
Node rewrite_469_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[469]++;
  return utils::mkSpecialFixedWidth(children, 469);
}
Node rewrite_469_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[469]++;
  return utils::mkSpecialFixedWidth(children, 469);
}
Node rewrite_469_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[469]++;
  return utils::mkSpecialFixedWidth(children, 469);
}
Node rewrite_469_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[469]++;
  return utils::mkSpecialFixedWidth(children, 469);
}
Node rewrite_469_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[469]++;
  return utils::mkSpecialFixedWidth(children, 469);
}
Node rewrite_469_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][1]);
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[469]++;
  return utils::mkSpecialFixedWidth(children, 469);
}
Node rewrite_469_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[469]++;
  return utils::mkSpecialFixedWidth(children, 469);
}
Node rewrite_469_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[469]++;
  return utils::mkSpecialFixedWidth(children, 469);
}
Node rewrite_470_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[470]++;
  return utils::mkSpecialFixedWidth(children, 470);
}
Node rewrite_470_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[470]++;
  return utils::mkSpecialFixedWidth(children, 470);
}
Node rewrite_470_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[470]++;
  return utils::mkSpecialFixedWidth(children, 470);
}
Node rewrite_470_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[470]++;
  return utils::mkSpecialFixedWidth(children, 470);
}
Node rewrite_470_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[470]++;
  return utils::mkSpecialFixedWidth(children, 470);
}
Node rewrite_470_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[470]++;
  return utils::mkSpecialFixedWidth(children, 470);
}
Node rewrite_470_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[470]++;
  return utils::mkSpecialFixedWidth(children, 470);
}
Node rewrite_470_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[470]++;
  return utils::mkSpecialFixedWidth(children, 470);
}
Node rewrite_497_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[497]++;
  return utils::mkSpecialFixedWidth(children, 497);
}
Node rewrite_497_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[497]++;
  return utils::mkSpecialFixedWidth(children, 497);
}
Node rewrite_497_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[497]++;
  return utils::mkSpecialFixedWidth(children, 497);
}
Node rewrite_497_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[497]++;
  return utils::mkSpecialFixedWidth(children, 497);
}
Node rewrite_497_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[497]++;
  return utils::mkSpecialFixedWidth(children, 497);
}
Node rewrite_497_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[497]++;
  return utils::mkSpecialFixedWidth(children, 497);
}
Node rewrite_497_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[497]++;
  return utils::mkSpecialFixedWidth(children, 497);
}
Node rewrite_497_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[497]++;
  return utils::mkSpecialFixedWidth(children, 497);
}
Node rewrite_515_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[515]++;
  return utils::mkSpecialFixedWidth(children, 515);
}
Node rewrite_515_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[515]++;
  return utils::mkSpecialFixedWidth(children, 515);
}
Node rewrite_515_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[515]++;
  return utils::mkSpecialFixedWidth(children, 515);
}
Node rewrite_515_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[515]++;
  return utils::mkSpecialFixedWidth(children, 515);
}
Node rewrite_515_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[515]++;
  return utils::mkSpecialFixedWidth(children, 515);
}
Node rewrite_515_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[515]++;
  return utils::mkSpecialFixedWidth(children, 515);
}
Node rewrite_515_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[515]++;
  return utils::mkSpecialFixedWidth(children, 515);
}
Node rewrite_515_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[515]++;
  return utils::mkSpecialFixedWidth(children, 515);
}
Node rewrite_515_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[515]++;
  return utils::mkSpecialFixedWidth(children, 515);
}
Node rewrite_515_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[515]++;
  return utils::mkSpecialFixedWidth(children, 515);
}
Node rewrite_515_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[515]++;
  return utils::mkSpecialFixedWidth(children, 515);
}
Node rewrite_515_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[515]++;
  return utils::mkSpecialFixedWidth(children, 515);
}
Node rewrite_516_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[516]++;
  return utils::mkSpecialFixedWidth(children, 516);
}
Node rewrite_516_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[516]++;
  return utils::mkSpecialFixedWidth(children, 516);
}
Node rewrite_516_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[516]++;
  return utils::mkSpecialFixedWidth(children, 516);
}
Node rewrite_516_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[516]++;
  return utils::mkSpecialFixedWidth(children, 516);
}
Node rewrite_516_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[516]++;
  return utils::mkSpecialFixedWidth(children, 516);
}
Node rewrite_516_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[516]++;
  return utils::mkSpecialFixedWidth(children, 516);
}
Node rewrite_516_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[516]++;
  return utils::mkSpecialFixedWidth(children, 516);
}
Node rewrite_516_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[516]++;
  return utils::mkSpecialFixedWidth(children, 516);
}
Node rewrite_516_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[516]++;
  return utils::mkSpecialFixedWidth(children, 516);
}
Node rewrite_516_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[516]++;
  return utils::mkSpecialFixedWidth(children, 516);
}
Node rewrite_516_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[516]++;
  return utils::mkSpecialFixedWidth(children, 516);
}
Node rewrite_516_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[516]++;
  return utils::mkSpecialFixedWidth(children, 516);
}
Node rewrite_530_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[530]++;
  return utils::mkSpecialFixedWidth(children, 530);
}
Node rewrite_530_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[530]++;
  return utils::mkSpecialFixedWidth(children, 530);
}
Node rewrite_530_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[530]++;
  return utils::mkSpecialFixedWidth(children, 530);
}
Node rewrite_530_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[530]++;
  return utils::mkSpecialFixedWidth(children, 530);
}
Node rewrite_530_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[530]++;
  return utils::mkSpecialFixedWidth(children, 530);
}
Node rewrite_530_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[530]++;
  return utils::mkSpecialFixedWidth(children, 530);
}
Node rewrite_530_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[530]++;
  return utils::mkSpecialFixedWidth(children, 530);
}
Node rewrite_530_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[530]++;
  return utils::mkSpecialFixedWidth(children, 530);
}
Node rewrite_530_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[530]++;
  return utils::mkSpecialFixedWidth(children, 530);
}
Node rewrite_530_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[530]++;
  return utils::mkSpecialFixedWidth(children, 530);
}
Node rewrite_530_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[530]++;
  return utils::mkSpecialFixedWidth(children, 530);
}
Node rewrite_530_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[530]++;
  return utils::mkSpecialFixedWidth(children, 530);
}
Node rewrite_426_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[426]++;
  return utils::mkSpecialFixedWidth(children, 426);
}
Node rewrite_426_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[426]++;
  return utils::mkSpecialFixedWidth(children, 426);
}
Node rewrite_426_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[426]++;
  return utils::mkSpecialFixedWidth(children, 426);
}
Node rewrite_426_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[426]++;
  return utils::mkSpecialFixedWidth(children, 426);
}
Node rewrite_467_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[467]++;
  return utils::mkSpecialFixedWidth(children, 467);
}
Node rewrite_467_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[467]++;
  return utils::mkSpecialFixedWidth(children, 467);
}
Node rewrite_467_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[467]++;
  return utils::mkSpecialFixedWidth(children, 467);
}
Node rewrite_467_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[467]++;
  return utils::mkSpecialFixedWidth(children, 467);
}
Node rewrite_479_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_24(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_25(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_26(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_27(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_28(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_29(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_30(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_31(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_32(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_33(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_34(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][2]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_479_35(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[479]++;
  return utils::mkSpecialFixedWidth(children, 479);
}
Node rewrite_373_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[373]++;
  return utils::mkSpecialFixedWidth(children, 373);
}
Node rewrite_373_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[373]++;
  return utils::mkSpecialFixedWidth(children, 373);
}
Node rewrite_373_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[373]++;
  return utils::mkSpecialFixedWidth(children, 373);
}
Node rewrite_373_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[373]++;
  return utils::mkSpecialFixedWidth(children, 373);
}
Node rewrite_373_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[373]++;
  return utils::mkSpecialFixedWidth(children, 373);
}
Node rewrite_373_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[373]++;
  return utils::mkSpecialFixedWidth(children, 373);
}
Node rewrite_373_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[373]++;
  return utils::mkSpecialFixedWidth(children, 373);
}
Node rewrite_373_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[373]++;
  return utils::mkSpecialFixedWidth(children, 373);
}
Node rewrite_373_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[373]++;
  return utils::mkSpecialFixedWidth(children, 373);
}
Node rewrite_373_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[373]++;
  return utils::mkSpecialFixedWidth(children, 373);
}
Node rewrite_373_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[373]++;
  return utils::mkSpecialFixedWidth(children, 373);
}
Node rewrite_373_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[373]++;
  return utils::mkSpecialFixedWidth(children, 373);
}
Node rewrite_481_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[481]++;
  return utils::mkSpecialFixedWidth(children, 481);
}
Node rewrite_481_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[481]++;
  return utils::mkSpecialFixedWidth(children, 481);
}
Node rewrite_481_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[481]++;
  return utils::mkSpecialFixedWidth(children, 481);
}
Node rewrite_481_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[481]++;
  return utils::mkSpecialFixedWidth(children, 481);
}
Node rewrite_481_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[481]++;
  return utils::mkSpecialFixedWidth(children, 481);
}
Node rewrite_481_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[481]++;
  return utils::mkSpecialFixedWidth(children, 481);
}
Node rewrite_481_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[481]++;
  return utils::mkSpecialFixedWidth(children, 481);
}
Node rewrite_481_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[481]++;
  return utils::mkSpecialFixedWidth(children, 481);
}
Node rewrite_481_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[481]++;
  return utils::mkSpecialFixedWidth(children, 481);
}
Node rewrite_481_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[481]++;
  return utils::mkSpecialFixedWidth(children, 481);
}
Node rewrite_481_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[481]++;
  return utils::mkSpecialFixedWidth(children, 481);
}
Node rewrite_481_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[481]++;
  return utils::mkSpecialFixedWidth(children, 481);
}
Node rewrite_490_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[490]++;
  return utils::mkSpecialFixedWidth(children, 490);
}
Node rewrite_490_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[490]++;
  return utils::mkSpecialFixedWidth(children, 490);
}
Node rewrite_711_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[711]++;
  return utils::mkSpecialFixedWidth(children, 711);
}
Node rewrite_711_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[711]++;
  return utils::mkSpecialFixedWidth(children, 711);
}
Node rewrite_711_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[711]++;
  return utils::mkSpecialFixedWidth(children, 711);
}
Node rewrite_711_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[711]++;
  return utils::mkSpecialFixedWidth(children, 711);
}
Node rewrite_711_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[711]++;
  return utils::mkSpecialFixedWidth(children, 711);
}
Node rewrite_711_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[711]++;
  return utils::mkSpecialFixedWidth(children, 711);
}
Node rewrite_711_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[711]++;
  return utils::mkSpecialFixedWidth(children, 711);
}
Node rewrite_711_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[711]++;
  return utils::mkSpecialFixedWidth(children, 711);
}
Node rewrite_711_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[711]++;
  return utils::mkSpecialFixedWidth(children, 711);
}
Node rewrite_711_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[711]++;
  return utils::mkSpecialFixedWidth(children, 711);
}
Node rewrite_711_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[711]++;
  return utils::mkSpecialFixedWidth(children, 711);
}
Node rewrite_711_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[711]++;
  return utils::mkSpecialFixedWidth(children, 711);
}
Node rewrite_418_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[418]++;
  return utils::mkSpecialFixedWidth(children, 418);
}
Node rewrite_418_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[418]++;
  return utils::mkSpecialFixedWidth(children, 418);
}
Node rewrite_418_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[418]++;
  return utils::mkSpecialFixedWidth(children, 418);
}
Node rewrite_418_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[418]++;
  return utils::mkSpecialFixedWidth(children, 418);
}
Node rewrite_435_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[435]++;
  return utils::mkSpecialFixedWidth(children, 435);
}
Node rewrite_435_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[435]++;
  return utils::mkSpecialFixedWidth(children, 435);
}
Node rewrite_435_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[435]++;
  return utils::mkSpecialFixedWidth(children, 435);
}
Node rewrite_435_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[435]++;
  return utils::mkSpecialFixedWidth(children, 435);
}
Node rewrite_435_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[435]++;
  return utils::mkSpecialFixedWidth(children, 435);
}
Node rewrite_435_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[435]++;
  return utils::mkSpecialFixedWidth(children, 435);
}
Node rewrite_529_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[529]++;
  return utils::mkSpecialFixedWidth(children, 529);
}
Node rewrite_529_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[529]++;
  return utils::mkSpecialFixedWidth(children, 529);
}
Node rewrite_529_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[529]++;
  return utils::mkSpecialFixedWidth(children, 529);
}
Node rewrite_529_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[529]++;
  return utils::mkSpecialFixedWidth(children, 529);
}
Node rewrite_385_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[385]++;
  return utils::mkSpecialFixedWidth(children, 385);
}
Node rewrite_385_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[385]++;
  return utils::mkSpecialFixedWidth(children, 385);
}
Node rewrite_455_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[455]++;
  return utils::mkSpecialFixedWidth(children, 455);
}
Node rewrite_455_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[455]++;
  return utils::mkSpecialFixedWidth(children, 455);
}
Node rewrite_455_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[455]++;
  return utils::mkSpecialFixedWidth(children, 455);
}
Node rewrite_455_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[455]++;
  return utils::mkSpecialFixedWidth(children, 455);
}
Node rewrite_455_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[455]++;
  return utils::mkSpecialFixedWidth(children, 455);
}
Node rewrite_455_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[455]++;
  return utils::mkSpecialFixedWidth(children, 455);
}
Node rewrite_708_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[708]++;
  return utils::mkSpecialFixedWidth(children, 708);
}
Node rewrite_708_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[708]++;
  return utils::mkSpecialFixedWidth(children, 708);
}
Node rewrite_708_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[708]++;
  return utils::mkSpecialFixedWidth(children, 708);
}
Node rewrite_708_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[708]++;
  return utils::mkSpecialFixedWidth(children, 708);
}
Node rewrite_708_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[708]++;
  return utils::mkSpecialFixedWidth(children, 708);
}
Node rewrite_708_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[708]++;
  return utils::mkSpecialFixedWidth(children, 708);
}
Node rewrite_423_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[423]++;
  return utils::mkSpecialFixedWidth(children, 423);
}
Node rewrite_423_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[423]++;
  return utils::mkSpecialFixedWidth(children, 423);
}
Node rewrite_710_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[710]++;
  return utils::mkSpecialFixedWidth(children, 710);
}
Node rewrite_710_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[710]++;
  return utils::mkSpecialFixedWidth(children, 710);
}
Node rewrite_710(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[26] && predicates[39] && true && predicates[49] && true && true && predicates[12] && true && true && true) {
    return rewrite_662_0(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && predicates[7] && predicates[14] && true && true) {
    return rewrite_662_1(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && predicates[31] && true && predicates[41] && true && true) {
    return rewrite_662_2(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && predicates[46] && true && true && predicates[12] && true && true && true) {
    return rewrite_662_3(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && predicates[50] && true && true && predicates[23] && true && true && true && true) {
    return rewrite_662_4(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && predicates[41] && true && predicates[12] && true && true && true) {
    return rewrite_662_5(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && predicates[31] && true && predicates[41] && true && true) {
    return rewrite_662_6(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && predicates[46] && true && true && predicates[12] && true && true && true) {
    return rewrite_662_7(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && predicates[50] && true && true && true && predicates[12] && true && true && true) {
    return rewrite_662_8(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && predicates[49] && true && true && predicates[12] && true && true && true) {
    return rewrite_662_9(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && predicates[50] && true && true && predicates[23] && true && true && true && true) {
    return rewrite_662_10(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && predicates[7] && predicates[14] && true && true) {
    return rewrite_662_11(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && predicates[31] && true && predicates[41] && true && true) {
    return rewrite_662_12(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && predicates[31] && true && predicates[41] && true && true) {
    return rewrite_662_13(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && predicates[7] && predicates[14] && true && true) {
    return rewrite_662_14(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && predicates[50] && true && true && true && predicates[12] && true && true && true) {
    return rewrite_662_15(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && predicates[7] && predicates[14] && true && true) {
    return rewrite_662_16(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && predicates[31] && predicates[46] && true && true && true) {
    return rewrite_662_17(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && predicates[50] && true && true && predicates[23] && true && true && true && true) {
    return rewrite_662_18(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && predicates[50] && true && true && true && predicates[12] && true && true && true) {
    return rewrite_662_19(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && predicates[31] && predicates[46] && true && true && true) {
    return rewrite_662_20(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && predicates[46] && true && true && predicates[12] && true && true && true) {
    return rewrite_662_21(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && predicates[49] && true && predicates[23] && true && true && true && true) {
    return rewrite_662_22(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && predicates[7] && predicates[14] && true && true) {
    return rewrite_662_23(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && predicates[7] && predicates[14] && true && true) {
    return rewrite_662_24(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && predicates[31] && predicates[46] && true && true && true) {
    return rewrite_662_25(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && predicates[7] && true && predicates[61] && true) {
    return rewrite_662_26(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && predicates[41] && true && predicates[12] && true && true && true) {
    return rewrite_662_27(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && predicates[49] && true && predicates[23] && true && true && true && true) {
    return rewrite_662_28(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && predicates[50] && true && true && true && predicates[12] && true && true && true) {
    return rewrite_662_29(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && predicates[7] && true && predicates[61] && true) {
    return rewrite_662_30(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && predicates[50] && true && true && predicates[23] && true && true && true && true) {
    return rewrite_662_31(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && predicates[7] && true && predicates[61] && true) {
    return rewrite_662_32(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && predicates[7] && predicates[14] && true && true) {
    return rewrite_662_33(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && predicates[7] && true && predicates[61] && true) {
    return rewrite_662_34(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && predicates[50] && true && true && true && predicates[12] && true && true && true) {
    return rewrite_662_35(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && predicates[41] && true && predicates[12] && true && true && true) {
    return rewrite_662_36(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && predicates[31] && true && predicates[41] && true && true) {
    return rewrite_662_37(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && predicates[31] && predicates[46] && true && true && true) {
    return rewrite_662_38(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && predicates[7] && true && predicates[61] && true) {
    return rewrite_662_39(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && predicates[46] && true && true && predicates[12] && true && true && true) {
    return rewrite_662_40(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && predicates[7] && predicates[14] && true && true) {
    return rewrite_662_41(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && predicates[49] && true && true && predicates[12] && true && true && true) {
    return rewrite_662_42(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && predicates[46] && true && true && predicates[12] && true && true && true) {
    return rewrite_662_43(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && predicates[49] && true && predicates[23] && true && true && true && true) {
    return rewrite_662_44(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && predicates[7] && true && predicates[61] && true) {
    return rewrite_662_45(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && predicates[7] && true && predicates[61] && true) {
    return rewrite_662_46(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && predicates[49] && true && predicates[23] && true && true && true && true) {
    return rewrite_662_47(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && predicates[50] && true && true && true && predicates[12] && true && true && true) {
    return rewrite_662_48(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && predicates[31] && predicates[46] && true && true && true) {
    return rewrite_662_49(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && predicates[50] && true && true && predicates[23] && true && true && true && true) {
    return rewrite_662_50(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && predicates[49] && true && predicates[23] && true && true && true && true) {
    return rewrite_662_51(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && predicates[41] && true && predicates[12] && true && true && true) {
    return rewrite_662_52(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && predicates[41] && true && predicates[12] && true && true && true) {
    return rewrite_662_53(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && predicates[7] && predicates[14] && true && true) {
    return rewrite_662_54(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && predicates[49] && true && true && predicates[12] && true && true && true) {
    return rewrite_662_55(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && predicates[46] && true && true && predicates[12] && true && true && true) {
    return rewrite_662_56(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && predicates[50] && true && true && predicates[23] && true && true && true && true) {
    return rewrite_662_57(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && predicates[49] && true && true && predicates[12] && true && true && true) {
    return rewrite_662_58(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && predicates[41] && true && predicates[12] && true && true && true) {
    return rewrite_662_59(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && predicates[7] && predicates[14] && true && true) {
    return rewrite_662_60(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && predicates[49] && true && true && predicates[12] && true && true && true) {
    return rewrite_662_61(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && predicates[7] && predicates[14] && true && true) {
    return rewrite_662_62(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && predicates[7] && true && predicates[61] && true) {
    return rewrite_662_63(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && predicates[7] && true && predicates[61] && true) {
    return rewrite_662_64(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && predicates[7] && true && predicates[61] && true) {
    return rewrite_662_65(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && predicates[7] && predicates[14] && true && true) {
    return rewrite_662_66(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && predicates[49] && true && predicates[23] && true && true && true && true) {
    return rewrite_662_67(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && predicates[31] && true && predicates[41] && true && true) {
    return rewrite_662_68(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && predicates[7] && true && predicates[61] && true) {
    return rewrite_662_69(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && predicates[31] && predicates[46] && true && true && true) {
    return rewrite_662_70(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && predicates[7] && true && predicates[61] && true) {
    return rewrite_662_71(node);
  }
  else {
    return node;
  }
}
Node rewrite_662(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[26] && predicates[43] && true && predicates[49] && true && true && predicates[31] && true && true && true) {
    return rewrite_675_0(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && predicates[45] && true && true && predicates[7] && true && true) {
    return rewrite_675_1(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && predicates[50] && true && true && true && true && predicates[7] && true && true) {
    return rewrite_675_2(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[12] && predicates[14] && true && true && true) {
    return rewrite_675_3(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[23] && true && true && predicates[13] && true && true) {
    return rewrite_675_4(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && predicates[46] && true && true && true && predicates[7] && true && true) {
    return rewrite_675_5(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && predicates[49] && true && true && predicates[31] && true && true && true) {
    return rewrite_675_6(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && predicates[41] && true && true && predicates[7] && true && true) {
    return rewrite_675_7(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[12] && true && true && predicates[52] && true) {
    return rewrite_675_8(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[23] && predicates[46] && true && true && true && true) {
    return rewrite_675_9(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[12] && true && true && predicates[52] && true) {
    return rewrite_675_10(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && predicates[50] && true && true && true && predicates[31] && true && true && true) {
    return rewrite_675_11(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && predicates[50] && true && true && true && true && predicates[7] && true && true) {
    return rewrite_675_12(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[23] && predicates[46] && true && true && true && true) {
    return rewrite_675_13(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[12] && true && predicates[61] && true && true) {
    return rewrite_675_14(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && predicates[46] && true && true && true && predicates[7] && true && true) {
    return rewrite_675_15(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[12] && true && true && predicates[52] && true) {
    return rewrite_675_16(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && predicates[41] && true && true && predicates[7] && true && true) {
    return rewrite_675_17(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[12] && predicates[14] && true && true && true) {
    return rewrite_675_18(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[12] && predicates[14] && true && true && true) {
    return rewrite_675_19(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[12] && true && predicates[61] && true && true) {
    return rewrite_675_20(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[12] && true && predicates[61] && true && true) {
    return rewrite_675_21(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && predicates[49] && true && true && predicates[31] && true && true && true) {
    return rewrite_675_22(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && predicates[49] && true && true && predicates[31] && true && true && true) {
    return rewrite_675_23(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && predicates[50] && true && true && true && true && predicates[7] && true && true) {
    return rewrite_675_24(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[12] && true && predicates[61] && true && true) {
    return rewrite_675_25(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && predicates[46] && true && true && true && predicates[7] && true && true) {
    return rewrite_675_26(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && predicates[13] && true && predicates[7] && true && true) {
    return rewrite_675_27(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && predicates[49] && true && true && true && predicates[7] && true && true) {
    return rewrite_675_28(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && predicates[46] && true && true && true && predicates[7] && true && true) {
    return rewrite_675_29(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && predicates[50] && true && true && true && predicates[31] && true && true && true) {
    return rewrite_675_30(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && predicates[13] && true && predicates[7] && true && true) {
    return rewrite_675_31(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[12] && true && true && predicates[52] && true) {
    return rewrite_675_32(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[12] && predicates[14] && true && true && true) {
    return rewrite_675_33(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[23] && true && true && predicates[13] && true && true) {
    return rewrite_675_34(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && predicates[49] && true && true && true && predicates[7] && true && true) {
    return rewrite_675_35(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && predicates[45] && true && true && predicates[7] && true && true) {
    return rewrite_675_36(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[12] && true && predicates[61] && true && true) {
    return rewrite_675_37(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[23] && predicates[46] && true && true && true && true) {
    return rewrite_675_38(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[12] && predicates[14] && true && true && true) {
    return rewrite_675_39(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && predicates[13] && true && predicates[7] && true && true) {
    return rewrite_675_40(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[12] && true && predicates[61] && true && true) {
    return rewrite_675_41(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[12] && predicates[14] && true && true && true) {
    return rewrite_675_42(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[23] && true && predicates[41] && true && true && true) {
    return rewrite_675_43(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[12] && true && true && predicates[52] && true) {
    return rewrite_675_44(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[23] && true && predicates[41] && true && true && true) {
    return rewrite_675_45(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && predicates[41] && true && true && predicates[7] && true && true) {
    return rewrite_675_46(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && predicates[45] && true && true && predicates[7] && true && true) {
    return rewrite_675_47(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[12] && true && predicates[61] && true && true) {
    return rewrite_675_48(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && predicates[49] && true && true && true && predicates[7] && true && true) {
    return rewrite_675_49(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && predicates[41] && true && true && predicates[7] && true && true) {
    return rewrite_675_50(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[23] && true && true && predicates[13] && true && true) {
    return rewrite_675_51(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && predicates[50] && true && true && true && predicates[31] && true && true && true) {
    return rewrite_675_52(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[12] && true && predicates[61] && true && true) {
    return rewrite_675_53(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && predicates[45] && true && predicates[31] && true && true && true) {
    return rewrite_675_54(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[12] && predicates[14] && true && true && true) {
    return rewrite_675_55(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && predicates[45] && true && predicates[31] && true && true && true) {
    return rewrite_675_56(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && predicates[13] && true && predicates[7] && true && true) {
    return rewrite_675_57(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[23] && predicates[46] && true && true && true && true) {
    return rewrite_675_58(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && predicates[50] && true && true && true && true && predicates[7] && true && true) {
    return rewrite_675_59(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[23] && true && predicates[41] && true && true && true) {
    return rewrite_675_60(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[12] && true && true && predicates[52] && true) {
    return rewrite_675_61(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[12] && predicates[14] && true && true && true) {
    return rewrite_675_62(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[23] && true && predicates[41] && true && true && true) {
    return rewrite_675_63(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && predicates[45] && true && true && predicates[7] && true && true) {
    return rewrite_675_64(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[12] && true && true && predicates[52] && true) {
    return rewrite_675_65(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && predicates[45] && true && predicates[31] && true && true && true) {
    return rewrite_675_66(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[12] && true && true && predicates[52] && true) {
    return rewrite_675_67(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[23] && true && true && predicates[13] && true && true) {
    return rewrite_675_68(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && predicates[49] && true && true && true && predicates[7] && true && true) {
    return rewrite_675_69(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && predicates[50] && true && true && true && predicates[31] && true && true && true) {
    return rewrite_675_70(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && predicates[45] && true && predicates[31] && true && true && true) {
    return rewrite_675_71(node);
  }
  else {
    return node;
  }
}
Node rewrite_675(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[26] && true && predicates[23] && predicates[46] && predicates[28] && true && true && true && true && true) {
    return rewrite_689_0(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && predicates[13] && predicates[34] && true && true && true) {
    return rewrite_689_1(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && predicates[49] && predicates[0] && true && true && true && true && true) {
    return rewrite_689_2(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && predicates[61] && predicates[48] && true && true && true) {
    return rewrite_689_3(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && predicates[45] && predicates[8] && true && true && true && true) {
    return rewrite_689_4(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && predicates[46] && predicates[28] && true && true && true && true && true) {
    return rewrite_689_5(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && predicates[14] && predicates[21] && true && true && true && true) {
    return rewrite_689_6(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && predicates[61] && predicates[48] && true && true && true) {
    return rewrite_689_7(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && predicates[49] && predicates[0] && true && true && true && true && true) {
    return rewrite_689_8(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && predicates[52] && predicates[27] && true && true) {
    return rewrite_689_9(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && predicates[14] && predicates[21] && true && true && true && true) {
    return rewrite_689_10(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && predicates[52] && predicates[27] && true && true) {
    return rewrite_689_11(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && predicates[14] && predicates[21] && true && true && true && true) {
    return rewrite_689_12(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && predicates[13] && predicates[34] && true && true && true) {
    return rewrite_689_13(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && predicates[45] && predicates[8] && true && true && true && true) {
    return rewrite_689_14(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && predicates[61] && predicates[48] && true && true && true) {
    return rewrite_689_15(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && predicates[41] && predicates[32] && true && true && true && true) {
    return rewrite_689_16(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && predicates[41] && predicates[32] && true && true && true && true) {
    return rewrite_689_17(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && predicates[46] && predicates[28] && true && true && true && true && true) {
    return rewrite_689_18(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && predicates[46] && predicates[28] && true && true && true && true && true) {
    return rewrite_689_19(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && predicates[41] && predicates[32] && true && true && true && true) {
    return rewrite_689_20(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && predicates[13] && predicates[34] && true && true && true) {
    return rewrite_689_21(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && predicates[45] && predicates[8] && true && true && true && true) {
    return rewrite_689_22(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && predicates[14] && predicates[21] && true && true && true && true) {
    return rewrite_689_23(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && predicates[45] && predicates[8] && true && true && true && true) {
    return rewrite_689_24(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && predicates[46] && predicates[28] && true && true && true && true && true) {
    return rewrite_689_25(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && predicates[61] && predicates[48] && true && true && true) {
    return rewrite_689_26(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && predicates[52] && predicates[27] && true && true) {
    return rewrite_689_27(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && predicates[14] && predicates[21] && true && true && true && true) {
    return rewrite_689_28(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && predicates[49] && predicates[0] && true && true && true && true && true) {
    return rewrite_689_29(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && predicates[61] && predicates[48] && true && true && true) {
    return rewrite_689_30(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && predicates[50] && predicates[1] && true && true && true && true && true && true) {
    return rewrite_689_31(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && predicates[50] && predicates[1] && true && true && true && true && true && true) {
    return rewrite_689_32(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && predicates[49] && predicates[0] && true && true && true && true && true) {
    return rewrite_689_33(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && predicates[41] && predicates[32] && true && true && true && true) {
    return rewrite_689_34(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && predicates[61] && predicates[48] && true && true && true) {
    return rewrite_689_35(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && predicates[41] && predicates[32] && true && true && true && true) {
    return rewrite_689_36(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && predicates[50] && predicates[1] && true && true && true && true && true && true) {
    return rewrite_689_37(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && predicates[46] && predicates[28] && true && true && true && true && true) {
    return rewrite_689_38(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && predicates[52] && predicates[27] && true && true) {
    return rewrite_689_39(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && predicates[49] && predicates[0] && true && true && true && true && true) {
    return rewrite_689_40(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && predicates[41] && predicates[32] && true && true && true && true) {
    return rewrite_689_41(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && predicates[13] && predicates[34] && true && true && true) {
    return rewrite_689_42(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && predicates[50] && predicates[1] && true && true && true && true && true && true) {
    return rewrite_689_43(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && predicates[52] && predicates[27] && true && true) {
    return rewrite_689_44(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && predicates[41] && predicates[32] && true && true && true && true) {
    return rewrite_689_45(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && predicates[52] && predicates[27] && true && true) {
    return rewrite_689_46(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && predicates[50] && predicates[1] && true && true && true && true && true && true) {
    return rewrite_689_47(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && predicates[14] && predicates[21] && true && true && true && true) {
    return rewrite_689_48(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && predicates[45] && predicates[8] && true && true && true && true) {
    return rewrite_689_49(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && predicates[50] && predicates[1] && true && true && true && true && true && true) {
    return rewrite_689_50(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && predicates[13] && predicates[34] && true && true && true) {
    return rewrite_689_51(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && predicates[14] && predicates[21] && true && true && true && true) {
    return rewrite_689_52(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && predicates[49] && predicates[0] && true && true && true && true && true) {
    return rewrite_689_53(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && predicates[13] && predicates[34] && true && true && true) {
    return rewrite_689_54(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && predicates[52] && predicates[27] && true && true) {
    return rewrite_689_55(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && predicates[14] && predicates[21] && true && true && true && true) {
    return rewrite_689_56(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && predicates[52] && predicates[27] && true && true) {
    return rewrite_689_57(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && predicates[45] && predicates[8] && true && true && true && true) {
    return rewrite_689_58(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && predicates[50] && predicates[1] && true && true && true && true && true && true) {
    return rewrite_689_59(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && predicates[13] && predicates[34] && true && true && true) {
    return rewrite_689_60(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && predicates[45] && predicates[8] && true && true && true && true) {
    return rewrite_689_61(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && predicates[61] && predicates[48] && true && true && true) {
    return rewrite_689_62(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && predicates[50] && predicates[1] && true && true && true && true && true && true) {
    return rewrite_689_63(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && predicates[49] && predicates[0] && true && true && true && true && true) {
    return rewrite_689_64(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && predicates[46] && predicates[28] && true && true && true && true && true) {
    return rewrite_689_65(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && predicates[49] && predicates[0] && true && true && true && true && true) {
    return rewrite_689_66(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && predicates[41] && predicates[32] && true && true && true && true) {
    return rewrite_689_67(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && predicates[45] && predicates[8] && true && true && true && true) {
    return rewrite_689_68(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && predicates[13] && predicates[34] && true && true && true) {
    return rewrite_689_69(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && predicates[46] && predicates[28] && true && true && true && true && true) {
    return rewrite_689_70(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && predicates[61] && predicates[48] && true && true && true) {
    return rewrite_689_71(node);
  }
  else {
    return node;
  }
}
Node rewrite_689(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[26] && predicates[39] && predicates[50] && true && true && predicates[31] && true && true && true) {
    return rewrite_545_0(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[31] && predicates[46] && true && true && true) {
    return rewrite_545_1(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && predicates[50] && true && true && predicates[31] && true && true && true) {
    return rewrite_545_2(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && predicates[46] && true && true && predicates[7] && true && true) {
    return rewrite_545_3(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && predicates[49] && true && true && predicates[7] && true && true) {
    return rewrite_545_4(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && predicates[49] && true && true && predicates[7] && true && true) {
    return rewrite_545_5(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && predicates[50] && true && true && true && predicates[7] && true && true) {
    return rewrite_545_6(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[7] && predicates[14] && true && true) {
    return rewrite_545_7(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[7] && true && predicates[61] && true) {
    return rewrite_545_8(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && predicates[41] && true && predicates[7] && true && true) {
    return rewrite_545_9(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[31] && true && predicates[41] && true && true) {
    return rewrite_545_10(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && predicates[49] && true && predicates[31] && true && true && true) {
    return rewrite_545_11(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[31] && true && predicates[41] && true && true) {
    return rewrite_545_12(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[31] && predicates[46] && true && true && true) {
    return rewrite_545_13(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[7] && true && predicates[61] && true) {
    return rewrite_545_14(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && predicates[50] && true && true && true && predicates[7] && true && true) {
    return rewrite_545_15(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[7] && predicates[14] && true && true) {
    return rewrite_545_16(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[7] && predicates[14] && true && true) {
    return rewrite_545_17(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[7] && true && predicates[61] && true) {
    return rewrite_545_18(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[7] && predicates[14] && true && true) {
    return rewrite_545_19(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && predicates[41] && true && predicates[7] && true && true) {
    return rewrite_545_20(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && predicates[46] && true && true && predicates[7] && true && true) {
    return rewrite_545_21(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[7] && true && predicates[61] && true) {
    return rewrite_545_22(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && predicates[49] && true && predicates[31] && true && true && true) {
    return rewrite_545_23(node);
  }
  else {
    return node;
  }
}
Node rewrite_545(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[42] && predicates[35] && true && true && predicates[53] && predicates[29] && true && true && true) {
    return rewrite_601_0(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && true && true && true && predicates[4] && true && true) {
    return rewrite_601_1(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && true && true && predicates[53] && predicates[29] && true && true && true) {
    return rewrite_601_2(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && true && true && true && predicates[4] && true && true) {
    return rewrite_601_3(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && true && true && true && predicates[4] && true && true) {
    return rewrite_601_4(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && true && true && true && predicates[4] && true && true) {
    return rewrite_601_5(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && true && true && predicates[53] && predicates[29] && true && true && true) {
    return rewrite_601_6(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && true && true && true && predicates[4] && true && true) {
    return rewrite_601_7(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && true && true && predicates[53] && predicates[29] && true && true && true) {
    return rewrite_601_8(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && true && true && true && predicates[4] && true && true) {
    return rewrite_601_9(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && true && true && true && predicates[4] && true && true) {
    return rewrite_601_10(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && true && true && predicates[53] && predicates[29] && true && true && true) {
    return rewrite_601_11(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && true && true && predicates[53] && predicates[29] && true && true && true) {
    return rewrite_601_12(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && true && true && true && predicates[4] && true && true) {
    return rewrite_601_13(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && true && true && predicates[53] && predicates[29] && true && true && true) {
    return rewrite_601_14(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && true && true && true && predicates[4] && true && true) {
    return rewrite_601_15(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && true && true && predicates[53] && predicates[29] && true && true && true) {
    return rewrite_601_16(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && true && true && true && predicates[4] && true && true) {
    return rewrite_601_17(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && true && true && true && predicates[4] && true && true) {
    return rewrite_601_18(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && true && true && predicates[53] && predicates[29] && true && true && true) {
    return rewrite_601_19(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && true && true && true && predicates[4] && true && true) {
    return rewrite_601_20(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && true && true && predicates[53] && predicates[29] && true && true && true) {
    return rewrite_601_21(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && true && true && predicates[53] && predicates[29] && true && true && true) {
    return rewrite_601_22(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && true && true && predicates[53] && predicates[29] && true && true && true) {
    return rewrite_601_23(node);
  }
  else {
    return node;
  }
}
Node rewrite_601(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[42] && true && predicates[4] && predicates[60] && true && true && predicates[40] && true && true) {
    return rewrite_617_0(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && predicates[25] && true && true && predicates[57] && true && true && true) {
    return rewrite_617_1(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[4] && predicates[60] && true && true && predicates[40] && true && true) {
    return rewrite_617_2(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[4] && predicates[60] && true && true && predicates[40] && true && true) {
    return rewrite_617_3(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[4] && predicates[60] && true && true && predicates[40] && true && true) {
    return rewrite_617_4(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[4] && predicates[60] && true && true && predicates[40] && true && true) {
    return rewrite_617_5(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && predicates[25] && true && true && predicates[57] && true && true && true) {
    return rewrite_617_6(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[4] && predicates[60] && true && true && predicates[40] && true && true) {
    return rewrite_617_7(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[4] && predicates[60] && true && true && predicates[40] && true && true) {
    return rewrite_617_8(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[4] && predicates[60] && true && true && predicates[40] && true && true) {
    return rewrite_617_9(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && predicates[25] && true && true && predicates[57] && true && true && true) {
    return rewrite_617_10(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && predicates[25] && true && true && predicates[57] && true && true && true) {
    return rewrite_617_11(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && predicates[25] && true && true && predicates[57] && true && true && true) {
    return rewrite_617_12(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && predicates[25] && true && true && predicates[57] && true && true && true) {
    return rewrite_617_13(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && predicates[25] && true && true && predicates[57] && true && true && true) {
    return rewrite_617_14(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && predicates[25] && true && true && predicates[57] && true && true && true) {
    return rewrite_617_15(node);
  }
  else {
    return node;
  }
}
Node rewrite_617(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[42] && true && predicates[53] && predicates[29] && true && predicates[6] && true && true && true) {
    return rewrite_621_0(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[53] && predicates[29] && true && predicates[6] && true && true && true) {
    return rewrite_621_1(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && true && true && predicates[11] && true && true && true) {
    return rewrite_621_2(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[53] && predicates[29] && true && predicates[6] && true && true && true) {
    return rewrite_621_3(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && predicates[1] && true && true && true && true && true) {
    return rewrite_621_4(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && true && true && predicates[11] && true && true && true) {
    return rewrite_621_5(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && true && predicates[59] && true && true && true && true) {
    return rewrite_621_6(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && predicates[1] && true && true && true && true && true) {
    return rewrite_621_7(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && true && predicates[59] && true && true && true && true) {
    return rewrite_621_8(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[53] && predicates[29] && predicates[28] && true && true && true && true) {
    return rewrite_621_9(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[53] && predicates[29] && true && true && predicates[3] && true && true) {
    return rewrite_621_10(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[53] && predicates[29] && true && true && predicates[3] && true && true) {
    return rewrite_621_11(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && true && predicates[59] && true && true && true && true) {
    return rewrite_621_12(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[53] && predicates[29] && true && true && predicates[3] && true && true) {
    return rewrite_621_13(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && true && predicates[59] && true && true && true && true) {
    return rewrite_621_14(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[53] && predicates[29] && true && true && predicates[3] && true && true) {
    return rewrite_621_15(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[53] && predicates[29] && predicates[28] && true && true && true && true) {
    return rewrite_621_16(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && predicates[1] && true && true && true && true && true) {
    return rewrite_621_17(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && true && true && predicates[11] && true && true && true) {
    return rewrite_621_18(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[53] && predicates[29] && predicates[28] && true && true && true && true) {
    return rewrite_621_19(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && predicates[1] && true && true && true && true && true) {
    return rewrite_621_20(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[53] && predicates[29] && predicates[28] && true && true && true && true) {
    return rewrite_621_21(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && true && true && predicates[11] && true && true && true) {
    return rewrite_621_22(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[53] && predicates[29] && true && predicates[6] && true && true && true) {
    return rewrite_621_23(node);
  }
  else {
    return node;
  }
}
Node rewrite_621(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[33] && true && predicates[31] && true && predicates[55] && true && predicates[58] && true && true) {
    return rewrite_647_0(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && true && predicates[22] && predicates[0] && true && true && true && true) {
    return rewrite_647_1(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && predicates[9] && predicates[28] && true && true && true && true) {
    return rewrite_647_2(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && true && predicates[55] && predicates[32] && true && true && true) {
    return rewrite_647_3(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && predicates[9] && predicates[28] && true && true && true && true) {
    return rewrite_647_4(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && predicates[18] && true && predicates[59] && true && true && true && true) {
    return rewrite_647_5(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && true && predicates[22] && true && predicates[54] && true && true && true) {
    return rewrite_647_6(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && predicates[18] && predicates[1] && true && true && true && true && true) {
    return rewrite_647_7(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && true && predicates[22] && predicates[0] && true && true && true && true) {
    return rewrite_647_8(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && true && predicates[22] && true && predicates[54] && true && true && true) {
    return rewrite_647_9(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && predicates[18] && true && predicates[59] && true && true && true && true) {
    return rewrite_647_10(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && true && predicates[55] && predicates[32] && true && true && true) {
    return rewrite_647_11(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && predicates[9] && true && predicates[6] && true && true && true) {
    return rewrite_647_12(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && true && predicates[55] && true && predicates[58] && true && true) {
    return rewrite_647_13(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && predicates[9] && true && predicates[6] && true && true && true) {
    return rewrite_647_14(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && predicates[18] && predicates[1] && true && true && true && true && true) {
    return rewrite_647_15(node);
  }
  else {
    return node;
  }
}
Node rewrite_647(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[33] && predicates[39] && true && predicates[49] && predicates[19] && true && true && true && true) {
    return rewrite_649_0(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && predicates[46] && predicates[51] && true && true && true && true) {
    return rewrite_649_1(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && true && predicates[41] && predicates[5] && true && true && true) {
    return rewrite_649_2(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && true && predicates[49] && predicates[19] && true && true && true && true) {
    return rewrite_649_3(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && true && predicates[41] && predicates[5] && true && true && true) {
    return rewrite_649_4(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && true && predicates[49] && predicates[19] && true && true && true && true) {
    return rewrite_649_5(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && predicates[50] && predicates[44] && true && true && true && true && true) {
    return rewrite_649_6(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && true && predicates[49] && predicates[19] && true && true && true && true) {
    return rewrite_649_7(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && predicates[50] && predicates[44] && true && true && true && true && true) {
    return rewrite_649_8(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && true && predicates[41] && predicates[5] && true && true && true) {
    return rewrite_649_9(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && predicates[46] && predicates[51] && true && true && true && true) {
    return rewrite_649_10(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && predicates[50] && predicates[44] && true && true && true && true && true) {
    return rewrite_649_11(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && true && predicates[41] && predicates[5] && true && true && true) {
    return rewrite_649_12(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && predicates[46] && predicates[51] && true && true && true && true) {
    return rewrite_649_13(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && true && predicates[49] && predicates[19] && true && true && true && true) {
    return rewrite_649_14(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && predicates[46] && predicates[51] && true && true && true && true) {
    return rewrite_649_15(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && true && predicates[49] && predicates[19] && true && true && true && true) {
    return rewrite_649_16(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && predicates[46] && predicates[51] && true && true && true && true) {
    return rewrite_649_17(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && predicates[50] && predicates[44] && true && true && true && true && true) {
    return rewrite_649_18(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && predicates[50] && predicates[44] && true && true && true && true && true) {
    return rewrite_649_19(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && true && predicates[41] && predicates[5] && true && true && true) {
    return rewrite_649_20(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && predicates[46] && predicates[51] && true && true && true && true) {
    return rewrite_649_21(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && true && predicates[41] && predicates[5] && true && true && true) {
    return rewrite_649_22(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && predicates[50] && predicates[44] && true && true && true && true && true) {
    return rewrite_649_23(node);
  }
  else {
    return node;
  }
}
Node rewrite_649(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[33] && predicates[43] && predicates[50] && predicates[1] && true && true && true && true && true) {
    return rewrite_683_0(node);
  }
  else if (predicates[30] && predicates[33] && predicates[43] && true && true && predicates[45] && predicates[8] && true && true && true) {
    return rewrite_683_1(node);
  }
  else if (predicates[30] && predicates[33] && predicates[43] && true && true && predicates[45] && predicates[8] && true && true && true) {
    return rewrite_683_2(node);
  }
  else if (predicates[30] && predicates[33] && predicates[43] && true && true && predicates[45] && predicates[8] && true && true && true) {
    return rewrite_683_3(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[23] && true && true && predicates[13] && predicates[34] && true && true) {
    return rewrite_683_4(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[23] && true && predicates[41] && predicates[32] && true && true && true) {
    return rewrite_683_5(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[23] && true && predicates[41] && predicates[32] && true && true && true) {
    return rewrite_683_6(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[23] && true && true && predicates[13] && predicates[34] && true && true) {
    return rewrite_683_7(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[23] && predicates[46] && predicates[28] && true && true && true && true) {
    return rewrite_683_8(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[23] && predicates[46] && predicates[28] && true && true && true && true) {
    return rewrite_683_9(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[23] && true && true && predicates[13] && predicates[34] && true && true) {
    return rewrite_683_10(node);
  }
  else if (predicates[30] && predicates[33] && predicates[43] && true && predicates[49] && predicates[0] && true && true && true && true) {
    return rewrite_683_11(node);
  }
  else if (predicates[30] && predicates[33] && predicates[43] && predicates[50] && predicates[1] && true && true && true && true && true) {
    return rewrite_683_12(node);
  }
  else if (predicates[30] && predicates[33] && predicates[43] && true && predicates[49] && predicates[0] && true && true && true && true) {
    return rewrite_683_13(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[23] && true && predicates[41] && predicates[32] && true && true && true) {
    return rewrite_683_14(node);
  }
  else if (predicates[30] && predicates[33] && predicates[43] && predicates[50] && predicates[1] && true && true && true && true && true) {
    return rewrite_683_15(node);
  }
  else if (predicates[30] && predicates[33] && predicates[43] && predicates[50] && predicates[1] && true && true && true && true && true) {
    return rewrite_683_16(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[23] && predicates[46] && predicates[28] && true && true && true && true) {
    return rewrite_683_17(node);
  }
  else if (predicates[30] && predicates[33] && predicates[43] && true && predicates[49] && predicates[0] && true && true && true && true) {
    return rewrite_683_18(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[23] && predicates[46] && predicates[28] && true && true && true && true) {
    return rewrite_683_19(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[23] && true && predicates[41] && predicates[32] && true && true && true) {
    return rewrite_683_20(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[23] && true && true && predicates[13] && predicates[34] && true && true) {
    return rewrite_683_21(node);
  }
  else if (predicates[30] && predicates[33] && predicates[43] && true && predicates[49] && predicates[0] && true && true && true && true) {
    return rewrite_683_22(node);
  }
  else if (predicates[30] && predicates[33] && predicates[43] && true && true && predicates[45] && predicates[8] && true && true && true) {
    return rewrite_683_23(node);
  }
  else {
    return node;
  }
}
Node rewrite_683(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[37] && true && predicates[4] && true && true && predicates[38] && true && predicates[61] && node[0][1][1] == node[0][2][1][0]) {
    return rewrite_691_0(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[4] && true && true && predicates[38] && true && predicates[61] && node[0][1][0] == node[0][2][1][0]) {
    return rewrite_691_1(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && true && true && predicates[38] && true && predicates[61] && node[0][0][1] == node[0][2][1][0]) {
    return rewrite_691_2(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && true && true && predicates[38] && true && predicates[61] && node[0][0][0] == node[0][2][1][0]) {
    return rewrite_691_3(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && true && predicates[4] && true && predicates[41] && node[0][0][0] == node[0][1][1][0] && true) {
    return rewrite_691_4(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[4] && true && predicates[41] && true && predicates[38] && true && node[0][1][1][0] == node[0][2][1]) {
    return rewrite_691_5(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[4] && true && true && predicates[38] && predicates[14] && node[0][1][0] == node[0][2][0][0] && true) {
    return rewrite_691_6(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[4] && predicates[46] && true && true && predicates[38] && true && node[0][1][0][0] == node[0][2][1]) {
    return rewrite_691_7(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[4] && true && predicates[41] && true && predicates[38] && node[0][1][1][0] == node[0][2][0] && true) {
    return rewrite_691_8(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && predicates[49] && true && true && predicates[38] && node[0][0][1][0] == node[0][2][0] && true) {
    return rewrite_691_9(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && predicates[50] && true && true && predicates[4] && true && node[0][0][0][0] == node[0][1][1] && true) {
    return rewrite_691_10(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && predicates[50] && true && true && true && predicates[38] && true && node[0][0][0][0] == node[0][2][1]) {
    return rewrite_691_11(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && true && true && predicates[38] && predicates[14] && node[0][0][1] == node[0][2][0][0] && true) {
    return rewrite_691_12(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && true && predicates[4] && predicates[46] && node[0][0][0] == node[0][1][0][0] && true && true) {
    return rewrite_691_13(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && predicates[50] && true && true && true && predicates[38] && node[0][0][0][0] == node[0][2][0] && true) {
    return rewrite_691_14(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && true && true && predicates[38] && predicates[14] && node[0][0][0] == node[0][2][0][0] && true) {
    return rewrite_691_15(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && predicates[49] && true && predicates[4] && node[0][0][1][0] == node[0][1][0] && true && true) {
    return rewrite_691_16(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && predicates[49] && true && true && predicates[38] && true && node[0][0][1][0] == node[0][2][1]) {
    return rewrite_691_17(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && predicates[50] && true && true && predicates[4] && node[0][0][0][0] == node[0][1][0] && true && true) {
    return rewrite_691_18(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[4] && true && true && predicates[38] && predicates[14] && node[0][1][1] == node[0][2][0][0] && true) {
    return rewrite_691_19(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[4] && predicates[46] && true && true && predicates[38] && node[0][1][0][0] == node[0][2][0] && true) {
    return rewrite_691_20(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && true && predicates[4] && predicates[46] && node[0][0][1] == node[0][1][0][0] && true && true) {
    return rewrite_691_21(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && true && predicates[4] && true && predicates[41] && node[0][0][1] == node[0][1][1][0] && true) {
    return rewrite_691_22(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && predicates[49] && true && predicates[4] && true && node[0][0][1][0] == node[0][1][1] && true) {
    return rewrite_691_23(node);
  }
  else {
    return node;
  }
}
Node rewrite_691(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[37] && predicates[35] && true && predicates[49] && true && predicates[4] && true && true && true) {
    return rewrite_694_0(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[4] && true && true && predicates[38] && predicates[14] && true && true) {
    return rewrite_694_1(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && true && predicates[4] && true && predicates[41] && true && true) {
    return rewrite_694_2(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && true && predicates[4] && predicates[46] && true && true && true) {
    return rewrite_694_3(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[4] && true && true && predicates[38] && true && predicates[61] && true) {
    return rewrite_694_4(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[4] && true && true && predicates[38] && predicates[14] && true && true) {
    return rewrite_694_5(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && predicates[50] && true && true && true && predicates[38] && true && true) {
    return rewrite_694_6(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && predicates[49] && true && true && predicates[38] && true && true) {
    return rewrite_694_7(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[4] && predicates[46] && true && true && predicates[38] && true && true) {
    return rewrite_694_8(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && predicates[50] && true && true && predicates[4] && true && true && true) {
    return rewrite_694_9(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[4] && true && true && predicates[38] && true && predicates[61] && true) {
    return rewrite_694_10(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && predicates[49] && true && true && predicates[38] && true && true) {
    return rewrite_694_11(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && true && true && predicates[38] && predicates[14] && true && true) {
    return rewrite_694_12(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && predicates[50] && true && true && predicates[4] && true && true && true) {
    return rewrite_694_13(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && true && predicates[4] && predicates[46] && true && true && true) {
    return rewrite_694_14(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && true && true && predicates[38] && predicates[14] && true && true) {
    return rewrite_694_15(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[4] && true && predicates[41] && true && predicates[38] && true && true) {
    return rewrite_694_16(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[4] && predicates[46] && true && true && predicates[38] && true && true) {
    return rewrite_694_17(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && predicates[50] && true && true && true && predicates[38] && true && true) {
    return rewrite_694_18(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && predicates[49] && true && predicates[4] && true && true && true) {
    return rewrite_694_19(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && true && true && predicates[38] && true && predicates[61] && true) {
    return rewrite_694_20(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[4] && true && predicates[41] && true && predicates[38] && true && true) {
    return rewrite_694_21(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && true && true && predicates[38] && true && predicates[61] && true) {
    return rewrite_694_22(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && true && predicates[4] && true && predicates[41] && true && true) {
    return rewrite_694_23(node);
  }
  else {
    return node;
  }
}
Node rewrite_694(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[12] && true && true && true) {
    return rewrite_487_0(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[12] && true && true && true) {
    return rewrite_487_1(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[23] && true && true && true && true) {
    return rewrite_487_2(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && predicates[31] && true && true && true) {
    return rewrite_487_3(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[12] && true && true && true) {
    return rewrite_487_4(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[23] && true && true && true && true) {
    return rewrite_487_5(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[23] && true && true && true && true) {
    return rewrite_487_6(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[12] && true && true && true) {
    return rewrite_487_7(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && predicates[31] && true && true && true) {
    return rewrite_487_8(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && predicates[7] && true && true) {
    return rewrite_487_9(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[12] && true && true && true) {
    return rewrite_487_10(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && predicates[7] && true && true) {
    return rewrite_487_11(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[12] && true && true && true) {
    return rewrite_487_12(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && predicates[7] && true && true) {
    return rewrite_487_13(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && predicates[31] && true && true && true) {
    return rewrite_487_14(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && predicates[7] && true && true) {
    return rewrite_487_15(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[12] && true && true && true) {
    return rewrite_487_16(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[12] && true && true && true) {
    return rewrite_487_17(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && predicates[7] && true && true) {
    return rewrite_487_18(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && predicates[31] && true && true && true) {
    return rewrite_487_19(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[23] && true && true && true && true) {
    return rewrite_487_20(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && predicates[7] && true && true) {
    return rewrite_487_21(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[12] && true && true && true) {
    return rewrite_487_22(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && predicates[31] && true && true && true) {
    return rewrite_487_23(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && predicates[7] && true && true) {
    return rewrite_487_24(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && predicates[7] && true && true) {
    return rewrite_487_25(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[12] && true && true && true) {
    return rewrite_487_26(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && predicates[31] && true && true && true) {
    return rewrite_487_27(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[23] && true && true && true && true) {
    return rewrite_487_28(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && predicates[7] && true && true) {
    return rewrite_487_29(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && predicates[7] && true && true) {
    return rewrite_487_30(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && predicates[7] && true && true) {
    return rewrite_487_31(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && predicates[7] && true && true) {
    return rewrite_487_32(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[12] && true && true && true) {
    return rewrite_487_33(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[12] && true && true && true) {
    return rewrite_487_34(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && predicates[7] && true && true) {
    return rewrite_487_35(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && predicates[7] && true && true) {
    return rewrite_487_36(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[23] && true && true && true && true) {
    return rewrite_487_37(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && predicates[31] && true && true && true) {
    return rewrite_487_38(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[23] && true && true && true && true) {
    return rewrite_487_39(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && predicates[7] && true && true) {
    return rewrite_487_40(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[23] && true && true && true && true) {
    return rewrite_487_41(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && predicates[7] && true && true) {
    return rewrite_487_42(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && predicates[7] && true && true) {
    return rewrite_487_43(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[12] && true && true && true) {
    return rewrite_487_44(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[23] && true && true && true && true) {
    return rewrite_487_45(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && predicates[31] && true && true && true) {
    return rewrite_487_46(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[12] && true && true && true) {
    return rewrite_487_47(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && predicates[7] && true && true) {
    return rewrite_487_48(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && predicates[7] && true && true) {
    return rewrite_487_49(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[12] && true && true && true) {
    return rewrite_487_50(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && predicates[31] && true && true && true) {
    return rewrite_487_51(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && predicates[7] && true && true) {
    return rewrite_487_52(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[23] && true && true && true && true) {
    return rewrite_487_53(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && predicates[31] && true && true && true) {
    return rewrite_487_54(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[12] && true && true && true) {
    return rewrite_487_55(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[12] && true && true && true) {
    return rewrite_487_56(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[12] && true && true && true) {
    return rewrite_487_57(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[12] && true && true && true) {
    return rewrite_487_58(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && predicates[7] && true && true) {
    return rewrite_487_59(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[12] && true && true && true) {
    return rewrite_487_60(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && predicates[31] && true && true && true) {
    return rewrite_487_61(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[23] && true && true && true && true) {
    return rewrite_487_62(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[12] && true && true && true) {
    return rewrite_487_63(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && predicates[7] && true && true) {
    return rewrite_487_64(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[12] && true && true && true) {
    return rewrite_487_65(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[23] && true && true && true && true) {
    return rewrite_487_66(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[12] && true && true && true) {
    return rewrite_487_67(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[12] && true && true && true) {
    return rewrite_487_68(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && predicates[31] && true && true && true) {
    return rewrite_487_69(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && predicates[7] && true && true) {
    return rewrite_487_70(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && predicates[7] && true && true) {
    return rewrite_487_71(node);
  }
  else {
    return node;
  }
}
Node rewrite_487(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[42] && predicates[35] && true && predicates[57] && true && true && predicates[53] && true) {
    return rewrite_571_0(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && predicates[25] && true && true && true && predicates[53] && true) {
    return rewrite_571_1(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && true && predicates[57] && true && true && predicates[53] && true) {
    return rewrite_571_2(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && true && predicates[4] && true && predicates[40] && true && true) {
    return rewrite_571_3(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && true && predicates[4] && true && predicates[40] && true && true) {
    return rewrite_571_4(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && predicates[25] && true && true && true && predicates[53] && true) {
    return rewrite_571_5(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && true && predicates[4] && predicates[60] && true && true && true) {
    return rewrite_571_6(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && true && predicates[4] && predicates[60] && true && true && true) {
    return rewrite_571_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_571(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[33] && predicates[39] && predicates[50] && true && predicates[22] && true && true && true) {
    return rewrite_645_0(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && predicates[46] && true && predicates[55] && true && true) {
    return rewrite_645_1(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && predicates[18] && true && true && predicates[49] && true && true) {
    return rewrite_645_2(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && predicates[9] && true && true && predicates[41] && true) {
    return rewrite_645_3(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && predicates[9] && true && true && predicates[41] && true) {
    return rewrite_645_4(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && predicates[46] && true && predicates[55] && true && true) {
    return rewrite_645_5(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && predicates[18] && true && true && predicates[49] && true && true) {
    return rewrite_645_6(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && predicates[50] && true && predicates[22] && true && true && true) {
    return rewrite_645_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_645(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[37] && true && true && predicates[20] && predicates[2] && predicates[17] && true && true) {
    return rewrite_650_0(node);
  }
  else if (predicates[30] && predicates[37] && predicates[36] && predicates[25] && true && predicates[47] && true && true && true) {
    return rewrite_650_1(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[53] && predicates[60] && true && predicates[10] && true && true) {
    return rewrite_650_2(node);
  }
  else if (predicates[30] && predicates[37] && true && true && predicates[20] && predicates[2] && true && predicates[56] && true) {
    return rewrite_650_3(node);
  }
  else if (predicates[30] && predicates[37] && predicates[36] && predicates[25] && predicates[15] && true && true && true && true) {
    return rewrite_650_4(node);
  }
  else if (predicates[30] && predicates[37] && true && true && predicates[20] && predicates[2] && predicates[17] && true && true) {
    return rewrite_650_5(node);
  }
  else if (predicates[30] && predicates[37] && predicates[36] && predicates[25] && true && predicates[47] && true && true && true) {
    return rewrite_650_6(node);
  }
  else if (predicates[30] && predicates[37] && predicates[36] && predicates[25] && predicates[15] && true && true && true && true) {
    return rewrite_650_7(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[53] && predicates[60] && predicates[16] && true && true && true) {
    return rewrite_650_8(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[53] && predicates[60] && true && predicates[10] && true && true) {
    return rewrite_650_9(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[53] && predicates[60] && predicates[16] && true && true && true) {
    return rewrite_650_10(node);
  }
  else if (predicates[30] && predicates[37] && true && true && predicates[20] && predicates[2] && true && predicates[56] && true) {
    return rewrite_650_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_650(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[33] && predicates[39] && predicates[50] && true && true && predicates[31] && true && true) {
    return rewrite_688_0(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && true && predicates[49] && true && predicates[31] && true && true) {
    return rewrite_688_1(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && true && true && predicates[31] && predicates[46] && true && true) {
    return rewrite_688_2(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && true && true && predicates[31] && true && predicates[41] && true) {
    return rewrite_688_3(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && true && predicates[49] && true && predicates[31] && true && true) {
    return rewrite_688_4(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && predicates[50] && true && true && predicates[31] && true && true) {
    return rewrite_688_5(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && true && true && predicates[31] && predicates[46] && true && true) {
    return rewrite_688_6(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && true && true && predicates[31] && true && predicates[41] && true) {
    return rewrite_688_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_688(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[37] && predicates[36] && true && true && predicates[38] && true && predicates[61] && true) {
    return rewrite_692_0(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[53] && true && predicates[38] && true && predicates[61] && true) {
    return rewrite_692_1(node);
  }
  else if (predicates[30] && predicates[37] && predicates[36] && true && true && predicates[38] && predicates[14] && true && true) {
    return rewrite_692_2(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && predicates[50] && true && true && predicates[53] && true && true) {
    return rewrite_692_3(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[53] && true && predicates[38] && predicates[14] && true && true) {
    return rewrite_692_4(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[4] && true && predicates[41] && true && predicates[20] && true) {
    return rewrite_692_5(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[4] && predicates[46] && true && true && predicates[20] && true) {
    return rewrite_692_6(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && predicates[49] && true && true && predicates[20] && true) {
    return rewrite_692_7(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && predicates[50] && true && true && true && predicates[20] && true) {
    return rewrite_692_8(node);
  }
  else if (predicates[30] && predicates[37] && predicates[36] && true && predicates[4] && predicates[46] && true && true && true) {
    return rewrite_692_9(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && predicates[49] && true && predicates[53] && true && true) {
    return rewrite_692_10(node);
  }
  else if (predicates[30] && predicates[37] && predicates[36] && true && predicates[4] && true && predicates[41] && true && true) {
    return rewrite_692_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_692(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[7] && true && true) {
    return rewrite_393_0(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[7] && true && true) {
    return rewrite_393_1(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[31] && true && true && true) {
    return rewrite_393_2(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[7] && true && true) {
    return rewrite_393_3(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[7] && true && true) {
    return rewrite_393_4(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[31] && true && true && true) {
    return rewrite_393_5(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[31] && true && true && true) {
    return rewrite_393_6(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[7] && true && true) {
    return rewrite_393_7(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[31] && true && true && true) {
    return rewrite_393_8(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[7] && true && true) {
    return rewrite_393_9(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[31] && true && true && true) {
    return rewrite_393_10(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[7] && true && true) {
    return rewrite_393_11(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[7] && true && true) {
    return rewrite_393_12(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[7] && true && true) {
    return rewrite_393_13(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[7] && true && true) {
    return rewrite_393_14(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[31] && true && true && true) {
    return rewrite_393_15(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[7] && true && true) {
    return rewrite_393_16(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[7] && true && true) {
    return rewrite_393_17(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[7] && true && true) {
    return rewrite_393_18(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && predicates[7] && true && true) {
    return rewrite_393_19(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[7] && true && true) {
    return rewrite_393_20(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[31] && true && true && true) {
    return rewrite_393_21(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && predicates[7] && true && true) {
    return rewrite_393_22(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && predicates[31] && true && true && true) {
    return rewrite_393_23(node);
  }
  else {
    return node;
  }
}
Node rewrite_393(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[26] && predicates[43] && true && predicates[49] && true && true && true && true) {
    return rewrite_514_0(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && predicates[50] && true && true && true && true && true) {
    return rewrite_514_1(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && predicates[41] && true && true && true) {
    return rewrite_514_2(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && predicates[49] && true && true && true && true) {
    return rewrite_514_3(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && predicates[14] && true && true && true) {
    return rewrite_514_4(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && predicates[13] && true && true) {
    return rewrite_514_5(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && predicates[52] && true) {
    return rewrite_514_6(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && predicates[49] && true && true && true && true) {
    return rewrite_514_7(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && predicates[45] && true && true && true) {
    return rewrite_514_8(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && predicates[46] && true && true && true && true) {
    return rewrite_514_9(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && predicates[52] && true) {
    return rewrite_514_10(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && predicates[45] && true && true && true) {
    return rewrite_514_11(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && predicates[49] && true && true && true && true) {
    return rewrite_514_12(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && predicates[61] && true && true) {
    return rewrite_514_13(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && predicates[45] && true && true && true) {
    return rewrite_514_14(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && predicates[14] && true && true && true) {
    return rewrite_514_15(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && predicates[45] && true && true && true) {
    return rewrite_514_16(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && predicates[14] && true && true && true) {
    return rewrite_514_17(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && predicates[13] && true && true) {
    return rewrite_514_18(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && predicates[14] && true && true && true) {
    return rewrite_514_19(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && predicates[46] && true && true && true && true) {
    return rewrite_514_20(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && predicates[13] && true && true) {
    return rewrite_514_21(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && predicates[61] && true && true) {
    return rewrite_514_22(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && predicates[41] && true && true && true) {
    return rewrite_514_23(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && predicates[41] && true && true && true) {
    return rewrite_514_24(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && predicates[46] && true && true && true && true) {
    return rewrite_514_25(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && predicates[50] && true && true && true && true && true) {
    return rewrite_514_26(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && predicates[61] && true && true) {
    return rewrite_514_27(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && predicates[46] && true && true && true && true) {
    return rewrite_514_28(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && predicates[52] && true) {
    return rewrite_514_29(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && predicates[13] && true && true) {
    return rewrite_514_30(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && predicates[50] && true && true && true && true && true) {
    return rewrite_514_31(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && predicates[41] && true && true && true) {
    return rewrite_514_32(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && predicates[50] && true && true && true && true && true) {
    return rewrite_514_33(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && predicates[52] && true) {
    return rewrite_514_34(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && predicates[61] && true && true) {
    return rewrite_514_35(node);
  }
  else {
    return node;
  }
}
Node rewrite_514(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && predicates[52] && node[0][0] == node[0][2][2][0]) {
    return rewrite_520_0(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && predicates[46] && true && true && true && node[0][1][0][0] == node[0][2]) {
    return rewrite_520_1(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && predicates[13] && true && node[0][1][2][0] == node[0][2]) {
    return rewrite_520_2(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && predicates[49] && true && true && node[0][0][1][0] == node[0][1] && true) {
    return rewrite_520_3(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && predicates[49] && true && true && true && node[0][0][1][0] == node[0][2]) {
    return rewrite_520_4(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && predicates[52] && node[0][0] == node[0][2][2][0]) {
    return rewrite_520_5(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && predicates[14] && node[0][1] == node[0][2][0][0] && true && true) {
    return rewrite_520_6(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && predicates[45] && true && node[0][0][2][0] == node[0][1] && true) {
    return rewrite_520_7(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && predicates[49] && true && true && node[0][0][1][0] == node[0][1] && true) {
    return rewrite_520_8(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && predicates[13] && node[0][0] == node[0][1][2][0] && true) {
    return rewrite_520_9(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && predicates[61] && node[0][1] == node[0][2][1][0] && true) {
    return rewrite_520_10(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && predicates[52] && node[0][1] == node[0][2][2][0]) {
    return rewrite_520_11(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && predicates[45] && true && true && node[0][0][2][0] == node[0][2]) {
    return rewrite_520_12(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && predicates[14] && node[0][1] == node[0][2][0][0] && true && true) {
    return rewrite_520_13(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && predicates[14] && node[0][0] == node[0][2][0][0] && true && true) {
    return rewrite_520_14(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && predicates[45] && true && true && node[0][0][2][0] == node[0][2]) {
    return rewrite_520_15(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && predicates[41] && true && true && node[0][1][1][0] == node[0][2]) {
    return rewrite_520_16(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && predicates[52] && node[0][1] == node[0][2][2][0]) {
    return rewrite_520_17(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && predicates[45] && true && node[0][0][2][0] == node[0][1] && true) {
    return rewrite_520_18(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && predicates[41] && node[0][0] == node[0][1][1][0] && true && true) {
    return rewrite_520_19(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && predicates[50] && true && true && true && node[0][0][0][0] == node[0][1] && true) {
    return rewrite_520_20(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && predicates[41] && node[0][0] == node[0][1][1][0] && true && true) {
    return rewrite_520_21(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && predicates[50] && true && true && true && true && node[0][0][0][0] == node[0][2]) {
    return rewrite_520_22(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && predicates[50] && true && true && true && true && node[0][0][0][0] == node[0][2]) {
    return rewrite_520_23(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && predicates[46] && node[0][0] == node[0][1][0][0] && true && true && true) {
    return rewrite_520_24(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && predicates[41] && true && true && node[0][1][1][0] == node[0][2]) {
    return rewrite_520_25(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && predicates[46] && true && true && true && node[0][1][0][0] == node[0][2]) {
    return rewrite_520_26(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && predicates[49] && true && true && true && node[0][0][1][0] == node[0][2]) {
    return rewrite_520_27(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && predicates[61] && node[0][1] == node[0][2][1][0] && true) {
    return rewrite_520_28(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && predicates[13] && node[0][0] == node[0][1][2][0] && true) {
    return rewrite_520_29(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && predicates[14] && node[0][0] == node[0][2][0][0] && true && true) {
    return rewrite_520_30(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && predicates[13] && true && node[0][1][2][0] == node[0][2]) {
    return rewrite_520_31(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && predicates[50] && true && true && true && node[0][0][0][0] == node[0][1] && true) {
    return rewrite_520_32(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && predicates[61] && node[0][0] == node[0][2][1][0] && true) {
    return rewrite_520_33(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && predicates[46] && node[0][0] == node[0][1][0][0] && true && true && true) {
    return rewrite_520_34(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && predicates[61] && node[0][0] == node[0][2][1][0] && true) {
    return rewrite_520_35(node);
  }
  else {
    return node;
  }
}
Node rewrite_520(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[26] && true && true && predicates[7] && true && predicates[61] && true) {
    return rewrite_402_0(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && predicates[50] && true && true && true && true) {
    return rewrite_402_1(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && predicates[49] && true && true && true) {
    return rewrite_402_2(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[7] && true && predicates[61] && true) {
    return rewrite_402_3(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && predicates[50] && true && true && true && true) {
    return rewrite_402_4(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && predicates[41] && true && true) {
    return rewrite_402_5(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && predicates[49] && true && true && true) {
    return rewrite_402_6(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && predicates[46] && true && true && true) {
    return rewrite_402_7(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && predicates[41] && true && true) {
    return rewrite_402_8(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[7] && predicates[14] && true && true) {
    return rewrite_402_9(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[7] && predicates[14] && true && true) {
    return rewrite_402_10(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && predicates[46] && true && true && true) {
    return rewrite_402_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_402(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[42] && predicates[35] && true && predicates[57] && true && true && true) {
    return rewrite_424_0(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[4] && true && predicates[40] && true && true) {
    return rewrite_424_1(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[4] && predicates[60] && true && true && true) {
    return rewrite_424_2(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && predicates[25] && true && true && true && true) {
    return rewrite_424_3(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[4] && true && predicates[40] && true && true) {
    return rewrite_424_4(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && true && predicates[57] && true && true && true) {
    return rewrite_424_5(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && predicates[25] && true && true && true && true) {
    return rewrite_424_6(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[4] && predicates[60] && true && true && true) {
    return rewrite_424_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_424(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && true && true && true && true) {
    return rewrite_448_0(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[53] && predicates[29] && true && true && true) {
    return rewrite_448_1(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && true && true && true && true) {
    return rewrite_448_2(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && true && true && true && true) {
    return rewrite_448_3(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && true && true && true && true) {
    return rewrite_448_4(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[53] && predicates[29] && true && true && true) {
    return rewrite_448_5(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && true && true && true && true) {
    return rewrite_448_6(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && predicates[24] && true && true && true && true) {
    return rewrite_448_7(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[53] && predicates[29] && true && true && true) {
    return rewrite_448_8(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[53] && predicates[29] && true && true && true) {
    return rewrite_448_9(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[53] && predicates[29] && true && true && true) {
    return rewrite_448_10(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[53] && predicates[29] && true && true && true) {
    return rewrite_448_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_448(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[37] && predicates[36] && predicates[25] && true && true && true && true) {
    return rewrite_469_0(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[53] && predicates[60] && true && true && true) {
    return rewrite_469_1(node);
  }
  else if (predicates[30] && predicates[37] && true && true && predicates[20] && predicates[2] && true && true) {
    return rewrite_469_2(node);
  }
  else if (predicates[30] && predicates[37] && true && true && predicates[20] && predicates[2] && true && true) {
    return rewrite_469_3(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[53] && predicates[60] && true && true && true) {
    return rewrite_469_4(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[53] && predicates[60] && true && true && true) {
    return rewrite_469_5(node);
  }
  else if (predicates[30] && predicates[37] && predicates[36] && predicates[25] && true && true && true && true) {
    return rewrite_469_6(node);
  }
  else if (predicates[30] && predicates[37] && predicates[36] && predicates[25] && true && true && true && true) {
    return rewrite_469_7(node);
  }
  else if (predicates[30] && predicates[37] && predicates[36] && predicates[25] && true && true && true && true) {
    return rewrite_469_8(node);
  }
  else if (predicates[30] && predicates[37] && true && true && predicates[20] && predicates[2] && true && true) {
    return rewrite_469_9(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[53] && predicates[60] && true && true && true) {
    return rewrite_469_10(node);
  }
  else if (predicates[30] && predicates[37] && true && true && predicates[20] && predicates[2] && true && true) {
    return rewrite_469_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_469(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[33] && predicates[39] && predicates[18] && true && true && true && true) {
    return rewrite_470_0(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && predicates[9] && true && true && true) {
    return rewrite_470_1(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && true && predicates[55] && true && true) {
    return rewrite_470_2(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && true && predicates[55] && true && true) {
    return rewrite_470_3(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && true && predicates[22] && true && true && true) {
    return rewrite_470_4(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && predicates[18] && true && true && true && true) {
    return rewrite_470_5(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && true && predicates[22] && true && true && true) {
    return rewrite_470_6(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && predicates[9] && true && true && true) {
    return rewrite_470_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_470(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[33] && predicates[39] && true && true && predicates[31] && true && true) {
    return rewrite_497_0(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && true && true && predicates[31] && true && true) {
    return rewrite_497_1(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && true && true && predicates[31] && true && true) {
    return rewrite_497_2(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && true && true && predicates[31] && true && true) {
    return rewrite_497_3(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && true && true && predicates[31] && true && true) {
    return rewrite_497_4(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && true && true && predicates[31] && true && true) {
    return rewrite_497_5(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && true && true && predicates[31] && true && true) {
    return rewrite_497_6(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && true && true && predicates[31] && true && true) {
    return rewrite_497_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_497(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[37] && predicates[35] && true && true && true && predicates[20] && true) {
    return rewrite_515_0(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && true && predicates[53] && true && true) {
    return rewrite_515_1(node);
  }
  else if (predicates[30] && predicates[37] && predicates[36] && true && true && predicates[38] && true && true) {
    return rewrite_515_2(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && true && predicates[53] && true && true) {
    return rewrite_515_3(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[53] && true && predicates[38] && true && true) {
    return rewrite_515_4(node);
  }
  else if (predicates[30] && predicates[37] && predicates[36] && true && predicates[4] && true && true && true) {
    return rewrite_515_5(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[53] && true && predicates[38] && true && true) {
    return rewrite_515_6(node);
  }
  else if (predicates[30] && predicates[37] && predicates[36] && true && predicates[4] && true && true && true) {
    return rewrite_515_7(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && true && true && predicates[20] && true) {
    return rewrite_515_8(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[4] && true && true && predicates[20] && true) {
    return rewrite_515_9(node);
  }
  else if (predicates[30] && predicates[37] && predicates[36] && true && true && predicates[38] && true && true) {
    return rewrite_515_10(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[4] && true && true && predicates[20] && true) {
    return rewrite_515_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_515(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[33] && true && predicates[23] && true && predicates[41] && true && true) {
    return rewrite_516_0(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[23] && predicates[46] && true && true && true) {
    return rewrite_516_1(node);
  }
  else if (predicates[30] && predicates[33] && predicates[43] && true && predicates[49] && true && true && true) {
    return rewrite_516_2(node);
  }
  else if (predicates[30] && predicates[33] && predicates[43] && true && true && predicates[45] && true && true) {
    return rewrite_516_3(node);
  }
  else if (predicates[30] && predicates[33] && predicates[43] && predicates[50] && true && true && true && true) {
    return rewrite_516_4(node);
  }
  else if (predicates[30] && predicates[33] && predicates[43] && true && predicates[49] && true && true && true) {
    return rewrite_516_5(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[23] && true && true && predicates[13] && true) {
    return rewrite_516_6(node);
  }
  else if (predicates[30] && predicates[33] && predicates[43] && true && true && predicates[45] && true && true) {
    return rewrite_516_7(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[23] && true && true && predicates[13] && true) {
    return rewrite_516_8(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[23] && predicates[46] && true && true && true) {
    return rewrite_516_9(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[23] && true && predicates[41] && true && true) {
    return rewrite_516_10(node);
  }
  else if (predicates[30] && predicates[33] && predicates[43] && predicates[50] && true && true && true && true) {
    return rewrite_516_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_516(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[37] && predicates[35] && true && predicates[49] && true && true && true) {
    return rewrite_530_0(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[4] && true && predicates[41] && true && true) {
    return rewrite_530_1(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && predicates[49] && true && true && true) {
    return rewrite_530_2(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && predicates[50] && true && true && true && true) {
    return rewrite_530_3(node);
  }
  else if (predicates[30] && predicates[37] && true && true && predicates[38] && predicates[14] && true && true) {
    return rewrite_530_4(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[4] && predicates[46] && true && true && true) {
    return rewrite_530_5(node);
  }
  else if (predicates[30] && predicates[37] && true && true && predicates[38] && true && predicates[61] && true) {
    return rewrite_530_6(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[4] && predicates[46] && true && true && true) {
    return rewrite_530_7(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[4] && true && predicates[41] && true && true) {
    return rewrite_530_8(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && predicates[50] && true && true && true && true) {
    return rewrite_530_9(node);
  }
  else if (predicates[30] && predicates[37] && true && true && predicates[38] && predicates[14] && true && true) {
    return rewrite_530_10(node);
  }
  else if (predicates[30] && predicates[37] && true && true && predicates[38] && true && predicates[61] && true) {
    return rewrite_530_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_530(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[42] && predicates[36] && true && predicates[4] && true && true) {
    return rewrite_426_0(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && true && true && predicates[53] && true) {
    return rewrite_426_1(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && true && predicates[4] && true && true) {
    return rewrite_426_2(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && true && true && predicates[53] && true) {
    return rewrite_426_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_426(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[33] && predicates[39] && true && predicates[49] && true && true) {
    return rewrite_467_0(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && predicates[50] && true && true && true) {
    return rewrite_467_1(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && true && predicates[41] && true) {
    return rewrite_467_2(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && predicates[46] && true && true) {
    return rewrite_467_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_467(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && true) {
    return rewrite_479_0(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && true) {
    return rewrite_479_1(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && true) {
    return rewrite_479_2(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && true) {
    return rewrite_479_3(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && true) {
    return rewrite_479_4(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && true) {
    return rewrite_479_5(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && true) {
    return rewrite_479_6(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && true) {
    return rewrite_479_7(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && true) {
    return rewrite_479_8(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && true) {
    return rewrite_479_9(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && true) {
    return rewrite_479_10(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && true) {
    return rewrite_479_11(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && true) {
    return rewrite_479_12(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && true) {
    return rewrite_479_13(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && true) {
    return rewrite_479_14(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && true) {
    return rewrite_479_15(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && true) {
    return rewrite_479_16(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && true) {
    return rewrite_479_17(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && true) {
    return rewrite_479_18(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && true) {
    return rewrite_479_19(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && true) {
    return rewrite_479_20(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && true) {
    return rewrite_479_21(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && true) {
    return rewrite_479_22(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && true) {
    return rewrite_479_23(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && true) {
    return rewrite_479_24(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && true) {
    return rewrite_479_25(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && true) {
    return rewrite_479_26(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && true) {
    return rewrite_479_27(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && true) {
    return rewrite_479_28(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && true) {
    return rewrite_479_29(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && true) {
    return rewrite_479_30(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && true) {
    return rewrite_479_31(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[23] && true && true && true && true) {
    return rewrite_479_32(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && true) {
    return rewrite_479_33(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[12] && true && true && true) {
    return rewrite_479_34(node);
  }
  else if (predicates[30] && predicates[26] && predicates[43] && true && true && true && true && true) {
    return rewrite_479_35(node);
  }
  else {
    return node;
  }
}
Node rewrite_479(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[26] && true && true && predicates[7] && true && true) {
    return rewrite_373_0(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[7] && true && true) {
    return rewrite_373_1(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && true) {
    return rewrite_373_2(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && true) {
    return rewrite_373_3(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && true) {
    return rewrite_373_4(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[7] && true && true) {
    return rewrite_373_5(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && true) {
    return rewrite_373_6(node);
  }
  else if (predicates[30] && predicates[26] && true && true && predicates[7] && true && true) {
    return rewrite_373_7(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && true) {
    return rewrite_373_8(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && true) {
    return rewrite_373_9(node);
  }
  else if (predicates[30] && predicates[26] && true && predicates[31] && true && true && true) {
    return rewrite_373_10(node);
  }
  else if (predicates[30] && predicates[26] && predicates[39] && true && true && true && true) {
    return rewrite_373_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_373(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[33] && predicates[43] && true && true && true && true) {
    return rewrite_481_0(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[23] && true && true && true) {
    return rewrite_481_1(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[23] && true && true && true) {
    return rewrite_481_2(node);
  }
  else if (predicates[30] && predicates[33] && predicates[43] && true && true && true && true) {
    return rewrite_481_3(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[23] && true && true && true) {
    return rewrite_481_4(node);
  }
  else if (predicates[30] && predicates[33] && predicates[43] && true && true && true && true) {
    return rewrite_481_5(node);
  }
  else if (predicates[30] && predicates[33] && predicates[43] && true && true && true && true) {
    return rewrite_481_6(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[23] && true && true && true) {
    return rewrite_481_7(node);
  }
  else if (predicates[30] && predicates[33] && predicates[43] && true && true && true && true) {
    return rewrite_481_8(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[23] && true && true && true) {
    return rewrite_481_9(node);
  }
  else if (predicates[30] && predicates[33] && predicates[43] && true && true && true && true) {
    return rewrite_481_10(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[23] && true && true && true) {
    return rewrite_481_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_481(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[42] && predicates[36] && true && predicates[53] && true) {
    return rewrite_490_0(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && true && predicates[53] && true) {
    return rewrite_490_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_490(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[37] && true && predicates[4] && true && true && true) {
    return rewrite_711_0(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && true && true && true) {
    return rewrite_711_1(node);
  }
  else if (predicates[30] && predicates[37] && true && true && predicates[38] && true && true) {
    return rewrite_711_2(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && true && true && true) {
    return rewrite_711_3(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && true && true && true) {
    return rewrite_711_4(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[4] && true && true && true) {
    return rewrite_711_5(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[4] && true && true && true) {
    return rewrite_711_6(node);
  }
  else if (predicates[30] && predicates[37] && predicates[35] && true && true && true && true) {
    return rewrite_711_7(node);
  }
  else if (predicates[30] && predicates[37] && true && true && predicates[38] && true && true) {
    return rewrite_711_8(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[4] && true && true && true) {
    return rewrite_711_9(node);
  }
  else if (predicates[30] && predicates[37] && true && true && predicates[38] && true && true) {
    return rewrite_711_10(node);
  }
  else if (predicates[30] && predicates[37] && true && true && predicates[38] && true && true) {
    return rewrite_711_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_711(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[33] && predicates[39] && true && true && true) {
    return rewrite_418_0(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && true && true) {
    return rewrite_418_1(node);
  }
  else if (predicates[30] && predicates[33] && predicates[39] && true && true && true) {
    return rewrite_418_2(node);
  }
  else if (predicates[30] && predicates[33] && true && predicates[31] && true && true) {
    return rewrite_418_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_418(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[37] && true && true && predicates[20] && true) {
    return rewrite_435_0(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[53] && true && true) {
    return rewrite_435_1(node);
  }
  else if (predicates[30] && predicates[37] && true && true && predicates[20] && true) {
    return rewrite_435_2(node);
  }
  else if (predicates[30] && predicates[37] && predicates[36] && true && true && true) {
    return rewrite_435_3(node);
  }
  else if (predicates[30] && predicates[37] && predicates[36] && true && true && true) {
    return rewrite_435_4(node);
  }
  else if (predicates[30] && predicates[37] && true && predicates[53] && true && true) {
    return rewrite_435_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_435(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[42] && true && predicates[4] && true && true) {
    return rewrite_529_0(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && true && true && true) {
    return rewrite_529_1(node);
  }
  else if (predicates[30] && predicates[42] && predicates[35] && true && true && true) {
    return rewrite_529_2(node);
  }
  else if (predicates[30] && predicates[42] && true && predicates[4] && true && true) {
    return rewrite_529_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_529(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[42] && true && predicates[53] && true) {
    return rewrite_385_0(node);
  }
  else if (predicates[30] && predicates[42] && predicates[36] && true && true) {
    return rewrite_385_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_385(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[37] && true && true && true) {
    return rewrite_455_0(node);
  }
  else if (predicates[30] && predicates[37] && true && true && true) {
    return rewrite_455_1(node);
  }
  else if (predicates[30] && predicates[37] && true && true && true) {
    return rewrite_455_2(node);
  }
  else if (predicates[30] && predicates[37] && true && true && true) {
    return rewrite_455_3(node);
  }
  else if (predicates[30] && predicates[37] && true && true && true) {
    return rewrite_455_4(node);
  }
  else if (predicates[30] && predicates[37] && true && true && true) {
    return rewrite_455_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_455(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[26] && true && true && true) {
    return rewrite_708_0(node);
  }
  else if (predicates[30] && predicates[26] && true && true && true) {
    return rewrite_708_1(node);
  }
  else if (predicates[30] && predicates[26] && true && true && true) {
    return rewrite_708_2(node);
  }
  else if (predicates[30] && predicates[26] && true && true && true) {
    return rewrite_708_3(node);
  }
  else if (predicates[30] && predicates[26] && true && true && true) {
    return rewrite_708_4(node);
  }
  else if (predicates[30] && predicates[26] && true && true && true) {
    return rewrite_708_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_708(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[42] && true && true) {
    return rewrite_423_0(node);
  }
  else if (predicates[30] && predicates[42] && true && true) {
    return rewrite_423_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_423(TNode node, const bool* predicates) {
  if (predicates[30] && predicates[33] && true && true) {
    return rewrite_710_0(node);
  }
  else if (predicates[30] && predicates[33] && true && true) {
    return rewrite_710_1(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBVSpecialRewriter::RewriteBITVECTOR_NOT(TNode node,  bool prewrite) {
  bool predicates[62];
  for (int i = 0; i < 62; i++) {
    predicates[i] = false;
  }
  predicates[30] = node.getKind() == kind::BITVECTOR_NOT && node.getNumChildren() == 1;
  if (node.getNumChildren() > 0) {
    predicates[26] = node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 3;
    predicates[33] = node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2;
    predicates[37] = node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 3;
    predicates[42] = node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2;
    if (node[0].getNumChildren() > 2) {
      predicates[7] = node[0][2].getKind() == kind::BITVECTOR_AND && node[0][2].getNumChildren() == 2;
      predicates[12] = node[0][2].getKind() == kind::BITVECTOR_AND && node[0][2].getNumChildren() == 3;
      predicates[20] = node[0][2].getKind() == kind::BITVECTOR_NOT && node[0][2].getNumChildren() == 1;
      predicates[38] = node[0][2].getKind() == kind::BITVECTOR_OR && node[0][2].getNumChildren() == 2;
      if (node[0][2].getNumChildren() > 1) {
        predicates[61] = node[0][2][1].getKind() == kind::BITVECTOR_NOT && node[0][2][1].getNumChildren() == 1;
        if (node[0][2][1].getNumChildren() > 0) {
          predicates[48] = node[0][2][1][0].getKind() == kind::BITVECTOR_AND && node[0][2][1][0].getNumChildren() == 2;
        }
      }
      if (node[0][2].getNumChildren() > 0) {
        predicates[2] = node[0][2][0].getKind() == kind::BITVECTOR_AND && node[0][2][0].getNumChildren() == 2;
        predicates[14] = node[0][2][0].getKind() == kind::BITVECTOR_NOT && node[0][2][0].getNumChildren() == 1;
        if (node[0][2][0].getNumChildren() > 1) {
          predicates[56] = node[0][2][0][1].getKind() == kind::BITVECTOR_NOT && node[0][2][0][1].getNumChildren() == 1;
        }
        if (node[0][2][0].getNumChildren() > 0) {
          predicates[17] = node[0][2][0][0].getKind() == kind::BITVECTOR_NOT && node[0][2][0][0].getNumChildren() == 1;
          predicates[21] = node[0][2][0][0].getKind() == kind::BITVECTOR_AND && node[0][2][0][0].getNumChildren() == 2;
        }
      }
      if (node[0][2].getNumChildren() > 2) {
        predicates[52] = node[0][2][2].getKind() == kind::BITVECTOR_NOT && node[0][2][2].getNumChildren() == 1;
        if (node[0][2][2].getNumChildren() > 0) {
          predicates[27] = node[0][2][2][0].getKind() == kind::BITVECTOR_AND && node[0][2][2][0].getNumChildren() == 2;
        }
      }
    }
    if (node[0].getNumChildren() > 0) {
      predicates[35] = node[0][0].getKind() == kind::BITVECTOR_OR && node[0][0].getNumChildren() == 2;
      predicates[36] = node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1;
      predicates[39] = node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 2;
      predicates[43] = node[0][0].getKind() == kind::BITVECTOR_AND && node[0][0].getNumChildren() == 3;
      if (node[0][0].getNumChildren() > 1) {
        predicates[22] = node[0][0][1].getKind() == kind::BITVECTOR_OR && node[0][0][1].getNumChildren() == 2;
        predicates[49] = node[0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][1].getNumChildren() == 1;
        predicates[57] = node[0][0][1].getKind() == kind::BITVECTOR_AND && node[0][0][1].getNumChildren() == 2;
        if (node[0][0][1].getNumChildren() > 0) {
          predicates[0] = node[0][0][1][0].getKind() == kind::BITVECTOR_AND && node[0][0][1][0].getNumChildren() == 2;
          predicates[19] = node[0][0][1][0].getKind() == kind::BITVECTOR_OR && node[0][0][1][0].getNumChildren() == 3;
        }
        if (node[0][0][1].getNumChildren() > 1) {
          predicates[54] = node[0][0][1][1].getKind() == kind::BITVECTOR_AND && node[0][0][1][1].getNumChildren() == 2;
        }
      }
      if (node[0][0].getNumChildren() > 2) {
        predicates[45] = node[0][0][2].getKind() == kind::BITVECTOR_NOT && node[0][0][2].getNumChildren() == 1;
        if (node[0][0][2].getNumChildren() > 0) {
          predicates[8] = node[0][0][2][0].getKind() == kind::BITVECTOR_AND && node[0][0][2][0].getNumChildren() == 2;
        }
      }
      if (node[0][0].getNumChildren() > 0) {
        predicates[18] = node[0][0][0].getKind() == kind::BITVECTOR_OR && node[0][0][0].getNumChildren() == 2;
        predicates[24] = node[0][0][0].getKind() == kind::BITVECTOR_OR && node[0][0][0].getNumChildren() == 3;
        predicates[25] = node[0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0].getNumChildren() == 2;
        predicates[50] = node[0][0][0].getKind() == kind::BITVECTOR_NOT && node[0][0][0].getNumChildren() == 1;
        if (node[0][0][0].getNumChildren() > 1) {
          predicates[47] = node[0][0][0][1].getKind() == kind::BITVECTOR_NOT && node[0][0][0][1].getNumChildren() == 1;
          predicates[59] = node[0][0][0][1].getKind() == kind::BITVECTOR_AND && node[0][0][0][1].getNumChildren() == 2;
        }
        if (node[0][0][0].getNumChildren() > 0) {
          predicates[1] = node[0][0][0][0].getKind() == kind::BITVECTOR_AND && node[0][0][0][0].getNumChildren() == 2;
          predicates[15] = node[0][0][0][0].getKind() == kind::BITVECTOR_NOT && node[0][0][0][0].getNumChildren() == 1;
          predicates[44] = node[0][0][0][0].getKind() == kind::BITVECTOR_OR && node[0][0][0][0].getNumChildren() == 3;
        }
        if (node[0][0][0].getNumChildren() > 2) {
          predicates[11] = node[0][0][0][2].getKind() == kind::BITVECTOR_AND && node[0][0][0][2].getNumChildren() == 2;
        }
      }
    }
    if (node[0].getNumChildren() > 1) {
      predicates[4] = node[0][1].getKind() == kind::BITVECTOR_OR && node[0][1].getNumChildren() == 2;
      predicates[23] = node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 3;
      predicates[31] = node[0][1].getKind() == kind::BITVECTOR_AND && node[0][1].getNumChildren() == 2;
      predicates[53] = node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1;
      if (node[0][1].getNumChildren() > 2) {
        predicates[13] = node[0][1][2].getKind() == kind::BITVECTOR_NOT && node[0][1][2].getNumChildren() == 1;
        if (node[0][1][2].getNumChildren() > 0) {
          predicates[34] = node[0][1][2][0].getKind() == kind::BITVECTOR_AND && node[0][1][2][0].getNumChildren() == 2;
        }
      }
      if (node[0][1].getNumChildren() > 1) {
        predicates[40] = node[0][1][1].getKind() == kind::BITVECTOR_AND && node[0][1][1].getNumChildren() == 2;
        predicates[41] = node[0][1][1].getKind() == kind::BITVECTOR_NOT && node[0][1][1].getNumChildren() == 1;
        predicates[55] = node[0][1][1].getKind() == kind::BITVECTOR_OR && node[0][1][1].getNumChildren() == 2;
        if (node[0][1][1].getNumChildren() > 1) {
          predicates[58] = node[0][1][1][1].getKind() == kind::BITVECTOR_AND && node[0][1][1][1].getNumChildren() == 2;
        }
        if (node[0][1][1].getNumChildren() > 0) {
          predicates[5] = node[0][1][1][0].getKind() == kind::BITVECTOR_OR && node[0][1][1][0].getNumChildren() == 3;
          predicates[32] = node[0][1][1][0].getKind() == kind::BITVECTOR_AND && node[0][1][1][0].getNumChildren() == 2;
        }
      }
      if (node[0][1].getNumChildren() > 0) {
        predicates[9] = node[0][1][0].getKind() == kind::BITVECTOR_OR && node[0][1][0].getNumChildren() == 2;
        predicates[29] = node[0][1][0].getKind() == kind::BITVECTOR_OR && node[0][1][0].getNumChildren() == 3;
        predicates[46] = node[0][1][0].getKind() == kind::BITVECTOR_NOT && node[0][1][0].getNumChildren() == 1;
        predicates[60] = node[0][1][0].getKind() == kind::BITVECTOR_AND && node[0][1][0].getNumChildren() == 2;
        if (node[0][1][0].getNumChildren() > 1) {
          predicates[6] = node[0][1][0][1].getKind() == kind::BITVECTOR_AND && node[0][1][0][1].getNumChildren() == 2;
          predicates[10] = node[0][1][0][1].getKind() == kind::BITVECTOR_NOT && node[0][1][0][1].getNumChildren() == 1;
        }
        if (node[0][1][0].getNumChildren() > 2) {
          predicates[3] = node[0][1][0][2].getKind() == kind::BITVECTOR_AND && node[0][1][0][2].getNumChildren() == 2;
        }
        if (node[0][1][0].getNumChildren() > 0) {
          predicates[16] = node[0][1][0][0].getKind() == kind::BITVECTOR_NOT && node[0][1][0][0].getNumChildren() == 1;
          predicates[28] = node[0][1][0][0].getKind() == kind::BITVECTOR_AND && node[0][1][0][0].getNumChildren() == 2;
          predicates[51] = node[0][1][0][0].getKind() == kind::BITVECTOR_OR && node[0][1][0][0].getNumChildren() == 3;
        }
      }
    }
  }
  Node response;
  response = rewrite_662(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_675(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_689(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_545(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_601(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_617(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_621(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_647(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_649(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_683(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_691(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_694(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_487(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_571(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_645(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_650(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_688(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_692(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_393(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_514(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_520(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_402(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_424(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_448(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_469(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_470(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_497(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_515(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_516(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_530(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_426(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_467(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_479(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_373(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_481(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_490(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_711(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_418(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_435(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_529(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_385(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_455(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_708(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_423(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_710(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
