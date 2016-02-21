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
#include "options/main_options.h"

namespace CVC4 {
namespace theory {
namespace bv {

struct AllRewriteRules;
typedef RewriteResponse (*RewriteFunction) (TNode, bool);

class TheoryBVSpecialRewriter {

  static RewriteFunction d_rewriteTable[kind::LAST_KIND];

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
    for (unsigned i = 0; i < kind::LAST_KIND; i++) {
      d_rewriteTable[i] = IdentityRewrite;
    }
    for (unsigned i = 0; i < 2000; i++) {
      counter[i] = 0;
    }
    int disableInt = options::disableOpt();
    if (! ((disableInt >> 5) & 1))
      d_rewriteTable[kind::BITVECTOR_OR] = RewriteBITVECTOR_OR;
    if (! ((disableInt >> 6) & 1))
      d_rewriteTable[kind::BITVECTOR_PLUS] = RewriteBITVECTOR_PLUS;
    if (! ((disableInt >> 7) & 1))
      d_rewriteTable[kind::BITVECTOR_NOT] = RewriteBITVECTOR_NOT;
    if (! ((disableInt >> 8) & 1))
      d_rewriteTable[kind::BITVECTOR_NEG] = RewriteBITVECTOR_NEG;
    if (! ((disableInt >> 9) & 1))
      d_rewriteTable[kind::BITVECTOR_AND] = RewriteBITVECTOR_AND;
    if (! ((disableInt >> 10) & 1))
      d_rewriteTable[kind::BITVECTOR_XOR] = RewriteBITVECTOR_XOR;
    if (! ((disableInt >> 11) & 1))
      d_rewriteTable[kind::BITVECTOR_SLT] = RewriteBITVECTOR_SLT;
    if (! ((disableInt >> 12) & 1))
      d_rewriteTable[kind::EQUAL] = RewriteEQUAL;
    if (! ((disableInt >> 13) & 1))
      d_rewriteTable[kind::BITVECTOR_ULT] = RewriteBITVECTOR_ULT;
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
