/*********************                                                        */
/*! \file theory_bv_rewriter.cpp
 ** \verbatim
 ** Original author: Dejan Jovanovic
 ** Major contributors: Liana Hadarean
 ** Minor contributors (to current version): Tim King, Clark Barrett, Morgan Deters
 ** This file is part of the CVC4 project.
 ** Copyright (c) 2009-2014  New York University and The University of Iowa
 ** See the file COPYING in the top-level source directory for licensing
 ** information.\endverbatim
 **
 ** \brief [[ Add one-line brief description here ]]
 **
 ** [[ Add lengthier description here ]]
 ** \todo document this file
 **/

#include "options/bv_options.h"
#include "theory/bv/theory_bv_special_rewriter.h"
#include "theory/theory.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::bv;


// CVC4_THREADLOCAL(AllRewriteRules*) TheoryBVSpecialRewriter::s_allRules = NULL;
// CVC4_THREADLOCAL(TimerStat*) TheoryBVSpecialRewriter::d_rewriteTimer = NULL;
int TheoryBVSpecialRewriter::counter[2000];
bool TheoryBVSpecialRewriter::enabled[2000];
RewriteResponse TheoryBVSpecialRewriter::preRewrite(TNode node) {
  switch(node.getKind()) {
    case kind::BITVECTOR_OR:
      return RewriteBITVECTOR_OR(node);
    case kind::BITVECTOR_PLUS:
      return RewriteBITVECTOR_PLUS(node);
    case kind::BITVECTOR_NOT:
      return RewriteBITVECTOR_NOT(node);
    case kind::BITVECTOR_NEG:
      return RewriteBITVECTOR_NEG(node);
    case kind::BITVECTOR_AND:
      return RewriteBITVECTOR_AND(node);
    case kind::BITVECTOR_XOR:
      return RewriteBITVECTOR_XOR(node);
    case kind::BITVECTOR_SLT:
      return RewriteBITVECTOR_SLT(node);
    case kind::EQUAL:
      return RewriteEQUAL(node);
    case kind::BITVECTOR_ULT:
      return RewriteBITVECTOR_ULT(node);
    default:
      counter[1999]++;
      return RewriteResponse(REWRITE_DONE, node);
  }
}

RewriteResponse TheoryBVSpecialRewriter::postRewrite(TNode node) {
  return RewriteResponse(REWRITE_DONE, node);
}



RewriteResponse TheoryBVSpecialRewriter::IdentityRewrite(TNode node, bool prerewrite) {
  return RewriteResponse(REWRITE_DONE, node); 
}

RewriteResponse TheoryBVSpecialRewriter::UndefinedRewrite(TNode node, bool prerewrite) {
  Debug("bv-rewrite") << "TheoryBV::UndefinedRewrite for" << node;
  Unimplemented(); 
} 


