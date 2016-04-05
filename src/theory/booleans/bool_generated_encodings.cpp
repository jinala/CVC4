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

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_2(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
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
SatLiteral encoding_3(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);

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
  SatLiteral in_2 = cnf->toCNF(node[2]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_9(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_10(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_11(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
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


  cnf->assertClause(TNode::null(), in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, in_2, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_15(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_16(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
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
SatLiteral encoding_17(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_18(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
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
SatLiteral encoding_19(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
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
SatLiteral encoding_20(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
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
SatLiteral encoding_21(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
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
SatLiteral encoding_22(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, ~out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_23(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_24(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_1, ~out_0, RULE_INVALID);

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

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), in_0, ~in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_27(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, out_0, RULE_INVALID);

  return out_0; 
}
SatLiteral encoding_28(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf, NodeManager* nm) {
  SatLiteral in_0 = cnf->toCNF(node[0]);
  SatLiteral in_1 = cnf->toCNF(node[1]);

  SatLiteral out_0 = cnf->newLiteral(orig);


  cnf->assertClause(TNode::null(), in_0, out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_0, in_1, ~out_0, RULE_INVALID);
  cnf->assertClause(TNode::null(), ~in_1, out_0, RULE_INVALID);

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
  else {
    Assert(false);
  }
}/* defaultSpecial */
