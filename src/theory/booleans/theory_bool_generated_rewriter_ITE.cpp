#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"
#include "options/main_options.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;

Node rewrite_211_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[211]++;
  return utils::mkSpecialBool(children, 211);
}
Node rewrite_211_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[211]++;
  return utils::mkSpecialBool(children, 211);
}
Node rewrite_211_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[211]++;
  return utils::mkSpecialBool(children, 211);
}
Node rewrite_211_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[211]++;
  return utils::mkSpecialBool(children, 211);
}
Node rewrite_211_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[211]++;
  return utils::mkSpecialBool(children, 211);
}
Node rewrite_211_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[211]++;
  return utils::mkSpecialBool(children, 211);
}
Node rewrite_211_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[211]++;
  return utils::mkSpecialBool(children, 211);
}
Node rewrite_211_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[211]++;
  return utils::mkSpecialBool(children, 211);
}
Node rewrite_219_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[219]++;
  return utils::mkSpecialBool(children, 219);
}
Node rewrite_219_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[219]++;
  return utils::mkSpecialBool(children, 219);
}
Node rewrite_219_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[219]++;
  return utils::mkSpecialBool(children, 219);
}
Node rewrite_219_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[219]++;
  return utils::mkSpecialBool(children, 219);
}
Node rewrite_219_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[219]++;
  return utils::mkSpecialBool(children, 219);
}
Node rewrite_219_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[219]++;
  return utils::mkSpecialBool(children, 219);
}
Node rewrite_219_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[219]++;
  return utils::mkSpecialBool(children, 219);
}
Node rewrite_219_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[219]++;
  return utils::mkSpecialBool(children, 219);
}
Node rewrite_219_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[219]++;
  return utils::mkSpecialBool(children, 219);
}
Node rewrite_219_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[219]++;
  return utils::mkSpecialBool(children, 219);
}
Node rewrite_219_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[219]++;
  return utils::mkSpecialBool(children, 219);
}
Node rewrite_219_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[219]++;
  return utils::mkSpecialBool(children, 219);
}
Node rewrite_224_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[224]++;
  return utils::mkSpecialBool(children, 224);
}
Node rewrite_224_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[224]++;
  return utils::mkSpecialBool(children, 224);
}
Node rewrite_224_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[224]++;
  return utils::mkSpecialBool(children, 224);
}
Node rewrite_224_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[224]++;
  return utils::mkSpecialBool(children, 224);
}
Node rewrite_224_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][1][0]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[224]++;
  return utils::mkSpecialBool(children, 224);
}
Node rewrite_224_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1][0]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[224]++;
  return utils::mkSpecialBool(children, 224);
}
Node rewrite_224_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1][0]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[224]++;
  return utils::mkSpecialBool(children, 224);
}
Node rewrite_224_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][1][0]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[224]++;
  return utils::mkSpecialBool(children, 224);
}
Node rewrite_301_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[301]++;
  return utils::mkSpecialBool(children, 301);
}
Node rewrite_301_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[301]++;
  return utils::mkSpecialBool(children, 301);
}
Node rewrite_301_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[301]++;
  return utils::mkSpecialBool(children, 301);
}
Node rewrite_301_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[301]++;
  return utils::mkSpecialBool(children, 301);
}
Node rewrite_301_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[301]++;
  return utils::mkSpecialBool(children, 301);
}
Node rewrite_301_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[301]++;
  return utils::mkSpecialBool(children, 301);
}
Node rewrite_301_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[301]++;
  return utils::mkSpecialBool(children, 301);
}
Node rewrite_301_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[301]++;
  return utils::mkSpecialBool(children, 301);
}
Node rewrite_301_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[301]++;
  return utils::mkSpecialBool(children, 301);
}
Node rewrite_301_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[301]++;
  return utils::mkSpecialBool(children, 301);
}
Node rewrite_301_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[301]++;
  return utils::mkSpecialBool(children, 301);
}
Node rewrite_301_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[301]++;
  return utils::mkSpecialBool(children, 301);
}
Node rewrite_93_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[93]++;
  return utils::mkSpecialBool(children, 93);
}
Node rewrite_93_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[93]++;
  return utils::mkSpecialBool(children, 93);
}
Node rewrite_93_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[93]++;
  return utils::mkSpecialBool(children, 93);
}
Node rewrite_93_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[93]++;
  return utils::mkSpecialBool(children, 93);
}
Node rewrite_93_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[93]++;
  return utils::mkSpecialBool(children, 93);
}
Node rewrite_93_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[93]++;
  return utils::mkSpecialBool(children, 93);
}
Node rewrite_93_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[93]++;
  return utils::mkSpecialBool(children, 93);
}
Node rewrite_93_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[93]++;
  return utils::mkSpecialBool(children, 93);
}
Node rewrite_133_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[133]++;
  return utils::mkSpecialBool(children, 133);
}
Node rewrite_133_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[133]++;
  return utils::mkSpecialBool(children, 133);
}
Node rewrite_133_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[133]++;
  return utils::mkSpecialBool(children, 133);
}
Node rewrite_133_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[133]++;
  return utils::mkSpecialBool(children, 133);
}
Node rewrite_133_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[133]++;
  return utils::mkSpecialBool(children, 133);
}
Node rewrite_133_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[133]++;
  return utils::mkSpecialBool(children, 133);
}
Node rewrite_133_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[133]++;
  return utils::mkSpecialBool(children, 133);
}
Node rewrite_133_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[133]++;
  return utils::mkSpecialBool(children, 133);
}
Node rewrite_133_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[133]++;
  return utils::mkSpecialBool(children, 133);
}
Node rewrite_133_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[133]++;
  return utils::mkSpecialBool(children, 133);
}
Node rewrite_133_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[133]++;
  return utils::mkSpecialBool(children, 133);
}
Node rewrite_133_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[133]++;
  return utils::mkSpecialBool(children, 133);
}
Node rewrite_136_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[136]++;
  return utils::mkSpecialBool(children, 136);
}
Node rewrite_136_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[136]++;
  return utils::mkSpecialBool(children, 136);
}
Node rewrite_136_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[136]++;
  return utils::mkSpecialBool(children, 136);
}
Node rewrite_136_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[136]++;
  return utils::mkSpecialBool(children, 136);
}
Node rewrite_136_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[136]++;
  return utils::mkSpecialBool(children, 136);
}
Node rewrite_136_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[136]++;
  return utils::mkSpecialBool(children, 136);
}
Node rewrite_136_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[136]++;
  return utils::mkSpecialBool(children, 136);
}
Node rewrite_136_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[136]++;
  return utils::mkSpecialBool(children, 136);
}
Node rewrite_169_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[169]++;
  return utils::mkSpecialBool(children, 169);
}
Node rewrite_169_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[169]++;
  return utils::mkSpecialBool(children, 169);
}
Node rewrite_169_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[169]++;
  return utils::mkSpecialBool(children, 169);
}
Node rewrite_169_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[169]++;
  return utils::mkSpecialBool(children, 169);
}
Node rewrite_169_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[169]++;
  return utils::mkSpecialBool(children, 169);
}
Node rewrite_169_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[169]++;
  return utils::mkSpecialBool(children, 169);
}
Node rewrite_169_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[169]++;
  return utils::mkSpecialBool(children, 169);
}
Node rewrite_169_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[169]++;
  return utils::mkSpecialBool(children, 169);
}
Node rewrite_169_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[169]++;
  return utils::mkSpecialBool(children, 169);
}
Node rewrite_169_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[169]++;
  return utils::mkSpecialBool(children, 169);
}
Node rewrite_169_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[169]++;
  return utils::mkSpecialBool(children, 169);
}
Node rewrite_169_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[169]++;
  return utils::mkSpecialBool(children, 169);
}
Node rewrite_178_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[178]++;
  return utils::mkSpecialBool(children, 178);
}
Node rewrite_178_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[178]++;
  return utils::mkSpecialBool(children, 178);
}
Node rewrite_178_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[178]++;
  return utils::mkSpecialBool(children, 178);
}
Node rewrite_178_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[178]++;
  return utils::mkSpecialBool(children, 178);
}
Node rewrite_178_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[178]++;
  return utils::mkSpecialBool(children, 178);
}
Node rewrite_178_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[178]++;
  return utils::mkSpecialBool(children, 178);
}
Node rewrite_178_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[178]++;
  return utils::mkSpecialBool(children, 178);
}
Node rewrite_178_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[178]++;
  return utils::mkSpecialBool(children, 178);
}
Node rewrite_178_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[178]++;
  return utils::mkSpecialBool(children, 178);
}
Node rewrite_178_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[178]++;
  return utils::mkSpecialBool(children, 178);
}
Node rewrite_178_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[178]++;
  return utils::mkSpecialBool(children, 178);
}
Node rewrite_178_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[178]++;
  return utils::mkSpecialBool(children, 178);
}
Node rewrite_234_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[234]++;
  return utils::mkSpecialBool(children, 234);
}
Node rewrite_234_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[234]++;
  return utils::mkSpecialBool(children, 234);
}
Node rewrite_234_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[234]++;
  return utils::mkSpecialBool(children, 234);
}
Node rewrite_234_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[234]++;
  return utils::mkSpecialBool(children, 234);
}
Node rewrite_234_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[234]++;
  return utils::mkSpecialBool(children, 234);
}
Node rewrite_234_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[234]++;
  return utils::mkSpecialBool(children, 234);
}
Node rewrite_234_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[234]++;
  return utils::mkSpecialBool(children, 234);
}
Node rewrite_234_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[234]++;
  return utils::mkSpecialBool(children, 234);
}
Node rewrite_240_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[240]++;
  return utils::mkSpecialBool(children, 240);
}
Node rewrite_240_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[240]++;
  return utils::mkSpecialBool(children, 240);
}
Node rewrite_240_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[240]++;
  return utils::mkSpecialBool(children, 240);
}
Node rewrite_240_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[240]++;
  return utils::mkSpecialBool(children, 240);
}
Node rewrite_240_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[240]++;
  return utils::mkSpecialBool(children, 240);
}
Node rewrite_240_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[240]++;
  return utils::mkSpecialBool(children, 240);
}
Node rewrite_240_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[240]++;
  return utils::mkSpecialBool(children, 240);
}
Node rewrite_240_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[240]++;
  return utils::mkSpecialBool(children, 240);
}
Node rewrite_240_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[240]++;
  return utils::mkSpecialBool(children, 240);
}
Node rewrite_240_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[240]++;
  return utils::mkSpecialBool(children, 240);
}
Node rewrite_240_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[240]++;
  return utils::mkSpecialBool(children, 240);
}
Node rewrite_240_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[240]++;
  return utils::mkSpecialBool(children, 240);
}
Node rewrite_261_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[261]++;
  return utils::mkSpecialBool(children, 261);
}
Node rewrite_261_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[261]++;
  return utils::mkSpecialBool(children, 261);
}
Node rewrite_261_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[261]++;
  return utils::mkSpecialBool(children, 261);
}
Node rewrite_261_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[261]++;
  return utils::mkSpecialBool(children, 261);
}
Node rewrite_261_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[261]++;
  return utils::mkSpecialBool(children, 261);
}
Node rewrite_261_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[261]++;
  return utils::mkSpecialBool(children, 261);
}
Node rewrite_261_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][1]);
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[261]++;
  return utils::mkSpecialBool(children, 261);
}
Node rewrite_261_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][1][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[261]++;
  return utils::mkSpecialBool(children, 261);
}
Node rewrite_98_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[98]++;
  return utils::mkSpecialBool(children, 98);
}
Node rewrite_98_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[98]++;
  return utils::mkSpecialBool(children, 98);
}
Node rewrite_98_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[98]++;
  return utils::mkSpecialBool(children, 98);
}
Node rewrite_98_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[98]++;
  return utils::mkSpecialBool(children, 98);
}
Node rewrite_114_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[114]++;
  return utils::mkSpecialBool(children, 114);
}
Node rewrite_114_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[114]++;
  return utils::mkSpecialBool(children, 114);
}
Node rewrite_114_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[114]++;
  return utils::mkSpecialBool(children, 114);
}
Node rewrite_114_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[114]++;
  return utils::mkSpecialBool(children, 114);
}
Node rewrite_114_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[114]++;
  return utils::mkSpecialBool(children, 114);
}
Node rewrite_114_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[114]++;
  return utils::mkSpecialBool(children, 114);
}
Node rewrite_177_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[177]++;
  return utils::mkSpecialBool(children, 177);
}
Node rewrite_177_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[177]++;
  return utils::mkSpecialBool(children, 177);
}
Node rewrite_177_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[177]++;
  return utils::mkSpecialBool(children, 177);
}
Node rewrite_177_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[177]++;
  return utils::mkSpecialBool(children, 177);
}
Node rewrite_177_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[177]++;
  return utils::mkSpecialBool(children, 177);
}
Node rewrite_177_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[177]++;
  return utils::mkSpecialBool(children, 177);
}
Node rewrite_221_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[221]++;
  return utils::mkSpecialBool(children, 221);
}
Node rewrite_221_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[221]++;
  return utils::mkSpecialBool(children, 221);
}
Node rewrite_221_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[221]++;
  return utils::mkSpecialBool(children, 221);
}
Node rewrite_221_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[221]++;
  return utils::mkSpecialBool(children, 221);
}
Node rewrite_269_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[269]++;
  return utils::mkSpecialBool(children, 269);
}
Node rewrite_269_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[269]++;
  return utils::mkSpecialBool(children, 269);
}
Node rewrite_269_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][1]);
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[269]++;
  return utils::mkSpecialBool(children, 269);
}
Node rewrite_269_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][1]);
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[269]++;
  return utils::mkSpecialBool(children, 269);
}
Node rewrite_308_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[308]++;
  return utils::mkSpecialBool(children, 308);
}
Node rewrite_308_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[308]++;
  return utils::mkSpecialBool(children, 308);
}
Node rewrite_308_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[308]++;
  return utils::mkSpecialBool(children, 308);
}
Node rewrite_308_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[308]++;
  return utils::mkSpecialBool(children, 308);
}
Node rewrite_325_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[325]++;
  return utils::mkSpecialBool(children, 325);
}
Node rewrite_325_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[325]++;
  return utils::mkSpecialBool(children, 325);
}
Node rewrite_325_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[325]++;
  return utils::mkSpecialBool(children, 325);
}
Node rewrite_325_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[325]++;
  return utils::mkSpecialBool(children, 325);
}
Node rewrite_79_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[79]++;
  return utils::mkSpecialBool(children, 79);
}
Node rewrite_79_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[79]++;
  return utils::mkSpecialBool(children, 79);
}
Node rewrite_79_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[79]++;
  return utils::mkSpecialBool(children, 79);
}
Node rewrite_79_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[79]++;
  return utils::mkSpecialBool(children, 79);
}
Node rewrite_79_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[79]++;
  return utils::mkSpecialBool(children, 79);
}
Node rewrite_79_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[79]++;
  return utils::mkSpecialBool(children, 79);
}
Node rewrite_79_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[79]++;
  return utils::mkSpecialBool(children, 79);
}
Node rewrite_79_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[79]++;
  return utils::mkSpecialBool(children, 79);
}
Node rewrite_79_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[79]++;
  return utils::mkSpecialBool(children, 79);
}
Node rewrite_79_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[79]++;
  return utils::mkSpecialBool(children, 79);
}
Node rewrite_79_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[79]++;
  return utils::mkSpecialBool(children, 79);
}
Node rewrite_79_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[79]++;
  return utils::mkSpecialBool(children, 79);
}
Node rewrite_186_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[186]++;
  return utils::mkSpecialBool(children, 186);
}
Node rewrite_186_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[186]++;
  return utils::mkSpecialBool(children, 186);
}
Node rewrite_186_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[186]++;
  return utils::mkSpecialBool(children, 186);
}
Node rewrite_186_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[186]++;
  return utils::mkSpecialBool(children, 186);
}
Node rewrite_186_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[186]++;
  return utils::mkSpecialBool(children, 186);
}
Node rewrite_186_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[186]++;
  return utils::mkSpecialBool(children, 186);
}
Node rewrite_186_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[186]++;
  return utils::mkSpecialBool(children, 186);
}
Node rewrite_186_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[186]++;
  return utils::mkSpecialBool(children, 186);
}
Node rewrite_186_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[186]++;
  return utils::mkSpecialBool(children, 186);
}
Node rewrite_186_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[186]++;
  return utils::mkSpecialBool(children, 186);
}
Node rewrite_186_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][2]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[186]++;
  return utils::mkSpecialBool(children, 186);
}
Node rewrite_186_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][2]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[186]++;
  return utils::mkSpecialBool(children, 186);
}
Node rewrite_187_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[187]++;
  return utils::mkSpecialBool(children, 187);
}
Node rewrite_187_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[187]++;
  return utils::mkSpecialBool(children, 187);
}
Node rewrite_187_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[187]++;
  return utils::mkSpecialBool(children, 187);
}
Node rewrite_187_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][1]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[187]++;
  return utils::mkSpecialBool(children, 187);
}
Node rewrite_187_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[187]++;
  return utils::mkSpecialBool(children, 187);
}
Node rewrite_187_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[187]++;
  return utils::mkSpecialBool(children, 187);
}
Node rewrite_187_6(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[187]++;
  return utils::mkSpecialBool(children, 187);
}
Node rewrite_187_7(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[187]++;
  return utils::mkSpecialBool(children, 187);
}
Node rewrite_187_8(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][2][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[187]++;
  return utils::mkSpecialBool(children, 187);
}
Node rewrite_187_9(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[187]++;
  return utils::mkSpecialBool(children, 187);
}
Node rewrite_187_10(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[187]++;
  return utils::mkSpecialBool(children, 187);
}
Node rewrite_187_11(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[187]++;
  return utils::mkSpecialBool(children, 187);
}
Node rewrite_352_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[352]++;
  return utils::mkSpecialBool(children, 352);
}
Node rewrite_352_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[352]++;
  return utils::mkSpecialBool(children, 352);
}
Node rewrite_49_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[49]++;
  return utils::mkSpecialBool(children, 49);
}
Node rewrite_49_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[49]++;
  return utils::mkSpecialBool(children, 49);
}
Node rewrite_49_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[49]++;
  return utils::mkSpecialBool(children, 49);
}
Node rewrite_49_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[49]++;
  return utils::mkSpecialBool(children, 49);
}
Node rewrite_73_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[73]++;
  return utils::mkSpecialBool(children, 73);
}
Node rewrite_73_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[73]++;
  return utils::mkSpecialBool(children, 73);
}
Node rewrite_73_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[73]++;
  return utils::mkSpecialBool(children, 73);
}
Node rewrite_73_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[73]++;
  return utils::mkSpecialBool(children, 73);
}
Node rewrite_73_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[73]++;
  return utils::mkSpecialBool(children, 73);
}
Node rewrite_73_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[73]++;
  return utils::mkSpecialBool(children, 73);
}
Node rewrite_129_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[129]++;
  return utils::mkSpecialBool(children, 129);
}
Node rewrite_129_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[129]++;
  return utils::mkSpecialBool(children, 129);
}
Node rewrite_129_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[129]++;
  return utils::mkSpecialBool(children, 129);
}
Node rewrite_129_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[129]++;
  return utils::mkSpecialBool(children, 129);
}
Node rewrite_129_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[129]++;
  return utils::mkSpecialBool(children, 129);
}
Node rewrite_129_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[129]++;
  return utils::mkSpecialBool(children, 129);
}
Node rewrite_231_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[231]++;
  return utils::mkSpecialBool(children, 231);
}
Node rewrite_231_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][1]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[231]++;
  return utils::mkSpecialBool(children, 231);
}
Node rewrite_231_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][1][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[231]++;
  return utils::mkSpecialBool(children, 231);
}
Node rewrite_231_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[231]++;
  return utils::mkSpecialBool(children, 231);
}
Node rewrite_56_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[56]++;
  return utils::mkSpecialBool(children, 56);
}
Node rewrite_56_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[56]++;
  return utils::mkSpecialBool(children, 56);
}
Node rewrite_165_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[165]++;
  return utils::mkSpecialBool(children, 165);
}
Node rewrite_165_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][1]);
  children.push_back(node[0][0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[165]++;
  return utils::mkSpecialBool(children, 165);
}
Node rewrite_264_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[264]++;
  return utils::mkSpecialBool(children, 264);
}
Node rewrite_264_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[264]++;
  return utils::mkSpecialBool(children, 264);
}
Node rewrite_92_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[92]++;
  return utils::mkSpecialBool(children, 92);
}
Node rewrite_92_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[92]++;
  return utils::mkSpecialBool(children, 92);
}
Node rewrite_92_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[92]++;
  return utils::mkSpecialBool(children, 92);
}
Node rewrite_92_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[92]++;
  return utils::mkSpecialBool(children, 92);
}
Node rewrite_92_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[92]++;
  return utils::mkSpecialBool(children, 92);
}
Node rewrite_92_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[92]++;
  return utils::mkSpecialBool(children, 92);
}
Node rewrite_107_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[107]++;
  return utils::mkSpecialBool(children, 107);
}
Node rewrite_107_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[107]++;
  return utils::mkSpecialBool(children, 107);
}
Node rewrite_107_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[107]++;
  return utils::mkSpecialBool(children, 107);
}
Node rewrite_107_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[107]++;
  return utils::mkSpecialBool(children, 107);
}
Node rewrite_107_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[107]++;
  return utils::mkSpecialBool(children, 107);
}
Node rewrite_107_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[107]++;
  return utils::mkSpecialBool(children, 107);
}
Node rewrite_176_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  children.push_back(node[2][0]);
  children.push_back(node[2][1]);
  children.push_back(node[2][2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[176]++;
  return utils::mkSpecialBool(children, 176);
}
Node rewrite_50_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[50]++;
  return utils::mkSpecialBool(children, 50);
}
Node rewrite_50_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[50]++;
  return utils::mkSpecialBool(children, 50);
}
Node rewrite_53_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[53]++;
  return utils::mkSpecialBool(children, 53);
}
Node rewrite_53_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[53]++;
  return utils::mkSpecialBool(children, 53);
}
Node rewrite_43_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[43]++;
  return utils::mkSpecialBool(children, 43);
}
Node rewrite_37_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[37]++;
  return utils::mkSpecialBool(children, 37);
}
Node rewrite_37(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[13] && predicates[29] && predicates[9] && true && true && true && predicates[37] && true && true && true) {
    return rewrite_211_0(node);
  }
  else if (predicates[10] && predicates[13] && predicates[29] && true && predicates[12] && true && true && predicates[37] && true && true && true) {
    return rewrite_211_1(node);
  }
  else if (predicates[10] && predicates[13] && predicates[38] && true && predicates[14] && predicates[20] && true && true && true && true && true) {
    return rewrite_211_2(node);
  }
  else if (predicates[10] && predicates[13] && predicates[29] && predicates[9] && true && true && true && predicates[37] && true && true && true) {
    return rewrite_211_3(node);
  }
  else if (predicates[10] && predicates[13] && predicates[38] && true && predicates[14] && true && predicates[39] && true && true && true && true) {
    return rewrite_211_4(node);
  }
  else if (predicates[10] && predicates[13] && predicates[38] && true && predicates[14] && predicates[20] && true && true && true && true && true) {
    return rewrite_211_5(node);
  }
  else if (predicates[10] && predicates[13] && predicates[29] && true && predicates[12] && true && true && predicates[37] && true && true && true) {
    return rewrite_211_6(node);
  }
  else if (predicates[10] && predicates[13] && predicates[38] && true && predicates[14] && true && predicates[39] && true && true && true && true) {
    return rewrite_211_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_211(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[17] && predicates[29] && true && true && predicates[37] && true && predicates[41] && true && true && true) {
    return rewrite_219_0(node);
  }
  else if (predicates[10] && predicates[17] && predicates[38] && true && predicates[14] && true && true && predicates[41] && true && true && true) {
    return rewrite_219_1(node);
  }
  else if (predicates[10] && predicates[17] && predicates[38] && true && predicates[37] && true && predicates[30] && true && true && true && true) {
    return rewrite_219_2(node);
  }
  else if (predicates[10] && predicates[17] && predicates[38] && true && predicates[37] && true && predicates[30] && true && true && true && true) {
    return rewrite_219_3(node);
  }
  else if (predicates[10] && predicates[17] && predicates[29] && true && true && predicates[37] && true && predicates[41] && true && true && true) {
    return rewrite_219_4(node);
  }
  else if (predicates[10] && predicates[17] && predicates[29] && true && true && predicates[37] && true && predicates[41] && true && true && true) {
    return rewrite_219_5(node);
  }
  else if (predicates[10] && predicates[17] && predicates[38] && true && predicates[14] && true && true && predicates[41] && true && true && true) {
    return rewrite_219_6(node);
  }
  else if (predicates[10] && predicates[17] && predicates[38] && true && predicates[14] && true && true && predicates[41] && true && true && true) {
    return rewrite_219_7(node);
  }
  else if (predicates[10] && predicates[17] && predicates[38] && true && predicates[37] && true && predicates[30] && true && true && true && true) {
    return rewrite_219_8(node);
  }
  else if (predicates[10] && predicates[17] && predicates[29] && true && true && predicates[37] && true && predicates[41] && true && true && true) {
    return rewrite_219_9(node);
  }
  else if (predicates[10] && predicates[17] && predicates[38] && true && predicates[14] && true && true && predicates[41] && true && true && true) {
    return rewrite_219_10(node);
  }
  else if (predicates[10] && predicates[17] && predicates[38] && true && predicates[37] && true && predicates[30] && true && true && true && true) {
    return rewrite_219_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_219(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[13] && true && predicates[14] && predicates[20] && predicates[4] && true && true && true && true && true) {
    return rewrite_224_0(node);
  }
  else if (predicates[10] && predicates[13] && predicates[29] && true && predicates[12] && predicates[35] && true && true && true && true && true) {
    return rewrite_224_1(node);
  }
  else if (predicates[10] && predicates[13] && true && predicates[14] && true && predicates[39] && predicates[34] && true && true && true && true) {
    return rewrite_224_2(node);
  }
  else if (predicates[10] && predicates[13] && predicates[29] && predicates[9] && predicates[7] && true && true && true && true && true && true) {
    return rewrite_224_3(node);
  }
  else if (predicates[10] && predicates[13] && true && predicates[14] && true && predicates[39] && true && predicates[40] && true && true && true) {
    return rewrite_224_4(node);
  }
  else if (predicates[10] && predicates[13] && true && predicates[14] && predicates[20] && true && predicates[16] && true && true && true && true) {
    return rewrite_224_5(node);
  }
  else if (predicates[10] && predicates[13] && predicates[29] && predicates[9] && true && predicates[21] && true && true && true && true && true) {
    return rewrite_224_6(node);
  }
  else if (predicates[10] && predicates[13] && predicates[29] && true && predicates[12] && true && predicates[24] && true && true && true && true) {
    return rewrite_224_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_224(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[25] && true && predicates[3] && predicates[1] && true && predicates[28] && true && true && true && true) {
    return rewrite_301_0(node);
  }
  else if (predicates[10] && predicates[25] && true && true && predicates[27] && predicates[5] && true && predicates[6] && true && true && true) {
    return rewrite_301_1(node);
  }
  else if (predicates[10] && predicates[25] && true && true && predicates[27] && predicates[5] && true && predicates[6] && true && true && true) {
    return rewrite_301_2(node);
  }
  else if (predicates[10] && predicates[25] && true && predicates[3] && predicates[1] && true && predicates[28] && true && true && true && true) {
    return rewrite_301_3(node);
  }
  else if (predicates[10] && predicates[25] && true && predicates[3] && predicates[1] && true && predicates[28] && true && true && true && true) {
    return rewrite_301_4(node);
  }
  else if (predicates[10] && predicates[25] && true && true && predicates[27] && predicates[5] && true && predicates[6] && true && true && true) {
    return rewrite_301_5(node);
  }
  else if (predicates[10] && predicates[25] && predicates[26] && predicates[31] && true && predicates[33] && true && true && true && true && true) {
    return rewrite_301_6(node);
  }
  else if (predicates[10] && predicates[25] && predicates[26] && predicates[31] && true && predicates[33] && true && true && true && true && true) {
    return rewrite_301_7(node);
  }
  else if (predicates[10] && predicates[25] && true && predicates[3] && predicates[1] && true && predicates[28] && true && true && true && true) {
    return rewrite_301_8(node);
  }
  else if (predicates[10] && predicates[25] && predicates[26] && predicates[31] && true && predicates[33] && true && true && true && true && true) {
    return rewrite_301_9(node);
  }
  else if (predicates[10] && predicates[25] && predicates[26] && predicates[31] && true && predicates[33] && true && true && true && true && true) {
    return rewrite_301_10(node);
  }
  else if (predicates[10] && predicates[25] && true && true && predicates[27] && predicates[5] && true && predicates[6] && true && true && true) {
    return rewrite_301_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_301(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[13] && predicates[29] && true && predicates[12] && true && true && true && true && true) {
    return rewrite_93_0(node);
  }
  else if (predicates[10] && predicates[13] && true && predicates[14] && predicates[20] && true && true && true && true && true) {
    return rewrite_93_1(node);
  }
  else if (predicates[10] && predicates[13] && predicates[29] && predicates[9] && true && true && true && true && true && true) {
    return rewrite_93_2(node);
  }
  else if (predicates[10] && predicates[13] && true && predicates[14] && true && predicates[39] && true && true && true && true) {
    return rewrite_93_3(node);
  }
  else if (predicates[10] && predicates[13] && predicates[29] && predicates[9] && true && true && true && true && true && true) {
    return rewrite_93_4(node);
  }
  else if (predicates[10] && predicates[13] && true && predicates[14] && true && predicates[39] && true && true && true && true) {
    return rewrite_93_5(node);
  }
  else if (predicates[10] && predicates[13] && true && predicates[14] && predicates[20] && true && true && true && true && true) {
    return rewrite_93_6(node);
  }
  else if (predicates[10] && predicates[13] && predicates[29] && true && predicates[12] && true && true && true && true && true) {
    return rewrite_93_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_93(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[17] && predicates[38] && true && true && predicates[30] && true && true && true && true) {
    return rewrite_133_0(node);
  }
  else if (predicates[10] && predicates[17] && predicates[29] && true && true && predicates[37] && true && true && true && true) {
    return rewrite_133_1(node);
  }
  else if (predicates[10] && predicates[17] && predicates[29] && true && true && predicates[37] && true && true && true && true) {
    return rewrite_133_2(node);
  }
  else if (predicates[10] && predicates[17] && predicates[38] && true && predicates[14] && true && true && true && true && true) {
    return rewrite_133_3(node);
  }
  else if (predicates[10] && predicates[17] && predicates[29] && true && true && true && predicates[41] && true && true && true) {
    return rewrite_133_4(node);
  }
  else if (predicates[10] && predicates[17] && true && predicates[14] && true && true && predicates[41] && true && true && true) {
    return rewrite_133_5(node);
  }
  else if (predicates[10] && predicates[17] && true && predicates[37] && true && predicates[30] && true && true && true && true) {
    return rewrite_133_6(node);
  }
  else if (predicates[10] && predicates[17] && true && predicates[14] && true && true && predicates[41] && true && true && true) {
    return rewrite_133_7(node);
  }
  else if (predicates[10] && predicates[17] && predicates[29] && true && true && true && predicates[41] && true && true && true) {
    return rewrite_133_8(node);
  }
  else if (predicates[10] && predicates[17] && predicates[38] && true && predicates[14] && true && true && true && true && true) {
    return rewrite_133_9(node);
  }
  else if (predicates[10] && predicates[17] && predicates[38] && true && true && predicates[30] && true && true && true && true) {
    return rewrite_133_10(node);
  }
  else if (predicates[10] && predicates[17] && true && predicates[37] && true && predicates[30] && true && true && true && true) {
    return rewrite_133_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_133(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[13] && predicates[29] && true && true && predicates[14] && true && true && true && true) {
    return rewrite_136_0(node);
  }
  else if (predicates[10] && predicates[13] && predicates[29] && true && true && predicates[14] && true && true && true && true) {
    return rewrite_136_1(node);
  }
  else if (predicates[10] && predicates[13] && predicates[29] && true && true && predicates[14] && true && true && true && true) {
    return rewrite_136_2(node);
  }
  else if (predicates[10] && predicates[13] && predicates[29] && true && true && predicates[14] && true && true && true && true) {
    return rewrite_136_3(node);
  }
  else if (predicates[10] && predicates[13] && predicates[29] && true && true && predicates[14] && true && true && true && true) {
    return rewrite_136_4(node);
  }
  else if (predicates[10] && predicates[13] && predicates[29] && true && true && predicates[14] && true && true && true && true) {
    return rewrite_136_5(node);
  }
  else if (predicates[10] && predicates[13] && predicates[29] && true && true && predicates[14] && true && true && true && true) {
    return rewrite_136_6(node);
  }
  else if (predicates[10] && predicates[13] && predicates[29] && true && true && predicates[14] && true && true && true && true) {
    return rewrite_136_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_136(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[25] && true && predicates[3] && predicates[1] && true && true && true && true && true) {
    return rewrite_169_0(node);
  }
  else if (predicates[10] && predicates[25] && true && predicates[3] && true && predicates[28] && true && true && true && true) {
    return rewrite_169_1(node);
  }
  else if (predicates[10] && predicates[25] && predicates[26] && true && predicates[33] && true && true && true && true && true) {
    return rewrite_169_2(node);
  }
  else if (predicates[10] && predicates[25] && predicates[26] && true && predicates[33] && true && true && true && true && true) {
    return rewrite_169_3(node);
  }
  else if (predicates[10] && predicates[25] && true && predicates[3] && true && predicates[28] && true && true && true && true) {
    return rewrite_169_4(node);
  }
  else if (predicates[10] && predicates[25] && predicates[26] && predicates[31] && true && true && true && true && true && true) {
    return rewrite_169_5(node);
  }
  else if (predicates[10] && predicates[25] && predicates[26] && predicates[31] && true && true && true && true && true && true) {
    return rewrite_169_6(node);
  }
  else if (predicates[10] && predicates[25] && true && true && predicates[27] && true && predicates[6] && true && true && true) {
    return rewrite_169_7(node);
  }
  else if (predicates[10] && predicates[25] && true && true && predicates[27] && predicates[5] && true && true && true && true) {
    return rewrite_169_8(node);
  }
  else if (predicates[10] && predicates[25] && true && true && predicates[27] && true && predicates[6] && true && true && true) {
    return rewrite_169_9(node);
  }
  else if (predicates[10] && predicates[25] && true && true && predicates[27] && predicates[5] && true && true && true && true) {
    return rewrite_169_10(node);
  }
  else if (predicates[10] && predicates[25] && true && predicates[3] && predicates[1] && true && true && true && true && true) {
    return rewrite_169_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_169(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[32] && true && predicates[42] && predicates[1] && true && true && true && true && true) {
    return rewrite_178_0(node);
  }
  else if (predicates[10] && predicates[32] && true && predicates[42] && true && predicates[28] && true && true && true && true) {
    return rewrite_178_1(node);
  }
  else if (predicates[10] && predicates[32] && predicates[23] && true && predicates[33] && true && true && true && true && true) {
    return rewrite_178_2(node);
  }
  else if (predicates[10] && predicates[32] && predicates[23] && predicates[31] && true && true && true && true && true && true) {
    return rewrite_178_3(node);
  }
  else if (predicates[10] && predicates[32] && predicates[23] && true && predicates[33] && true && true && true && true && true) {
    return rewrite_178_4(node);
  }
  else if (predicates[10] && predicates[32] && predicates[23] && true && true && predicates[36] && true && true && true && true) {
    return rewrite_178_5(node);
  }
  else if (predicates[10] && predicates[32] && true && predicates[42] && true && true && predicates[8] && true && true && true) {
    return rewrite_178_6(node);
  }
  else if (predicates[10] && predicates[32] && predicates[23] && predicates[31] && true && true && true && true && true && true) {
    return rewrite_178_7(node);
  }
  else if (predicates[10] && predicates[32] && true && predicates[42] && true && true && predicates[8] && true && true && true) {
    return rewrite_178_8(node);
  }
  else if (predicates[10] && predicates[32] && true && predicates[42] && predicates[1] && true && true && true && true && true) {
    return rewrite_178_9(node);
  }
  else if (predicates[10] && predicates[32] && true && predicates[42] && true && predicates[28] && true && true && true && true) {
    return rewrite_178_10(node);
  }
  else if (predicates[10] && predicates[32] && predicates[23] && true && true && predicates[36] && true && true && true && true) {
    return rewrite_178_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_178(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[32] && predicates[26] && true && true && predicates[3] && true && true && true && true) {
    return rewrite_234_0(node);
  }
  else if (predicates[10] && predicates[32] && predicates[26] && true && true && predicates[3] && true && true && true && true) {
    return rewrite_234_1(node);
  }
  else if (predicates[10] && predicates[32] && predicates[26] && true && true && predicates[3] && true && true && true && true) {
    return rewrite_234_2(node);
  }
  else if (predicates[10] && predicates[32] && predicates[26] && true && true && predicates[3] && true && true && true && true) {
    return rewrite_234_3(node);
  }
  else if (predicates[10] && predicates[32] && predicates[26] && true && true && predicates[3] && true && true && true && true) {
    return rewrite_234_4(node);
  }
  else if (predicates[10] && predicates[32] && predicates[26] && true && true && predicates[3] && true && true && true && true) {
    return rewrite_234_5(node);
  }
  else if (predicates[10] && predicates[32] && predicates[26] && true && true && predicates[3] && true && true && true && true) {
    return rewrite_234_6(node);
  }
  else if (predicates[10] && predicates[32] && predicates[26] && true && true && predicates[3] && true && true && true && true) {
    return rewrite_234_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_234(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[25] && true && predicates[37] && true && predicates[27] && true && true && true && true) {
    return rewrite_240_0(node);
  }
  else if (predicates[10] && predicates[25] && predicates[38] && true && predicates[3] && true && true && true && true && true) {
    return rewrite_240_1(node);
  }
  else if (predicates[10] && predicates[25] && predicates[38] && true && true && predicates[27] && true && true && true && true) {
    return rewrite_240_2(node);
  }
  else if (predicates[10] && predicates[25] && true && predicates[37] && true && predicates[27] && true && true && true && true) {
    return rewrite_240_3(node);
  }
  else if (predicates[10] && predicates[25] && predicates[26] && true && true && predicates[37] && true && true && true && true) {
    return rewrite_240_4(node);
  }
  else if (predicates[10] && predicates[25] && predicates[26] && true && true && true && predicates[41] && true && true && true) {
    return rewrite_240_5(node);
  }
  else if (predicates[10] && predicates[25] && predicates[38] && true && predicates[3] && true && true && true && true && true) {
    return rewrite_240_6(node);
  }
  else if (predicates[10] && predicates[25] && true && predicates[3] && true && true && predicates[41] && true && true && true) {
    return rewrite_240_7(node);
  }
  else if (predicates[10] && predicates[25] && predicates[26] && true && true && true && predicates[41] && true && true && true) {
    return rewrite_240_8(node);
  }
  else if (predicates[10] && predicates[25] && predicates[26] && true && true && predicates[37] && true && true && true && true) {
    return rewrite_240_9(node);
  }
  else if (predicates[10] && predicates[25] && true && predicates[3] && true && true && predicates[41] && true && true && true) {
    return rewrite_240_10(node);
  }
  else if (predicates[10] && predicates[25] && predicates[38] && true && true && predicates[27] && true && true && true && true) {
    return rewrite_240_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_240(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[32] && predicates[26] && predicates[18] && true && true && true && true && true && true) {
    return rewrite_261_0(node);
  }
  else if (predicates[10] && predicates[32] && predicates[26] && true && predicates[0] && true && true && true && true && true) {
    return rewrite_261_1(node);
  }
  else if (predicates[10] && predicates[32] && true && predicates[3] && predicates[19] && true && true && true && true && true) {
    return rewrite_261_2(node);
  }
  else if (predicates[10] && predicates[32] && true && predicates[3] && true && predicates[22] && true && true && true && true) {
    return rewrite_261_3(node);
  }
  else if (predicates[10] && predicates[32] && true && predicates[3] && predicates[19] && true && true && true && true && true) {
    return rewrite_261_4(node);
  }
  else if (predicates[10] && predicates[32] && predicates[26] && predicates[18] && true && true && true && true && true && true) {
    return rewrite_261_5(node);
  }
  else if (predicates[10] && predicates[32] && true && predicates[3] && true && predicates[22] && true && true && true && true) {
    return rewrite_261_6(node);
  }
  else if (predicates[10] && predicates[32] && predicates[26] && true && predicates[0] && true && true && true && true && true) {
    return rewrite_261_7(node);
  }
  else {
    return node;
  }
}
Node rewrite_261(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[13] && predicates[29] && true && true && predicates[37] && true && true && true) {
    return rewrite_98_0(node);
  }
  else if (predicates[10] && predicates[13] && predicates[38] && true && predicates[14] && true && true && true && true) {
    return rewrite_98_1(node);
  }
  else if (predicates[10] && predicates[13] && predicates[38] && true && predicates[14] && true && true && true && true) {
    return rewrite_98_2(node);
  }
  else if (predicates[10] && predicates[13] && predicates[29] && true && true && predicates[37] && true && true && true) {
    return rewrite_98_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_98(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[17] && predicates[38] && true && predicates[37] && true && true && true && true) {
    return rewrite_114_0(node);
  }
  else if (predicates[10] && predicates[17] && true && predicates[37] && true && predicates[41] && true && true && true) {
    return rewrite_114_1(node);
  }
  else if (predicates[10] && predicates[17] && true && predicates[37] && true && predicates[41] && true && true && true) {
    return rewrite_114_2(node);
  }
  else if (predicates[10] && predicates[17] && predicates[38] && true && true && predicates[41] && true && true && true) {
    return rewrite_114_3(node);
  }
  else if (predicates[10] && predicates[17] && predicates[38] && true && predicates[37] && true && true && true && true) {
    return rewrite_114_4(node);
  }
  else if (predicates[10] && predicates[17] && predicates[38] && true && true && predicates[41] && true && true && true) {
    return rewrite_114_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_114(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[25] && predicates[38] && true && true && predicates[41] && true && true && true) {
    return rewrite_177_0(node);
  }
  else if (predicates[10] && predicates[25] && true && predicates[37] && true && predicates[41] && true && true && true) {
    return rewrite_177_1(node);
  }
  else if (predicates[10] && predicates[25] && predicates[38] && true && predicates[37] && true && true && true && true) {
    return rewrite_177_2(node);
  }
  else if (predicates[10] && predicates[25] && true && predicates[37] && true && predicates[41] && true && true && true) {
    return rewrite_177_3(node);
  }
  else if (predicates[10] && predicates[25] && predicates[38] && true && true && predicates[41] && true && true && true) {
    return rewrite_177_4(node);
  }
  else if (predicates[10] && predicates[25] && predicates[38] && true && predicates[37] && true && true && true && true) {
    return rewrite_177_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_177(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[13] && predicates[29] && predicates[31] && true && true && true && true && true) {
    return rewrite_221_0(node);
  }
  else if (predicates[10] && predicates[13] && predicates[29] && true && predicates[33] && true && true && true && true) {
    return rewrite_221_1(node);
  }
  else if (predicates[10] && predicates[13] && true && predicates[14] && true && predicates[28] && true && true && true) {
    return rewrite_221_2(node);
  }
  else if (predicates[10] && predicates[13] && true && predicates[14] && predicates[1] && true && true && true && true) {
    return rewrite_221_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_221(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[13] && true && predicates[37] && predicates[19] && true && true && true && true) {
    return rewrite_269_0(node);
  }
  else if (predicates[10] && predicates[13] && predicates[38] && predicates[18] && true && true && true && true && true) {
    return rewrite_269_1(node);
  }
  else if (predicates[10] && predicates[13] && true && predicates[37] && predicates[19] && true && true && true && true) {
    return rewrite_269_2(node);
  }
  else if (predicates[10] && predicates[13] && predicates[38] && predicates[18] && true && true && true && true && true) {
    return rewrite_269_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_269(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[11] && predicates[26] && true && predicates[33] && true && true && true && true) {
    return rewrite_308_0(node);
  }
  else if (predicates[10] && predicates[11] && true && predicates[3] && true && predicates[28] && true && true && true) {
    return rewrite_308_1(node);
  }
  else if (predicates[10] && predicates[11] && true && predicates[3] && predicates[1] && true && true && true && true) {
    return rewrite_308_2(node);
  }
  else if (predicates[10] && predicates[11] && predicates[26] && predicates[31] && true && true && true && true && true) {
    return rewrite_308_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_308(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[32] && true && predicates[3] && true && predicates[28] && true && true && true) {
    return rewrite_325_0(node);
  }
  else if (predicates[10] && predicates[32] && predicates[26] && predicates[31] && true && true && true && true && true) {
    return rewrite_325_1(node);
  }
  else if (predicates[10] && predicates[32] && true && predicates[3] && predicates[1] && true && true && true && true) {
    return rewrite_325_2(node);
  }
  else if (predicates[10] && predicates[32] && predicates[26] && true && predicates[33] && true && true && true && true) {
    return rewrite_325_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_325(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[17] && predicates[29] && true && true && true && true && true && true) {
    return rewrite_79_0(node);
  }
  else if (predicates[10] && predicates[17] && true && predicates[14] && true && true && true && true && true) {
    return rewrite_79_1(node);
  }
  else if (predicates[10] && predicates[17] && true && true && predicates[30] && true && true && true && true) {
    return rewrite_79_2(node);
  }
  else if (predicates[10] && predicates[17] && true && predicates[14] && true && true && true && true && true) {
    return rewrite_79_3(node);
  }
  else if (predicates[10] && predicates[17] && true && predicates[14] && true && true && true && true && true) {
    return rewrite_79_4(node);
  }
  else if (predicates[10] && predicates[17] && predicates[29] && true && true && true && true && true && true) {
    return rewrite_79_5(node);
  }
  else if (predicates[10] && predicates[17] && predicates[29] && true && true && true && true && true && true) {
    return rewrite_79_6(node);
  }
  else if (predicates[10] && predicates[17] && true && predicates[14] && true && true && true && true && true) {
    return rewrite_79_7(node);
  }
  else if (predicates[10] && predicates[17] && true && true && predicates[30] && true && true && true && true) {
    return rewrite_79_8(node);
  }
  else if (predicates[10] && predicates[17] && true && true && predicates[30] && true && true && true && true) {
    return rewrite_79_9(node);
  }
  else if (predicates[10] && predicates[17] && predicates[29] && true && true && true && true && true && true) {
    return rewrite_79_10(node);
  }
  else if (predicates[10] && predicates[17] && true && true && predicates[30] && true && true && true && true) {
    return rewrite_79_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_79(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[32] && predicates[23] && true && true && true && true && true && true) {
    return rewrite_186_0(node);
  }
  else if (predicates[10] && predicates[32] && predicates[23] && true && true && true && true && true && true) {
    return rewrite_186_1(node);
  }
  else if (predicates[10] && predicates[32] && true && predicates[42] && true && true && true && true && true) {
    return rewrite_186_2(node);
  }
  else if (predicates[10] && predicates[32] && true && predicates[42] && true && true && true && true && true) {
    return rewrite_186_3(node);
  }
  else if (predicates[10] && predicates[32] && predicates[23] && true && true && true && true && true && true) {
    return rewrite_186_4(node);
  }
  else if (predicates[10] && predicates[32] && predicates[23] && true && true && true && true && true && true) {
    return rewrite_186_5(node);
  }
  else if (predicates[10] && predicates[32] && true && predicates[42] && true && true && true && true && true) {
    return rewrite_186_6(node);
  }
  else if (predicates[10] && predicates[32] && true && predicates[42] && true && true && true && true && true) {
    return rewrite_186_7(node);
  }
  else if (predicates[10] && predicates[32] && predicates[23] && true && true && true && true && true && true) {
    return rewrite_186_8(node);
  }
  else if (predicates[10] && predicates[32] && true && predicates[42] && true && true && true && true && true) {
    return rewrite_186_9(node);
  }
  else if (predicates[10] && predicates[32] && true && predicates[42] && true && true && true && true && true) {
    return rewrite_186_10(node);
  }
  else if (predicates[10] && predicates[32] && predicates[23] && true && true && true && true && true && true) {
    return rewrite_186_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_186(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[25] && true && predicates[3] && true && true && true && true && true) {
    return rewrite_187_0(node);
  }
  else if (predicates[10] && predicates[25] && true && true && predicates[27] && true && true && true && true) {
    return rewrite_187_1(node);
  }
  else if (predicates[10] && predicates[25] && predicates[26] && true && true && true && true && true && true) {
    return rewrite_187_2(node);
  }
  else if (predicates[10] && predicates[25] && true && true && predicates[27] && true && true && true && true) {
    return rewrite_187_3(node);
  }
  else if (predicates[10] && predicates[25] && true && predicates[3] && true && true && true && true && true) {
    return rewrite_187_4(node);
  }
  else if (predicates[10] && predicates[25] && true && true && predicates[27] && true && true && true && true) {
    return rewrite_187_5(node);
  }
  else if (predicates[10] && predicates[25] && true && predicates[3] && true && true && true && true && true) {
    return rewrite_187_6(node);
  }
  else if (predicates[10] && predicates[25] && predicates[26] && true && true && true && true && true && true) {
    return rewrite_187_7(node);
  }
  else if (predicates[10] && predicates[25] && true && true && predicates[27] && true && true && true && true) {
    return rewrite_187_8(node);
  }
  else if (predicates[10] && predicates[25] && predicates[26] && true && true && true && true && true && true) {
    return rewrite_187_9(node);
  }
  else if (predicates[10] && predicates[25] && predicates[26] && true && true && true && true && true && true) {
    return rewrite_187_10(node);
  }
  else if (predicates[10] && predicates[25] && true && predicates[3] && true && true && true && true && true) {
    return rewrite_187_11(node);
  }
  else {
    return node;
  }
}
Node rewrite_187(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[13] && predicates[38] && true && predicates[37] && true && true && true) {
    return rewrite_352_0(node);
  }
  else if (predicates[10] && predicates[13] && predicates[38] && true && predicates[37] && true && true && true) {
    return rewrite_352_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_352(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[13] && predicates[29] && true && true && true && true && true) {
    return rewrite_49_0(node);
  }
  else if (predicates[10] && predicates[13] && true && predicates[14] && true && true && true && true) {
    return rewrite_49_1(node);
  }
  else if (predicates[10] && predicates[13] && true && predicates[14] && true && true && true && true) {
    return rewrite_49_2(node);
  }
  else if (predicates[10] && predicates[13] && predicates[29] && true && true && true && true && true) {
    return rewrite_49_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_49(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[17] && true && predicates[37] && true && true && true && true) {
    return rewrite_73_0(node);
  }
  else if (predicates[10] && predicates[17] && true && true && predicates[41] && true && true && true) {
    return rewrite_73_1(node);
  }
  else if (predicates[10] && predicates[17] && true && true && predicates[41] && true && true && true) {
    return rewrite_73_2(node);
  }
  else if (predicates[10] && predicates[17] && true && predicates[37] && true && true && true && true) {
    return rewrite_73_3(node);
  }
  else if (predicates[10] && predicates[17] && predicates[38] && true && true && true && true && true) {
    return rewrite_73_4(node);
  }
  else if (predicates[10] && predicates[17] && predicates[38] && true && true && true && true && true) {
    return rewrite_73_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_73(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[25] && true && predicates[37] && true && true && true && true) {
    return rewrite_129_0(node);
  }
  else if (predicates[10] && predicates[25] && predicates[38] && true && true && true && true && true) {
    return rewrite_129_1(node);
  }
  else if (predicates[10] && predicates[25] && true && predicates[37] && true && true && true && true) {
    return rewrite_129_2(node);
  }
  else if (predicates[10] && predicates[25] && true && true && predicates[41] && true && true && true) {
    return rewrite_129_3(node);
  }
  else if (predicates[10] && predicates[25] && true && true && predicates[41] && true && true && true) {
    return rewrite_129_4(node);
  }
  else if (predicates[10] && predicates[25] && predicates[38] && true && true && true && true && true) {
    return rewrite_129_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_129(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[32] && predicates[26] && true && true && true && true && true) {
    return rewrite_231_0(node);
  }
  else if (predicates[10] && predicates[32] && true && predicates[3] && true && true && true && true) {
    return rewrite_231_1(node);
  }
  else if (predicates[10] && predicates[32] && true && predicates[3] && true && true && true && true) {
    return rewrite_231_2(node);
  }
  else if (predicates[10] && predicates[32] && predicates[26] && true && true && true && true && true) {
    return rewrite_231_3(node);
  }
  else {
    return node;
  }
}
Node rewrite_231(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[13] && predicates[38] && true && true && true && true) {
    return rewrite_56_0(node);
  }
  else if (predicates[10] && predicates[13] && true && predicates[37] && true && true && true) {
    return rewrite_56_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_56(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[2] && predicates[26] && true && true && true && true) {
    return rewrite_165_0(node);
  }
  else if (predicates[10] && predicates[2] && predicates[26] && true && true && true && true) {
    return rewrite_165_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_165(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[32] && true && predicates[37] && true && true && true) {
    return rewrite_264_0(node);
  }
  else if (predicates[10] && predicates[32] && predicates[38] && true && true && true && true) {
    return rewrite_264_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_264(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[25] && true && true && true && true && true) {
    return rewrite_92_0(node);
  }
  else if (predicates[10] && predicates[25] && true && true && true && true && true) {
    return rewrite_92_1(node);
  }
  else if (predicates[10] && predicates[25] && true && true && true && true && true) {
    return rewrite_92_2(node);
  }
  else if (predicates[10] && predicates[25] && true && true && true && true && true) {
    return rewrite_92_3(node);
  }
  else if (predicates[10] && predicates[25] && true && true && true && true && true) {
    return rewrite_92_4(node);
  }
  else if (predicates[10] && predicates[25] && true && true && true && true && true) {
    return rewrite_92_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_92(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[17] && true && true && true && true && true) {
    return rewrite_107_0(node);
  }
  else if (predicates[10] && predicates[17] && true && true && true && true && true) {
    return rewrite_107_1(node);
  }
  else if (predicates[10] && predicates[17] && true && true && true && true && true) {
    return rewrite_107_2(node);
  }
  else if (predicates[10] && predicates[17] && true && true && true && true && true) {
    return rewrite_107_3(node);
  }
  else if (predicates[10] && predicates[17] && true && true && true && true && true) {
    return rewrite_107_4(node);
  }
  else if (predicates[10] && predicates[17] && true && true && true && true && true) {
    return rewrite_107_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_107(TNode node, const bool* predicates) {
  if (predicates[10] && true && true && predicates[15] && true && true && true) {
    return rewrite_176_0(node);
  }
  else {
    return node;
  }
}
Node rewrite_176(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[13] && true && true && true && true) {
    return rewrite_50_0(node);
  }
  else if (predicates[10] && predicates[13] && true && true && true && true) {
    return rewrite_50_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_50(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[32] && true && true && true && true) {
    return rewrite_53_0(node);
  }
  else if (predicates[10] && predicates[32] && true && true && true && true) {
    return rewrite_53_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_53(TNode node, const bool* predicates) {
  if (predicates[10] && predicates[2] && true && true && true) {
    return rewrite_43_0(node);
  }
  else {
    return node;
  }
}
Node rewrite_43(TNode node, const bool* predicates) {
  if (predicates[10] && true && true && true) {
    return rewrite_37_0(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBoolSpecialRewriter::RewriteITE(TNode node,  bool prewrite) {
  bool predicates[43];
  for (int i = 0; i < 43; i++) {
    predicates[i] = false;
  }
  predicates[10] = node.getKind() == kind::ITE && node.getNumChildren() == 3;
  if (node.getNumChildren() > 0) {
    predicates[2] = node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1;
    predicates[11] = node[0].getKind() == kind::IFF && node[0].getNumChildren() == 2;
    predicates[13] = node[0].getKind() == kind::AND && node[0].getNumChildren() == 2;
    predicates[17] = node[0].getKind() == kind::AND && node[0].getNumChildren() == 3;
    predicates[25] = node[0].getKind() == kind::OR && node[0].getNumChildren() == 3;
    predicates[32] = node[0].getKind() == kind::OR && node[0].getNumChildren() == 2;
    if (node[0].getNumChildren() > 2) {
      predicates[27] = node[0][2].getKind() == kind::AND && node[0][2].getNumChildren() == 2;
      predicates[30] = node[0][2].getKind() == kind::OR && node[0][2].getNumChildren() == 2;
      predicates[41] = node[0][2].getKind() == kind::NOT && node[0][2].getNumChildren() == 1;
      if (node[0][2].getNumChildren() > 1) {
        predicates[6] = node[0][2][1].getKind() == kind::NOT && node[0][2][1].getNumChildren() == 1;
      }
      if (node[0][2].getNumChildren() > 0) {
        predicates[5] = node[0][2][0].getKind() == kind::NOT && node[0][2][0].getNumChildren() == 1;
      }
    }
    if (node[0].getNumChildren() > 0) {
      predicates[23] = node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 3;
      predicates[26] = node[0][0].getKind() == kind::AND && node[0][0].getNumChildren() == 2;
      predicates[29] = node[0][0].getKind() == kind::OR && node[0][0].getNumChildren() == 2;
      predicates[38] = node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1;
      if (node[0][0].getNumChildren() > 1) {
        predicates[0] = node[0][0][1].getKind() == kind::OR && node[0][0][1].getNumChildren() == 2;
        predicates[12] = node[0][0][1].getKind() == kind::AND && node[0][0][1].getNumChildren() == 2;
        predicates[33] = node[0][0][1].getKind() == kind::NOT && node[0][0][1].getNumChildren() == 1;
        if (node[0][0][1].getNumChildren() > 0) {
          predicates[35] = node[0][0][1][0].getKind() == kind::NOT && node[0][0][1][0].getNumChildren() == 1;
        }
        if (node[0][0][1].getNumChildren() > 1) {
          predicates[24] = node[0][0][1][1].getKind() == kind::NOT && node[0][0][1][1].getNumChildren() == 1;
        }
      }
      if (node[0][0].getNumChildren() > 2) {
        predicates[36] = node[0][0][2].getKind() == kind::NOT && node[0][0][2].getNumChildren() == 1;
      }
      if (node[0][0].getNumChildren() > 0) {
        predicates[9] = node[0][0][0].getKind() == kind::AND && node[0][0][0].getNumChildren() == 2;
        predicates[18] = node[0][0][0].getKind() == kind::OR && node[0][0][0].getNumChildren() == 2;
        predicates[31] = node[0][0][0].getKind() == kind::NOT && node[0][0][0].getNumChildren() == 1;
        if (node[0][0][0].getNumChildren() > 1) {
          predicates[21] = node[0][0][0][1].getKind() == kind::NOT && node[0][0][0][1].getNumChildren() == 1;
        }
        if (node[0][0][0].getNumChildren() > 0) {
          predicates[7] = node[0][0][0][0].getKind() == kind::NOT && node[0][0][0][0].getNumChildren() == 1;
        }
      }
    }
    if (node[0].getNumChildren() > 1) {
      predicates[3] = node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 2;
      predicates[14] = node[0][1].getKind() == kind::OR && node[0][1].getNumChildren() == 2;
      predicates[37] = node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1;
      predicates[42] = node[0][1].getKind() == kind::AND && node[0][1].getNumChildren() == 3;
      if (node[0][1].getNumChildren() > 2) {
        predicates[8] = node[0][1][2].getKind() == kind::NOT && node[0][1][2].getNumChildren() == 1;
      }
      if (node[0][1].getNumChildren() > 1) {
        predicates[22] = node[0][1][1].getKind() == kind::OR && node[0][1][1].getNumChildren() == 2;
        predicates[28] = node[0][1][1].getKind() == kind::NOT && node[0][1][1].getNumChildren() == 1;
        predicates[39] = node[0][1][1].getKind() == kind::AND && node[0][1][1].getNumChildren() == 2;
        if (node[0][1][1].getNumChildren() > 1) {
          predicates[40] = node[0][1][1][1].getKind() == kind::NOT && node[0][1][1][1].getNumChildren() == 1;
        }
        if (node[0][1][1].getNumChildren() > 0) {
          predicates[34] = node[0][1][1][0].getKind() == kind::NOT && node[0][1][1][0].getNumChildren() == 1;
        }
      }
      if (node[0][1].getNumChildren() > 0) {
        predicates[1] = node[0][1][0].getKind() == kind::NOT && node[0][1][0].getNumChildren() == 1;
        predicates[19] = node[0][1][0].getKind() == kind::OR && node[0][1][0].getNumChildren() == 2;
        predicates[20] = node[0][1][0].getKind() == kind::AND && node[0][1][0].getNumChildren() == 2;
        if (node[0][1][0].getNumChildren() > 1) {
          predicates[16] = node[0][1][0][1].getKind() == kind::NOT && node[0][1][0][1].getNumChildren() == 1;
        }
        if (node[0][1][0].getNumChildren() > 0) {
          predicates[4] = node[0][1][0][0].getKind() == kind::NOT && node[0][1][0][0].getNumChildren() == 1;
        }
      }
    }
  }
  if (node.getNumChildren() > 2) {
    predicates[15] = node[2].getKind() == kind::ITE && node[2].getNumChildren() == 3;
  }
  Node response;
  response = rewrite_211(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_219(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_224(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_301(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_93(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_133(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_136(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_169(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_178(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_234(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_240(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_261(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_98(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_114(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_177(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_221(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_269(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_308(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_325(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_79(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_186(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_187(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_352(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_49(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_73(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_129(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_231(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_56(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_165(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_264(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_92(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_107(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_176(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_50(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_53(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_43(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  response = rewrite_37(node, predicates);
  if (response != node) return RewriteResponse(REWRITE_DONE, response);
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[1999]++;
  return RewriteResponse(REWRITE_DONE, node);
}
