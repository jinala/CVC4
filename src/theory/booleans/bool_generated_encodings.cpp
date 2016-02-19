#include "theory/booleans/bool_generated_encodings.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::prop;

SatLiteral CVC4::theory::booleans::defaultSpecial(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf) {
  NodeManager* nm = NodeManager::currentNM();
  unsigned enc_id = node.getOperator().getConst<CVC4::SpecialBool>().encId;
  if (enc_id == 10) { 
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
  else if (enc_id == 11) {
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
  else if (enc_id == 12) {
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
  else if (enc_id == 13) {
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
  else if (enc_id == 14) {
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
  else if (enc_id == 15) {
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
  else if (enc_id == 16) {
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
  else if (enc_id == 17) {
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
  else if (enc_id == 18) {
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
  else if (enc_id == 19) {
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
  else if (enc_id == 20) {
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
  else if (enc_id == 21) {
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
  else if (enc_id == 22) {
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
  else if (enc_id == 23) {
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
  else if (enc_id == 24) {
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
  else if (enc_id == 25) {
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
  else if (enc_id == 26) {
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
  else if (enc_id == 27) {
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
  else if (enc_id == 28) {
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
  else if (enc_id == 29) {
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_1, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 30) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_1, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 31) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_1, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 32) {
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
  else if (enc_id == 33) {
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
  else if (enc_id == 34) {
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
  else if (enc_id == 35) {
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
  else if (enc_id == 36) {
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
  else if (enc_id == 37) {
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
  else if (enc_id == 38) {
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
  else if (enc_id == 39) {
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
  else if (enc_id == 40) {
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
  else if (enc_id == 41) {
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
  else if (enc_id == 42) {
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
  else if (enc_id == 43) {
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
  else if (enc_id == 44) {
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
  else if (enc_id == 45) {
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
  else if (enc_id == 46) {
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
  else if (enc_id == 47) {
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
  else if (enc_id == 48) {
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
  else if (enc_id == 49) {
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
  else if (enc_id == 50) {
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
  else if (enc_id == 51) {
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
  else if (enc_id == 52) {
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
  else if (enc_id == 53) {
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
  else if (enc_id == 54) {
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
  else if (enc_id == 55) {
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
  else if (enc_id == 56) {
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
  else if (enc_id == 57) {
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
  else if (enc_id == 58) {
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
  else if (enc_id == 59) {
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
  else if (enc_id == 60) {
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
  else if (enc_id == 61) {
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
  else if (enc_id == 62) {
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
  else if (enc_id == 63) {
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
  else if (enc_id == 64) {
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
  else if (enc_id == 65) {
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
  else if (enc_id == 66) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_1, in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 67) {
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
  else if (enc_id == 68) {
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
  else if (enc_id == 69) {
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
  else if (enc_id == 70) {
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
  else if (enc_id == 71) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_1, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 72) {
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
  else if (enc_id == 73) {
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
  else if (enc_id == 75) {
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
  else if (enc_id == 76) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_1, in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 77) {
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
  else if (enc_id == 78) {
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
  else if (enc_id == 79) {
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 80) {
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
  else if (enc_id == 81) {
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
  else if (enc_id == 82) {
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
  else if (enc_id == 83) {
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
  else if (enc_id == 84) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);
    SatLiteral in_5 = cnf->toCNF(node[5]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_1, in_2, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_5, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 85) {
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
  else if (enc_id == 86) {
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
  else if (enc_id == 87) {
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
  else if (enc_id == 88) {
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
  else if (enc_id == 89) {
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
  else if (enc_id == 90) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_1, in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 91) {
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
  else if (enc_id == 92) {
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
  else if (enc_id == 93) {
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
  else if (enc_id == 94) {
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
  else if (enc_id == 95) {
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);
    SatLiteral in_5 = cnf->toCNF(node[5]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_1, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_3, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_5, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 96) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 97) {
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
  else if (enc_id == 98) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);
    SatLiteral in_5 = cnf->toCNF(node[5]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_1, in_3, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_1, in_4, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_3, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_4, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_5, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 99) {
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
  else if (enc_id == 100) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_2, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_1, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, in_2, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 101) {
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
  else if (enc_id == 102) {
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
  else if (enc_id == 103) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 104) {
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
  else if (enc_id == 105) {
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
  else if (enc_id == 106) {
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
  else if (enc_id == 107) {
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
  else if (enc_id == 108) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 109) {
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
  else if (enc_id == 110) {
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
  else if (enc_id == 111) {
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
  else if (enc_id == 112) {
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
  else if (enc_id == 113) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_2, ~in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 114) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_1, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 115) {
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
  else if (enc_id == 116) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_1, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 117) {
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
  else if (enc_id == 118) {
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
  else if (enc_id == 119) {
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
  else if (enc_id == 120) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_1, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 121) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 122) {
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
  else if (enc_id == 123) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_1, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 124) {
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
  else if (enc_id == 126) {
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
  else if (enc_id == 127) {
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
  else if (enc_id == 128) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);
    SatLiteral in_5 = cnf->toCNF(node[5]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_1, in_4, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_3, in_4, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_5, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 129) {
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
  else if (enc_id == 130) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 132) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_2, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, in_2, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 133) {
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
  else if (enc_id == 134) {
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
  else if (enc_id == 136) {
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
  else if (enc_id == 137) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_1, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 138) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_1, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 139) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);
    SatLiteral in_5 = cnf->toCNF(node[5]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_3, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_3, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 140) {
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
  else if (enc_id == 141) {
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
  else if (enc_id == 142) {
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
  else if (enc_id == 143) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, in_2, in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, in_2, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, ~in_4, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 144) {
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
  else if (enc_id == 145) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 146) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);

    Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
    SatLiteral temp_0 = cnf->toCNF(temp_node_0);

    cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, ~in_3, temp_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_4, ~out_0, ~temp_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 148) {
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
  else if (enc_id == 149) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_1, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, in_1, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, in_2, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 153) {
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
  else if (enc_id == 154) {
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
  else if (enc_id == 155) {
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
  else if (enc_id == 156) {
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
  else if (enc_id == 157) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_1, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 158) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_1, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, in_2, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 159) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_1, ~in_2, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 160) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_1, ~in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, in_2, in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, in_2, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, ~in_4, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 161) {
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
  else if (enc_id == 162) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);
    SatLiteral in_5 = cnf->toCNF(node[5]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_4, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_4, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, in_2, in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, in_2, ~in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, in_4, in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, in_4, ~in_5, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 163) {
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
  else if (enc_id == 164) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, ~in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 165) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_1, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, ~in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 166) {
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
  else if (enc_id == 167) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_3, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_3, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, ~in_3, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 169) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);
    SatLiteral in_5 = cnf->toCNF(node[5]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_2, ~in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, in_2, ~in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, ~in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, ~in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_5, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 170) {
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
  else if (enc_id == 171) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);

    Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
    SatLiteral temp_0 = cnf->toCNF(temp_node_0);

    cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, in_4, ~temp_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, temp_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, temp_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, temp_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, out_0, ~temp_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, ~out_0, temp_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_3, in_4, ~out_0, ~temp_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 173) {
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
  else if (enc_id == 174) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_1, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 175) {

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 176) {
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
  else if (enc_id == 177) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);
    SatLiteral in_5 = cnf->toCNF(node[5]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_4, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_3, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_3, ~in_4, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_4, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_3, ~in_4, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_3, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_3, in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_3, ~in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, ~in_5, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 178) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_1, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_2, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 179) {
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
  else if (enc_id == 180) {
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
  else if (enc_id == 181) {
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
  else if (enc_id == 183) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 184) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_1, in_2, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_1, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_2, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 185) {
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
  else if (enc_id == 186) {
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
  else if (enc_id == 187) {

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 188) {
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
  else if (enc_id == 189) {
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
  else if (enc_id == 190) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_1, in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_1, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, ~in_4, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 191) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_1, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, in_2, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 192) {
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
  else if (enc_id == 194) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_2, in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, in_2, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_1, in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_1, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, in_2, in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, in_2, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, ~in_4, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 195) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_1, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 196) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, in_2, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 197) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 198) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);
    SatLiteral in_5 = cnf->toCNF(node[5]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_3, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_5, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 199) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_2, ~in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, in_2, ~in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 200) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 201) {
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
  else if (enc_id == 202) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_1, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 204) {
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
  else if (enc_id == 205) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, in_2, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 206) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 207) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_2, ~in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 208) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, ~in_4, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 210) {
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
  else if (enc_id == 211) {
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
  else if (enc_id == 212) {
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
  else if (enc_id == 213) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_3, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_3, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, ~in_3, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 215) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_2, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_2, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 216) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 217) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_1, in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 218) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);
    SatLiteral in_5 = cnf->toCNF(node[5]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_2, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_5, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 219) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_2, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 220) {
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
  else if (enc_id == 221) {
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
  else if (enc_id == 222) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_3, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 223) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);
    SatLiteral in_5 = cnf->toCNF(node[5]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_4, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_3, ~in_4, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_3, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_1, in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_1, ~in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_4, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~in_4, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_3, in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_3, ~in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, ~in_5, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 224) {
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
  else if (enc_id == 225) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);

    Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
    SatLiteral temp_0 = cnf->toCNF(temp_node_0);

    cnf->assertClause(TNode::null(), in_0, ~temp_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, temp_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~temp_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, ~temp_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, ~temp_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, out_0, temp_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_3, in_4, ~out_0, temp_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_3, out_0, ~temp_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 227) {
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
  else if (enc_id == 228) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_2, in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, in_2, in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_2, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_3, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 230) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);
    SatLiteral in_5 = cnf->toCNF(node[5]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_1, in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_3, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_5, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 231) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_1, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 232) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);
    SatLiteral in_5 = cnf->toCNF(node[5]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_1, in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, in_1, ~in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_4, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_3, ~in_4, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_3, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_4, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~in_4, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_3, in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_3, ~in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, ~in_5, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 233) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_2, in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, ~in_3, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 234) {
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
  else if (enc_id == 235) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 236) {
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
  else if (enc_id == 237) {
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
  else if (enc_id == 238) {
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
  else if (enc_id == 239) {
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
  else if (enc_id == 240) {
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
  else if (enc_id == 242) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);
    SatLiteral in_5 = cnf->toCNF(node[5]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_1, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, in_2, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, in_3, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_5, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 243) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);
    SatLiteral in_5 = cnf->toCNF(node[5]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, in_2, ~in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_2, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_5, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 246) {
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
  else if (enc_id == 247) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_1, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, in_2, in_3, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 249) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);
    SatLiteral in_5 = cnf->toCNF(node[5]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_3, ~in_4, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_3, ~in_4, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, ~in_3, ~in_4, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_5, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 250) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_1, in_2, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, in_1, in_2, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_2, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 251) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_1, in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_2, ~in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 252) {
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
  else if (enc_id == 253) {
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
  else if (enc_id == 255) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 256) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_4, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 257) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_1, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, in_2, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 258) {
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
  else if (enc_id == 259) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_1, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 260) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);

    Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
    SatLiteral temp_0 = cnf->toCNF(temp_node_0);

    cnf->assertClause(TNode::null(), in_0, ~in_1, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, out_0, temp_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, out_0, temp_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_2, ~temp_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_3, ~temp_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_4, ~temp_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 262) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);
    SatLiteral in_5 = cnf->toCNF(node[5]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, ~in_4, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_5, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 263) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);

    Node temp_node_0 = nm->mkSkolem("temp_0", nm->booleanType());
    SatLiteral temp_0 = cnf->toCNF(temp_node_0);

    cnf->assertClause(TNode::null(), in_0, ~temp_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~temp_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_3, in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_2, ~out_0, temp_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_3, ~out_0, temp_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_4, ~out_0, temp_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 264) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_1, in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, ~in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, ~in_4, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 265) {
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
  else if (enc_id == 266) {
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
  else if (enc_id == 267) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_1, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_1, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_3, in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_3, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, ~in_4, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 270) {
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
  else if (enc_id == 271) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_2, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_3, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 272) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);
    SatLiteral in_5 = cnf->toCNF(node[5]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_5, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, in_2, in_4, in_5, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, in_4, in_5, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 273) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_1, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_2, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, ~in_3, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 275) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_0, ~in_4, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_1, in_3, in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_3, in_4, out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 276) {
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
  else if (enc_id == 277) {
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
  else if (enc_id == 278) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, ~in_2, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, in_1, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else if (enc_id == 280) {
    SatLiteral in_0 = cnf->toCNF(node[0]);
    SatLiteral in_1 = cnf->toCNF(node[1]);
    SatLiteral in_2 = cnf->toCNF(node[2]);
    SatLiteral in_3 = cnf->toCNF(node[3]);
    SatLiteral in_4 = cnf->toCNF(node[4]);

    SatLiteral out_0 = cnf->newLiteral(orig);


    cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_0, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), ~in_1, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_2, ~in_3, ~in_4, out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_3, ~out_0, RULE_INVALID);
    cnf->assertClause(TNode::null(), in_4, ~out_0, RULE_INVALID);

    return out_0; 
  }
  else {
    Assert(false);
  }
}/* defaultSpecial */
