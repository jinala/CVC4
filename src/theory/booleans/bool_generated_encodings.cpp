#include "theory/booleans/bool_generated_encodings.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::prop;
SatLiteral encoding_0(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_1(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);

  Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
  SatLiteral temp_0 = cnf->toCNF(temp_node_0);

  cnf->assertClause(TNode::null(), in_0, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~out_0, temp_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_2(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_3(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_4(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_5(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_6(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_7(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);

  Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
  SatLiteral temp_0 = cnf->toCNF(temp_node_0);

  cnf->assertClause(TNode::null(), in_0, in_1, in_2, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, temp_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_8(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_9(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_10(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_11(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_12(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_13(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_14(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_15(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_16(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_17(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_18(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_19(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_20(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);

  Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
  SatLiteral temp_0 = cnf->toCNF(temp_node_0);

  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~out_0, temp_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_21(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_22(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_23(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_24(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);

  Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
  SatLiteral temp_0 = cnf->toCNF(temp_node_0);

  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~out_0, temp_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_25(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_26(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_27(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_28(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_29(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_30(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_31(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_32(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_33(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_34(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_35(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_36(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_37(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_38(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_39(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);

  Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
  SatLiteral temp_0 = cnf->toCNF(temp_node_0);

  cnf->assertClause(TNode::null(), in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, temp_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_40(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_41(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_42(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_43(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_44(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, in_5, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_45(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_46(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_47(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_48(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_49(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_50(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_51(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_52(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);

  Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
  SatLiteral temp_0 = cnf->toCNF(temp_node_0);

  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, temp_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_53(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_54(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_55(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_56(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_57(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_58(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_59(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_60(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_61(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_62(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);

  Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
  SatLiteral temp_0 = cnf->toCNF(temp_node_0);

  cnf->assertClause(TNode::null(), in_0, ~out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~temp_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_63(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_64(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_65(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_66(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_67(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_68(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_69(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_70(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);

  Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
  SatLiteral temp_0 = cnf->toCNF(temp_node_0);

  cnf->assertClause(TNode::null(), in_0, in_1, in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, temp_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_71(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_2, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_72(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_73(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_5, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_74(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_75(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_76(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_77(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_4, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_78(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_79(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);

  Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
  SatLiteral temp_0 = cnf->toCNF(temp_node_0);

  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~temp_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_80(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_81(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_82(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_83(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_84(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_85(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);

  Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
  SatLiteral temp_0 = cnf->toCNF(temp_node_0);

  cnf->assertClause(TNode::null(), in_0, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, temp_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_86(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_87(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_88(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_2, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_89(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_90(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_91(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_92(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_93(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_94(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_95(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_96(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_97(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_98(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_99(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_100(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_101(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_102(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_103(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_104(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_105(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_106(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_107(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_108(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_109(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_110(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);

  Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
  SatLiteral temp_0 = cnf->toCNF(temp_node_0);

  cnf->assertClause(TNode::null(), in_0, ~out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~temp_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_111(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_112(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_113(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_114(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_115(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_116(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);

  Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
  SatLiteral temp_0 = cnf->toCNF(temp_node_0);

  cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_4, ~in_5, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, out_0, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_5, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_117(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_4, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_4, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_5, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_118(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_119(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_120(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_121(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_122(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_123(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_124(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_125(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_126(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_127(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_128(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_129(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_130(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_131(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_132(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_133(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_4, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_4, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_5, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_134(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_135(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_136(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_137(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_138(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_139(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);

  Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
  SatLiteral temp_0 = cnf->toCNF(temp_node_0);

  cnf->assertClause(TNode::null(), in_0, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_5, out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_4, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~in_4, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_5, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_140(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_141(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_142(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_143(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_144(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_145(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_146(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_147(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_4, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_4, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_5, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_148(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_149(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_150(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_151(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_152(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);

  Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
  SatLiteral temp_0 = cnf->toCNF(temp_node_0);

  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, temp_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_153(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_154(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);

  Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
  SatLiteral temp_0 = cnf->toCNF(temp_node_0);

  cnf->assertClause(TNode::null(), in_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, ~temp_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_155(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_156(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_157(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_158(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_2, in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_159(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_160(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_161(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_162(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_163(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_164(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_2, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_165(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_166(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_167(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_168(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_169(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_170(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_171(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_2, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_3, in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_3, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_172(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_173(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_174(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_175(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_176(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);

  Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
  SatLiteral temp_0 = cnf->toCNF(temp_node_0);

  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~temp_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_177(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~in_4, ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_178(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_179(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_4, ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_180(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_181(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_182(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_183(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_184(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_4, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_5, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_185(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~in_4, ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_186(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_187(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_188(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_189(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_4, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_190(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);

  Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
  SatLiteral temp_0 = cnf->toCNF(temp_node_0);

  cnf->assertClause(TNode::null(), in_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~out_0, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~out_0, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, ~temp_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_191(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_192(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_5, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_193(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_194(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_195(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_196(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_197(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_198(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_199(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_200(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_201(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_202(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_203(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_204(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, in_3, ~in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, ~in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_205(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_206(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_207(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_208(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_209(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_2, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_210(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_211(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_212(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_213(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_214(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_215(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_216(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_217(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_218(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_219(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_220(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_221(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_222(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_223(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_224(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_225(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_5, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_226(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_227(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_228(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_229(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_230(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_231(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_232(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_233(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, in_5, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_234(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_235(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_236(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_3, ~in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, in_4, ~in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_4, ~in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_237(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_238(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_239(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_240(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_3, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_241(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_242(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_243(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_244(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_4, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_4, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_5, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_245(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_246(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_247(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_248(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_249(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, in_5, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_250(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_251(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_4, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_4, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_5, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_252(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_253(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_254(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_255(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_256(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_257(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_258(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_259(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_260(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_261(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, ~in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_4, ~in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_3, ~in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_4, ~in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_262(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_3, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_263(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_264(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_265(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);

  Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
  SatLiteral temp_0 = cnf->toCNF(temp_node_0);

  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~temp_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_266(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_267(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_268(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_269(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_270(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_271(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_272(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);

  Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
  SatLiteral temp_0 = cnf->toCNF(temp_node_0);

  cnf->assertClause(TNode::null(), in_0, in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, in_5, ~out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, in_5, ~out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, in_5, ~out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_273(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_274(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_2, in_3, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_2, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_275(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_276(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, ~in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_277(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_278(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_279(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_280(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_281(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_282(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_283(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, ~in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_284(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_285(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_4, in_5, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_286(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_287(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_288(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_289(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_290(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_291(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_292(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_293(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_294(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_295(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_296(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_297(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_298(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);

  Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
  SatLiteral temp_0 = cnf->toCNF(temp_node_0);

  cnf->assertClause(TNode::null(), in_0, ~in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, temp_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_299(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_4, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_4, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_4, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_5, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_300(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, in_3, in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_5, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_301(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_302(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_303(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);

  Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
  SatLiteral temp_0 = cnf->toCNF(temp_node_0);

  cnf->assertClause(TNode::null(), in_0, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, temp_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_304(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_305(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_306(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_307(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);

  Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
  SatLiteral temp_0 = cnf->toCNF(temp_node_0);

  cnf->assertClause(TNode::null(), in_0, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, in_5, ~out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, in_5, ~out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, in_5, ~out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_308(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_309(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_310(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_311(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_312(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_313(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_314(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_315(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_316(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);

  Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
  SatLiteral temp_0 = cnf->toCNF(temp_node_0);

  cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, ~in_4, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~in_4, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_5, out_0, temp_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_317(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_318(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_3, ~in_4, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_319(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_320(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_321(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_5, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, in_4, in_5, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_322(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_323(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, in_3, in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_324(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_325(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);
  SatLiteral in_4 = cnf->toCNF(node[4]);
  SatLiteral in_5 = cnf->toCNF(node[5]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~in_3, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~in_4, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_5, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_326(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_327(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_328(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_329(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_330(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_331(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_332(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_2, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_333(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);
  SatLiteral in_3 = cnf->toCNF(node[3]);

  SatLiteral out_0 = cnf->newLiteral(orig);

  Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
  SatLiteral temp_0 = cnf->toCNF(temp_node_0);

  cnf->assertClause(TNode::null(), in_0, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, in_3, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, ~in_3, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, ~temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_3, ~out_0, temp_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_3, out_0, temp_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_334(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_335(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral CVC4::theory::booleans::defaultSpecial(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf) {
  NodeManager* nm = NodeManager::currentNM();
  unsigned enc_id = node.getOperator().getConst<CVC4::SpecialBool>().encId;
  if (enc_id == 0) { 
    return encoding_0(node, orig, cnf, nm);
  }
  else if (enc_id == 1) {
    return encoding_1(node, orig, cnf, nm);
  }
  else if (enc_id == 2) {
    return encoding_2(node, orig, cnf, nm);
  }
  else if (enc_id == 3) {
    return encoding_3(node, orig, cnf, nm);
  }
  else if (enc_id == 4) {
    return encoding_4(node, orig, cnf, nm);
  }
  else if (enc_id == 5) {
    return encoding_5(node, orig, cnf, nm);
  }
  else if (enc_id == 6) {
    return encoding_6(node, orig, cnf, nm);
  }
  else if (enc_id == 7) {
    return encoding_7(node, orig, cnf, nm);
  }
  else if (enc_id == 8) {
    return encoding_8(node, orig, cnf, nm);
  }
  else if (enc_id == 9) {
    return encoding_9(node, orig, cnf, nm);
  }
  else if (enc_id == 10) {
    return encoding_10(node, orig, cnf, nm);
  }
  else if (enc_id == 11) {
    return encoding_11(node, orig, cnf, nm);
  }
  else if (enc_id == 12) {
    return encoding_12(node, orig, cnf, nm);
  }
  else if (enc_id == 13) {
    return encoding_13(node, orig, cnf, nm);
  }
  else if (enc_id == 14) {
    return encoding_14(node, orig, cnf, nm);
  }
  else if (enc_id == 15) {
    return encoding_15(node, orig, cnf, nm);
  }
  else if (enc_id == 16) {
    return encoding_16(node, orig, cnf, nm);
  }
  else if (enc_id == 17) {
    return encoding_17(node, orig, cnf, nm);
  }
  else if (enc_id == 18) {
    return encoding_18(node, orig, cnf, nm);
  }
  else if (enc_id == 19) {
    return encoding_19(node, orig, cnf, nm);
  }
  else if (enc_id == 20) {
    return encoding_20(node, orig, cnf, nm);
  }
  else if (enc_id == 21) {
    return encoding_21(node, orig, cnf, nm);
  }
  else if (enc_id == 22) {
    return encoding_22(node, orig, cnf, nm);
  }
  else if (enc_id == 23) {
    return encoding_23(node, orig, cnf, nm);
  }
  else if (enc_id == 24) {
    return encoding_24(node, orig, cnf, nm);
  }
  else if (enc_id == 25) {
    return encoding_25(node, orig, cnf, nm);
  }
  else if (enc_id == 26) {
    return encoding_26(node, orig, cnf, nm);
  }
  else if (enc_id == 27) {
    return encoding_27(node, orig, cnf, nm);
  }
  else if (enc_id == 28) {
    return encoding_28(node, orig, cnf, nm);
  }
  else if (enc_id == 29) {
    return encoding_29(node, orig, cnf, nm);
  }
  else if (enc_id == 30) {
    return encoding_30(node, orig, cnf, nm);
  }
  else if (enc_id == 31) {
    return encoding_31(node, orig, cnf, nm);
  }
  else if (enc_id == 32) {
    return encoding_32(node, orig, cnf, nm);
  }
  else if (enc_id == 33) {
    return encoding_33(node, orig, cnf, nm);
  }
  else if (enc_id == 34) {
    return encoding_34(node, orig, cnf, nm);
  }
  else if (enc_id == 35) {
    return encoding_35(node, orig, cnf, nm);
  }
  else if (enc_id == 36) {
    return encoding_36(node, orig, cnf, nm);
  }
  else if (enc_id == 37) {
    return encoding_37(node, orig, cnf, nm);
  }
  else if (enc_id == 38) {
    return encoding_38(node, orig, cnf, nm);
  }
  else if (enc_id == 39) {
    return encoding_39(node, orig, cnf, nm);
  }
  else if (enc_id == 40) {
    return encoding_40(node, orig, cnf, nm);
  }
  else if (enc_id == 41) {
    return encoding_41(node, orig, cnf, nm);
  }
  else if (enc_id == 42) {
    return encoding_42(node, orig, cnf, nm);
  }
  else if (enc_id == 43) {
    return encoding_43(node, orig, cnf, nm);
  }
  else if (enc_id == 44) {
    return encoding_44(node, orig, cnf, nm);
  }
  else if (enc_id == 45) {
    return encoding_45(node, orig, cnf, nm);
  }
  else if (enc_id == 46) {
    return encoding_46(node, orig, cnf, nm);
  }
  else if (enc_id == 47) {
    return encoding_47(node, orig, cnf, nm);
  }
  else if (enc_id == 48) {
    return encoding_48(node, orig, cnf, nm);
  }
  else if (enc_id == 49) {
    return encoding_49(node, orig, cnf, nm);
  }
  else if (enc_id == 50) {
    return encoding_50(node, orig, cnf, nm);
  }
  else if (enc_id == 51) {
    return encoding_51(node, orig, cnf, nm);
  }
  else if (enc_id == 52) {
    return encoding_52(node, orig, cnf, nm);
  }
  else if (enc_id == 53) {
    return encoding_53(node, orig, cnf, nm);
  }
  else if (enc_id == 54) {
    return encoding_54(node, orig, cnf, nm);
  }
  else if (enc_id == 55) {
    return encoding_55(node, orig, cnf, nm);
  }
  else if (enc_id == 56) {
    return encoding_56(node, orig, cnf, nm);
  }
  else if (enc_id == 57) {
    return encoding_57(node, orig, cnf, nm);
  }
  else if (enc_id == 58) {
    return encoding_58(node, orig, cnf, nm);
  }
  else if (enc_id == 59) {
    return encoding_59(node, orig, cnf, nm);
  }
  else if (enc_id == 60) {
    return encoding_60(node, orig, cnf, nm);
  }
  else if (enc_id == 61) {
    return encoding_61(node, orig, cnf, nm);
  }
  else if (enc_id == 62) {
    return encoding_62(node, orig, cnf, nm);
  }
  else if (enc_id == 63) {
    return encoding_63(node, orig, cnf, nm);
  }
  else if (enc_id == 64) {
    return encoding_64(node, orig, cnf, nm);
  }
  else if (enc_id == 65) {
    return encoding_65(node, orig, cnf, nm);
  }
  else if (enc_id == 66) {
    return encoding_66(node, orig, cnf, nm);
  }
  else if (enc_id == 67) {
    return encoding_67(node, orig, cnf, nm);
  }
  else if (enc_id == 68) {
    return encoding_68(node, orig, cnf, nm);
  }
  else if (enc_id == 69) {
    return encoding_69(node, orig, cnf, nm);
  }
  else if (enc_id == 70) {
    return encoding_70(node, orig, cnf, nm);
  }
  else if (enc_id == 71) {
    return encoding_71(node, orig, cnf, nm);
  }
  else if (enc_id == 72) {
    return encoding_72(node, orig, cnf, nm);
  }
  else if (enc_id == 73) {
    return encoding_73(node, orig, cnf, nm);
  }
  else if (enc_id == 74) {
    return encoding_74(node, orig, cnf, nm);
  }
  else if (enc_id == 75) {
    return encoding_75(node, orig, cnf, nm);
  }
  else if (enc_id == 76) {
    return encoding_76(node, orig, cnf, nm);
  }
  else if (enc_id == 77) {
    return encoding_77(node, orig, cnf, nm);
  }
  else if (enc_id == 78) {
    return encoding_78(node, orig, cnf, nm);
  }
  else if (enc_id == 79) {
    return encoding_79(node, orig, cnf, nm);
  }
  else if (enc_id == 80) {
    return encoding_80(node, orig, cnf, nm);
  }
  else if (enc_id == 81) {
    return encoding_81(node, orig, cnf, nm);
  }
  else if (enc_id == 82) {
    return encoding_82(node, orig, cnf, nm);
  }
  else if (enc_id == 83) {
    return encoding_83(node, orig, cnf, nm);
  }
  else if (enc_id == 84) {
    return encoding_84(node, orig, cnf, nm);
  }
  else if (enc_id == 85) {
    return encoding_85(node, orig, cnf, nm);
  }
  else if (enc_id == 86) {
    return encoding_86(node, orig, cnf, nm);
  }
  else if (enc_id == 87) {
    return encoding_87(node, orig, cnf, nm);
  }
  else if (enc_id == 88) {
    return encoding_88(node, orig, cnf, nm);
  }
  else if (enc_id == 89) {
    return encoding_89(node, orig, cnf, nm);
  }
  else if (enc_id == 90) {
    return encoding_90(node, orig, cnf, nm);
  }
  else if (enc_id == 91) {
    return encoding_91(node, orig, cnf, nm);
  }
  else if (enc_id == 92) {
    return encoding_92(node, orig, cnf, nm);
  }
  else if (enc_id == 93) {
    return encoding_93(node, orig, cnf, nm);
  }
  else if (enc_id == 94) {
    return encoding_94(node, orig, cnf, nm);
  }
  else if (enc_id == 95) {
    return encoding_95(node, orig, cnf, nm);
  }
  else if (enc_id == 96) {
    return encoding_96(node, orig, cnf, nm);
  }
  else if (enc_id == 97) {
    return encoding_97(node, orig, cnf, nm);
  }
  else if (enc_id == 98) {
    return encoding_98(node, orig, cnf, nm);
  }
  else if (enc_id == 99) {
    return encoding_99(node, orig, cnf, nm);
  }
  else if (enc_id == 100) {
    return encoding_100(node, orig, cnf, nm);
  }
  else if (enc_id == 101) {
    return encoding_101(node, orig, cnf, nm);
  }
  else if (enc_id == 102) {
    return encoding_102(node, orig, cnf, nm);
  }
  else if (enc_id == 103) {
    return encoding_103(node, orig, cnf, nm);
  }
  else if (enc_id == 104) {
    return encoding_104(node, orig, cnf, nm);
  }
  else if (enc_id == 105) {
    return encoding_105(node, orig, cnf, nm);
  }
  else if (enc_id == 106) {
    return encoding_106(node, orig, cnf, nm);
  }
  else if (enc_id == 107) {
    return encoding_107(node, orig, cnf, nm);
  }
  else if (enc_id == 108) {
    return encoding_108(node, orig, cnf, nm);
  }
  else if (enc_id == 109) {
    return encoding_109(node, orig, cnf, nm);
  }
  else if (enc_id == 110) {
    return encoding_110(node, orig, cnf, nm);
  }
  else if (enc_id == 111) {
    return encoding_111(node, orig, cnf, nm);
  }
  else if (enc_id == 112) {
    return encoding_112(node, orig, cnf, nm);
  }
  else if (enc_id == 113) {
    return encoding_113(node, orig, cnf, nm);
  }
  else if (enc_id == 114) {
    return encoding_114(node, orig, cnf, nm);
  }
  else if (enc_id == 115) {
    return encoding_115(node, orig, cnf, nm);
  }
  else if (enc_id == 116) {
    return encoding_116(node, orig, cnf, nm);
  }
  else if (enc_id == 117) {
    return encoding_117(node, orig, cnf, nm);
  }
  else if (enc_id == 118) {
    return encoding_118(node, orig, cnf, nm);
  }
  else if (enc_id == 119) {
    return encoding_119(node, orig, cnf, nm);
  }
  else if (enc_id == 120) {
    return encoding_120(node, orig, cnf, nm);
  }
  else if (enc_id == 121) {
    return encoding_121(node, orig, cnf, nm);
  }
  else if (enc_id == 122) {
    return encoding_122(node, orig, cnf, nm);
  }
  else if (enc_id == 123) {
    return encoding_123(node, orig, cnf, nm);
  }
  else if (enc_id == 124) {
    return encoding_124(node, orig, cnf, nm);
  }
  else if (enc_id == 125) {
    return encoding_125(node, orig, cnf, nm);
  }
  else if (enc_id == 126) {
    return encoding_126(node, orig, cnf, nm);
  }
  else if (enc_id == 127) {
    return encoding_127(node, orig, cnf, nm);
  }
  else if (enc_id == 128) {
    return encoding_128(node, orig, cnf, nm);
  }
  else if (enc_id == 129) {
    return encoding_129(node, orig, cnf, nm);
  }
  else if (enc_id == 130) {
    return encoding_130(node, orig, cnf, nm);
  }
  else if (enc_id == 131) {
    return encoding_131(node, orig, cnf, nm);
  }
  else if (enc_id == 132) {
    return encoding_132(node, orig, cnf, nm);
  }
  else if (enc_id == 133) {
    return encoding_133(node, orig, cnf, nm);
  }
  else if (enc_id == 134) {
    return encoding_134(node, orig, cnf, nm);
  }
  else if (enc_id == 135) {
    return encoding_135(node, orig, cnf, nm);
  }
  else if (enc_id == 136) {
    return encoding_136(node, orig, cnf, nm);
  }
  else if (enc_id == 137) {
    return encoding_137(node, orig, cnf, nm);
  }
  else if (enc_id == 138) {
    return encoding_138(node, orig, cnf, nm);
  }
  else if (enc_id == 139) {
    return encoding_139(node, orig, cnf, nm);
  }
  else if (enc_id == 140) {
    return encoding_140(node, orig, cnf, nm);
  }
  else if (enc_id == 141) {
    return encoding_141(node, orig, cnf, nm);
  }
  else if (enc_id == 142) {
    return encoding_142(node, orig, cnf, nm);
  }
  else if (enc_id == 143) {
    return encoding_143(node, orig, cnf, nm);
  }
  else if (enc_id == 144) {
    return encoding_144(node, orig, cnf, nm);
  }
  else if (enc_id == 145) {
    return encoding_145(node, orig, cnf, nm);
  }
  else if (enc_id == 146) {
    return encoding_146(node, orig, cnf, nm);
  }
  else if (enc_id == 147) {
    return encoding_147(node, orig, cnf, nm);
  }
  else if (enc_id == 148) {
    return encoding_148(node, orig, cnf, nm);
  }
  else if (enc_id == 149) {
    return encoding_149(node, orig, cnf, nm);
  }
  else if (enc_id == 150) {
    return encoding_150(node, orig, cnf, nm);
  }
  else if (enc_id == 151) {
    return encoding_151(node, orig, cnf, nm);
  }
  else if (enc_id == 152) {
    return encoding_152(node, orig, cnf, nm);
  }
  else if (enc_id == 153) {
    return encoding_153(node, orig, cnf, nm);
  }
  else if (enc_id == 154) {
    return encoding_154(node, orig, cnf, nm);
  }
  else if (enc_id == 155) {
    return encoding_155(node, orig, cnf, nm);
  }
  else if (enc_id == 156) {
    return encoding_156(node, orig, cnf, nm);
  }
  else if (enc_id == 157) {
    return encoding_157(node, orig, cnf, nm);
  }
  else if (enc_id == 158) {
    return encoding_158(node, orig, cnf, nm);
  }
  else if (enc_id == 159) {
    return encoding_159(node, orig, cnf, nm);
  }
  else if (enc_id == 160) {
    return encoding_160(node, orig, cnf, nm);
  }
  else if (enc_id == 161) {
    return encoding_161(node, orig, cnf, nm);
  }
  else if (enc_id == 162) {
    return encoding_162(node, orig, cnf, nm);
  }
  else if (enc_id == 163) {
    return encoding_163(node, orig, cnf, nm);
  }
  else if (enc_id == 164) {
    return encoding_164(node, orig, cnf, nm);
  }
  else if (enc_id == 165) {
    return encoding_165(node, orig, cnf, nm);
  }
  else if (enc_id == 166) {
    return encoding_166(node, orig, cnf, nm);
  }
  else if (enc_id == 167) {
    return encoding_167(node, orig, cnf, nm);
  }
  else if (enc_id == 168) {
    return encoding_168(node, orig, cnf, nm);
  }
  else if (enc_id == 169) {
    return encoding_169(node, orig, cnf, nm);
  }
  else if (enc_id == 170) {
    return encoding_170(node, orig, cnf, nm);
  }
  else if (enc_id == 171) {
    return encoding_171(node, orig, cnf, nm);
  }
  else if (enc_id == 172) {
    return encoding_172(node, orig, cnf, nm);
  }
  else if (enc_id == 173) {
    return encoding_173(node, orig, cnf, nm);
  }
  else if (enc_id == 174) {
    return encoding_174(node, orig, cnf, nm);
  }
  else if (enc_id == 175) {
    return encoding_175(node, orig, cnf, nm);
  }
  else if (enc_id == 176) {
    return encoding_176(node, orig, cnf, nm);
  }
  else if (enc_id == 177) {
    return encoding_177(node, orig, cnf, nm);
  }
  else if (enc_id == 178) {
    return encoding_178(node, orig, cnf, nm);
  }
  else if (enc_id == 179) {
    return encoding_179(node, orig, cnf, nm);
  }
  else if (enc_id == 180) {
    return encoding_180(node, orig, cnf, nm);
  }
  else if (enc_id == 181) {
    return encoding_181(node, orig, cnf, nm);
  }
  else if (enc_id == 182) {
    return encoding_182(node, orig, cnf, nm);
  }
  else if (enc_id == 183) {
    return encoding_183(node, orig, cnf, nm);
  }
  else if (enc_id == 184) {
    return encoding_184(node, orig, cnf, nm);
  }
  else if (enc_id == 185) {
    return encoding_185(node, orig, cnf, nm);
  }
  else if (enc_id == 186) {
    return encoding_186(node, orig, cnf, nm);
  }
  else if (enc_id == 187) {
    return encoding_187(node, orig, cnf, nm);
  }
  else if (enc_id == 188) {
    return encoding_188(node, orig, cnf, nm);
  }
  else if (enc_id == 189) {
    return encoding_189(node, orig, cnf, nm);
  }
  else if (enc_id == 190) {
    return encoding_190(node, orig, cnf, nm);
  }
  else if (enc_id == 191) {
    return encoding_191(node, orig, cnf, nm);
  }
  else if (enc_id == 192) {
    return encoding_192(node, orig, cnf, nm);
  }
  else if (enc_id == 193) {
    return encoding_193(node, orig, cnf, nm);
  }
  else if (enc_id == 194) {
    return encoding_194(node, orig, cnf, nm);
  }
  else if (enc_id == 195) {
    return encoding_195(node, orig, cnf, nm);
  }
  else if (enc_id == 196) {
    return encoding_196(node, orig, cnf, nm);
  }
  else if (enc_id == 197) {
    return encoding_197(node, orig, cnf, nm);
  }
  else if (enc_id == 198) {
    return encoding_198(node, orig, cnf, nm);
  }
  else if (enc_id == 199) {
    return encoding_199(node, orig, cnf, nm);
  }
  else if (enc_id == 200) {
    return encoding_200(node, orig, cnf, nm);
  }
  else if (enc_id == 201) {
    return encoding_201(node, orig, cnf, nm);
  }
  else if (enc_id == 202) {
    return encoding_202(node, orig, cnf, nm);
  }
  else if (enc_id == 203) {
    return encoding_203(node, orig, cnf, nm);
  }
  else if (enc_id == 204) {
    return encoding_204(node, orig, cnf, nm);
  }
  else if (enc_id == 205) {
    return encoding_205(node, orig, cnf, nm);
  }
  else if (enc_id == 206) {
    return encoding_206(node, orig, cnf, nm);
  }
  else if (enc_id == 207) {
    return encoding_207(node, orig, cnf, nm);
  }
  else if (enc_id == 208) {
    return encoding_208(node, orig, cnf, nm);
  }
  else if (enc_id == 209) {
    return encoding_209(node, orig, cnf, nm);
  }
  else if (enc_id == 210) {
    return encoding_210(node, orig, cnf, nm);
  }
  else if (enc_id == 211) {
    return encoding_211(node, orig, cnf, nm);
  }
  else if (enc_id == 212) {
    return encoding_212(node, orig, cnf, nm);
  }
  else if (enc_id == 213) {
    return encoding_213(node, orig, cnf, nm);
  }
  else if (enc_id == 214) {
    return encoding_214(node, orig, cnf, nm);
  }
  else if (enc_id == 215) {
    return encoding_215(node, orig, cnf, nm);
  }
  else if (enc_id == 216) {
    return encoding_216(node, orig, cnf, nm);
  }
  else if (enc_id == 217) {
    return encoding_217(node, orig, cnf, nm);
  }
  else if (enc_id == 218) {
    return encoding_218(node, orig, cnf, nm);
  }
  else if (enc_id == 219) {
    return encoding_219(node, orig, cnf, nm);
  }
  else if (enc_id == 220) {
    return encoding_220(node, orig, cnf, nm);
  }
  else if (enc_id == 221) {
    return encoding_221(node, orig, cnf, nm);
  }
  else if (enc_id == 222) {
    return encoding_222(node, orig, cnf, nm);
  }
  else if (enc_id == 223) {
    return encoding_223(node, orig, cnf, nm);
  }
  else if (enc_id == 224) {
    return encoding_224(node, orig, cnf, nm);
  }
  else if (enc_id == 225) {
    return encoding_225(node, orig, cnf, nm);
  }
  else if (enc_id == 226) {
    return encoding_226(node, orig, cnf, nm);
  }
  else if (enc_id == 227) {
    return encoding_227(node, orig, cnf, nm);
  }
  else if (enc_id == 228) {
    return encoding_228(node, orig, cnf, nm);
  }
  else if (enc_id == 229) {
    return encoding_229(node, orig, cnf, nm);
  }
  else if (enc_id == 230) {
    return encoding_230(node, orig, cnf, nm);
  }
  else if (enc_id == 231) {
    return encoding_231(node, orig, cnf, nm);
  }
  else if (enc_id == 232) {
    return encoding_232(node, orig, cnf, nm);
  }
  else if (enc_id == 233) {
    return encoding_233(node, orig, cnf, nm);
  }
  else if (enc_id == 234) {
    return encoding_234(node, orig, cnf, nm);
  }
  else if (enc_id == 235) {
    return encoding_235(node, orig, cnf, nm);
  }
  else if (enc_id == 236) {
    return encoding_236(node, orig, cnf, nm);
  }
  else if (enc_id == 237) {
    return encoding_237(node, orig, cnf, nm);
  }
  else if (enc_id == 238) {
    return encoding_238(node, orig, cnf, nm);
  }
  else if (enc_id == 239) {
    return encoding_239(node, orig, cnf, nm);
  }
  else if (enc_id == 240) {
    return encoding_240(node, orig, cnf, nm);
  }
  else if (enc_id == 241) {
    return encoding_241(node, orig, cnf, nm);
  }
  else if (enc_id == 242) {
    return encoding_242(node, orig, cnf, nm);
  }
  else if (enc_id == 243) {
    return encoding_243(node, orig, cnf, nm);
  }
  else if (enc_id == 244) {
    return encoding_244(node, orig, cnf, nm);
  }
  else if (enc_id == 245) {
    return encoding_245(node, orig, cnf, nm);
  }
  else if (enc_id == 246) {
    return encoding_246(node, orig, cnf, nm);
  }
  else if (enc_id == 247) {
    return encoding_247(node, orig, cnf, nm);
  }
  else if (enc_id == 248) {
    return encoding_248(node, orig, cnf, nm);
  }
  else if (enc_id == 249) {
    return encoding_249(node, orig, cnf, nm);
  }
  else if (enc_id == 250) {
    return encoding_250(node, orig, cnf, nm);
  }
  else if (enc_id == 251) {
    return encoding_251(node, orig, cnf, nm);
  }
  else if (enc_id == 252) {
    return encoding_252(node, orig, cnf, nm);
  }
  else if (enc_id == 253) {
    return encoding_253(node, orig, cnf, nm);
  }
  else if (enc_id == 254) {
    return encoding_254(node, orig, cnf, nm);
  }
  else if (enc_id == 255) {
    return encoding_255(node, orig, cnf, nm);
  }
  else if (enc_id == 256) {
    return encoding_256(node, orig, cnf, nm);
  }
  else if (enc_id == 257) {
    return encoding_257(node, orig, cnf, nm);
  }
  else if (enc_id == 258) {
    return encoding_258(node, orig, cnf, nm);
  }
  else if (enc_id == 259) {
    return encoding_259(node, orig, cnf, nm);
  }
  else if (enc_id == 260) {
    return encoding_260(node, orig, cnf, nm);
  }
  else if (enc_id == 261) {
    return encoding_261(node, orig, cnf, nm);
  }
  else if (enc_id == 262) {
    return encoding_262(node, orig, cnf, nm);
  }
  else if (enc_id == 263) {
    return encoding_263(node, orig, cnf, nm);
  }
  else if (enc_id == 264) {
    return encoding_264(node, orig, cnf, nm);
  }
  else if (enc_id == 265) {
    return encoding_265(node, orig, cnf, nm);
  }
  else if (enc_id == 266) {
    return encoding_266(node, orig, cnf, nm);
  }
  else if (enc_id == 267) {
    return encoding_267(node, orig, cnf, nm);
  }
  else if (enc_id == 268) {
    return encoding_268(node, orig, cnf, nm);
  }
  else if (enc_id == 269) {
    return encoding_269(node, orig, cnf, nm);
  }
  else if (enc_id == 270) {
    return encoding_270(node, orig, cnf, nm);
  }
  else if (enc_id == 271) {
    return encoding_271(node, orig, cnf, nm);
  }
  else if (enc_id == 272) {
    return encoding_272(node, orig, cnf, nm);
  }
  else if (enc_id == 273) {
    return encoding_273(node, orig, cnf, nm);
  }
  else if (enc_id == 274) {
    return encoding_274(node, orig, cnf, nm);
  }
  else if (enc_id == 275) {
    return encoding_275(node, orig, cnf, nm);
  }
  else if (enc_id == 276) {
    return encoding_276(node, orig, cnf, nm);
  }
  else if (enc_id == 277) {
    return encoding_277(node, orig, cnf, nm);
  }
  else if (enc_id == 278) {
    return encoding_278(node, orig, cnf, nm);
  }
  else if (enc_id == 279) {
    return encoding_279(node, orig, cnf, nm);
  }
  else if (enc_id == 280) {
    return encoding_280(node, orig, cnf, nm);
  }
  else if (enc_id == 281) {
    return encoding_281(node, orig, cnf, nm);
  }
  else if (enc_id == 282) {
    return encoding_282(node, orig, cnf, nm);
  }
  else if (enc_id == 283) {
    return encoding_283(node, orig, cnf, nm);
  }
  else if (enc_id == 284) {
    return encoding_284(node, orig, cnf, nm);
  }
  else if (enc_id == 285) {
    return encoding_285(node, orig, cnf, nm);
  }
  else if (enc_id == 286) {
    return encoding_286(node, orig, cnf, nm);
  }
  else if (enc_id == 287) {
    return encoding_287(node, orig, cnf, nm);
  }
  else if (enc_id == 288) {
    return encoding_288(node, orig, cnf, nm);
  }
  else if (enc_id == 289) {
    return encoding_289(node, orig, cnf, nm);
  }
  else if (enc_id == 290) {
    return encoding_290(node, orig, cnf, nm);
  }
  else if (enc_id == 291) {
    return encoding_291(node, orig, cnf, nm);
  }
  else if (enc_id == 292) {
    return encoding_292(node, orig, cnf, nm);
  }
  else if (enc_id == 293) {
    return encoding_293(node, orig, cnf, nm);
  }
  else if (enc_id == 294) {
    return encoding_294(node, orig, cnf, nm);
  }
  else if (enc_id == 295) {
    return encoding_295(node, orig, cnf, nm);
  }
  else if (enc_id == 296) {
    return encoding_296(node, orig, cnf, nm);
  }
  else if (enc_id == 297) {
    return encoding_297(node, orig, cnf, nm);
  }
  else if (enc_id == 298) {
    return encoding_298(node, orig, cnf, nm);
  }
  else if (enc_id == 299) {
    return encoding_299(node, orig, cnf, nm);
  }
  else if (enc_id == 300) {
    return encoding_300(node, orig, cnf, nm);
  }
  else if (enc_id == 301) {
    return encoding_301(node, orig, cnf, nm);
  }
  else if (enc_id == 302) {
    return encoding_302(node, orig, cnf, nm);
  }
  else if (enc_id == 303) {
    return encoding_303(node, orig, cnf, nm);
  }
  else if (enc_id == 304) {
    return encoding_304(node, orig, cnf, nm);
  }
  else if (enc_id == 305) {
    return encoding_305(node, orig, cnf, nm);
  }
  else if (enc_id == 306) {
    return encoding_306(node, orig, cnf, nm);
  }
  else if (enc_id == 307) {
    return encoding_307(node, orig, cnf, nm);
  }
  else if (enc_id == 308) {
    return encoding_308(node, orig, cnf, nm);
  }
  else if (enc_id == 309) {
    return encoding_309(node, orig, cnf, nm);
  }
  else if (enc_id == 310) {
    return encoding_310(node, orig, cnf, nm);
  }
  else if (enc_id == 311) {
    return encoding_311(node, orig, cnf, nm);
  }
  else if (enc_id == 312) {
    return encoding_312(node, orig, cnf, nm);
  }
  else if (enc_id == 313) {
    return encoding_313(node, orig, cnf, nm);
  }
  else if (enc_id == 314) {
    return encoding_314(node, orig, cnf, nm);
  }
  else if (enc_id == 315) {
    return encoding_315(node, orig, cnf, nm);
  }
  else if (enc_id == 316) {
    return encoding_316(node, orig, cnf, nm);
  }
  else if (enc_id == 317) {
    return encoding_317(node, orig, cnf, nm);
  }
  else if (enc_id == 318) {
    return encoding_318(node, orig, cnf, nm);
  }
  else if (enc_id == 319) {
    return encoding_319(node, orig, cnf, nm);
  }
  else if (enc_id == 320) {
    return encoding_320(node, orig, cnf, nm);
  }
  else if (enc_id == 321) {
    return encoding_321(node, orig, cnf, nm);
  }
  else if (enc_id == 322) {
    return encoding_322(node, orig, cnf, nm);
  }
  else if (enc_id == 323) {
    return encoding_323(node, orig, cnf, nm);
  }
  else if (enc_id == 324) {
    return encoding_324(node, orig, cnf, nm);
  }
  else if (enc_id == 325) {
    return encoding_325(node, orig, cnf, nm);
  }
  else if (enc_id == 326) {
    return encoding_326(node, orig, cnf, nm);
  }
  else if (enc_id == 327) {
    return encoding_327(node, orig, cnf, nm);
  }
  else if (enc_id == 328) {
    return encoding_328(node, orig, cnf, nm);
  }
  else if (enc_id == 329) {
    return encoding_329(node, orig, cnf, nm);
  }
  else if (enc_id == 330) {
    return encoding_330(node, orig, cnf, nm);
  }
  else if (enc_id == 331) {
    return encoding_331(node, orig, cnf, nm);
  }
  else if (enc_id == 332) {
    return encoding_332(node, orig, cnf, nm);
  }
  else if (enc_id == 333) {
    return encoding_333(node, orig, cnf, nm);
  }
  else if (enc_id == 334) {
    return encoding_334(node, orig, cnf, nm);
  }
  else if (enc_id == 335) {
    return encoding_335(node, orig, cnf, nm);
  }
  else {
    Assert(false);
  }
}/* defaultSpecial */
