#pragma once
#include "cvc4_private.h"
#include "expr/node.h"
#include "prop/cnf_stream.h"
#include <ostream>
#include <cmath>

namespace CVC4 {
  namespace theory {
    namespace booleans {
      using namespace prop;
      
      void defaultSpecial(TNode node, SatLiteral out_0, CVC4::prop::TseitinCnfStream* cnf) {
        unsigned enc_id = node.getOperator().getConst<CVC4::SpecialBool>().encId;
        if (enc_id == 4) {
          SatLiteral in_0 = cnf->toCNF(node[0]);
          SatLiteral in_1 = cnf->toCNF(node[1]);
          
          
          
          cnf->assertClause(TNode::null(), in_0, in_1, out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), in_0, ~in_1, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_0, in_1, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
          
        }
        else if (enc_id == 7) {
          SatLiteral in_0 = cnf->toCNF(node[0]);
          SatLiteral in_1 = cnf->toCNF(node[1]);
          SatLiteral in_2 = cnf->toCNF(node[2]);
          
          
          
          cnf->assertClause(TNode::null(), in_0, in_2, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), in_0, ~in_2, out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_0, in_1, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
          
        }
        else if (enc_id == 8) {
          SatLiteral in_0 = cnf->toCNF(node[0]);
          SatLiteral in_1 = cnf->toCNF(node[1]);
          
          
          
          cnf->assertClause(TNode::null(), in_0, out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_0, in_1, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_1, out_0, RULE_INVALID);
          
        }
        else if (enc_id == 9) {
          SatLiteral in_0 = cnf->toCNF(node[0]);
          SatLiteral in_1 = cnf->toCNF(node[1]);
          
          
          
          cnf->assertClause(TNode::null(), in_0, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), in_1, ~out_0, RULE_INVALID);
          
        }
        else if (enc_id == 11) {
          SatLiteral in_0 = cnf->toCNF(node[0]);
          SatLiteral in_1 = cnf->toCNF(node[1]);
          SatLiteral in_2 = cnf->toCNF(node[2]);
          
          
          
          cnf->assertClause(TNode::null(), in_0, in_2, out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), in_0, ~in_2, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_0, in_1, out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), in_1, in_2, out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_1, ~in_2, ~out_0, RULE_INVALID);
          
        }
        else if (enc_id == 12) {
          SatLiteral in_0 = cnf->toCNF(node[0]);
          SatLiteral in_1 = cnf->toCNF(node[1]);
          
          
          
          cnf->assertClause(TNode::null(), in_0, in_1, out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_1, ~out_0, RULE_INVALID);
          
        }
        else if (enc_id == 15) {
          SatLiteral in_0 = cnf->toCNF(node[0]);
          SatLiteral in_1 = cnf->toCNF(node[1]);
          SatLiteral in_2 = cnf->toCNF(node[2]);
          
          
          
          cnf->assertClause(TNode::null(), in_0, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), in_1, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), in_2, ~out_0, RULE_INVALID);
          
        }
        else if (enc_id == 16) {
          SatLiteral in_0 = cnf->toCNF(node[0]);
          SatLiteral in_1 = cnf->toCNF(node[1]);
          SatLiteral in_2 = cnf->toCNF(node[2]);
          
          
          
          cnf->assertClause(TNode::null(), in_0, ~in_1, ~in_2, out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), in_1, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), in_2, ~out_0, RULE_INVALID);
          
        }
        else if (enc_id == 17) {
          SatLiteral in_0 = cnf->toCNF(node[0]);
          SatLiteral in_1 = cnf->toCNF(node[1]);
          
          
          
          cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_0, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), in_1, ~out_0, RULE_INVALID);
          
        }
        else if (enc_id == 18) {
          SatLiteral in_0 = cnf->toCNF(node[0]);
          SatLiteral in_1 = cnf->toCNF(node[1]);
          
          
          
          cnf->assertClause(TNode::null(), in_0, in_1, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_0, out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_1, out_0, RULE_INVALID);
          
        }
        else if (enc_id == 19) {
          SatLiteral in_0 = cnf->toCNF(node[0]);
          SatLiteral in_1 = cnf->toCNF(node[1]);
          
          
          
          cnf->assertClause(TNode::null(), in_0, out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), in_1, out_0, RULE_INVALID);
          
        }
        else if (enc_id == 21) {
          SatLiteral in_0 = cnf->toCNF(node[0]);
          SatLiteral in_1 = cnf->toCNF(node[1]);
          SatLiteral in_2 = cnf->toCNF(node[2]);
          
          
          
          cnf->assertClause(TNode::null(), in_0, in_2, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_0, ~in_1, out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_2, out_0, RULE_INVALID);
          
        }
        else if (enc_id == 23) {
          SatLiteral in_0 = cnf->toCNF(node[0]);
          SatLiteral in_1 = cnf->toCNF(node[1]);
          SatLiteral in_2 = cnf->toCNF(node[2]);
          
          
          
          cnf->assertClause(TNode::null(), in_0, in_1, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_0, in_2, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), in_1, in_2, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
          
        }
        else if (enc_id == 25) {
          SatLiteral in_0 = cnf->toCNF(node[0]);
          SatLiteral in_1 = cnf->toCNF(node[1]);
          SatLiteral in_2 = cnf->toCNF(node[2]);
          
          
          
          cnf->assertClause(TNode::null(), in_0, out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~in_2, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), in_1, out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), in_2, out_0, RULE_INVALID);
          
        }
        else if (enc_id == 27) {
          SatLiteral in_0 = cnf->toCNF(node[0]);
          SatLiteral in_1 = cnf->toCNF(node[1]);
          SatLiteral in_2 = cnf->toCNF(node[2]);
          
          
          
          cnf->assertClause(TNode::null(), in_0, in_1, in_2, out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), in_0, in_1, ~in_2, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_0, in_2, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_1, in_2, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
          
        }
        else if (enc_id == 28) {
          SatLiteral in_0 = cnf->toCNF(node[0]);
          SatLiteral in_1 = cnf->toCNF(node[1]);
          
          
          
          cnf->assertClause(TNode::null(), in_0, in_1, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), in_0, ~in_1, out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_0, in_1, out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_0, ~in_1, ~out_0, RULE_INVALID);
          
        }
        else if (enc_id == 32) {
          SatLiteral in_0 = cnf->toCNF(node[0]);
          SatLiteral in_1 = cnf->toCNF(node[1]);
          SatLiteral in_2 = cnf->toCNF(node[2]);
          
          
          
          cnf->assertClause(TNode::null(), in_0, in_1, ~out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_0, ~in_2, out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), ~in_1, ~in_2, out_0, RULE_INVALID);
          cnf->assertClause(TNode::null(), in_2, ~out_0, RULE_INVALID);
          
        }
        else {
          Assert(false);
        }
      }/* defaultSpecial */
    }/* boolean */
  }/* theory */
}/* CVC4 */
