/*********************                                                        */
/*! \file array_info.h
 ** \verbatim
 ** Original author: Morgan Deters
 ** Major contributors: none
 ** Minor contributors (to current version): Dejan Jovanovic, Clark Barrett
 ** This file is part of the CVC4 project.
 ** Copyright (c) 2009-2014  New York University and The University of Iowa
 ** See the file COPYING in the top-level source directory for licensing
 ** information.\endverbatim
 **
 ** \brief Contains additional classes to store context dependent information
 ** for each term of type array
 **/

#include "cvc4_private.h"

#ifndef __CVC4__THEORY__ARRAYS__ARRAY_INFO_H
#define __CVC4__THEORY__ARRAYS__ARRAY_INFO_H

#include <ext/hash_set>
#include <ext/hash_map>
#include <iostream>
#include <map>

#include "context/backtrackable.h"
#include "context/cdlist.h"
#include "context/cdhashmap.h"
#include "expr/node.h"
#include "util/ntuple.h"
#include "util/statistics_registry.h"

namespace CVC4 {
namespace theory {
namespace arrays {

typedef context::CDList<TNode> CTNodeList;
typedef quad<TNode, TNode, TNode, TNode> RowLemmaType;

struct RowLemmaTypeHashFunction {
  size_t operator()(const RowLemmaType& q) const {
    TNode n1 = q.first;
    TNode n2 = q.second;
    TNode n3 = q.third;
    TNode n4 = q.fourth;
    return (size_t) (n1.getId()*0x9e3779b9 + n2.getId()*0x30000059 +
        n3.getId()*0x60000005 + n4.getId()*0x07FFFFFF);

  }
};/* struct RowLemmaTypeHashFunction */

void printList (CTNodeList* list);
void printList( List<TNode>* list);

bool inList(const CTNodeList* l, const TNode el);

/**
 * Small class encapsulating the information
 * in the map. It's a class and not a struct to
 * call the destructor.
 */

class Info {
public:
  context::CDO<bool> isNonLinear;
  context::CDO<bool> rIntro1Applied;
  context::CDO<TNode> modelRep;
  context::CDO<TNode> constArr;
  context::CDO<TNode> weakEquivPointer;
  context::CDO<TNode> weakEquivIndex;
  context::CDO<TNode> weakEquivSecondary;
  context::CDO<TNode> weakEquivSecondaryReason;
  CTNodeList* indices;
  CTNodeList* stores;
  CTNodeList* in_stores;

  Info(context::Context* c, Backtracker<TNode>* bck)
    : isNonLinear(c, false),
      rIntro1Applied(c, false),
      modelRep(c,TNode()),
      constArr(c,TNode()),
      weakEquivPointer(c,TNode()),
      weakEquivIndex(c,TNode()),
      weakEquivSecondary(c,TNode()),
      weakEquivSecondaryReason(c,TNode()) {
    indices = new(true)CTNodeList(c);
    stores = new(true)CTNodeList(c);
    in_stores = new(true)CTNodeList(c);
  }

  ~Info() {
    indices->deleteSelf();
    stores->deleteSelf();
    in_stores->deleteSelf();
  }

  /**
   * prints the information
   */
  void print() const {
    Assert(indices != NULL && stores!= NULL && in_stores != NULL);
    Trace("arrays-info")<<"  indices   ";
    printList(indices);
    Trace("arrays-info")<<"  stores ";
    printList(stores);
    Trace("arrays-info")<<"  in_stores ";
    printList(in_stores);
  }
};/* class Info */


typedef __gnu_cxx::hash_map<Node, Info*, NodeHashFunction> CNodeInfoMap;

/**
 * Class keeping track of the following information for canonical
 * representatives of type array [a] :
 *    indices at which it is being read (all i for which there is a
 *            term of the form SELECT a i)
 *    all store terms in the congruence class
 *    stores in which it appears (terms of the form STORE a _ _ )
 *
 */
class ArrayInfo {
private:
  context::Context* ct;
  Backtracker<TNode>* bck;
  CNodeInfoMap info_map;

