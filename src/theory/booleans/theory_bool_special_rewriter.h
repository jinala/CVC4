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
#include "options/bv_options.h"


namespace CVC4 {
namespace theory {
namespace booleans {

struct AllRewriteRules;
typedef RewriteResponse (*RewriteFunction) (TNode, bool);

class TheoryBoolSpecialRewriter {
  static RewriteResponse IdentityRewrite(TNode node, bool prerewrite = false);
  static RewriteResponse UndefinedRewrite(TNode node, bool prerewrite = false);

  static RewriteResponse RewriteOR(TNode node, bool prerewrite = false);
  static RewriteResponse RewriteAND(TNode node, bool prerewrite = false);
  static RewriteResponse RewriteNOT(TNode node, bool prerewrite = false);
  static RewriteResponse RewriteIFF(TNode node, bool prerewrite = false);
  static RewriteResponse RewriteITE(TNode node, bool prerewrite = false);
  static RewriteResponse RewriteIMPLIES(TNode node, bool prerewrite = false);
public:
  static int counter[2000];
  static bool enabled[2000];
  
  static void initialize() {
    for (int i = 0; i < 2000; i++) {
      counter[i] = 0;
    }
    for (int i = 0; i < 2000; i++) {
      enabled[i] = 1;
    }
    if (options::autotune()) {
      std::string disableStr = options::disableOpt();
      for (int i = 0; i < disableStr.size(); i++) {
        if (disableStr.at(i) == '1')
          enabled[i] = 0;
      }
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
    switch(node.getKind()) {
      case kind::AND :
        return RewriteAND(node);
      case kind::NOT :
        return RewriteNOT(node);
      case kind::IFF :
        return RewriteIFF(node);
      case kind::ITE :
        return RewriteITE(node);
      case kind::OR :
        return RewriteOR(node);
      case kind::IMPLIES:
        return RewriteIMPLIES(node);
      default:
        counter[1999]++;
        return RewriteResponse(REWRITE_DONE, node);
    }

  }
  
};/* class TheoryBoolSpecialRewriter */

}/* CVC4::theory::booleans namespace */
}/* CVC4::theory namespace */
}/* CVC4 namespace */

#endif /* __CVC4__THEORY__BOOLEANS__THEORY_BOOL_SPECIAL_REWRITER_H */