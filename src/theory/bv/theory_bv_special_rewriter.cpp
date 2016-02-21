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

RewriteResponse TheoryBVSpecialRewriter::preRewrite(TNode node) {
  int disableInt = options::autotune() ? options::disableOpt() : 0;
  switch(node.getKind()) {
    case kind::BITVECTOR_OR:
      if (! ((disableInt >> 5) & 1))
        return RewriteBITVECTOR_OR(node);
    case kind::BITVECTOR_PLUS:
      if (! ((disableInt >> 6) & 1))
        return RewriteBITVECTOR_PLUS(node);
    case kind::BITVECTOR_NOT:
      if (! ((disableInt >> 7) & 1))
        return RewriteBITVECTOR_NOT(node);
    case kind::BITVECTOR_NEG:
      if (! ((disableInt >> 8) & 1))
        return RewriteBITVECTOR_NEG(node);
    case kind::BITVECTOR_AND:
      if (! ((disableInt >> 9) & 1))
        return RewriteBITVECTOR_AND(node);
    case kind::BITVECTOR_XOR:
      if (! ((disableInt >> 10) & 1))
        return RewriteBITVECTOR_XOR(node);
    case kind::BITVECTOR_SLT:
      if (! ((disableInt >> 11) & 1))
        return RewriteBITVECTOR_SLT(node);
    case kind::EQUAL:
      if (! ((disableInt >> 12) & 1))
        return RewriteEQUAL(node);
    case kind::BITVECTOR_ULT:
      if (! ((disableInt >> 13) & 1))
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


