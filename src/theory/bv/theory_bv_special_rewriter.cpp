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
RewriteFunction TheoryBVSpecialRewriter::d_rewriteTable[kind::LAST_KIND];
int TheoryBVSpecialRewriter::counter[2000];

RewriteResponse TheoryBVSpecialRewriter::preRewrite(TNode node) {
  RewriteResponse res = d_rewriteTable[node.getKind()](node, true);
  if(res.node != node) {
    Debug("bitvector-rewrite") << "TheoryBV::preRewrite    " << node << std::endl;
    Debug("bitvector-rewrite") << "TheoryBV::preRewrite to " << res.node << std::endl;
  }
  return res; 
}

RewriteResponse TheoryBVSpecialRewriter::postRewrite(TNode node) {
  RewriteResponse res = d_rewriteTable[node.getKind()](node, false);
  if(res.node!= node) {
    Debug("bitvector-rewrite") << "TheoryBV::postRewrite    " << node << std::endl;
    Debug("bitvector-rewrite") << "TheoryBV::postRewrite to " << res.node << std::endl;
  }
  return res; 
}



RewriteResponse TheoryBVSpecialRewriter::IdentityRewrite(TNode node, bool prerewrite) {
  return RewriteResponse(REWRITE_DONE, node); 
}

RewriteResponse TheoryBVSpecialRewriter::UndefinedRewrite(TNode node, bool prerewrite) {
  Debug("bv-rewrite") << "TheoryBV::UndefinedRewrite for" << node;
  Unimplemented(); 
} 


