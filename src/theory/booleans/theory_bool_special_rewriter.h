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

#ifndef __CVC4__THEORY__BOOLEANS__THEORY_BOOL_SPECIAL_REWRITER_H
#define __CVC4__THEORY__BOOLEANS__THEORY_BOOL_SPECIAL_REWRITER_H

#include "theory/rewriter.h"
#include "util/statistics_registry.h"
#include "options/main_options.h"


namespace CVC4 {
namespace theory {
namespace booleans {

struct AllRewriteRules;
typedef RewriteResponse (*RewriteFunction) (TNode, bool);

class TheoryBoolSpecialRewriter {
  static RewriteResponse IdentityRewrite(TNode node, bool prerewrite = false);
  static RewriteResponse UndefinedRewrite(TNode node, bool prerewrite = false);
  
  static int counter[2000];

  static RewriteResponse RewriteOR(TNode node, bool prerewrite = false);
  static RewriteResponse RewriteAND(TNode node, bool prerewrite = false);
  static RewriteResponse RewriteNOT(TNode node, bool prerewrite = false);
  static RewriteResponse RewriteIFF(TNode node, bool prerewrite = false);
  static RewriteResponse RewriteITE(TNode node, bool prerewrite = false);
public:
  static void initialize() {
    for (int i = 0; i < 2000; i++) {
      counter[i] = 0;
    }
  }
  static void print() {
    Chat() << "Rewrite statistics" << std::endl;
    for (int i = 0; i < 2000; i++) {
      if (counter[i] > 0)
        Chat() << i << " " << counter[i] << std::endl;
    }
  }
  
  static RewriteResponse rewrite(TNode node) {
    int disableInt = options::disableOpt();
    switch(node.getKind()) {
      case kind::AND :
        if (disableInt & 1)
          return RewriteResponse(REWRITE_DONE, node);
        return RewriteAND(node);
      case kind::NOT :
        if ((disableInt >> 1) & 1)
          return RewriteResponse(REWRITE_DONE, node);
        return RewriteNOT(node);
      case kind::IFF :
        if ((disableInt >> 2) & 1)
          return RewriteResponse(REWRITE_DONE, node);
        return RewriteIFF(node);
      case kind::ITE :
        if ((disableInt >> 3) & 1)
          return RewriteResponse(REWRITE_DONE, node);
        return RewriteITE(node);
      case kind::OR :
        if ((disableInt >> 4) & 1)
          return RewriteResponse(REWRITE_DONE, node);
        return RewriteOR(node);
      default: return RewriteResponse(REWRITE_DONE, node);
    }

  }
  
};/* class TheoryBoolSpecialRewriter */

}/* CVC4::theory::booleans namespace */
}/* CVC4::theory namespace */
}/* CVC4 namespace */

#endif /* __CVC4__THEORY__BOOLEANS__THEORY_BOOL_SPECIAL_REWRITER_H */
