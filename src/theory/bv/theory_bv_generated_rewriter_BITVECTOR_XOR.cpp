#include "options/bv_options.h"
#include "options/main_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;

Node rewrite_703_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][0][1][1]);
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][1][1][1]);
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][1][1][1]);
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1][1]);
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][0][1][1]);
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][1][1][1]);
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][0][1][1]);
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][0][1][1]);
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][1][1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1][1]);
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][0][1][1]);
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][1][1][1]);
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][0][1][1]);
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_24(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_25(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_26(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][1][1][1]);
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_27(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][0][1][1]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_28(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_29(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_30(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_31(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1][1]);
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_32(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_33(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1][1]);
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_34(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1][1]);
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_35(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_36(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_37(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_38(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][0][1][1]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_39(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1][1]);
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_40(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][1][1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_41(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_42(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][0][1][1]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_43(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_44(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_45(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][0][1][1]);
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_46(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][1][1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_47(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_48(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_49(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1][1]);
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_50(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][1][1][1]);
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_51(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][0][1][1]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_52(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_53(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_54(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][1][1][1]);
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_55(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_56(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_57(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][1][1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_58(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_59(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1][1]);
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_60(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][1][1][1]);
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_61(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][0][1][1]);
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_62(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_703_63(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[703]++;
  return utils::mkSpecialFixedWidth(children, 703);
}
Node rewrite_511_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1][1]);
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][0][1]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][1][1][1]);
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][1][1][1]);
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1][1]);
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][0][1][1]);
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][0][1]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1][1]);
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][0][1][1]);
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_24(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_25(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_26(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_27(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_28(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_29(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_30(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_511_31(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1][1]);
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[511]++;
  return utils::mkSpecialFixedWidth(children, 511);
}
Node rewrite_673_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[673]++;
  return utils::mkSpecialFixedWidth(children, 673);
}
Node rewrite_673_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1][1]);
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[673]++;
  return utils::mkSpecialFixedWidth(children, 673);
}
Node rewrite_673_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[673]++;
  return utils::mkSpecialFixedWidth(children, 673);
}
Node rewrite_673_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[673]++;
  return utils::mkSpecialFixedWidth(children, 673);
}
Node rewrite_673_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][0][1]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[673]++;
  return utils::mkSpecialFixedWidth(children, 673);
}
Node rewrite_673_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[673]++;
  return utils::mkSpecialFixedWidth(children, 673);
}
Node rewrite_673_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[673]++;
  return utils::mkSpecialFixedWidth(children, 673);
}
Node rewrite_673_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][0][1][1]);
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[673]++;
  return utils::mkSpecialFixedWidth(children, 673);
}
Node rewrite_673_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[673]++;
  return utils::mkSpecialFixedWidth(children, 673);
}
Node rewrite_673_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[673]++;
  return utils::mkSpecialFixedWidth(children, 673);
}
Node rewrite_673_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[673]++;
  return utils::mkSpecialFixedWidth(children, 673);
}
Node rewrite_673_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[673]++;
  return utils::mkSpecialFixedWidth(children, 673);
}
Node rewrite_673_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1][1]);
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[673]++;
  return utils::mkSpecialFixedWidth(children, 673);
}
Node rewrite_673_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[673]++;
  return utils::mkSpecialFixedWidth(children, 673);
}
Node rewrite_673_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][1][1][1]);
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[673]++;
  return utils::mkSpecialFixedWidth(children, 673);
}
Node rewrite_673_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[673]++;
  return utils::mkSpecialFixedWidth(children, 673);
}
Node rewrite_499_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[499]++;
  return utils::mkSpecialFixedWidth(children, 499);
}
Node rewrite_499_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[499]++;
  return utils::mkSpecialFixedWidth(children, 499);
}
Node rewrite_499_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[499]++;
  return utils::mkSpecialFixedWidth(children, 499);
}
Node rewrite_499_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[499]++;
  return utils::mkSpecialFixedWidth(children, 499);
}
Node rewrite_480_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[480]++;
  return utils::mkSpecialFixedWidth(children, 480);
}
Node rewrite_480_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[480]++;
  return utils::mkSpecialFixedWidth(children, 480);
}
Node rewrite_480_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[480]++;
  return utils::mkSpecialFixedWidth(children, 480);
}
Node rewrite_480_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[480]++;
  return utils::mkSpecialFixedWidth(children, 480);
}
Node rewrite_480_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[480]++;
  return utils::mkSpecialFixedWidth(children, 480);
}
Node rewrite_480_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[480]++;
  return utils::mkSpecialFixedWidth(children, 480);
}
Node rewrite_480_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[480]++;
  return utils::mkSpecialFixedWidth(children, 480);
}
Node rewrite_480_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[480]++;
  return utils::mkSpecialFixedWidth(children, 480);
}
Node rewrite_493_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[493]++;
  return utils::mkSpecialFixedWidth(children, 493);
}
Node rewrite_493_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[493]++;
  return utils::mkSpecialFixedWidth(children, 493);
}
Node rewrite_493_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[493]++;
  return utils::mkSpecialFixedWidth(children, 493);
}
Node rewrite_493_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[493]++;
  return utils::mkSpecialFixedWidth(children, 493);
}
Node rewrite_493_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[493]++;
  return utils::mkSpecialFixedWidth(children, 493);
}
Node rewrite_493_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[493]++;
  return utils::mkSpecialFixedWidth(children, 493);
}
Node rewrite_493_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[493]++;
  return utils::mkSpecialFixedWidth(children, 493);
}
Node rewrite_493_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[493]++;
  return utils::mkSpecialFixedWidth(children, 493);
}
Node rewrite_513_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1]);
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[513]++;
  return utils::mkSpecialFixedWidth(children, 513);
}
Node rewrite_513_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0]);
  children.push_back(node[1][1][1]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[513]++;
  return utils::mkSpecialFixedWidth(children, 513);
}
Node rewrite_513_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[513]++;
  return utils::mkSpecialFixedWidth(children, 513);
}
Node rewrite_513_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[513]++;
  return utils::mkSpecialFixedWidth(children, 513);
}
Node rewrite_513_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[513]++;
  return utils::mkSpecialFixedWidth(children, 513);
}
Node rewrite_513_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[513]++;
  return utils::mkSpecialFixedWidth(children, 513);
}
Node rewrite_513_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1]);
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[513]++;
  return utils::mkSpecialFixedWidth(children, 513);
}
Node rewrite_513_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[513]++;
  return utils::mkSpecialFixedWidth(children, 513);
}
Node rewrite_533_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[533]++;
  return utils::mkSpecialFixedWidth(children, 533);
}
Node rewrite_533_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[533]++;
  return utils::mkSpecialFixedWidth(children, 533);
}
Node rewrite_533_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[533]++;
  return utils::mkSpecialFixedWidth(children, 533);
}
Node rewrite_533_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0]);
  children.push_back(node[1][1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[533]++;
  return utils::mkSpecialFixedWidth(children, 533);
}
Node rewrite_533_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[533]++;
  return utils::mkSpecialFixedWidth(children, 533);
}
Node rewrite_533_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1]);
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[533]++;
  return utils::mkSpecialFixedWidth(children, 533);
}
Node rewrite_533_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1]);
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[533]++;
  return utils::mkSpecialFixedWidth(children, 533);
}
Node rewrite_533_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[533]++;
  return utils::mkSpecialFixedWidth(children, 533);
}
Node rewrite_472_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[472]++;
  return utils::mkSpecialFixedWidth(children, 472);
}
Node rewrite_472_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[472]++;
  return utils::mkSpecialFixedWidth(children, 472);
}
Node rewrite_472_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[472]++;
  return utils::mkSpecialFixedWidth(children, 472);
}
Node rewrite_472_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[472]++;
  return utils::mkSpecialFixedWidth(children, 472);
}
Node rewrite_472_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[472]++;
  return utils::mkSpecialFixedWidth(children, 472);
}
Node rewrite_472_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[472]++;
  return utils::mkSpecialFixedWidth(children, 472);
}
Node rewrite_472_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[472]++;
  return utils::mkSpecialFixedWidth(children, 472);
}
Node rewrite_472_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[472]++;
  return utils::mkSpecialFixedWidth(children, 472);
}
Node rewrite_472_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[472]++;
  return utils::mkSpecialFixedWidth(children, 472);
}
Node rewrite_472_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][1]);
  children.push_back(node[2][0]);
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[472]++;
  return utils::mkSpecialFixedWidth(children, 472);
}
Node rewrite_472_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[472]++;
  return utils::mkSpecialFixedWidth(children, 472);
}
Node rewrite_472_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[472]++;
  return utils::mkSpecialFixedWidth(children, 472);
}
Node rewrite_712_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[712]++;
  return utils::mkSpecialFixedWidth(children, 712);
}
Node rewrite_712_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1][0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[712]++;
  return utils::mkSpecialFixedWidth(children, 712);
}
Node rewrite_495_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[495]++;
  return utils::mkSpecialFixedWidth(children, 495);
}
Node rewrite_495_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[495]++;
  return utils::mkSpecialFixedWidth(children, 495);
}
Node rewrite_495_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[495]++;
  return utils::mkSpecialFixedWidth(children, 495);
}
Node rewrite_495_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[495]++;
  return utils::mkSpecialFixedWidth(children, 495);
}
Node rewrite_503_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[503]++;
  return utils::mkSpecialFixedWidth(children, 503);
}
Node rewrite_503_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[503]++;
  return utils::mkSpecialFixedWidth(children, 503);
}
Node rewrite_503_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[503]++;
  return utils::mkSpecialFixedWidth(children, 503);
}
Node rewrite_503_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[503]++;
  return utils::mkSpecialFixedWidth(children, 503);
}
Node rewrite_527_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[527]++;
  return utils::mkSpecialFixedWidth(children, 527);
}
Node rewrite_527_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[527]++;
  return utils::mkSpecialFixedWidth(children, 527);
}
Node rewrite_473_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[473]++;
  return utils::mkSpecialFixedWidth(children, 473);
}
Node rewrite_473_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[2]);
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[473]++;
  return utils::mkSpecialFixedWidth(children, 473);
}
Node rewrite_473_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[473]++;
  return utils::mkSpecialFixedWidth(children, 473);
}
Node rewrite_473_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[473]++;
  return utils::mkSpecialFixedWidth(children, 473);
}
Node rewrite_473_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[473]++;
  return utils::mkSpecialFixedWidth(children, 473);
}
Node rewrite_473_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[2]);
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[473]++;
  return utils::mkSpecialFixedWidth(children, 473);
}
Node rewrite_706_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[706]++;
  return utils::mkSpecialFixedWidth(children, 706);
}
Node rewrite_706_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[706]++;
  return utils::mkSpecialFixedWidth(children, 706);
}
Node rewrite_706(TNode node, const bool* predicates) {
  if (predicates[6] && predicates[15] && predicates[11] && predicates[7] && true && true && predicates[9] && true && true && true && predicates[22] && node[0][0][0][1] == node[1][0] && node[0][0][0][0] == node[1][1]) {
    return rewrite_703_0(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && predicates[7] && true && true && predicates[9] && true && true && true && predicates[22] && node[0][0][1][0] == node[1][0] && node[0][0][1][1] == node[1][1]) {
    return rewrite_703_1(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && predicates[12] && true && true && predicates[20] && true && true && predicates[22] && node[0][1][1][0] == node[1][0] && node[0][1][1][1] == node[1][1]) {
    return rewrite_703_2(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && predicates[12] && true && true && predicates[20] && true && true && predicates[22] && node[0][1][1][0] == node[1][0] && node[0][1][1][1] == node[1][1]) {
    return rewrite_703_3(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && predicates[12] && true && true && predicates[20] && true && true && predicates[22] && node[0][1][0][1] == node[1][0] && node[0][1][0][0] == node[1][1]) {
    return rewrite_703_4(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && predicates[21] && predicates[4] && true && true && predicates[3] && node[0][1] == node[1][0][1][0] && node[0][0] == node[1][0][1][1] && true) {
    return rewrite_703_5(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && predicates[7] && true && true && predicates[9] && true && true && true && predicates[22] && node[0][0][1][1] == node[1][0] && node[0][0][1][0] == node[1][1]) {
    return rewrite_703_6(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && predicates[8] && predicates[5] && node[0][0] == node[1][1][0][0] && node[0][1] == node[1][1][0][1] && predicates[0] && true && true) {
    return rewrite_703_7(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && predicates[12] && true && true && predicates[20] && true && true && predicates[22] && node[0][1][1][0] == node[1][0] && node[0][1][1][1] == node[1][1]) {
    return rewrite_703_8(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && predicates[8] && predicates[5] && true && true && predicates[0] && node[0][1] == node[1][1][1][0] && node[0][0] == node[1][1][1][1]) {
    return rewrite_703_9(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && predicates[12] && true && true && predicates[20] && true && true && predicates[22] && node[0][1][0][1] == node[1][0] && node[0][1][0][0] == node[1][1]) {
    return rewrite_703_10(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && predicates[21] && predicates[4] && true && true && predicates[3] && node[0][1] == node[1][0][1][0] && node[0][0] == node[1][0][1][1] && true) {
    return rewrite_703_11(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && predicates[21] && predicates[4] && true && true && predicates[3] && node[0][1] == node[1][0][1][0] && node[0][0] == node[1][0][1][1] && true) {
    return rewrite_703_12(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && predicates[8] && predicates[5] && true && true && predicates[0] && node[0][1] == node[1][1][1][0] && node[0][0] == node[1][1][1][1]) {
    return rewrite_703_13(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && predicates[21] && predicates[4] && node[0][1] == node[1][0][0][0] && node[0][0] == node[1][0][0][1] && predicates[3] && true && true && true) {
    return rewrite_703_14(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && predicates[21] && predicates[4] && node[0][0] == node[1][0][0][0] && node[0][1] == node[1][0][0][1] && predicates[3] && true && true && true) {
    return rewrite_703_15(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && predicates[7] && true && true && predicates[9] && true && true && true && predicates[22] && node[0][0][0][1] == node[1][0] && node[0][0][0][0] == node[1][1]) {
    return rewrite_703_16(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && predicates[8] && predicates[5] && node[0][1] == node[1][1][0][0] && node[0][0] == node[1][1][0][1] && predicates[0] && true && true) {
    return rewrite_703_17(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && predicates[8] && predicates[5] && true && true && predicates[0] && node[0][1] == node[1][1][1][0] && node[0][0] == node[1][1][1][1]) {
    return rewrite_703_18(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && predicates[7] && true && true && predicates[9] && true && true && true && predicates[22] && node[0][0][0][0] == node[1][0] && node[0][0][0][1] == node[1][1]) {
    return rewrite_703_19(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && predicates[21] && predicates[4] && true && true && predicates[3] && node[0][0] == node[1][0][1][0] && node[0][1] == node[1][0][1][1] && true) {
    return rewrite_703_20(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && predicates[8] && predicates[5] && true && true && predicates[0] && node[0][0] == node[1][1][1][0] && node[0][1] == node[1][1][1][1]) {
    return rewrite_703_21(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && predicates[7] && true && true && predicates[9] && true && true && true && predicates[22] && node[0][0][1][0] == node[1][0] && node[0][0][1][1] == node[1][1]) {
    return rewrite_703_22(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && predicates[21] && predicates[4] && node[0][1] == node[1][0][0][0] && node[0][0] == node[1][0][0][1] && predicates[3] && true && true && true) {
    return rewrite_703_23(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && predicates[12] && true && true && predicates[20] && true && true && predicates[22] && node[0][1][0][0] == node[1][0] && node[0][1][0][1] == node[1][1]) {
    return rewrite_703_24(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && predicates[12] && true && true && predicates[20] && true && true && predicates[22] && node[0][1][1][1] == node[1][0] && node[0][1][1][0] == node[1][1]) {
    return rewrite_703_25(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && predicates[8] && predicates[5] && node[0][0] == node[1][1][0][0] && node[0][1] == node[1][1][0][1] && predicates[0] && true && true) {
    return rewrite_703_26(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && predicates[21] && predicates[4] && node[0][1] == node[1][0][0][0] && node[0][0] == node[1][0][0][1] && predicates[3] && true && true && true) {
    return rewrite_703_27(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && predicates[7] && true && true && predicates[9] && true && true && true && predicates[22] && node[0][0][0][0] == node[1][0] && node[0][0][0][1] == node[1][1]) {
    return rewrite_703_28(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && predicates[7] && true && true && predicates[9] && true && true && true && predicates[22] && node[0][0][0][0] == node[1][0] && node[0][0][0][1] == node[1][1]) {
    return rewrite_703_29(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && predicates[7] && true && true && predicates[9] && true && true && true && predicates[22] && node[0][0][1][0] == node[1][0] && node[0][0][1][1] == node[1][1]) {
    return rewrite_703_30(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && predicates[21] && predicates[4] && true && true && predicates[3] && node[0][0] == node[1][0][1][0] && node[0][1] == node[1][0][1][1] && true) {
    return rewrite_703_31(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && predicates[7] && true && true && predicates[9] && true && true && true && predicates[22] && node[0][0][1][1] == node[1][0] && node[0][0][1][0] == node[1][1]) {
    return rewrite_703_32(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && predicates[8] && predicates[5] && true && true && predicates[0] && node[0][0] == node[1][1][1][0] && node[0][1] == node[1][1][1][1]) {
    return rewrite_703_33(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && predicates[21] && predicates[4] && true && true && predicates[3] && node[0][1] == node[1][0][1][0] && node[0][0] == node[1][0][1][1] && true) {
    return rewrite_703_34(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && predicates[7] && true && true && predicates[9] && true && true && true && predicates[22] && node[0][0][0][0] == node[1][0] && node[0][0][0][1] == node[1][1]) {
    return rewrite_703_35(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && predicates[7] && true && true && predicates[9] && true && true && true && predicates[22] && node[0][0][0][1] == node[1][0] && node[0][0][0][0] == node[1][1]) {
    return rewrite_703_36(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && predicates[12] && true && true && predicates[20] && true && true && predicates[22] && node[0][1][0][0] == node[1][0] && node[0][1][0][1] == node[1][1]) {
    return rewrite_703_37(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && predicates[21] && predicates[4] && node[0][0] == node[1][0][0][0] && node[0][1] == node[1][0][0][1] && predicates[3] && true && true && true) {
    return rewrite_703_38(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && predicates[8] && predicates[5] && true && true && predicates[0] && node[0][1] == node[1][1][1][0] && node[0][0] == node[1][1][1][1]) {
    return rewrite_703_39(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && predicates[8] && predicates[5] && node[0][0] == node[1][1][0][0] && node[0][1] == node[1][1][0][1] && predicates[0] && true && true) {
    return rewrite_703_40(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && predicates[12] && true && true && predicates[20] && true && true && predicates[22] && node[0][1][1][1] == node[1][0] && node[0][1][1][0] == node[1][1]) {
    return rewrite_703_41(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && predicates[21] && predicates[4] && node[0][1] == node[1][0][0][0] && node[0][0] == node[1][0][0][1] && predicates[3] && true && true && true) {
    return rewrite_703_42(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && predicates[12] && true && true && predicates[20] && true && true && predicates[22] && node[0][1][0][0] == node[1][0] && node[0][1][0][1] == node[1][1]) {
    return rewrite_703_43(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && predicates[7] && true && true && predicates[9] && true && true && true && predicates[22] && node[0][0][1][0] == node[1][0] && node[0][0][1][1] == node[1][1]) {
    return rewrite_703_44(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && predicates[21] && predicates[4] && node[0][0] == node[1][0][0][0] && node[0][1] == node[1][0][0][1] && predicates[3] && true && true && true) {
    return rewrite_703_45(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && predicates[8] && predicates[5] && node[0][1] == node[1][1][0][0] && node[0][0] == node[1][1][0][1] && predicates[0] && true && true) {
    return rewrite_703_46(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && predicates[12] && true && true && predicates[20] && true && true && predicates[22] && node[0][1][1][0] == node[1][0] && node[0][1][1][1] == node[1][1]) {
    return rewrite_703_47(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && predicates[12] && true && true && predicates[20] && true && true && predicates[22] && node[0][1][0][1] == node[1][0] && node[0][1][0][0] == node[1][1]) {
    return rewrite_703_48(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && predicates[21] && predicates[4] && true && true && predicates[3] && node[0][0] == node[1][0][1][0] && node[0][1] == node[1][0][1][1] && true) {
    return rewrite_703_49(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && predicates[8] && predicates[5] && true && true && predicates[0] && node[0][0] == node[1][1][1][0] && node[0][1] == node[1][1][1][1]) {
    return rewrite_703_50(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && predicates[21] && predicates[4] && node[0][0] == node[1][0][0][0] && node[0][1] == node[1][0][0][1] && predicates[3] && true && true && true) {
    return rewrite_703_51(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && predicates[7] && true && true && predicates[9] && true && true && true && predicates[22] && node[0][0][1][1] == node[1][0] && node[0][0][1][0] == node[1][1]) {
    return rewrite_703_52(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && predicates[7] && true && true && predicates[9] && true && true && true && predicates[22] && node[0][0][0][1] == node[1][0] && node[0][0][0][0] == node[1][1]) {
    return rewrite_703_53(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && predicates[8] && predicates[5] && node[0][1] == node[1][1][0][0] && node[0][0] == node[1][1][0][1] && predicates[0] && true && true) {
    return rewrite_703_54(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && predicates[12] && true && true && predicates[20] && true && true && predicates[22] && node[0][1][0][0] == node[1][0] && node[0][1][0][1] == node[1][1]) {
    return rewrite_703_55(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && predicates[7] && true && true && predicates[9] && true && true && true && predicates[22] && node[0][0][1][1] == node[1][0] && node[0][0][1][0] == node[1][1]) {
    return rewrite_703_56(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && predicates[8] && predicates[5] && node[0][0] == node[1][1][0][0] && node[0][1] == node[1][1][0][1] && predicates[0] && true && true) {
    return rewrite_703_57(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && predicates[12] && true && true && predicates[20] && true && true && predicates[22] && node[0][1][1][1] == node[1][0] && node[0][1][1][0] == node[1][1]) {
    return rewrite_703_58(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && predicates[8] && predicates[5] && true && true && predicates[0] && node[0][0] == node[1][1][1][0] && node[0][1] == node[1][1][1][1]) {
    return rewrite_703_59(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && predicates[8] && predicates[5] && node[0][1] == node[1][1][0][0] && node[0][0] == node[1][1][0][1] && predicates[0] && true && true) {
    return rewrite_703_60(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && predicates[21] && predicates[4] && true && true && predicates[3] && node[0][0] == node[1][0][1][0] && node[0][1] == node[1][0][1][1] && true) {
    return rewrite_703_61(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && predicates[12] && true && true && predicates[20] && true && true && predicates[22] && node[0][1][1][1] == node[1][0] && node[0][1][1][0] == node[1][1]) {
    return rewrite_703_62(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && predicates[12] && true && true && predicates[20] && true && true && predicates[22] && node[0][1][0][1] == node[1][0] && node[0][1][0][0] == node[1][1]) {
    return rewrite_703_63(node);
  }
  else {
    return node;
  }
}
Node rewrite_703(TNode node, const bool* predicates) {
  if (predicates[6] && predicates[15] && true && predicates[13] && true && predicates[20] && true && true && predicates[22] && node[0][1][1][0] == node[1][0] && node[0][1][1][1] == node[1][1]) {
    return rewrite_511_0(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && true && predicates[20] && true && true && predicates[22] && node[0][1][1][1] == node[1][0] && node[0][1][1][0] == node[1][1]) {
    return rewrite_511_1(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && predicates[21] && predicates[4] && node[0][1] == node[1][0][0][0] && node[0][0] == node[1][0][0][1] && true && true) {
    return rewrite_511_2(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && predicates[8] && true && predicates[0] && node[0][1] == node[1][1][1][0] && node[0][0] == node[1][1][1][1]) {
    return rewrite_511_3(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && predicates[8] && predicates[5] && node[0][1] == node[1][1][0][0] && node[0][0] == node[1][1][0][1] && true) {
    return rewrite_511_4(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && true && predicates[9] && true && true && true && predicates[22] && node[0][0][1][1] == node[1][0] && node[0][0][1][0] == node[1][1]) {
    return rewrite_511_5(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && predicates[21] && predicates[4] && node[0][0] == node[1][0][0][0] && node[0][1] == node[1][0][0][1] && true && true) {
    return rewrite_511_6(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && true && predicates[20] && true && true && predicates[22] && node[0][1][1][0] == node[1][0] && node[0][1][1][1] == node[1][1]) {
    return rewrite_511_7(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && predicates[7] && true && true && true && true && predicates[22] && node[0][0][0][1] == node[1][0] && node[0][0][0][0] == node[1][1]) {
    return rewrite_511_8(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && predicates[12] && true && true && true && predicates[22] && node[0][1][0][0] == node[1][0] && node[0][1][0][1] == node[1][1]) {
    return rewrite_511_9(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && predicates[21] && predicates[4] && node[0][0] == node[1][0][0][0] && node[0][1] == node[1][0][0][1] && true && true) {
    return rewrite_511_10(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && predicates[8] && true && predicates[0] && node[0][1] == node[1][1][1][0] && node[0][0] == node[1][1][1][1]) {
    return rewrite_511_11(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && predicates[8] && true && predicates[0] && node[0][0] == node[1][1][1][0] && node[0][1] == node[1][1][1][1]) {
    return rewrite_511_12(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && true && predicates[9] && true && true && true && predicates[22] && node[0][0][1][0] == node[1][0] && node[0][0][1][1] == node[1][1]) {
    return rewrite_511_13(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && predicates[8] && true && predicates[0] && node[0][0] == node[1][1][1][0] && node[0][1] == node[1][1][1][1]) {
    return rewrite_511_14(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && predicates[21] && true && predicates[3] && node[0][1] == node[1][0][1][0] && node[0][0] == node[1][0][1][1] && true) {
    return rewrite_511_15(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && true && predicates[20] && true && true && predicates[22] && node[0][1][1][1] == node[1][0] && node[0][1][1][0] == node[1][1]) {
    return rewrite_511_16(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && true && predicates[9] && true && true && true && predicates[22] && node[0][0][1][1] == node[1][0] && node[0][0][1][0] == node[1][1]) {
    return rewrite_511_17(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && predicates[21] && predicates[4] && node[0][1] == node[1][0][0][0] && node[0][0] == node[1][0][0][1] && true && true) {
    return rewrite_511_18(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && predicates[8] && predicates[5] && node[0][1] == node[1][1][0][0] && node[0][0] == node[1][1][0][1] && true) {
    return rewrite_511_19(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && predicates[21] && true && predicates[3] && node[0][1] == node[1][0][1][0] && node[0][0] == node[1][0][1][1] && true) {
    return rewrite_511_20(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && true && predicates[9] && true && true && true && predicates[22] && node[0][0][1][0] == node[1][0] && node[0][0][1][1] == node[1][1]) {
    return rewrite_511_21(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && predicates[21] && true && predicates[3] && node[0][0] == node[1][0][1][0] && node[0][1] == node[1][0][1][1] && true) {
    return rewrite_511_22(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && predicates[7] && true && true && true && true && predicates[22] && node[0][0][0][0] == node[1][0] && node[0][0][0][1] == node[1][1]) {
    return rewrite_511_23(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && predicates[7] && true && true && true && true && predicates[22] && node[0][0][0][0] == node[1][0] && node[0][0][0][1] == node[1][1]) {
    return rewrite_511_24(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && predicates[12] && true && true && true && predicates[22] && node[0][1][0][1] == node[1][0] && node[0][1][0][0] == node[1][1]) {
    return rewrite_511_25(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && predicates[8] && predicates[5] && node[0][0] == node[1][1][0][0] && node[0][1] == node[1][1][0][1] && true) {
    return rewrite_511_26(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && predicates[7] && true && true && true && true && predicates[22] && node[0][0][0][1] == node[1][0] && node[0][0][0][0] == node[1][1]) {
    return rewrite_511_27(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && predicates[12] && true && true && true && predicates[22] && node[0][1][0][1] == node[1][0] && node[0][1][0][0] == node[1][1]) {
    return rewrite_511_28(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && predicates[12] && true && true && true && predicates[22] && node[0][1][0][0] == node[1][0] && node[0][1][0][1] == node[1][1]) {
    return rewrite_511_29(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && predicates[8] && predicates[5] && node[0][0] == node[1][1][0][0] && node[0][1] == node[1][1][0][1] && true) {
    return rewrite_511_30(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && predicates[21] && true && predicates[3] && node[0][0] == node[1][0][1][0] && node[0][1] == node[1][0][1][1] && true) {
    return rewrite_511_31(node);
  }
  else {
    return node;
  }
}
Node rewrite_511(TNode node, const bool* predicates) {
  if (predicates[6] && true && predicates[23] && true && predicates[8] && predicates[5] && true && true && node[0] == node[1][1][1]) {
    return rewrite_673_0(node);
  }
  else if (predicates[6] && true && predicates[23] && predicates[21] && node[0] == node[1][0][0] && predicates[3] && true && true && true) {
    return rewrite_673_1(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && predicates[12] && true && true && true && node[0][1][1] == node[1]) {
    return rewrite_673_2(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && predicates[7] && true && true && true && true && node[0][0][1] == node[1]) {
    return rewrite_673_3(node);
  }
  else if (predicates[6] && true && predicates[23] && predicates[21] && predicates[4] && true && true && node[0] == node[1][0][1] && true) {
    return rewrite_673_4(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && true && predicates[9] && true && true && true && node[0][0][0] == node[1]) {
    return rewrite_673_5(node);
  }
  else if (predicates[6] && true && predicates[23] && true && predicates[8] && predicates[5] && true && true && node[0] == node[1][1][1]) {
    return rewrite_673_6(node);
  }
  else if (predicates[6] && true && predicates[23] && predicates[21] && node[0] == node[1][0][0] && predicates[3] && true && true && true) {
    return rewrite_673_7(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && true && predicates[20] && true && true && node[0][1][0] == node[1]) {
    return rewrite_673_8(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && predicates[12] && true && true && true && node[0][1][1] == node[1]) {
    return rewrite_673_9(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && predicates[7] && true && true && true && true && node[0][0][1] == node[1]) {
    return rewrite_673_10(node);
  }
  else if (predicates[6] && true && predicates[23] && predicates[21] && predicates[4] && true && true && node[0] == node[1][0][1] && true) {
    return rewrite_673_11(node);
  }
  else if (predicates[6] && true && predicates[23] && true && predicates[8] && node[0] == node[1][1][0] && predicates[0] && true && true) {
    return rewrite_673_12(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && true && predicates[9] && true && true && true && node[0][0][0] == node[1]) {
    return rewrite_673_13(node);
  }
  else if (predicates[6] && true && predicates[23] && true && predicates[8] && node[0] == node[1][1][0] && predicates[0] && true && true) {
    return rewrite_673_14(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && true && predicates[20] && true && true && node[0][1][0] == node[1]) {
    return rewrite_673_15(node);
  }
  else {
    return node;
  }
}
Node rewrite_673(TNode node, const bool* predicates) {
  if (predicates[6] && predicates[15] && true && predicates[19] && true && predicates[18] && node[0][1][0] == node[1][0]) {
    return rewrite_499_0(node);
  }
  else if (predicates[6] && predicates[2] && true && predicates[23] && predicates[24] && node[0][0] == node[1][0][0] && true) {
    return rewrite_499_1(node);
  }
  else if (predicates[6] && predicates[2] && true && predicates[23] && true && predicates[16] && node[0][0] == node[1][1][0]) {
    return rewrite_499_2(node);
  }
  else if (predicates[6] && predicates[15] && predicates[14] && true && true && predicates[18] && node[0][0][0] == node[1][0]) {
    return rewrite_499_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_499(TNode node, const bool* predicates) {
  if (predicates[6] && predicates[10] && true && true && predicates[22] && true && true) {
    return rewrite_480_0(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[22] && true && true) {
    return rewrite_480_1(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[22] && true && true) {
    return rewrite_480_2(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[22] && true && true) {
    return rewrite_480_3(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[22] && true && true) {
    return rewrite_480_4(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[22] && true && true) {
    return rewrite_480_5(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[22] && true && true) {
    return rewrite_480_6(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[22] && true && true) {
    return rewrite_480_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_480(TNode node, const bool* predicates) {
  if (predicates[6] && predicates[15] && true && true && predicates[22] && true && true) {
    return rewrite_493_0(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && true) {
    return rewrite_493_1(node);
  }
  else if (predicates[6] && predicates[15] && true && true && predicates[22] && true && true) {
    return rewrite_493_2(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && true) {
    return rewrite_493_3(node);
  }
  else if (predicates[6] && predicates[15] && true && true && predicates[22] && true && true) {
    return rewrite_493_4(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && true) {
    return rewrite_493_5(node);
  }
  else if (predicates[6] && predicates[15] && true && true && predicates[22] && true && true) {
    return rewrite_493_6(node);
  }
  else if (predicates[6] && predicates[10] && true && true && predicates[23] && true && true) {
    return rewrite_493_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_493(TNode node, const bool* predicates) {
  if (predicates[6] && true && predicates[23] && true && predicates[8] && true && node[0] == node[1][1][1]) {
    return rewrite_513_0(node);
  }
  else if (predicates[6] && true && predicates[23] && true && predicates[8] && node[0] == node[1][1][0] && true) {
    return rewrite_513_1(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && true && true && true && node[0][0][0] == node[1]) {
    return rewrite_513_2(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && true && true && node[0][1][0] == node[1]) {
    return rewrite_513_3(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && true && true && node[0][1][1] == node[1]) {
    return rewrite_513_4(node);
  }
  else if (predicates[6] && true && predicates[23] && predicates[21] && node[0] == node[1][0][0] && true && true) {
    return rewrite_513_5(node);
  }
  else if (predicates[6] && true && predicates[23] && predicates[21] && true && node[0] == node[1][0][1] && true) {
    return rewrite_513_6(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && true && true && true && node[0][0][1] == node[1]) {
    return rewrite_513_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_513(TNode node, const bool* predicates) {
  if (predicates[6] && true && predicates[23] && predicates[21] && true && true && true) {
    return rewrite_533_0(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && true && true && true && true) {
    return rewrite_533_1(node);
  }
  else if (predicates[6] && predicates[15] && predicates[11] && true && true && true && true) {
    return rewrite_533_2(node);
  }
  else if (predicates[6] && true && predicates[23] && true && predicates[8] && true && true) {
    return rewrite_533_3(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && true && true && true) {
    return rewrite_533_4(node);
  }
  else if (predicates[6] && true && predicates[23] && predicates[21] && true && true && true) {
    return rewrite_533_5(node);
  }
  else if (predicates[6] && true && predicates[23] && true && predicates[8] && true && true) {
    return rewrite_533_6(node);
  }
  else if (predicates[6] && predicates[15] && true && predicates[13] && true && true && true) {
    return rewrite_533_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_533(TNode node, const bool* predicates) {
  if (predicates[1] && predicates[10] && true && true && true && true) {
    return rewrite_472_0(node);
  }
  else if (predicates[1] && true && predicates[22] && true && true && true) {
    return rewrite_472_1(node);
  }
  else if (predicates[1] && true && true && predicates[17] && true && true) {
    return rewrite_472_2(node);
  }
  else if (predicates[1] && predicates[10] && true && true && true && true) {
    return rewrite_472_3(node);
  }
  else if (predicates[1] && true && predicates[22] && true && true && true) {
    return rewrite_472_4(node);
  }
  else if (predicates[1] && true && true && predicates[17] && true && true) {
    return rewrite_472_5(node);
  }
  else if (predicates[1] && true && predicates[22] && true && true && true) {
    return rewrite_472_6(node);
  }
  else if (predicates[1] && predicates[10] && true && true && true && true) {
    return rewrite_472_7(node);
  }
  else if (predicates[1] && predicates[10] && true && true && true && true) {
    return rewrite_472_8(node);
  }
  else if (predicates[1] && true && true && predicates[17] && true && true) {
    return rewrite_472_9(node);
  }
  else if (predicates[1] && true && predicates[22] && true && true && true) {
    return rewrite_472_10(node);
  }
  else if (predicates[1] && true && true && predicates[17] && true && true) {
    return rewrite_472_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_472(TNode node, const bool* predicates) {
  if (predicates[6] && predicates[2] && true && predicates[18] && true) {
    return rewrite_712_0(node);
  }
  else if (predicates[6] && predicates[2] && true && predicates[18] && true) {
    return rewrite_712_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_712(TNode node, const bool* predicates) {
  if (predicates[6] && true && predicates[22] && true && true) {
    return rewrite_495_0(node);
  }
  else if (predicates[6] && true && predicates[22] && true && true) {
    return rewrite_495_1(node);
  }
  else if (predicates[6] && predicates[10] && true && true && true) {
    return rewrite_495_2(node);
  }
  else if (predicates[6] && predicates[10] && true && true && true) {
    return rewrite_495_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_495(TNode node, const bool* predicates) {
  if (predicates[6] && true && predicates[23] && true && true) {
    return rewrite_503_0(node);
  }
  else if (predicates[6] && predicates[15] && true && true && true) {
    return rewrite_503_1(node);
  }
  else if (predicates[6] && predicates[15] && true && true && true) {
    return rewrite_503_2(node);
  }
  else if (predicates[6] && true && predicates[23] && true && true) {
    return rewrite_503_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_503(TNode node, const bool* predicates) {
  if (predicates[6] && predicates[2] && true && true) {
    return rewrite_527_0(node);
  }
  else if (predicates[6] && true && predicates[18] && true) {
    return rewrite_527_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_527(TNode node, const bool* predicates) {
  if (predicates[1] && true && true && true) {
    return rewrite_473_0(node);
  }
  else if (predicates[1] && true && true && true) {
    return rewrite_473_1(node);
  }
  else if (predicates[1] && true && true && true) {
    return rewrite_473_2(node);
  }
  else if (predicates[1] && true && true && true) {
    return rewrite_473_3(node);
  }
  else if (predicates[1] && true && true && true) {
    return rewrite_473_4(node);
  }
  else if (predicates[1] && true && true && true) {
    return rewrite_473_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_473(TNode node, const bool* predicates) {
  if (predicates[6] && true && true) {
    return rewrite_706_0(node);
  }
  else if (predicates[6] && true && true) {
    return rewrite_706_1(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBVSpecialRewriter::RewriteBITVECTOR_XOR(TNode node,  bool prewrite) {
  bool predicates[25];
  for (int i = 0; i < 25; i++) {
    predicates[i] = false;
  }
  predicates[1] = node.getKind() == kind::BITVECTOR_XOR && node.getNumChildren() == 3;
  predicates[6] = node.getKind() == kind::BITVECTOR_XOR && node.getNumChildren() == 2;
  if (node.getNumChildren() > 0) {
    predicates[2] = node[0].getKind() == kind::BITVECTOR_NOT && node[0].getNumChildren() == 1;
    predicates[10] = node[0].getKind() == kind::BITVECTOR_OR && node[0].getNumChildren() == 2;
    predicates[15] = node[0].getKind() == kind::BITVECTOR_AND && node[0].getNumChildren() == 2;
    if (node[0].getNumChildren() > 0) {
      predicates[11] = node[0][0].getKind() == kind::BITVECTOR_XOR && node[0][0].getNumChildren() == 2;
      predicates[14] = node[0][0].getKind() == kind::BITVECTOR_NOT && node[0][0].getNumChildren() == 1;
      if (node[0][0].getNumChildren() > 1) {
        predicates[9] = node[0][0][1].getKind() == kind::BITVECTOR_OR && node[0][0][1].getNumChildren() == 2;
      }
      if (node[0][0].getNumChildren() > 0) {
        predicates[7] = node[0][0][0].getKind() == kind::BITVECTOR_OR && node[0][0][0].getNumChildren() == 2;
      }
    }
    if (node[0].getNumChildren() > 1) {
      predicates[13] = node[0][1].getKind() == kind::BITVECTOR_XOR && node[0][1].getNumChildren() == 2;
      predicates[19] = node[0][1].getKind() == kind::BITVECTOR_NOT && node[0][1].getNumChildren() == 1;
      if (node[0][1].getNumChildren() > 1) {
        predicates[20] = node[0][1][1].getKind() == kind::BITVECTOR_OR && node[0][1][1].getNumChildren() == 2;
      }
      if (node[0][1].getNumChildren() > 0) {
        predicates[12] = node[0][1][0].getKind() == kind::BITVECTOR_OR && node[0][1][0].getNumChildren() == 2;
      }
    }
  }
  if (node.getNumChildren() > 1) {
    predicates[18] = node[1].getKind() == kind::BITVECTOR_NOT && node[1].getNumChildren() == 1;
    predicates[22] = node[1].getKind() == kind::BITVECTOR_OR && node[1].getNumChildren() == 2;
    predicates[23] = node[1].getKind() == kind::BITVECTOR_AND && node[1].getNumChildren() == 2;
    if (node[1].getNumChildren() > 1) {
      predicates[8] = node[1][1].getKind() == kind::BITVECTOR_XOR && node[1][1].getNumChildren() == 2;
      predicates[16] = node[1][1].getKind() == kind::BITVECTOR_NOT && node[1][1].getNumChildren() == 1;
      if (node[1][1].getNumChildren() > 0) {
        predicates[5] = node[1][1][0].getKind() == kind::BITVECTOR_OR && node[1][1][0].getNumChildren() == 2;
      }
      if (node[1][1].getNumChildren() > 1) {
        predicates[0] = node[1][1][1].getKind() == kind::BITVECTOR_OR && node[1][1][1].getNumChildren() == 2;
      }
    }
    if (node[1].getNumChildren() > 0) {
      predicates[21] = node[1][0].getKind() == kind::BITVECTOR_XOR && node[1][0].getNumChildren() == 2;
      predicates[24] = node[1][0].getKind() == kind::BITVECTOR_NOT && node[1][0].getNumChildren() == 1;
      if (node[1][0].getNumChildren() > 0) {
        predicates[4] = node[1][0][0].getKind() == kind::BITVECTOR_OR && node[1][0][0].getNumChildren() == 2;
      }
      if (node[1][0].getNumChildren() > 1) {
        predicates[3] = node[1][0][1].getKind() == kind::BITVECTOR_OR && node[1][0][1].getNumChildren() == 2;
      }
    }
  }
  if (node.getNumChildren() > 2) {
    predicates[17] = node[2].getKind() == kind::BITVECTOR_OR && node[2].getNumChildren() == 2;
  }
  Node response;
  response = rewrite_703(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_511(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_673(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_499(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_480(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_493(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_513(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_533(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_472(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_712(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_495(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_503(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_527(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_473(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_706(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  if (options::printStats()) TheoryBVSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
