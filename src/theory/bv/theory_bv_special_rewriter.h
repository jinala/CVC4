/*********************                                                        */
/*! \file theory_bv_rewriter.h
 ** \verbatim
 ** Original author: Dejan Jovanovic
 ** Major contributors: Morgan Deters, Liana Hadarean
 ** Minor contributors (to current version): Tim King
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

#include "cvc4_private.h"

#ifndef __CVC4__THEORY__BV__THEORY_BV_SPECIAL_REWRITER_H
#define __CVC4__THEORY__BV__THEORY_BV_SPECIAL_REWRITER_H

#include "theory/rewriter.h"
#include "util/statistics_registry.h"
#include "options/bv_options.h"

namespace CVC4 {
namespace theory {
namespace bv {

struct AllRewriteRules;
typedef RewriteResponse (*RewriteFunction) (TNode, bool);

class TheoryBVSpecialRewriter {


  static RewriteResponse IdentityRewrite(TNode node, bool prerewrite = false);
  static RewriteResponse UndefinedRewrite(TNode node, bool prerewrite = false);
  
  static int counter[2000];

public:

  static RewriteResponse RewriteBITVECTOR_OR(TNode node, bool prerewrite = false);
  static RewriteResponse RewriteBITVECTOR_PLUS(TNode node, bool prerewrite = false);
  static RewriteResponse RewriteBITVECTOR_NOT(TNode node, bool prerewrite = false);
  static RewriteResponse RewriteBITVECTOR_NEG(TNode node, bool prerewrite = false);
  static RewriteResponse RewriteBITVECTOR_AND(TNode node, bool prerewrite = false);
  static RewriteResponse RewriteBITVECTOR_XOR(TNode node, bool prerewrite = false);
  static RewriteResponse RewriteBITVECTOR_SLT(TNode node, bool prerewrite = false);
  static RewriteResponse RewriteEQUAL(TNode node, bool prerewrite = false);
  static RewriteResponse RewriteBITVECTOR_ULT(TNode node, bool prerewrite = false);
  static RewriteResponse postRewrite(TNode node);

  static RewriteResponse preRewrite(TNode node);
  
  static void initializeRewrites() {
    for (unsigned i = 0; i < 2000; i++) {
      counter[i] = 0;
    }
  }
  static void print() {
    Chat() << "BV rewrite statistics" << std::endl;
    for (int i = 0; i < 2000; i++) {
      if (counter[i] > 0)
        Chat() << i << " " << counter[i] << std::endl;
    }
  }
  
};/* class TheoryBVSpecialRewriter */

}/* CVC4::theory::bv namespace */
}/* CVC4::theory namespace */
}/* CVC4 namespace */

#endif /* __CVC4__THEORY__BV__THEORY_BV_SPECIAL_REWRITER_H */