  CTNodeList* emptyList;

  /* == STATISTICS == */

  /** time spent in preregisterTerm() */
  TimerStat d_mergeInfoTimer;
  AverageStat d_avgIndexListLength;
  AverageStat d_avgStoresListLength;
  AverageStat d_avgInStoresListLength;
  IntStat d_listsCount;
  IntStat d_callsMergeInfo;
  IntStat d_maxList;
  SizeStat<CNodeInfoMap > d_tableSize;

  /**
   * checks if a certain element is in the list l
   * FIXME: better way to check for duplicates?
   */

  /**
   * helper method that merges two lists into the first
   * without adding duplicates
   */
  void mergeLists(CTNodeList* la, const CTNodeList* lb) const;

public:
  const Info* emptyInfo;
/*
  ArrayInfo(): ct(NULl), info
    d_mergeInfoTimer("theory::arrays::mergeInfoTimer"),
    d_avgIndexListLength("theory::arrays::avgIndexListLength"),
    d_avgStoresListLength("theory::arrays::avgStoresListLength"),
    d_avgInStoresListLength("theory::arrays::avgInStoresListLength"),
    d_listsCount("theory::arrays::listsCount",0),
    d_callsMergeInfo("theory::arrays::callsMergeInfo",0),
    d_maxList("theory::arrays::maxList",0),
    d_tableSize("theory::arrays::infoTableSize", info_map) {
  currentStatisticsRegistry()->registerStat(&d_mergeInfoTimer);
  currentStatisticsRegistry()->registerStat(&d_avgIndexListLength);
  currentStatisticsRegistry()->registerStat(&d_avgStoresListLength);
  currentStatisticsRegistry()->registerStat(&d_avgInStoresListLength);
  currentStatisticsRegistry()->registerStat(&d_listsCount);
  currentStatisticsRegistry()->registerStat(&d_callsMergeInfo);
  currentStatisticsRegistry()->registerStat(&d_maxList);
  currentStatisticsRegistry()->registerStat(&d_tableSize);
  }*/
  ArrayInfo(context::Context* c, Backtracker<TNode>* b);

  ~ArrayInfo();

  /**
   * adds the node a to the map if it does not exist
   * and it initializes the info. checks for duplicate i's
   */
  void addIndex(const Node a, const TNode i);
  void addStore(const Node a, const TNode st);
  void addInStore(const TNode a, const TNode st);

  void setNonLinear(const TNode a);
  void setRIntro1Applied(const TNode a);
  void setModelRep(const TNode a, const TNode rep);

  void setConstArr(const TNode a, const TNode constArr);
  void setWeakEquivPointer(const TNode a, const TNode pointer);
  void setWeakEquivIndex(const TNode a, const TNode index);
  void setWeakEquivSecondary(const TNode a, const TNode secondary);
  void setWeakEquivSecondaryReason(const TNode a, const TNode reason);
  /**
   * Returns the information associated with TNode a
   */

  const Info* getInfo(const TNode a) const;

  const bool isNonLinear(const TNode a) const;

  const bool rIntro1Applied(const TNode a) const;

  const TNode getModelRep(const TNode a) const;

  const TNode getConstArr(const TNode a) const;
  const TNode getWeakEquivPointer(const TNode a) const;
  const TNode getWeakEquivIndex(const TNode a) const;
  const TNode getWeakEquivSecondary(const TNode a) const;
  const TNode getWeakEquivSecondaryReason(const TNode a) const;

  const CTNodeList* getIndices(const TNode a) const;

  const CTNodeList* getStores(const TNode a) const;

  const CTNodeList* getInStores(const TNode a) const;

  /**
   * merges the information of  nodes a and b
   * the nodes do not have to actually be in the map.
   * pre-condition
   *  a should be the canonical representative of b
   */
  void mergeInfo(const TNode a, const TNode b);
};/* class ArrayInfo */

}/* CVC4::theory::arrays namespace */
}/* CVC4::theory namespace */
}/* CVC4 namespace */

#endif /* __CVC4__THEORY__ARRAYS__ARRAY_INFO_H */
