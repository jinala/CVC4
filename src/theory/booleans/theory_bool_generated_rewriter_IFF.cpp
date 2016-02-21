#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"
#include "options/main_options.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;

Node rewrite_280_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[280]++;
  return utils::mkSpecialBool(children, 280);
}
Node rewrite_280_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][1][1]);
  children.push_back(node[1][0][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[280]++;
  return utils::mkSpecialBool(children, 280);
}
Node rewrite_280_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][1][1]);
  children.push_back(node[1][0][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[280]++;
  return utils::mkSpecialBool(children, 280);
}
Node rewrite_280_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[280]++;
  return utils::mkSpecialBool(children, 280);
}
Node rewrite_280_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[280]++;
  return utils::mkSpecialBool(children, 280);
}
Node rewrite_280_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[280]++;
  return utils::mkSpecialBool(children, 280);
}
Node rewrite_280_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[280]++;
  return utils::mkSpecialBool(children, 280);
}
Node rewrite_280_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[280]++;
  return utils::mkSpecialBool(children, 280);
}
Node rewrite_280_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[280]++;
  return utils::mkSpecialBool(children, 280);
}
Node rewrite_280_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[280]++;
  return utils::mkSpecialBool(children, 280);
}
Node rewrite_280_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[280]++;
  return utils::mkSpecialBool(children, 280);
}
Node rewrite_280_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1]);
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[280]++;
  return utils::mkSpecialBool(children, 280);
}
Node rewrite_280_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[1][1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[280]++;
  return utils::mkSpecialBool(children, 280);
}
Node rewrite_280_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[280]++;
  return utils::mkSpecialBool(children, 280);
}
Node rewrite_280_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1]);
  children.push_back(node[1][0][1]);
  children.push_back(node[1][1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[280]++;
  return utils::mkSpecialBool(children, 280);
}
Node rewrite_280_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[280]++;
  return utils::mkSpecialBool(children, 280);
}
Node rewrite_276_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0][0][0]);
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[276]++;
  return utils::mkSpecialBool(children, 276);
}
Node rewrite_276_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0][1][0]);
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[276]++;
  return utils::mkSpecialBool(children, 276);
}
Node rewrite_276_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0][0][0]);
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[276]++;
  return utils::mkSpecialBool(children, 276);
}
Node rewrite_276_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[276]++;
  return utils::mkSpecialBool(children, 276);
}
Node rewrite_276_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0][1][0]);
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[276]++;
  return utils::mkSpecialBool(children, 276);
}
Node rewrite_276_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1][0]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[276]++;
  return utils::mkSpecialBool(children, 276);
}
Node rewrite_276_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1][0]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[276]++;
  return utils::mkSpecialBool(children, 276);
}
Node rewrite_276_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[276]++;
  return utils::mkSpecialBool(children, 276);
}
Node rewrite_285_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[285]++;
  return utils::mkSpecialBool(children, 285);
}
Node rewrite_285_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][0][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[285]++;
  return utils::mkSpecialBool(children, 285);
}
Node rewrite_285_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[285]++;
  return utils::mkSpecialBool(children, 285);
}
Node rewrite_285_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[285]++;
  return utils::mkSpecialBool(children, 285);
}
Node rewrite_285_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[285]++;
  return utils::mkSpecialBool(children, 285);
}
Node rewrite_285_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[285]++;
  return utils::mkSpecialBool(children, 285);
}
Node rewrite_285_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][0][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[285]++;
  return utils::mkSpecialBool(children, 285);
}
Node rewrite_285_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[285]++;
  return utils::mkSpecialBool(children, 285);
}
Node rewrite_194_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[194]++;
  return utils::mkSpecialBool(children, 194);
}
Node rewrite_194_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1]);
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1][1]);
  children.push_back(node[1][1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[194]++;
  return utils::mkSpecialBool(children, 194);
}
Node rewrite_194_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0]);
  children.push_back(node[1][1][1]);
  children.push_back(node[1][0][1]);
  children.push_back(node[1][0][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[194]++;
  return utils::mkSpecialBool(children, 194);
}
Node rewrite_194_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[1][1][0]);
  children.push_back(node[1][1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[194]++;
  return utils::mkSpecialBool(children, 194);
}
Node rewrite_194_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1]);
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[1][0][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[194]++;
  return utils::mkSpecialBool(children, 194);
}
Node rewrite_194_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1]);
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[194]++;
  return utils::mkSpecialBool(children, 194);
}
Node rewrite_194_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[194]++;
  return utils::mkSpecialBool(children, 194);
}
Node rewrite_194_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[194]++;
  return utils::mkSpecialBool(children, 194);
}
Node rewrite_194_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[194]++;
  return utils::mkSpecialBool(children, 194);
}
Node rewrite_194_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[194]++;
  return utils::mkSpecialBool(children, 194);
}
Node rewrite_194_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[194]++;
  return utils::mkSpecialBool(children, 194);
}
Node rewrite_194_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1]);
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1][0]);
  children.push_back(node[1][1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[194]++;
  return utils::mkSpecialBool(children, 194);
}
Node rewrite_194_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0]);
  children.push_back(node[1][1][1]);
  children.push_back(node[1][0][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[194]++;
  return utils::mkSpecialBool(children, 194);
}
Node rewrite_194_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[1][1][1]);
  children.push_back(node[1][1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[194]++;
  return utils::mkSpecialBool(children, 194);
}
Node rewrite_194_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[194]++;
  return utils::mkSpecialBool(children, 194);
}
Node rewrite_194_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[194]++;
  return utils::mkSpecialBool(children, 194);
}
Node rewrite_307_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[307]++;
  return utils::mkSpecialBool(children, 307);
}
Node rewrite_307_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][1][2]);
  children.push_back(node[1][1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[307]++;
  return utils::mkSpecialBool(children, 307);
}
Node rewrite_307_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][0][0]);
  children.push_back(node[1][0][2]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[307]++;
  return utils::mkSpecialBool(children, 307);
}
Node rewrite_307_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[307]++;
  return utils::mkSpecialBool(children, 307);
}
Node rewrite_307_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[307]++;
  return utils::mkSpecialBool(children, 307);
}
Node rewrite_307_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[307]++;
  return utils::mkSpecialBool(children, 307);
}
Node rewrite_307_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][1][0]);
  children.push_back(node[1][1][2]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[307]++;
  return utils::mkSpecialBool(children, 307);
}
Node rewrite_307_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][2][0]);
  children.push_back(node[1][0][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[307]++;
  return utils::mkSpecialBool(children, 307);
}
Node rewrite_307_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[307]++;
  return utils::mkSpecialBool(children, 307);
}
Node rewrite_307_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][1][1]);
  children.push_back(node[1][1][2]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[307]++;
  return utils::mkSpecialBool(children, 307);
}
Node rewrite_307_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][1][2]);
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[307]++;
  return utils::mkSpecialBool(children, 307);
}
Node rewrite_307_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][0][2]);
  children.push_back(node[1][0][1]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[307]++;
  return utils::mkSpecialBool(children, 307);
}
Node rewrite_307_12(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][2][0]);
  children.push_back(node[1][1][1]);
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[307]++;
  return utils::mkSpecialBool(children, 307);
}
Node rewrite_307_13(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[307]++;
  return utils::mkSpecialBool(children, 307);
}
Node rewrite_307_14(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[307]++;
  return utils::mkSpecialBool(children, 307);
}
Node rewrite_307_15(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[307]++;
  return utils::mkSpecialBool(children, 307);
}
Node rewrite_307_16(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][2][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[307]++;
  return utils::mkSpecialBool(children, 307);
}
Node rewrite_307_17(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[307]++;
  return utils::mkSpecialBool(children, 307);
}
Node rewrite_307_18(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[307]++;
  return utils::mkSpecialBool(children, 307);
}
Node rewrite_307_19(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[1][0][2]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[307]++;
  return utils::mkSpecialBool(children, 307);
}
Node rewrite_307_20(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][2][0]);
  children.push_back(node[1][1][0]);
  children.push_back(node[1][1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[307]++;
  return utils::mkSpecialBool(children, 307);
}
Node rewrite_307_21(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][0][2]);
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[307]++;
  return utils::mkSpecialBool(children, 307);
}
Node rewrite_307_22(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[307]++;
  return utils::mkSpecialBool(children, 307);
}
Node rewrite_307_23(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[307]++;
  return utils::mkSpecialBool(children, 307);
}
Node rewrite_45_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[45]++;
  return utils::mkSpecialBool(children, 45);
}
Node rewrite_45_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][2][0]);
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[45]++;
  return utils::mkSpecialBool(children, 45);
}
Node rewrite_45_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[45]++;
  return utils::mkSpecialBool(children, 45);
}
Node rewrite_45_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[45]++;
  return utils::mkSpecialBool(children, 45);
}
Node rewrite_45_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[45]++;
  return utils::mkSpecialBool(children, 45);
}
Node rewrite_45_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1][0]);
  children.push_back(node[1][2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[45]++;
  return utils::mkSpecialBool(children, 45);
}
Node rewrite_45_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0]);
  children.push_back(node[1][2][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[45]++;
  return utils::mkSpecialBool(children, 45);
}
Node rewrite_45_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][2][0]);
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[45]++;
  return utils::mkSpecialBool(children, 45);
}
Node rewrite_45_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[45]++;
  return utils::mkSpecialBool(children, 45);
}
Node rewrite_45_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0]);
  children.push_back(node[1][2][0]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[45]++;
  return utils::mkSpecialBool(children, 45);
}
Node rewrite_45_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0][0]);
  children.push_back(node[1][2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[45]++;
  return utils::mkSpecialBool(children, 45);
}
Node rewrite_45_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[45]++;
  return utils::mkSpecialBool(children, 45);
}
Node rewrite_141_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[141]++;
  return utils::mkSpecialBool(children, 141);
}
Node rewrite_141_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[141]++;
  return utils::mkSpecialBool(children, 141);
}
Node rewrite_141_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[141]++;
  return utils::mkSpecialBool(children, 141);
}
Node rewrite_141_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[141]++;
  return utils::mkSpecialBool(children, 141);
}
Node rewrite_141_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][0][0][1]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[141]++;
  return utils::mkSpecialBool(children, 141);
}
Node rewrite_141_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[141]++;
  return utils::mkSpecialBool(children, 141);
}
Node rewrite_141_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[141]++;
  return utils::mkSpecialBool(children, 141);
}
Node rewrite_141_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][1][0][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[141]++;
  return utils::mkSpecialBool(children, 141);
}
Node rewrite_256_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[256]++;
  return utils::mkSpecialBool(children, 256);
}
Node rewrite_256_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1][0]);
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[256]++;
  return utils::mkSpecialBool(children, 256);
}
Node rewrite_256_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0][0]);
  children.push_back(node[1][1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[256]++;
  return utils::mkSpecialBool(children, 256);
}
Node rewrite_256_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[256]++;
  return utils::mkSpecialBool(children, 256);
}
Node rewrite_256_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1][0]);
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[256]++;
  return utils::mkSpecialBool(children, 256);
}
Node rewrite_256_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[256]++;
  return utils::mkSpecialBool(children, 256);
}
Node rewrite_256_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[256]++;
  return utils::mkSpecialBool(children, 256);
}
Node rewrite_256_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[256]++;
  return utils::mkSpecialBool(children, 256);
}
Node rewrite_58_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[58]++;
  return utils::mkSpecialBool(children, 58);
}
Node rewrite_58_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[58]++;
  return utils::mkSpecialBool(children, 58);
}
Node rewrite_58_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[58]++;
  return utils::mkSpecialBool(children, 58);
}
Node rewrite_58_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[58]++;
  return utils::mkSpecialBool(children, 58);
}
Node rewrite_41_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1]);
  children.push_back(node[1][2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[41]++;
  return utils::mkSpecialBool(children, 41);
}
Node rewrite_41_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[41]++;
  return utils::mkSpecialBool(children, 41);
}
Node rewrite_41_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[41]++;
  return utils::mkSpecialBool(children, 41);
}
Node rewrite_41_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[41]++;
  return utils::mkSpecialBool(children, 41);
}
Node rewrite_41_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[41]++;
  return utils::mkSpecialBool(children, 41);
}
Node rewrite_41_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0]);
  children.push_back(node[1][2]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[41]++;
  return utils::mkSpecialBool(children, 41);
}
Node rewrite_41_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][2][0]);
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[41]++;
  return utils::mkSpecialBool(children, 41);
}
Node rewrite_41_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[41]++;
  return utils::mkSpecialBool(children, 41);
}
Node rewrite_41_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0]);
  children.push_back(node[1][2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[41]++;
  return utils::mkSpecialBool(children, 41);
}
Node rewrite_41_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][2][0]);
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[41]++;
  return utils::mkSpecialBool(children, 41);
}
Node rewrite_41_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0]);
  children.push_back(node[1][2]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[41]++;
  return utils::mkSpecialBool(children, 41);
}
Node rewrite_41_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[41]++;
  return utils::mkSpecialBool(children, 41);
}
Node rewrite_242_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[242]++;
  return utils::mkSpecialBool(children, 242);
}
Node rewrite_242_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[242]++;
  return utils::mkSpecialBool(children, 242);
}
Node rewrite_242_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[242]++;
  return utils::mkSpecialBool(children, 242);
}
Node rewrite_242_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1]);
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[242]++;
  return utils::mkSpecialBool(children, 242);
}
Node rewrite_242_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[242]++;
  return utils::mkSpecialBool(children, 242);
}
Node rewrite_242_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1]);
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[242]++;
  return utils::mkSpecialBool(children, 242);
}
Node rewrite_242_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0]);
  children.push_back(node[1][1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[242]++;
  return utils::mkSpecialBool(children, 242);
}
Node rewrite_242_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[242]++;
  return utils::mkSpecialBool(children, 242);
}
Node rewrite_362_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[362]++;
  return utils::mkSpecialBool(children, 362);
}
Node rewrite_362_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][1]);
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[362]++;
  return utils::mkSpecialBool(children, 362);
}
Node rewrite_362_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][1]);
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[362]++;
  return utils::mkSpecialBool(children, 362);
}
Node rewrite_362_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[362]++;
  return utils::mkSpecialBool(children, 362);
}
Node rewrite_362_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[362]++;
  return utils::mkSpecialBool(children, 362);
}
Node rewrite_362_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[362]++;
  return utils::mkSpecialBool(children, 362);
}
Node rewrite_362_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0]);
  children.push_back(node[1][0][1]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[362]++;
  return utils::mkSpecialBool(children, 362);
}
Node rewrite_362_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0]);
  children.push_back(node[1][1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[362]++;
  return utils::mkSpecialBool(children, 362);
}
Node rewrite_27_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[27]++;
  return utils::mkSpecialBool(children, 27);
}
Node rewrite_27_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[27]++;
  return utils::mkSpecialBool(children, 27);
}
Node rewrite_27_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[27]++;
  return utils::mkSpecialBool(children, 27);
}
Node rewrite_27_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1][0]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[27]++;
  return utils::mkSpecialBool(children, 27);
}
Node rewrite_22_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][2]);
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[22]++;
  return utils::mkSpecialBool(children, 22);
}
Node rewrite_22_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][2]);
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[22]++;
  return utils::mkSpecialBool(children, 22);
}
Node rewrite_22_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][2]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[22]++;
  return utils::mkSpecialBool(children, 22);
}
Node rewrite_22_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][2]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[22]++;
  return utils::mkSpecialBool(children, 22);
}
Node rewrite_22_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[22]++;
  return utils::mkSpecialBool(children, 22);
}
Node rewrite_22_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[1][2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[22]++;
  return utils::mkSpecialBool(children, 22);
}
Node rewrite_22_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[22]++;
  return utils::mkSpecialBool(children, 22);
}
Node rewrite_22_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[22]++;
  return utils::mkSpecialBool(children, 22);
}
Node rewrite_22_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[1][2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[22]++;
  return utils::mkSpecialBool(children, 22);
}
Node rewrite_22_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[22]++;
  return utils::mkSpecialBool(children, 22);
}
Node rewrite_22_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[22]++;
  return utils::mkSpecialBool(children, 22);
}
Node rewrite_22_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[22]++;
  return utils::mkSpecialBool(children, 22);
}
Node rewrite_28_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[1][2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[28]++;
  return utils::mkSpecialBool(children, 28);
}
Node rewrite_28_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][2]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[28]++;
  return utils::mkSpecialBool(children, 28);
}
Node rewrite_28_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][2]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[28]++;
  return utils::mkSpecialBool(children, 28);
}
Node rewrite_28_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][2]);
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[28]++;
  return utils::mkSpecialBool(children, 28);
}
Node rewrite_28_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][2]);
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[28]++;
  return utils::mkSpecialBool(children, 28);
}
Node rewrite_28_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[28]++;
  return utils::mkSpecialBool(children, 28);
}
Node rewrite_28_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[28]++;
  return utils::mkSpecialBool(children, 28);
}
Node rewrite_28_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[28]++;
  return utils::mkSpecialBool(children, 28);
}
Node rewrite_28_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[28]++;
  return utils::mkSpecialBool(children, 28);
}
Node rewrite_28_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[1][2]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[28]++;
  return utils::mkSpecialBool(children, 28);
}
Node rewrite_28_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[28]++;
  return utils::mkSpecialBool(children, 28);
}
Node rewrite_28_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[28]++;
  return utils::mkSpecialBool(children, 28);
}
Node rewrite_21_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[21]++;
  return utils::mkSpecialBool(children, 21);
}
Node rewrite_21_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[21]++;
  return utils::mkSpecialBool(children, 21);
}
Node rewrite_21_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[21]++;
  return utils::mkSpecialBool(children, 21);
}
Node rewrite_21_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[21]++;
  return utils::mkSpecialBool(children, 21);
}
Node rewrite_31_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[31]++;
  return utils::mkSpecialBool(children, 31);
}
Node rewrite_31_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[31]++;
  return utils::mkSpecialBool(children, 31);
}
Node rewrite_31_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[31]++;
  return utils::mkSpecialBool(children, 31);
}
Node rewrite_31_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[31]++;
  return utils::mkSpecialBool(children, 31);
}
Node rewrite_192_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[1][1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[192]++;
  return utils::mkSpecialBool(children, 192);
}
Node rewrite_192_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][1]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[192]++;
  return utils::mkSpecialBool(children, 192);
}
Node rewrite_192_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[192]++;
  return utils::mkSpecialBool(children, 192);
}
Node rewrite_192_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[192]++;
  return utils::mkSpecialBool(children, 192);
}
Node rewrite_26_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[26]++;
  return utils::mkSpecialBool(children, 26);
}
Node rewrite_26_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[26]++;
  return utils::mkSpecialBool(children, 26);
}
Node rewrite_357_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[357]++;
  return utils::mkSpecialBool(children, 357);
}
Node rewrite_357_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[357]++;
  return utils::mkSpecialBool(children, 357);
}
Node rewrite_357(TNode node, const bool* predicates) {
  if (predicates[42] && true && predicates[28] && predicates[11] && true && predicates[45] && true && predicates[15] && node[1][0][1][0] == node[1][1][0] && true) {
    return rewrite_280_0(node);
  }
  else if (predicates[42] && true && predicates[28] && predicates[11] && true && true && predicates[15] && predicates[46] && node[1][0][0] == node[1][1][0][0] && true) {
    return rewrite_280_1(node);
  }
  else if (predicates[42] && true && predicates[28] && predicates[11] && true && true && predicates[15] && predicates[46] && node[1][0][1] == node[1][1][0][0] && true) {
    return rewrite_280_2(node);
  }
  else if (predicates[42] && predicates[35] && predicates[34] && true && predicates[40] && true && predicates[5] && node[0][0][1][0] == node[0][1][0] && true && true) {
    return rewrite_280_3(node);
  }
  else if (predicates[42] && true && predicates[28] && predicates[11] && true && true && predicates[15] && true && predicates[26] && node[1][0][0] == node[1][1][1][0]) {
    return rewrite_280_4(node);
  }
  else if (predicates[42] && predicates[35] && predicates[34] && predicates[37] && true && true && predicates[5] && true && node[0][0][0][0] == node[0][1][1] && true) {
    return rewrite_280_5(node);
  }
  else if (predicates[42] && predicates[35] && predicates[34] && predicates[37] && true && true && predicates[5] && node[0][0][0][0] == node[0][1][0] && true && true) {
    return rewrite_280_6(node);
  }
  else if (predicates[42] && true && predicates[28] && predicates[11] && true && true && predicates[15] && true && predicates[26] && node[1][0][1] == node[1][1][1][0]) {
    return rewrite_280_7(node);
  }
  else if (predicates[42] && predicates[35] && predicates[34] && true && true && predicates[5] && true && predicates[39] && node[0][0][1] == node[0][1][1][0] && true) {
    return rewrite_280_8(node);
  }
  else if (predicates[42] && predicates[35] && predicates[34] && true && true && predicates[5] && predicates[1] && node[0][0][0] == node[0][1][0][0] && true && true) {
    return rewrite_280_9(node);
  }
  else if (predicates[42] && predicates[35] && predicates[34] && true && predicates[40] && true && predicates[5] && true && node[0][0][1][0] == node[0][1][1] && true) {
    return rewrite_280_10(node);
  }
  else if (predicates[42] && true && predicates[28] && predicates[11] && true && predicates[45] && true && predicates[15] && true && node[1][0][1][0] == node[1][1][1]) {
    return rewrite_280_11(node);
  }
  else if (predicates[42] && true && predicates[28] && predicates[11] && predicates[47] && true && true && predicates[15] && node[1][0][0][0] == node[1][1][0] && true) {
    return rewrite_280_12(node);
  }
  else if (predicates[42] && predicates[35] && predicates[34] && true && true && predicates[5] && true && predicates[39] && node[0][0][0] == node[0][1][1][0] && true) {
    return rewrite_280_13(node);
  }
  else if (predicates[42] && true && predicates[28] && predicates[11] && predicates[47] && true && true && predicates[15] && true && node[1][0][0][0] == node[1][1][1]) {
    return rewrite_280_14(node);
  }
  else if (predicates[42] && predicates[35] && predicates[34] && true && true && predicates[5] && predicates[1] && node[0][0][1] == node[0][1][0][0] && true && true) {
    return rewrite_280_15(node);
  }
  else {
    return node;
  }
}
Node rewrite_280(TNode node, const bool* predicates) {
  if (predicates[42] && true && predicates[29] && predicates[41] && predicates[9] && predicates[44] && true && true && true) {
    return rewrite_276_0(node);
  }
  else if (predicates[42] && true && predicates[29] && true && predicates[43] && predicates[10] && true && predicates[50] && true) {
    return rewrite_276_1(node);
  }
  else if (predicates[42] && true && predicates[29] && true && predicates[43] && predicates[10] && predicates[36] && true && true) {
    return rewrite_276_2(node);
  }
  else if (predicates[42] && predicates[21] && true && predicates[48] && predicates[52] && predicates[6] && true && true && true) {
    return rewrite_276_3(node);
  }
  else if (predicates[42] && true && predicates[29] && predicates[41] && predicates[9] && true && predicates[38] && true && true) {
    return rewrite_276_4(node);
  }
  else if (predicates[42] && predicates[21] && true && predicates[48] && predicates[52] && true && predicates[23] && true && true) {
    return rewrite_276_5(node);
  }
  else if (predicates[42] && predicates[21] && predicates[49] && predicates[19] && true && predicates[30] && true && true && true) {
    return rewrite_276_6(node);
  }
  else if (predicates[42] && predicates[21] && predicates[49] && predicates[19] && predicates[14] && true && true && true && true) {
    return rewrite_276_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_276(TNode node, const bool* predicates) {
  if (predicates[42] && predicates[21] && predicates[49] && true && predicates[48] && predicates[52] && true && true && true) {
    return rewrite_285_0(node);
  }
  else if (predicates[42] && true && predicates[29] && predicates[41] && true && predicates[43] && predicates[10] && true && true) {
    return rewrite_285_1(node);
  }
  else if (predicates[42] && true && predicates[29] && predicates[41] && predicates[9] && true && true && predicates[43] && true) {
    return rewrite_285_2(node);
  }
  else if (predicates[42] && true && predicates[29] && predicates[41] && predicates[9] && true && true && predicates[43] && true) {
    return rewrite_285_3(node);
  }
  else if (predicates[42] && predicates[21] && predicates[49] && true && predicates[48] && predicates[52] && true && true && true) {
    return rewrite_285_4(node);
  }
  else if (predicates[42] && predicates[21] && predicates[49] && predicates[19] && true && true && predicates[48] && true && true) {
    return rewrite_285_5(node);
  }
  else if (predicates[42] && true && predicates[29] && predicates[41] && true && predicates[43] && predicates[10] && true && true) {
    return rewrite_285_6(node);
  }
  else if (predicates[42] && predicates[21] && predicates[49] && predicates[19] && true && true && predicates[48] && true && true) {
    return rewrite_285_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_285(TNode node, const bool* predicates) {
  if (predicates[42] && predicates[35] && predicates[34] && true && true && predicates[5] && true && true && true) {
    return rewrite_194_0(node);
  }
  else if (predicates[42] && true && predicates[28] && predicates[11] && true && true && predicates[15] && true && true) {
    return rewrite_194_1(node);
  }
  else if (predicates[42] && true && predicates[28] && predicates[11] && true && true && predicates[15] && true && true) {
    return rewrite_194_2(node);
  }
  else if (predicates[42] && true && predicates[28] && predicates[11] && true && true && predicates[15] && true && true) {
    return rewrite_194_3(node);
  }
  else if (predicates[42] && true && predicates[28] && predicates[11] && true && true && predicates[15] && true && true) {
    return rewrite_194_4(node);
  }
  else if (predicates[42] && true && predicates[28] && predicates[11] && true && true && predicates[15] && true && true) {
    return rewrite_194_5(node);
  }
  else if (predicates[42] && predicates[35] && predicates[34] && true && true && predicates[5] && true && true && true) {
    return rewrite_194_6(node);
  }
  else if (predicates[42] && predicates[35] && predicates[34] && true && true && predicates[5] && true && true && true) {
    return rewrite_194_7(node);
  }
  else if (predicates[42] && predicates[35] && predicates[34] && true && true && predicates[5] && true && true && true) {
    return rewrite_194_8(node);
  }
  else if (predicates[42] && predicates[35] && predicates[34] && true && true && predicates[5] && true && true && true) {
    return rewrite_194_9(node);
  }
  else if (predicates[42] && predicates[35] && predicates[34] && true && true && predicates[5] && true && true && true) {
    return rewrite_194_10(node);
  }
  else if (predicates[42] && true && predicates[28] && predicates[11] && true && true && predicates[15] && true && true) {
    return rewrite_194_11(node);
  }
  else if (predicates[42] && true && predicates[28] && predicates[11] && true && true && predicates[15] && true && true) {
    return rewrite_194_12(node);
  }
  else if (predicates[42] && true && predicates[28] && predicates[11] && true && true && predicates[15] && true && true) {
    return rewrite_194_13(node);
  }
  else if (predicates[42] && predicates[35] && predicates[34] && true && true && predicates[5] && true && true && true) {
    return rewrite_194_14(node);
  }
  else if (predicates[42] && predicates[35] && predicates[34] && true && true && predicates[5] && true && true && true) {
    return rewrite_194_15(node);
  }
  else {
    return node;
  }
}
Node rewrite_194(TNode node, const bool* predicates) {
  if (predicates[42] && predicates[35] && predicates[31] && true && predicates[40] && true && true && true && true) {
    return rewrite_307_0(node);
  }
  else if (predicates[42] && true && predicates[28] && true && predicates[12] && predicates[46] && true && true && true) {
    return rewrite_307_1(node);
  }
  else if (predicates[42] && true && predicates[28] && predicates[16] && true && predicates[45] && true && true && true) {
    return rewrite_307_2(node);
  }
  else if (predicates[42] && predicates[35] && predicates[31] && true && true && predicates[18] && true && true && true) {
    return rewrite_307_3(node);
  }
  else if (predicates[42] && predicates[35] && true && predicates[54] && true && true && predicates[17] && true && true) {
    return rewrite_307_4(node);
  }
  else if (predicates[42] && predicates[35] && predicates[31] && predicates[37] && true && true && true && true && true) {
    return rewrite_307_5(node);
  }
  else if (predicates[42] && true && predicates[28] && true && predicates[12] && true && predicates[26] && true && true) {
    return rewrite_307_6(node);
  }
  else if (predicates[42] && true && predicates[28] && predicates[16] && true && true && predicates[7] && true && true) {
    return rewrite_307_7(node);
  }
  else if (predicates[42] && predicates[35] && predicates[31] && true && true && predicates[18] && true && true && true) {
    return rewrite_307_8(node);
  }
  else if (predicates[42] && true && predicates[28] && true && predicates[12] && predicates[46] && true && true && true) {
    return rewrite_307_9(node);
  }
  else if (predicates[42] && true && predicates[28] && true && predicates[12] && true && predicates[26] && true && true) {
    return rewrite_307_10(node);
  }
  else if (predicates[42] && true && predicates[28] && predicates[16] && predicates[47] && true && true && true && true) {
    return rewrite_307_11(node);
  }
  else if (predicates[42] && true && predicates[28] && true && predicates[12] && true && true && predicates[8] && true) {
    return rewrite_307_12(node);
  }
  else if (predicates[42] && predicates[35] && predicates[31] && true && predicates[40] && true && true && true && true) {
    return rewrite_307_13(node);
  }
  else if (predicates[42] && predicates[35] && true && predicates[54] && true && true && predicates[17] && true && true) {
    return rewrite_307_14(node);
  }
  else if (predicates[42] && predicates[35] && true && predicates[54] && true && predicates[39] && true && true && true) {
    return rewrite_307_15(node);
  }
  else if (predicates[42] && true && predicates[28] && predicates[16] && true && true && predicates[7] && true && true) {
    return rewrite_307_16(node);
  }
  else if (predicates[42] && predicates[35] && true && predicates[54] && predicates[1] && true && true && true && true) {
    return rewrite_307_17(node);
  }
  else if (predicates[42] && predicates[35] && predicates[31] && predicates[37] && true && true && true && true && true) {
    return rewrite_307_18(node);
  }
  else if (predicates[42] && true && predicates[28] && predicates[16] && predicates[47] && true && true && true && true) {
    return rewrite_307_19(node);
  }
  else if (predicates[42] && true && predicates[28] && true && predicates[12] && true && true && predicates[8] && true) {
    return rewrite_307_20(node);
  }
  else if (predicates[42] && true && predicates[28] && predicates[16] && true && predicates[45] && true && true && true) {
    return rewrite_307_21(node);
  }
  else if (predicates[42] && predicates[35] && true && predicates[54] && true && predicates[39] && true && true && true) {
    return rewrite_307_22(node);
  }
  else if (predicates[42] && predicates[35] && true && predicates[54] && predicates[1] && true && true && true && true) {
    return rewrite_307_23(node);
  }
  else {
    return node;
  }
}
Node rewrite_307(TNode node, const bool* predicates) {
  if (predicates[42] && predicates[24] && predicates[49] && true && predicates[48] && true && true && true) {
    return rewrite_45_0(node);
  }
  else if (predicates[42] && true && predicates[25] && true && predicates[43] && true && predicates[27] && true) {
    return rewrite_45_1(node);
  }
  else if (predicates[42] && predicates[24] && predicates[49] && true && true && predicates[53] && true && true) {
    return rewrite_45_2(node);
  }
  else if (predicates[42] && predicates[24] && true && predicates[48] && true && predicates[53] && true && true) {
    return rewrite_45_3(node);
  }
  else if (predicates[42] && predicates[24] && predicates[49] && true && true && predicates[53] && true && true) {
    return rewrite_45_4(node);
  }
  else if (predicates[42] && true && predicates[25] && predicates[41] && true && predicates[43] && true && true) {
    return rewrite_45_5(node);
  }
  else if (predicates[42] && true && predicates[25] && predicates[41] && true && true && predicates[27] && true) {
    return rewrite_45_6(node);
  }
  else if (predicates[42] && true && predicates[25] && predicates[41] && true && true && predicates[27] && true) {
    return rewrite_45_7(node);
  }
  else if (predicates[42] && predicates[24] && predicates[49] && true && predicates[48] && true && true && true) {
    return rewrite_45_8(node);
  }
  else if (predicates[42] && true && predicates[25] && true && predicates[43] && true && predicates[27] && true) {
    return rewrite_45_9(node);
  }
  else if (predicates[42] && true && predicates[25] && predicates[41] && true && predicates[43] && true && true) {
    return rewrite_45_10(node);
  }
  else if (predicates[42] && predicates[24] && true && predicates[48] && true && predicates[53] && true && true) {
    return rewrite_45_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_45(TNode node, const bool* predicates) {
  if (predicates[42] && true && predicates[29] && predicates[41] && predicates[9] && true && true && true) {
    return rewrite_141_0(node);
  }
  else if (predicates[42] && predicates[21] && predicates[49] && predicates[19] && true && true && true && true) {
    return rewrite_141_1(node);
  }
  else if (predicates[42] && true && predicates[29] && true && predicates[43] && predicates[10] && true && true) {
    return rewrite_141_2(node);
  }
  else if (predicates[42] && predicates[21] && true && predicates[48] && predicates[52] && true && true && true) {
    return rewrite_141_3(node);
  }
  else if (predicates[42] && true && predicates[29] && predicates[41] && predicates[9] && true && true && true) {
    return rewrite_141_4(node);
  }
  else if (predicates[42] && predicates[21] && true && predicates[48] && predicates[52] && true && true && true) {
    return rewrite_141_5(node);
  }
  else if (predicates[42] && predicates[21] && predicates[49] && predicates[19] && true && true && true && true) {
    return rewrite_141_6(node);
  }
  else if (predicates[42] && true && predicates[29] && true && predicates[43] && predicates[10] && true && true) {
    return rewrite_141_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_141(TNode node, const bool* predicates) {
  if (predicates[42] && predicates[35] && true && predicates[5] && true && predicates[39] && true && true) {
    return rewrite_256_0(node);
  }
  else if (predicates[42] && true && predicates[28] && predicates[11] && true && predicates[45] && true && true) {
    return rewrite_256_1(node);
  }
  else if (predicates[42] && true && predicates[28] && true && predicates[15] && predicates[46] && true && true) {
    return rewrite_256_2(node);
  }
  else if (predicates[42] && predicates[35] && predicates[34] && predicates[37] && true && true && true && true) {
    return rewrite_256_3(node);
  }
  else if (predicates[42] && true && predicates[28] && true && predicates[15] && true && predicates[26] && true) {
    return rewrite_256_4(node);
  }
  else if (predicates[42] && true && predicates[28] && predicates[11] && predicates[47] && true && true && true) {
    return rewrite_256_5(node);
  }
  else if (predicates[42] && predicates[35] && predicates[34] && true && predicates[40] && true && true && true) {
    return rewrite_256_6(node);
  }
  else if (predicates[42] && predicates[35] && true && predicates[5] && predicates[1] && true && true && true) {
    return rewrite_256_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_256(TNode node, const bool* predicates) {
  if (predicates[42] && predicates[21] && predicates[49] && true && predicates[48] && true && true) {
    return rewrite_58_0(node);
  }
  else if (predicates[42] && predicates[21] && predicates[49] && true && predicates[48] && true && true) {
    return rewrite_58_1(node);
  }
  else if (predicates[42] && true && predicates[29] && predicates[41] && true && predicates[43] && true) {
    return rewrite_58_2(node);
  }
  else if (predicates[42] && true && predicates[29] && predicates[41] && true && predicates[43] && true) {
    return rewrite_58_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_58(TNode node, const bool* predicates) {
  if (predicates[42] && true && predicates[25] && predicates[41] && true && true && true) {
    return rewrite_41_0(node);
  }
  else if (predicates[42] && predicates[24] && true && true && predicates[53] && true && true) {
    return rewrite_41_1(node);
  }
  else if (predicates[42] && predicates[24] && predicates[49] && true && true && true && true) {
    return rewrite_41_2(node);
  }
  else if (predicates[42] && predicates[24] && true && true && predicates[53] && true && true) {
    return rewrite_41_3(node);
  }
  else if (predicates[42] && predicates[24] && true && predicates[48] && true && true && true) {
    return rewrite_41_4(node);
  }
  else if (predicates[42] && true && predicates[25] && true && predicates[43] && true && true) {
    return rewrite_41_5(node);
  }
  else if (predicates[42] && true && predicates[25] && true && true && predicates[27] && true) {
    return rewrite_41_6(node);
  }
  else if (predicates[42] && predicates[24] && predicates[49] && true && true && true && true) {
    return rewrite_41_7(node);
  }
  else if (predicates[42] && true && predicates[25] && true && predicates[43] && true && true) {
    return rewrite_41_8(node);
  }
  else if (predicates[42] && true && predicates[25] && true && true && predicates[27] && true) {
    return rewrite_41_9(node);
  }
  else if (predicates[42] && true && predicates[25] && predicates[41] && true && true && true) {
    return rewrite_41_10(node);
  }
  else if (predicates[42] && predicates[24] && true && predicates[48] && true && true && true) {
    return rewrite_41_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_41(TNode node, const bool* predicates) {
  if (predicates[42] && true && predicates[29] && predicates[2] && true && true && true) {
    return rewrite_242_0(node);
  }
  else if (predicates[42] && predicates[21] && true && predicates[22] && true && true && true) {
    return rewrite_242_1(node);
  }
  else if (predicates[42] && predicates[21] && true && predicates[22] && true && true && true) {
    return rewrite_242_2(node);
  }
  else if (predicates[42] && true && predicates[29] && true && predicates[0] && true && true) {
    return rewrite_242_3(node);
  }
  else if (predicates[42] && predicates[21] && predicates[51] && true && true && true && true) {
    return rewrite_242_4(node);
  }
  else if (predicates[42] && true && predicates[29] && predicates[2] && true && true && true) {
    return rewrite_242_5(node);
  }
  else if (predicates[42] && true && predicates[29] && true && predicates[0] && true && true) {
    return rewrite_242_6(node);
  }
  else if (predicates[42] && predicates[21] && predicates[51] && true && true && true && true) {
    return rewrite_242_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_242(TNode node, const bool* predicates) {
  if (predicates[42] && predicates[35] && true && predicates[5] && true && true && true) {
    return rewrite_362_0(node);
  }
  else if (predicates[42] && true && predicates[28] && true && predicates[15] && true && true) {
    return rewrite_362_1(node);
  }
  else if (predicates[42] && true && predicates[28] && predicates[11] && true && true && true) {
    return rewrite_362_2(node);
  }
  else if (predicates[42] && predicates[35] && true && predicates[5] && true && true && true) {
    return rewrite_362_3(node);
  }
  else if (predicates[42] && predicates[35] && predicates[34] && true && true && true && true) {
    return rewrite_362_4(node);
  }
  else if (predicates[42] && predicates[35] && predicates[34] && true && true && true && true) {
    return rewrite_362_5(node);
  }
  else if (predicates[42] && true && predicates[28] && predicates[11] && true && true && true) {
    return rewrite_362_6(node);
  }
  else if (predicates[42] && true && predicates[28] && true && predicates[15] && true && true) {
    return rewrite_362_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_362(TNode node, const bool* predicates) {
  if (predicates[42] && predicates[21] && predicates[49] && true && true && true) {
    return rewrite_27_0(node);
  }
  else if (predicates[42] && true && predicates[29] && predicates[41] && true && true) {
    return rewrite_27_1(node);
  }
  else if (predicates[42] && predicates[21] && true && predicates[48] && true && true) {
    return rewrite_27_2(node);
  }
  else if (predicates[42] && true && predicates[29] && true && predicates[43] && true) {
    return rewrite_27_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_27(TNode node, const bool* predicates) {
  if (predicates[42] && true && predicates[25] && true && true && true) {
    return rewrite_22_0(node);
  }
  else if (predicates[42] && true && predicates[25] && true && true && true) {
    return rewrite_22_1(node);
  }
  else if (predicates[42] && true && predicates[25] && true && true && true) {
    return rewrite_22_2(node);
  }
  else if (predicates[42] && true && predicates[25] && true && true && true) {
    return rewrite_22_3(node);
  }
  else if (predicates[42] && predicates[24] && true && true && true && true) {
    return rewrite_22_4(node);
  }
  else if (predicates[42] && true && predicates[25] && true && true && true) {
    return rewrite_22_5(node);
  }
  else if (predicates[42] && predicates[24] && true && true && true && true) {
    return rewrite_22_6(node);
  }
  else if (predicates[42] && predicates[24] && true && true && true && true) {
    return rewrite_22_7(node);
  }
  else if (predicates[42] && true && predicates[25] && true && true && true) {
    return rewrite_22_8(node);
  }
  else if (predicates[42] && predicates[24] && true && true && true && true) {
    return rewrite_22_9(node);
  }
  else if (predicates[42] && predicates[24] && true && true && true && true) {
    return rewrite_22_10(node);
  }
  else if (predicates[42] && predicates[24] && true && true && true && true) {
    return rewrite_22_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_22(TNode node, const bool* predicates) {
  if (predicates[42] && true && predicates[32] && true && true && true) {
    return rewrite_28_0(node);
  }
  else if (predicates[42] && true && predicates[32] && true && true && true) {
    return rewrite_28_1(node);
  }
  else if (predicates[42] && true && predicates[32] && true && true && true) {
    return rewrite_28_2(node);
  }
  else if (predicates[42] && true && predicates[32] && true && true && true) {
    return rewrite_28_3(node);
  }
  else if (predicates[42] && true && predicates[32] && true && true && true) {
    return rewrite_28_4(node);
  }
  else if (predicates[42] && predicates[33] && true && true && true && true) {
    return rewrite_28_5(node);
  }
  else if (predicates[42] && predicates[33] && true && true && true && true) {
    return rewrite_28_6(node);
  }
  else if (predicates[42] && predicates[33] && true && true && true && true) {
    return rewrite_28_7(node);
  }
  else if (predicates[42] && predicates[33] && true && true && true && true) {
    return rewrite_28_8(node);
  }
  else if (predicates[42] && true && predicates[32] && true && true && true) {
    return rewrite_28_9(node);
  }
  else if (predicates[42] && predicates[33] && true && true && true && true) {
    return rewrite_28_10(node);
  }
  else if (predicates[42] && predicates[33] && true && true && true && true) {
    return rewrite_28_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_28(TNode node, const bool* predicates) {
  if (predicates[42] && true && predicates[29] && true && true) {
    return rewrite_21_0(node);
  }
  else if (predicates[42] && predicates[21] && true && true && true) {
    return rewrite_21_1(node);
  }
  else if (predicates[42] && true && predicates[29] && true && true) {
    return rewrite_21_2(node);
  }
  else if (predicates[42] && predicates[21] && true && true && true) {
    return rewrite_21_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_21(TNode node, const bool* predicates) {
  if (predicates[42] && predicates[35] && true && true && true) {
    return rewrite_31_0(node);
  }
  else if (predicates[42] && true && predicates[28] && true && true) {
    return rewrite_31_1(node);
  }
  else if (predicates[42] && true && predicates[28] && true && true) {
    return rewrite_31_2(node);
  }
  else if (predicates[42] && predicates[35] && true && true && true) {
    return rewrite_31_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_31(TNode node, const bool* predicates) {
  if (predicates[42] && true && predicates[13] && true && true) {
    return rewrite_192_0(node);
  }
  else if (predicates[42] && true && predicates[13] && true && true) {
    return rewrite_192_1(node);
  }
  else if (predicates[42] && predicates[20] && true && true && true) {
    return rewrite_192_2(node);
  }
  else if (predicates[42] && predicates[20] && true && true && true) {
    return rewrite_192_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_192(TNode node, const bool* predicates) {
  if (predicates[42] && true && predicates[4] && true) {
    return rewrite_26_0(node);
  }
  else if (predicates[42] && predicates[3] && true && true) {
    return rewrite_26_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_26(TNode node, const bool* predicates) {
  if (predicates[42] && true && true) {
    return rewrite_357_0(node);
  }
  else if (predicates[42] && true && true) {
    return rewrite_357_1(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBoolSpecialRewriter::RewriteIFF(TNode node,  bool prewrite) {
  bool predicates[55];
  for (int i = 0; i < 55; i++) {
    predicates[i] = false;
  }
  predicates[42] = node.getKind() == kind::IFF && node.getNumChildren() == 2;
  if (node.getNumChildren() > 0) {
    predicates[3] = node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1;
    predicates[20] = node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2;
    predicates[21] = node[0].getKind() == kind::AND && node[0].getNumChildren() == 2;
    predicates[24] = node[0].getKind() == kind::AND && node[0].getNumChildren() == 3;
    predicates[33] = node[0].getKind() == kind::OR && node[0].getNumChildren() == 3;
    predicates[35] = node[0].getKind() == kind::OR && node[0].getNumChildren() == 2;
    if (node[0].getNumChildren() > 2) {
      predicates[53] = node[0][2].getKind() == kind::NOT && node[0][2].getNumChildren() == 1;
    }
    if (node[0].getNumChildren() > 0) {
      predicates[31] = node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3;
      predicates[34] = node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2;
      predicates[49] = node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1;
      predicates[51] = node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 2;
      if (node[0][0].getNumChildren() > 1) {
        predicates[40] = node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1;
      }
      if (node[0][0].getNumChildren() > 2) {
        predicates[18] = node[0][0][2].getKind() == kind::NOT && node[0][0][2].getNumChildren() == 1;
      }
      if (node[0][0].getNumChildren() > 0) {
        predicates[19] = node[0][0][0].getKind() == kind::AND && node[0][0][0].getNumChildren() == 2;
        predicates[37] = node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1;
        if (node[0][0][0].getNumChildren() > 1) {
          predicates[30] = node[0][0][0][1].getKind() == kind::NOT && node[0][0][0][1].getNumChildren() == 1;
        }
        if (node[0][0][0].getNumChildren() > 0) {
          predicates[14] = node[0][0][0][0].getKind() == kind::NOT && node[0][0][0][0].getNumChildren() == 1;
        }
      }
    }
    if (node[0].getNumChildren() > 1) {
      predicates[5] = node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2;
      predicates[22] = node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 2;
      predicates[48] = node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1;
      predicates[54] = node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 3;
      if (node[0][1].getNumChildren() > 2) {
        predicates[17] = node[0][1][2].getKind() == kind::NOT && node[0][1][2].getNumChildren() == 1;
      }
      if (node[0][1].getNumChildren() > 1) {
        predicates[39] = node[0][1][1].getKind() == kind::NOT && node[0][1][1].getNumChildren() == 1;
      }
      if (node[0][1].getNumChildren() > 0) {
        predicates[1] = node[0][1][0].getKind() == kind::NOT && node[0][1][0].getNumChildren() == 1;
        predicates[52] = node[0][1][0].getKind() == kind::AND && node[0][1][0].getNumChildren() == 2;
        if (node[0][1][0].getNumChildren() > 1) {
          predicates[23] = node[0][1][0][1].getKind() == kind::NOT && node[0][1][0][1].getNumChildren() == 1;
        }
        if (node[0][1][0].getNumChildren() > 0) {
          predicates[6] = node[0][1][0][0].getKind() == kind::NOT && node[0][1][0][0].getNumChildren() == 1;
        }
      }
    }
  }
  if (node.getNumChildren() > 1) {
    predicates[4] = node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1;
    predicates[13] = node[1].getKind() == kind::IFF && node[1].getNumChildren() == 2;
    predicates[25] = node[1].getKind() == kind::AND && node[1].getNumChildren() == 3;
    predicates[28] = node[1].getKind() == kind::OR && node[1].getNumChildren() == 2;
    predicates[29] = node[1].getKind() == kind::AND && node[1].getNumChildren() == 2;
    predicates[32] = node[1].getKind() == kind::OR && node[1].getNumChildren() == 3;
    if (node[1].getNumChildren() > 2) {
      predicates[27] = node[1][2].getKind() == kind::NOT && node[1][2].getNumChildren() == 1;
    }
    if (node[1].getNumChildren() > 1) {
      predicates[0] = node[1][1].getKind() == kind::OR && node[1][1].getNumChildren() == 2;
      predicates[12] = node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 3;
      predicates[15] = node[1][1].getKind() == kind::AND && node[1][1].getNumChildren() == 2;
      predicates[43] = node[1][1].getKind() == kind::NOT && node[1][1].getNumChildren() == 1;
      if (node[1][1].getNumChildren() > 0) {
        predicates[10] = node[1][1][0].getKind() == kind::AND && node[1][1][0].getNumChildren() == 2;
        predicates[46] = node[1][1][0].getKind() == kind::NOT && node[1][1][0].getNumChildren() == 1;
        if (node[1][1][0].getNumChildren() > 1) {
          predicates[50] = node[1][1][0][1].getKind() == kind::NOT && node[1][1][0][1].getNumChildren() == 1;
        }
        if (node[1][1][0].getNumChildren() > 0) {
          predicates[36] = node[1][1][0][0].getKind() == kind::NOT && node[1][1][0][0].getNumChildren() == 1;
        }
      }
      if (node[1][1].getNumChildren() > 2) {
        predicates[8] = node[1][1][2].getKind() == kind::NOT && node[1][1][2].getNumChildren() == 1;
      }
      if (node[1][1].getNumChildren() > 1) {
        predicates[26] = node[1][1][1].getKind() == kind::NOT && node[1][1][1].getNumChildren() == 1;
      }
    }
    if (node[1].getNumChildren() > 0) {
      predicates[2] = node[1][0].getKind() == kind::OR && node[1][0].getNumChildren() == 2;
      predicates[11] = node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 2;
      predicates[16] = node[1][0].getKind() == kind::AND && node[1][0].getNumChildren() == 3;
      predicates[41] = node[1][0].getKind() == kind::NOT && node[1][0].getNumChildren() == 1;
      if (node[1][0].getNumChildren() > 2) {
        predicates[7] = node[1][0][2].getKind() == kind::NOT && node[1][0][2].getNumChildren() == 1;
      }
      if (node[1][0].getNumChildren() > 0) {
        predicates[9] = node[1][0][0].getKind() == kind::AND && node[1][0][0].getNumChildren() == 2;
        predicates[47] = node[1][0][0].getKind() == kind::NOT && node[1][0][0].getNumChildren() == 1;
        if (node[1][0][0].getNumChildren() > 0) {
          predicates[44] = node[1][0][0][0].getKind() == kind::NOT && node[1][0][0][0].getNumChildren() == 1;
        }
        if (node[1][0][0].getNumChildren() > 1) {
          predicates[38] = node[1][0][0][1].getKind() == kind::NOT && node[1][0][0][1].getNumChildren() == 1;
        }
      }
      if (node[1][0].getNumChildren() > 1) {
        predicates[45] = node[1][0][1].getKind() == kind::NOT && node[1][0][1].getNumChildren() == 1;
      }
    }
  }
  Node response;
  response = rewrite_280(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_276(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_285(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_194(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_307(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_45(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_141(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_256(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_58(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_41(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_242(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_362(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_27(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_22(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_28(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_21(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_31(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_192(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_26(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_357(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
