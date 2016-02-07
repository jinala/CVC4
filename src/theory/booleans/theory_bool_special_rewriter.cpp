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

#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;


RewriteFunction TheoryBoolSpecialRewriter::d_rewriteTable[kind::LAST_KIND];

RewriteResponse TheoryBoolSpecialRewriter::preRewrite(TNode node) {
  RewriteResponse res = d_rewriteTable[node.getKind()](node, true);
  if(res.node != node) {
    Debug("booleans-rewrite") << "TheoryBool::preRewrite    " << node << std::endl;
    Debug("booleans-rewrite") << "TheoryBool::preRewrite to " << res.node << std::endl;
  }
  return res; 
}

RewriteResponse TheoryBoolSpecialRewriter::postRewrite(TNode node) {
  RewriteResponse res = d_rewriteTable[node.getKind()](node, false);
  if(res.node!= node) {
    Debug("booleans-rewrite") << "TheoryBool::postRewrite    " << node << std::endl;
    Debug("booleans-rewrite") << "TheoryBool::postRewrite to " << res.node << std::endl;
  }
  return res; 
}



RewriteResponse TheoryBoolSpecialRewriter::IdentityRewrite(TNode node, bool prerewrite) {
  return RewriteResponse(REWRITE_DONE, node); 
}

RewriteResponse TheoryBoolSpecialRewriter::UndefinedRewrite(TNode node, bool prerewrite) {
  Debug("booleans-rewrite") << "TheoryBool::UndefinedRewrite for" << node;
  Unimplemented(); 
} 


