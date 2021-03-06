/*********************                                                        */
/*! \file theory_arith.h
 ** \verbatim
 ** Original author: Morgan Deters
 ** Major contributors: Dejan Jovanovic, Tim King
 ** Minor contributors (to current version): Martin Brain <>, Tianyi Liang, Andrew Reynolds
 ** This file is part of the CVC4 project.
 ** Copyright (c) 2009-2014  New York University and The University of Iowa
 ** See the file COPYING in the top-level source directory for licensing
 ** information.\endverbatim
 **
 ** \brief Arithmetic theory.
 ** Arithmetic theory.
 **/

#include "cvc4_private.h"

#pragma once

#include "theory/theory.h"
#include "expr/node.h"
#include "theory/arith/theory_arith_private_forward.h"


namespace CVC4 {
namespace theory {

namespace quantifiers {
  class InstStrategySimplex;
}

namespace arith {

/**
 * Implementation of QF_LRA.
 * Based upon:
 * http://research.microsoft.com/en-us/um/people/leonardo/cav06.pdf
 */
class TheoryArith : public Theory {
private:
  friend class quantifiers::InstStrategySimplex;
  friend class TheoryArithPrivate;

  TheoryArithPrivate* d_internal;

  TimerStat d_ppRewriteTimer;

public:
  TheoryArith(context::Context* c, context::UserContext* u, OutputChannel& out,
              Valuation valuation, const LogicInfo& logicInfo,
              SmtGlobals* globals);
  virtual ~TheoryArith();

  /**
   * Does non-context dependent setup for a node connected to a theory.
   */
  void preRegisterTerm(TNode n);

  Node expandDefinition(LogicRequest &logicRequest, Node node);

  void setMasterEqualityEngine(eq::EqualityEngine* eq);
  void setQuantifiersEngine(QuantifiersEngine* qe);

  void check(Effort e);
  void propagate(Effort e);
  Node explain(TNode n);

  void collectModelInfo( TheoryModel* m, bool fullModel );

  void shutdown(){ }

  void presolve();
  void notifyRestart();
  PPAssertStatus ppAssert(TNode in, SubstitutionMap& outSubstitutions);
  Node ppRewrite(TNode atom);
  void ppStaticLearn(TNode in, NodeBuilder<>& learned);

  std::string identify() const { return std::string("TheoryArith"); }

  EqualityStatus getEqualityStatus(TNode a, TNode b);

  void addSharedTerm(TNode n);

  Node getModelValue(TNode var);


  std::pair<bool, Node> entailmentCheck(TNode lit,
                                        const EntailmentCheckParameters* params,
                                        EntailmentCheckSideEffects* out);

};/* class TheoryArith */

}/* CVC4::theory::arith namespace */
}/* CVC4::theory namespace */
}/* CVC4 namespace */
