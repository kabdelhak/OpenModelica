encapsulated package List
protected
  protected import Array;
  protected import MetaModelica.Dangerous.listReverseInPlace;
  protected import MetaModelica.Dangerous.arrayGetNoBoundsChecking;
  protected import MetaModelica.Dangerous.arrayUpdateNoBoundsChecking;
  protected import MetaModelica.Dangerous.arrayCreateNoInit;
  protected import MetaModelica.Dangerous;
  protected import DoubleEnded;
  protected import GCExt;

public
  function create
    final type T = polymorphic<Any>;
    input T inElement;
    output list<T> outList;
  end create;

  function create2
    final type T = polymorphic<Any>;
    input T inElement1;
    input T inElement2;
    output list<T> outList;
  end create2;

  function fill
    final type T = polymorphic<Any>;
    input T inElement;
    input Integer inCount;
    output list<T> outList;
  end fill;

  function repeat
    final type T = polymorphic<Any>;
    input list<T> inElement;
    input Integer inCount;
    output list<T> outList;
  end repeat;

  function intRange
    input Integer inStop;
    output list<Integer> outRange;
  end intRange;

  function intRange2
    input Integer inStart;
    input Integer inStop;
    output list<Integer> outRange;
  end intRange2;

  function intRange3
    input Integer inStart;
    input Integer inStep;
    input Integer inStop;
    output list<Integer> outRange;
  end intRange3;

  function toOption
    final type T = polymorphic<Any>;
    input list<T> inList;
    output Option<T> outOption;
  end toOption;

  function fromOption
    final type T = polymorphic<Any>;
    input Option<T> inElement;
    output list<T> outList;
  end fromOption;

  function assertIsEmpty
    final type T = polymorphic<Any>;
    input list<T> inList;
  end assertIsEmpty;

  function isEqual
    final type T = polymorphic<Any>;
    input list<T> inList1;
    input list<T> inList2;
    input Boolean inEqualLength;
    output Boolean outIsEqual;
  end isEqual;

  function isEqualOnTrue
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input CompFunc inCompFunc;
    output Boolean outIsEqual;

    partial function CompFunc
      input T1 inElement1;
      input T2 inElement2;
      output Boolean outIsEqual;
    end CompFunc;
  end isEqualOnTrue;

  function compare
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    input list<T1> list1;
    input list<T2> list2;
    input CompFunc compareFn;
    output Integer res;

    partial function CompFunc
      input T1 e1;
      input T2 e2;
      output Integer res;
    end CompFunc;
  end compare;

  function isPrefixOnTrue
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input CompFunc inCompFunc;
    output Boolean outIsPrefix;

    partial function CompFunc
      input T1 inElement1;
      input T2 inElement2;
      output Boolean outIsEqual;
    end CompFunc;
  end isPrefixOnTrue;

  function consr
    final type T = polymorphic<Any>;
    input list<T> inList;
    input T inElement;
    output list<T> outList;
  end consr;

  function consOnTrue
    final type T = polymorphic<Any>;
    input Boolean inCondition;
    input T inElement;
    input list<T> inList;
    output list<T> outList;
  end consOnTrue;

  function consOnSuccess
    final type T = polymorphic<Any>;
    input T inElement;
    input list<T> inList;
    input Predicate inPredicate;
    output list<T> outList;

    partial function Predicate
      input T inElement;
    end Predicate;
  end consOnSuccess;

  function consOption
    final type T = polymorphic<Any>;
    input Option<T> inElement;
    input list<T> inList;
    output list<T> outList;
  end consOption;

  function consOnBool
    final type T = polymorphic<Any>;
    input Boolean inValue;
    input T inElement;
    input output list<T> trueList;
    input output list<T> falseList;
  end consOnBool;

  function consN
    final type T = polymorphic<Any>;
    input Integer size;
    input T inElement;
    input output list<T> inList;
  end consN;

  function append_reverse
    final type T = polymorphic<Any>;
    input list<T> inList1;
    input list<T> inList2;
    output list<T> outList;
  end append_reverse;

  function append_reverser
    final type T = polymorphic<Any>;
    input list<T> inList1;
    input list<T> inList2;
    output list<T> outList;
  end append_reverser;

  function appendr
    final type T = polymorphic<Any>;
    input list<T> inList1;
    input list<T> inList2;
    output list<T> outList;
  end appendr;

  function appendElt
    final type T = polymorphic<Any>;
    input T inElement;
    input list<T> inList;
    output list<T> outList;
  end appendElt;

  function appendLastList
    final type T = polymorphic<Any>;
    input list<list<T>> inListList;
    input list<T> inList;
    output list<list<T>> outListList;
  end appendLastList;

  function insert
    final type T = polymorphic<Any>;
    input list<T> inList;
    input Integer inN;
    input T inElement;
    output list<T> outList;
  end insert;

  function insertListSorted
    final type T = polymorphic<Any>;
    input list<T> inList;
    input list<T> inList2;
    input CompareFunc inCompFunc;
    output list<T> outList;

    partial function CompareFunc
      input T inElement1;
      input T inElement2;
      output Boolean inRes;
    end CompareFunc;
  end insertListSorted;

  function set
    final type T = polymorphic<Any>;
    input list<T> inList;
    input Integer inN;
    input T inElement;
    output list<T> outList;
  end set;

  function first
    final type T = polymorphic<Any>;
    input list<T> inList;
    output T out;
  end first;

  function firstOrEmpty
    final type T = polymorphic<Any>;
    input list<T> inList;
    output list<T> outList;
  end firstOrEmpty;

  function second
    final type T = polymorphic<Any>;
    input list<T> inList;
    output T outSecond;
  end second;

  function last
    final type T = polymorphic<Any>;
    input list<T> inList;
    output T outLast;
  end last;

  function lastElement
    final type T = polymorphic<Any>;
    input list<T> inList;
    output list<T> lst;
    output Integer listLength;
  end lastElement;

  function lastListOrEmpty
    final type T = polymorphic<Any>;
    input list<list<T>> inListList;
    output list<T> outLastList;
  end lastListOrEmpty;

  function secondLast
    final type T = polymorphic<Any>;
    input list<T> inList;
    output T outSecondLast;
  end secondLast;

  function lastN
    final type T = polymorphic<Any>;
    input list<T> inList;
    input Integer inN;
    output list<T> outList;
  end lastN;

  function rest
    final type T = polymorphic<Any>;
    input list<T> inList;
    output list<T> outList;
  end rest;

  function restCond
    final type T = polymorphic<Any>;
    input Boolean cond;
    input list<T> inList;
    output list<T> outList;
  end restCond;

  function restOrEmpty
    final type T = polymorphic<Any>;
    input list<T> inList;
    output list<T> outList;
  end restOrEmpty;

  function getIndexFirst
    final type T = polymorphic<Any>;
    input Integer index;
    input list<T> inList;
    output T element;
  end getIndexFirst;

  function getAtIndexLst
    final type T = polymorphic<Any>;
    input list<T> lst;
    input list<Integer> positions;
    input Boolean zeroBased = false;
    output list<T> olst;
  end getAtIndexLst;

  function firstN
    final type T = polymorphic<Any>;
    input list<T> inList;
    input Integer N;
    output list<T> outList;
  end firstN;

  function firstN_reverse
    final type T = polymorphic<Any>;
    input list<T> inList;
    input Integer N;
    output list<T> outList;
  end firstN_reverse;

  function stripFirst
    final type T = polymorphic<Any>;
    input list<T> inList;
    output list<T> outList;
  end stripFirst;

  function stripLast
    final type T = polymorphic<Any>;
    input list<T> inList;
    output list<T> outList;
  end stripLast;

  function stripN
    final type T = polymorphic<Any>;
    input list<T> inList;
    input Integer inN;
    output list<T> outList;
  end stripN;

  function heapSortIntList
    input output list<Integer> lst;
  end heapSortIntList;

  function sort
    final type T = polymorphic<Any>;
    input list<T> inList;
    input CompareFunc inCompFunc;
    output list<T> outList;

    partial function CompareFunc
      input T inElement1;
      input T inElement2;
      output Boolean inRes;
    end CompareFunc;
  end sort;

  function sortedDuplicates
    final type T = polymorphic<Any>;
    input list<T> inList;
    input CompareFunc inCompFunc;
    output list<T> outDuplicates;

    partial function CompareFunc
      input T inElement1;
      input T inElement2;
      output Boolean outEqual;
    end CompareFunc;
  end sortedDuplicates;

  function sortedListAllUnique
    final type T = polymorphic<Any>;
    input list<T> lst;
    input CompareFunc compareFn;
    output Boolean allUnique;

    partial function CompareFunc
      input T inElement1;
      input T inElement2;
      output Boolean outEqual;
    end CompareFunc;
  end sortedListAllUnique;

  function sortedUnique
    final type T = polymorphic<Any>;
    input list<T> inList;
    input CompareFunc inCompFunc;
    output list<T> outUniqueElements;

    partial function CompareFunc
      input T inElement1;
      input T inElement2;
      output Boolean outEqual;
    end CompareFunc;
  end sortedUnique;

  function sortedUniqueAndDuplicates
    final type T = polymorphic<Any>;
    input list<T> inList;
    input CompareFunc inCompFunc;
    output list<T> outUniqueElements;
    output list<T> outDuplicateElements;

    partial function CompareFunc
      input T inElement1;
      input T inElement2;
      output Boolean outEqual;
    end CompareFunc;
  end sortedUniqueAndDuplicates;

  function sortedUniqueOnlyDuplicates
    final type T = polymorphic<Any>;
    input list<T> inList;
    input CompareFunc inCompFunc;
    output list<T> outDuplicateElements;

    partial function CompareFunc
      input T inElement1;
      input T inElement2;
      output Boolean outEqual;
    end CompareFunc;
  end sortedUniqueOnlyDuplicates;

  function mergeSorted
    final type T = polymorphic<Any>;
    input list<T> inList1;
    input list<T> inList2;
    input CompFunc inCompFunc;
    output list<T> outList;

    partial function CompFunc
      input T inElement1;
      input T inElement2;
      output Boolean outIsEqual;
    end CompFunc;
  end mergeSorted;

  function countingSort
    input list<Integer> inList;
    input Integer N;
    output list<Integer> outSorted;
  end countingSort;

  function unique
    final type T = polymorphic<Any>;
    input list<T> inList;
    output list<T> outList;
  end unique;

  function uniqueIntN
    input list<Integer> inList;
    input Integer inN;
    output list<Integer> outList;
  end uniqueIntN;

  function uniqueIntNArr
    input list<Integer> inList;
    input array<Integer> inMarkArray;
    input list<Integer> inAccum;
    output list<Integer> outAccum;
  end uniqueIntNArr;

  function uniqueOnTrue
    final type T = polymorphic<Any>;
    input list<T> inList;
    input CompFunc inCompFunc;
    output list<T> outList;

    partial function CompFunc
      input T inElement1;
      input T inElement2;
      output Boolean outIsEqual;
    end CompFunc;
  end uniqueOnTrue;

  function reverseList
    final type T = polymorphic<Any>;
    input list<list<T>> inList;
    output list<list<T>> outList;
  end reverseList;

  function split
    final type T = polymorphic<Any>;
    input list<T> inList;
    input Integer inPosition;
    output list<T> outList1;
    output list<T> outList2;
  end split;

  function splitr
    final type T = polymorphic<Any>;
    input list<T> inList;
    input Integer inPosition;
    output list<T> outList1;
    output list<T> outList2;
  end splitr;

  function splitOnTrue
    final type T = polymorphic<Any>;
    input list<T> inList;
    input PredicateFunc inFunc;
    output list<T> outTrueList;
    output list<T> outFalseList;

    partial function PredicateFunc
      input T inElement;
      output Boolean outResult;
    end PredicateFunc;
  end splitOnTrue;

  function split1OnTrue
    final type T = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<T> inList;
    input PredicateFunc inFunc;
    input ArgT1 inArg1;
    output list<T> outTrueList;
    output list<T> outFalseList;

    partial function PredicateFunc
      input T inElement;
      input ArgT1 inArg1;
      output Boolean outResult;
    end PredicateFunc;
  end split1OnTrue;

  function split2OnTrue
    final type T = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    input list<T> inList;
    input PredicateFunc inFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    output list<T> outTrueList;
    output list<T> outFalseList;

    partial function PredicateFunc
      input T inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      output Boolean outResult;
    end PredicateFunc;
  end split2OnTrue;

  function splitOnFirstMatch
    final type T = polymorphic<Any>;
    input list<T> inList;
    input CompFunc inFunc;
    output list<T> outList1;
    output list<T> outList2;

    partial function CompFunc
      input T inElement;
      output Boolean outMatch;
    end CompFunc;
  end splitOnFirstMatch;

  function splitFirst
    final type T = polymorphic<Any>;
    input list<T> inList;
    output T outFirst;
    output list<T> outRest;
  end splitFirst;

  function splitFirstOption
    final type T = polymorphic<Any>;
    input list<T> inList;
    output Option<T> outFirst;
    output list<T> outRest;
  end splitFirstOption;

  function splitLast
    final type T = polymorphic<Any>;
    input list<T> inList;
    output T outLast;
    output list<T> outRest;
  end splitLast;

  function splitEqualParts
    final type T = polymorphic<Any>;
    input list<T> inList;
    input Integer inParts;
    output list<list<T>> outParts;
  end splitEqualParts;

  function splitOnBoolList
    final type T = polymorphic<Any>;
    input list<T> inList;
    input list<Boolean> inBools;
    output list<T> outTrueList;
    output list<T> outFalseList;
  end splitOnBoolList;

  function partition
    final type T = polymorphic<Any>;
    input list<T> inList;
    input Integer inPartitionLength;
    output list<list<T>> outPartitions;
  end partition;

  function balancedPartition
    final type T = polymorphic<Any>;
    input list<T> lst;
    input Integer maxLength;
    output list<list<T>> outPartitions;
  end balancedPartition;

  function sublist
    final type T = polymorphic<Any>;
    input list<T> inList;
    input Integer inOffset;
    input Integer inLength;
    output list<T> outList;
  end sublist;

  function productMap
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input MapFunc inMapFunc;
    output list<TO> outResult;

    partial function MapFunc
      input T1 inElement1;
      input T2 inElement2;
      output TO outResult;
    end MapFunc;
  end productMap;

  function product
    final type T = polymorphic<Any>;
    input list<list<T>> inList1;
    input list<list<T>> inList2;
    output list<list<T>> outProduct;
  end product;

  function transposeList
    final type T = polymorphic<Any>;
    input list<list<T>> inList;
    output list<list<T>> outList;
  end transposeList;

  function listArrayReverse
    final type T = polymorphic<Any>;
    input list<T> inLst;
    output array<T> outArr;
  end listArrayReverse;

  function setEqualOnTrue
    final type T = polymorphic<Any>;
    input list<T> inList1;
    input list<T> inList2;
    input CompFunc inCompFunc;
    output Boolean outIsEqual;

    partial function CompFunc
      input T inElement1;
      input T inElement2;
      output Boolean outIsEqual;
    end CompFunc;
  end setEqualOnTrue;

  function intersectionIntSorted
    input list<Integer> inList1;
    input list<Integer> inList2;
    output list<Integer> outResult;
  end intersectionIntSorted;

  function intersectionIntN
    input list<Integer> inList1;
    input list<Integer> inList2;
    input Integer inN;
    output list<Integer> outResult;
  end intersectionIntN;

  function intersectionOnTrue
    final type T = polymorphic<Any>;
    input list<T> inList1;
    input list<T> inList2;
    input CompFunc inCompFunc;
    output list<T> outIntersection;

    partial function CompFunc
      input T inElement1;
      input T inElement2;
      output Boolean outIsEqual;
    end CompFunc;
  end intersectionOnTrue;

  function intersection1OnTrue
    final type T = polymorphic<Any>;
    input list<T> inList1;
    input list<T> inList2;
    input CompFunc inCompFunc;
    output list<T> outIntersection;
    output list<T> outList1Rest;
    output list<T> outList2Rest;

    partial function CompFunc
      input T inElement1;
      input T inElement2;
      output Boolean outIsEqual;
    end CompFunc;
  end intersection1OnTrue;

  function setDifferenceIntN
    input list<Integer> inList1;
    input list<Integer> inList2;
    input Integer inN;
    output list<Integer> outDifference;
  end setDifferenceIntN;

  function setDifferenceOnTrue
    final type T = polymorphic<Any>;
    input list<T> inList1;
    input list<T> inList2;
    input CompFunc inCompFunc;
    output list<T> outDifference;

    partial function CompFunc
      input T inElement1;
      input T inElement2;
      output Boolean outIsEqual;
    end CompFunc;
  end setDifferenceOnTrue;

  function setDifference
    final type T = polymorphic<Any>;
    input list<T> inList1;
    input list<T> inList2;
    output list<T> outDifference;
  end setDifference;

  function unionIntN
    input list<Integer> inList1;
    input list<Integer> inList2;
    input Integer inN;
    output list<Integer> outUnion;
  end unionIntN;

  function unionElt
    final type T = polymorphic<Any>;
    input T inElement;
    input list<T> inList;
    output list<T> outList;
  end unionElt;

  function unionEltOnTrue
    final type T = polymorphic<Any>;
    input T inElement;
    input list<T> inList;
    input CompFunc inCompFunc;
    output list<T> outList;

    partial function CompFunc
      input T inElement1;
      input T inElement2;
      output Boolean outIsEqual;
    end CompFunc;
  end unionEltOnTrue;

  function union
    final type T = polymorphic<Any>;
    input list<T> inList1;
    input list<T> inList2;
    output list<T> outUnion;
  end union;

  function unionAppendonUnion
    final type T = polymorphic<Any>;
    input list<T> inList1;
    input list<T> inList2;
    output list<T> outUnion;
  end unionAppendonUnion;

  function unionOnTrue
    final type T = polymorphic<Any>;
    input list<T> inList1;
    input list<T> inList2;
    input CompFunc inCompFunc;
    output list<T> outUnion;

    partial function CompFunc
      input T inList1;
      input T inList2;
      output Boolean outIsEqual;
    end CompFunc;
  end unionOnTrue;

  function unionAppendListOnTrue
    final type T = polymorphic<Any>;
    input list<T> inList;
    input list<T> inUnion;
    input CompFunc inCompFunc;
    output list<T> outUnion;

    partial function CompFunc
      input T inElement1;
      input T inElement2;
      output Boolean outIsEqual;
    end CompFunc;
  end unionAppendListOnTrue;

  function unionList
    final type T = polymorphic<Any>;
    input list<list<T>> inList;
    output list<T> outUnion;
  end unionList;

  function unionOnTrueList
    final type T = polymorphic<Any>;
    input list<list<T>> inList;
    input CompFunc inCompFunc;
    output list<T> outUnion;

    partial function CompFunc
      input T inElement1;
      input T inElement2;
      output Boolean outIsEqual;
    end CompFunc;
  end unionOnTrueList;

  function map
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    output list<TO> outList;

    partial function MapFunc
      input TI inElement;
      output TO outElement;
    end MapFunc;
  end map;

  function mapCheckReferenceEq
    final type TI = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    output list<TI> outList;

    partial function MapFunc
      input TI inElement;
      output TI outElement;
    end MapFunc;
  end mapCheckReferenceEq;

  function mapReverse
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    output list<TO> outList;

    partial function MapFunc
      input TI inElement;
      output TO outElement;
    end MapFunc;
  end mapReverse;

  function map_2
    final type TI = polymorphic<Any>;
    final type TO1 = polymorphic<Any>;
    final type TO2 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    output list<TO1> outList1;
    output list<TO2> outList2;

    partial function MapFunc
      input TI inElement;
      output TO1 outElement1;
      output TO2 outElement2;
    end MapFunc;
  end map_2;

  function map_3
    final type TI = polymorphic<Any>;
    final type TO1 = polymorphic<Any>;
    final type TO2 = polymorphic<Any>;
    final type TO3 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    output list<TO1> outList1;
    output list<TO2> outList2;
    output list<TO3> outList3;

    partial function MapFunc
      input TI inElement;
      output TO1 outElement1;
      output TO2 outElement2;
      output TO3 outElement3;
    end MapFunc;
  end map_3;

  function mapOption
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    input list<Option<TI>> inList;
    input MapFunc inFunc;
    output list<TO> outList;

    partial function MapFunc
      input TI inElement;
      output TO outElement;
    end MapFunc;
  end mapOption;

  function map1Option
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT = polymorphic<Any>;
    input list<Option<TI>> inList;
    input MapFunc inFunc;
    input ArgT inArg1;
    output list<TO> outList;

    partial function MapFunc
      input TI inElement;
      input ArgT inArg1;
      output TO outElement;
    end MapFunc;
  end map1Option;

  function map2Option
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    input list<Option<TI>> inList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    output list<TO> outList;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      output TO outElement;
    end MapFunc;
  end map2Option;

  function map_0
    final type T = polymorphic<Any>;
    input list<T> inList;
    input MapFunc inFunc;

    partial function MapFunc
      input T inElement;
    end MapFunc;
  end map_0;

  function map1
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inMapFunc;
    input ArgT1 inArg1;
    output list<TO> outList;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      output TO outElement;
    end MapFunc;
  end map1;

  function map1Reverse
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inMapFunc;
    input ArgT1 inArg1;
    output list<TO> outList;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      output TO outElement;
    end MapFunc;
  end map1Reverse;

  function map1r
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    output list<TO> outList;

    partial function MapFunc
      input ArgT1 inArg1;
      input TI inElement;
      output TO outElement;
    end MapFunc;
  end map1r;

  function map1_0
    final type TI = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    input ArgT1 inArg1;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
    end MapFunc;
  end map1_0;

  function map1_2
    final type TI = polymorphic<Any>;
    final type TO1 = polymorphic<Any>;
    final type TO2 = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    output list<TO1> outList1;
    output list<TO2> outList2;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      output TO1 outElement1;
      output TO2 outElement2;
    end MapFunc;
  end map1_2;

  function map1_3
    final type TI = polymorphic<Any>;
    final type TO1 = polymorphic<Any>;
    final type TO2 = polymorphic<Any>;
    final type TO3 = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    output list<TO1> outList1;
    output list<TO2> outList2;
    output list<TO3> outList3;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      output TO1 outElement1;
      output TO2 outElement2;
      output TO3 outElement3;
    end MapFunc;
  end map1_3;

  function map2
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    output list<TO> outList;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      output TO outElement;
    end MapFunc;
  end map2;

  function map2Reverse
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    output list<TO> outList;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      output TO outElement;
    end MapFunc;
  end map2Reverse;

  function map2rm
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    output list<TO> outList;

    partial function MapFunc
      input ArgT1 inArg1;
      input TI inElement;
      input ArgT2 inArg2;
      output TO outElement;
    end MapFunc;
  end map2rm;

  function map2r
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    output list<TO> outList;

    partial function MapFunc
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input TI inElement;
      output TO outElement;
    end MapFunc;
  end map2r;

  function map2_0
    final type TI = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
    end MapFunc;
  end map2_0;

  function map2_2
    final type TI = polymorphic<Any>;
    final type TO1 = polymorphic<Any>;
    final type TO2 = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    output list<TO1> outList1;
    output list<TO2> outList2;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      output TO1 outElement1;
      output TO2 outElement2;
    end MapFunc;
  end map2_2;

  function map2_3
    final type TI = polymorphic<Any>;
    final type TO1 = polymorphic<Any>;
    final type TO2 = polymorphic<Any>;
    final type TO3 = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    output list<TO1> outList1;
    output list<TO2> outList2;
    output list<TO3> outList3;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      output TO1 outElement1;
      output TO2 outElement2;
      output TO3 outElement3;
    end MapFunc;
  end map2_3;

  function map3
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    input ArgT3 inArg3;
    output list<TO> outList;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input ArgT3 inArg3;
      output TO outElement;
    end MapFunc;
  end map3;

  function map3r
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    input ArgT3 inArg3;
    output list<TO> outList;

    partial function MapFunc
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input ArgT3 inArg3;
      input TI inElement;
      output TO outElement;
    end MapFunc;
  end map3r;

  function map3_0
    final type TI = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    input ArgT3 inArg3;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input ArgT3 inArg3;
    end MapFunc;
  end map3_0;

  function map3_2
    final type TI = polymorphic<Any>;
    final type TO1 = polymorphic<Any>;
    final type TO2 = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    input ArgT3 inArg3;
    output list<TO1> outList1;
    output list<TO2> outList2;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input ArgT3 inArg3;
      output TO1 outElement1;
      output TO2 outElement2;
    end MapFunc;
  end map3_2;

  function map4
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    final type ArgT4 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    input ArgT3 inArg3;
    input ArgT4 inArg4;
    output list<TO> outList;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input ArgT3 inArg3;
      input ArgT4 inArg4;
      output TO outElement;
    end MapFunc;
  end map4;

  function map4_0
    final type TI = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    final type ArgT4 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    input ArgT3 inArg3;
    input ArgT4 inArg4;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input ArgT3 inArg3;
      input ArgT4 inArg4;
    end MapFunc;
  end map4_0;

  function map4_2
    final type TI = polymorphic<Any>;
    final type TO1 = polymorphic<Any>;
    final type TO2 = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    final type ArgT4 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    input ArgT3 inArg3;
    input ArgT4 inArg4;
    output list<TO1> outList1;
    output list<TO2> outList2;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input ArgT3 inArg3;
      input ArgT4 inArg4;
      output TO1 outElement1;
      output TO2 outElement2;
    end MapFunc;
  end map4_2;

  function map5
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    final type ArgT4 = polymorphic<Any>;
    final type ArgT5 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    input ArgT3 inArg3;
    input ArgT4 inArg4;
    input ArgT5 inArg5;
    output list<TO> outList;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input ArgT3 inArg3;
      input ArgT4 inArg4;
      input ArgT5 inArg5;
      output TO outElement;
    end MapFunc;
  end map5;

  function map6
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    final type ArgT4 = polymorphic<Any>;
    final type ArgT5 = polymorphic<Any>;
    final type ArgT6 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    input ArgT3 inArg3;
    input ArgT4 inArg4;
    input ArgT5 inArg5;
    input ArgT6 inArg6;
    output list<TO> outList;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input ArgT3 inArg3;
      input ArgT4 inArg4;
      input ArgT5 inArg5;
      input ArgT6 inArg6;
      output TO outElement;
    end MapFunc;
  end map6;

  function map7
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    final type ArgT4 = polymorphic<Any>;
    final type ArgT5 = polymorphic<Any>;
    final type ArgT6 = polymorphic<Any>;
    final type ArgT7 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    input ArgT3 inArg3;
    input ArgT4 inArg4;
    input ArgT5 inArg5;
    input ArgT6 inArg6;
    input ArgT7 inArg7;
    output list<TO> outList;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input ArgT3 inArg3;
      input ArgT4 inArg4;
      input ArgT5 inArg5;
      input ArgT6 inArg6;
      input ArgT7 inArg7;
      output TO outElement;
    end MapFunc;
  end map7;

  function map8
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    final type ArgT4 = polymorphic<Any>;
    final type ArgT5 = polymorphic<Any>;
    final type ArgT6 = polymorphic<Any>;
    final type ArgT7 = polymorphic<Any>;
    final type ArgT8 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    input ArgT3 inArg3;
    input ArgT4 inArg4;
    input ArgT5 inArg5;
    input ArgT6 inArg6;
    input ArgT7 inArg7;
    input ArgT8 inArg8;
    output list<TO> outList;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input ArgT3 inArg3;
      input ArgT4 inArg4;
      input ArgT5 inArg5;
      input ArgT6 inArg6;
      input ArgT7 inArg7;
      input ArgT8 inArg8;
      output TO outElement;
    end MapFunc;
  end map8;

  function map9
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    final type ArgT4 = polymorphic<Any>;
    final type ArgT5 = polymorphic<Any>;
    final type ArgT6 = polymorphic<Any>;
    final type ArgT7 = polymorphic<Any>;
    final type ArgT8 = polymorphic<Any>;
    final type ArgT9 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    input ArgT3 inArg3;
    input ArgT4 inArg4;
    input ArgT5 inArg5;
    input ArgT6 inArg6;
    input ArgT7 inArg7;
    input ArgT8 inArg8;
    input ArgT9 inArg9;
    output list<TO> outList;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input ArgT3 inArg3;
      input ArgT4 inArg4;
      input ArgT5 inArg5;
      input ArgT6 inArg6;
      input ArgT7 inArg7;
      input ArgT8 inArg8;
      input ArgT9 inArg9;
      output TO outElement;
    end MapFunc;
  end map9;

  function mapFlat
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inMapFunc;
    output list<TO> outList;

    partial function MapFunc
      input TI inElement;
      output list<TO> outList;
    end MapFunc;
  end mapFlat;

  function mapFlatReverse
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inMapFunc;
    output list<TO> outList;

    partial function MapFunc
      input TI inElement;
      output list<TO> outList;
    end MapFunc;
  end mapFlatReverse;

  function map1Flat
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inMapFunc;
    input ArgT1 inArg1;
    output list<TO> outList;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      output list<TO> outList;
    end MapFunc;
  end map1Flat;

  function map2Flat
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inMapFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    output list<TO> outList;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      output list<TO> outList;
    end MapFunc;
  end map2Flat;

  function mapMap
    final type TI = polymorphic<Any>;
    final type TO1 = polymorphic<Any>;
    final type TO2 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc1 inMapFunc1;
    input MapFunc2 inMapFunc2;
    output list<TO2> outList;

    partial function MapFunc1
      input TI inElement;
      output TO1 outElement;
    end MapFunc1;

    partial function MapFunc2
      input TO1 inElement;
      output TO2 outElement;
    end MapFunc2;
  end mapMap;

  function mapMap_0
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc1 inMapFunc1;
    input MapFunc2 inMapFunc2;

    partial function MapFunc1
      input TI inElement;
      output TO outElement;
    end MapFunc1;

    partial function MapFunc2
      input TO inElement;
    end MapFunc2;
  end mapMap_0;

  function mapAllValue
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type VT = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inMapFunc;
    input VT inValue;

    partial function MapFunc
      input TI inElement;
      output TO outElement;
    end MapFunc;
  end mapAllValue;

  function mapAllValueBool
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type VT = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inMapFunc;
    input VT inValue;
    output Boolean outAllValue;

    partial function MapFunc
      input TI inElement;
      output TO outElement;
    end MapFunc;
  end mapAllValueBool;

  function map1AllValueBool
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type VT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inMapFunc;
    input VT inValue;
    input ArgT1 inArg1;
    output Boolean outAllValue;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      output TO outElement;
    end MapFunc;
  end map1AllValueBool;

  function map1AllValue
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type VT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inMapFunc;
    input VT inValue;
    input ArgT1 inArg1;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      output TO outElement;
    end MapFunc;
  end map1AllValue;

  function map1rAllValue
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type VT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inMapFunc;
    input VT inValue;
    input ArgT1 inArg1;

    partial function MapFunc
      input ArgT1 inArg1;
      input TI inElement;
      output TO outElement;
    end MapFunc;
  end map1rAllValue;

  function map2AllValue
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type VT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inMapFunc;
    input VT inValue;
    input ArgT1 inArg1;
    input ArgT2 inArg2;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      output TO outElement;
    end MapFunc;
  end map2AllValue;

  function mapListAllValueBool
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type VT = polymorphic<Any>;
    input list<list<TI>> inList;
    input MapFunc inMapFunc;
    input VT inValue;
    output Boolean outAllValue;

    partial function MapFunc
      input TI inElement;
      output TO outElement;
    end MapFunc;
  end mapListAllValueBool;

  function map1ListAllValueBool
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type VT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<list<TI>> inList;
    input MapFunc inMapFunc;
    input VT inValue;
    input ArgT1 inArg1;
    output Boolean outAllValue;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      output TO outElement;
    end MapFunc;
  end map1ListAllValueBool;

  function foldAllValue
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inMapFunc;
    input TO inValue;
    input ArgT1 inArg1;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      output TO outElement;
      output ArgT1 outArg1;
    end MapFunc;
  end foldAllValue;

  function applyAndFold
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    input list<TI> inList;
    input FoldFunc inFoldFunc;
    input ApplyFunc inApplyFunc;
    input FT inFoldArg;
    output FT outResult;

    partial function ApplyFunc
      input TI inElement;
      output TO outElement;
    end ApplyFunc;

    partial function FoldFunc
      input TO inElement;
      input FT inAccumulator;
      output FT outResult;
    end FoldFunc;
  end applyAndFold;

  function applyAndFold1
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<TI> inList;
    input FoldFunc inFoldFunc;
    input ApplyFunc inApplyFunc;
    input ArgT1 inExtraArg;
    input FT inFoldArg;
    output FT outResult;

    partial function ApplyFunc
      input TI inElement1;
      input ArgT1 inElement2;
      output TO outElement;
    end ApplyFunc;

    partial function FoldFunc
      input TO inElement;
      input FT inAccumulator;
      output FT outResult;
    end FoldFunc;
  end applyAndFold1;

  function mapBoolOr
    final type TI = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    output Boolean res;

    partial function MapFunc
      input TI inElement;
      output Boolean outBool;
    end MapFunc;
  end mapBoolOr;

  function mapBoolAnd
    final type TI = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    output Boolean res;

    partial function MapFunc
      input TI inElement;
      output Boolean outBool;
    end MapFunc;
  end mapBoolAnd;

  function mapMapBoolAnd
    final type TI = polymorphic<Any>;
    final type TI2 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    input MapBFunc inBFunc;
    output Boolean res;

    partial function MapBFunc
      input TI2 inElement;
      output Boolean outBool;
    end MapBFunc;

    partial function MapFunc
      input TI inElement;
      output TI2 outElement;
    end MapFunc;
  end mapMapBoolAnd;

  function map1BoolOr
    final type TI = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    output Boolean res;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      output Boolean outBool;
    end MapFunc;
  end map1BoolOr;

  function map1BoolAnd
    final type TI = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    output Boolean res;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      output Boolean outBool;
    end MapFunc;
  end map1BoolAnd;

  function map1ListBoolOr
    final type TI = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<list<TI>> inListList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    output Boolean res;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      output Boolean outBool;
    end MapFunc;
  end map1ListBoolOr;

  function mapList
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    input list<list<TI>> inListList;
    input MapFunc inFunc;
    output list<list<TO>> outListList;

    partial function MapFunc
      input TI inElement;
      output TO outElement;
    end MapFunc;
  end mapList;

  function mapList0
    final type TI = polymorphic<Any>;
    input list<list<TI>> inListList;
    input MapFunc inFunc;

    partial function MapFunc
      input TI inElement;
    end MapFunc;
  end mapList0;

  function mapList1_0
    final type TI = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<list<TI>> inListList;
    input MapFunc inFunc;
    input ArgT1 inArg1;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
    end MapFunc;
  end mapList1_0;

  function mapList2_0
    final type TI = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    input list<list<TI>> inListList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
    end MapFunc;
  end mapList2_0;

  function mapList1_1
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<list<TI>> inListList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    output list<list<TO>> outListList;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      output TO outElement;
    end MapFunc;
  end mapList1_1;

  function mapListReverse
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    input list<list<TI>> inListList;
    input MapFunc inFunc;
    output list<list<TO>> outListList;

    partial function MapFunc
      input TI inElement;
      output TO outElement;
    end MapFunc;
  end mapListReverse;

  function map1List
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<list<TI>> inListList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    output list<list<TO>> outListList;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      output TO outElement;
    end MapFunc;
  end map1List;

  function map2List
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    input list<list<TI>> inListList;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    output list<list<TO>> outListList;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      output TO outElement;
    end MapFunc;
  end map2List;

  function fold
    final type T = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    input list<T> inList;
    input FoldFunc inFoldFunc;
    input FT inStartValue;
    output FT outResult;

    partial function FoldFunc
      input T inElement;
      input FT inFoldArg;
      output FT outFoldArg;
    end FoldFunc;
  end fold;

  function foldr
    final type T = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    input list<T> inList;
    input FoldFunc inFoldFunc;
    input FT inStartValue;
    output FT outResult;

    partial function FoldFunc
      input FT inFoldArg;
      input T inElement;
      output FT outFoldArg;
    end FoldFunc;
  end foldr;

  function fold1
    final type T = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<T> inList;
    input FoldFunc inFoldFunc;
    input ArgT1 inExtraArg;
    input FT inStartValue;
    output FT outResult;

    partial function FoldFunc
      input T inElement;
      input ArgT1 inArg;
      input FT inFoldArg;
      output FT outFoldArg;
    end FoldFunc;
  end fold1;

  function fold1r
    final type T = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<T> inList;
    input FoldFunc inFoldFunc;
    input ArgT1 inExtraArg;
    input FT inStartValue;
    output FT outResult;

    partial function FoldFunc
      input FT inFoldArg;
      input T inElement;
      input ArgT1 inArg;
      output FT outFoldArg;
    end FoldFunc;
  end fold1r;

  function fold2
    final type T = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    input list<T> inList;
    input FoldFunc inFoldFunc;
    input ArgT1 inExtraArg1;
    input ArgT2 inExtraArg2;
    input FT inStartValue;
    output FT outResult;

    partial function FoldFunc
      input T inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input FT inFoldArg;
      output FT outFoldArg;
    end FoldFunc;
  end fold2;

  function fold22
    final type T = polymorphic<Any>;
    final type FT1 = polymorphic<Any>;
    final type FT2 = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    input list<T> inList;
    input FoldFunc inFoldFunc;
    input ArgT1 inExtraArg1;
    input ArgT2 inExtraArg2;
    input FT1 inStartValue1;
    input FT2 inStartValue2;
    output FT1 outResult1;
    output FT2 outResult2;

    partial function FoldFunc
      input T inElement;
      input ArgT1 inConstantArg1;
      input ArgT2 inConstantArg2;
      input FT1 inFoldArg1;
      input FT2 inFoldArg2;
      output FT1 outFoldArg1;
      output FT2 outFoldArg2;
    end FoldFunc;
  end fold22;

  function foldList
    final type T = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    input list<list<T>> inList;
    input FoldFunc inFoldFunc;
    input FT inStartValue;
    output FT outResult;

    partial function FoldFunc
      input T inElement;
      input FT inFoldArg;
      output FT outFoldArg;
    end FoldFunc;
  end foldList;

  function foldList1
    final type T = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<list<T>> inList;
    input FoldFunc inFoldFunc;
    input ArgT1 inExtraArg1;
    input FT inStartValue;
    output FT outResult;

    partial function FoldFunc
      input T inElement;
      input ArgT1 inConstantArg1;
      input FT inFoldArg;
      output FT outFoldArg;
    end FoldFunc;
  end foldList1;

  function foldList2
    final type T = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    input list<list<T>> inList;
    input FoldFunc inFoldFunc;
    input ArgT1 inExtraArg1;
    input ArgT2 inExtraArg2;
    input FT inStartValue;
    output FT outResult;

    partial function FoldFunc
      input T inElement;
      input ArgT1 inConstantArg1;
      input ArgT2 inConstantArg2;
      input FT inFoldArg;
      output FT outFoldArg;
    end FoldFunc;
  end foldList2;

  function fold2r
    final type T = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    input list<T> inList;
    input FoldFunc inFoldFunc;
    input ArgT1 inExtraArg1;
    input ArgT2 inExtraArg2;
    input FT inStartValue;
    output FT outResult;

    partial function FoldFunc
      input FT inFoldArg;
      input T inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      output FT outFoldArg;
    end FoldFunc;
  end fold2r;

  function fold3
    final type T = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    input list<T> inList;
    input FoldFunc inFoldFunc;
    input ArgT1 inExtraArg1;
    input ArgT2 inExtraArg2;
    input ArgT3 inExtraArg3;
    input FT inStartValue;
    output FT outResult;

    partial function FoldFunc
      input T inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input ArgT3 inArg3;
      input FT inFoldArg;
      output FT outFoldArg;
    end FoldFunc;
  end fold3;

  function fold3r
    final type T = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    input list<T> inList;
    input FoldFunc inFoldFunc;
    input ArgT1 inExtraArg1;
    input ArgT2 inExtraArg2;
    input ArgT3 inExtraArg3;
    input FT inStartValue;
    output FT outResult;

    partial function FoldFunc
      input FT inFoldArg;
      input T inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input ArgT3 inArg3;
      output FT outFoldArg;
    end FoldFunc;
  end fold3r;

  function fold4
    final type T = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    final type ArgT4 = polymorphic<Any>;
    input list<T> inList;
    input FoldFunc inFoldFunc;
    input ArgT1 inExtraArg1;
    input ArgT2 inExtraArg2;
    input ArgT3 inExtraArg3;
    input ArgT4 inExtraArg4;
    input FT inStartValue;
    output FT outResult;

    partial function FoldFunc
      input T inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input ArgT3 inArg3;
      input ArgT4 inArg4;
      input FT inFoldArg;
      output FT outFoldArg;
    end FoldFunc;
  end fold4;

  function fold43
    final type T = polymorphic<Any>;
    final type FT1 = polymorphic<Any>;
    final type FT2 = polymorphic<Any>;
    final type FT3 = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    final type ArgT4 = polymorphic<Any>;
    input list<T> inList;
    input FoldFunc inFoldFunc;
    input ArgT1 inExtraArg1;
    input ArgT2 inExtraArg2;
    input ArgT3 inExtraArg3;
    input ArgT4 inExtraArg4;
    input FT1 inStartValue1;
    input FT2 inStartValue2;
    input FT3 inStartValue3;
    output FT1 outResult1;
    output FT2 outResult2;
    output FT3 outResult3;

    partial function FoldFunc
      input T inElement;
      input ArgT1 inConstantArg1;
      input ArgT2 inConstantArg2;
      input ArgT3 inConstantArg3;
      input ArgT4 inConstantArg4;
      input FT1 inFoldArg1;
      input FT2 inFoldArg2;
      input FT3 inFoldArg3;
      output FT1 outFoldArg1;
      output FT2 outFoldArg2;
      output FT3 outFoldArg3;
    end FoldFunc;
  end fold43;

  function fold20
    final type T = polymorphic<Any>;
    final type FT1 = polymorphic<Any>;
    final type FT2 = polymorphic<Any>;
    input list<T> inList;
    input FoldFunc inFoldFunc;
    input FT1 inStartValue1;
    input FT2 inStartValue2;
    output FT1 outResult1;
    output FT2 outResult2;

    partial function FoldFunc
      input T inElement;
      input FT1 inFoldArg1;
      input FT2 inFoldArg2;
      output FT1 outFoldArg1;
      output FT2 outFoldArg2;
    end FoldFunc;
  end fold20;

  function fold30
    final type T = polymorphic<Any>;
    final type FT1 = polymorphic<Any>;
    final type FT2 = polymorphic<Any>;
    final type FT3 = polymorphic<Any>;
    input list<T> inList;
    input FoldFunc inFoldFunc;
    input FT1 inStartValue1;
    input FT2 inStartValue2;
    input FT3 inStartValue3;
    output FT1 outResult1;
    output FT2 outResult2;
    output FT3 outResult3;

    partial function FoldFunc
      input T inElement;
      input FT1 inFoldArg1;
      input FT2 inFoldArg2;
      input FT3 inFoldArg3;
      output FT1 outFoldArg1;
      output FT2 outFoldArg2;
      output FT3 outFoldArg3;
    end FoldFunc;
  end fold30;

  function fold21
    final type T = polymorphic<Any>;
    final type FT1 = polymorphic<Any>;
    final type FT2 = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<T> inList;
    input FoldFunc inFoldFunc;
    input ArgT1 inExtraArg1;
    input FT1 inStartValue1;
    input FT2 inStartValue2;
    output FT1 outResult1;
    output FT2 outResult2;

    partial function FoldFunc
      input T inElement;
      input ArgT1 inExtraArg1;
      input FT1 inFoldArg1;
      input FT2 inFoldArg2;
      output FT1 outFoldArg1;
      output FT2 outFoldArg2;
    end FoldFunc;
  end fold21;

  function fold31
    final type T = polymorphic<Any>;
    final type FT1 = polymorphic<Any>;
    final type FT2 = polymorphic<Any>;
    final type FT3 = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<T> inList;
    input FoldFunc inFoldFunc;
    input ArgT1 inExtraArg1;
    input FT1 inStartValue1;
    input FT2 inStartValue2;
    input FT3 inStartValue3;
    output FT1 outResult1;
    output FT2 outResult2;
    output FT3 outResult3;

    partial function FoldFunc
      input T inElement;
      input ArgT1 inExtraArg1;
      input output FT1 inFoldArg1;
      input output FT2 inFoldArg2;
      input output FT3 inFoldArg3;
    end FoldFunc;
  end fold31;

  function fold5
    final type T = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    final type ArgT4 = polymorphic<Any>;
    final type ArgT5 = polymorphic<Any>;
    input list<T> inList;
    input FoldFunc inFoldFunc;
    input ArgT1 inExtraArg1;
    input ArgT2 inExtraArg2;
    input ArgT3 inExtraArg3;
    input ArgT4 inExtraArg4;
    input ArgT5 inExtraArg5;
    input FT inStartValue;
    output FT outResult;

    partial function FoldFunc
      input T inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input ArgT3 inArg3;
      input ArgT4 inArg4;
      input ArgT5 inArg5;
      input FT inFoldArg;
      output FT outFoldArg;
    end FoldFunc;
  end fold5;

  function fold6
    final type T = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    final type ArgT4 = polymorphic<Any>;
    final type ArgT5 = polymorphic<Any>;
    final type ArgT6 = polymorphic<Any>;
    input list<T> inList;
    input FoldFunc inFoldFunc;
    input ArgT1 inExtraArg1;
    input ArgT2 inExtraArg2;
    input ArgT3 inExtraArg3;
    input ArgT4 inExtraArg4;
    input ArgT5 inExtraArg5;
    input ArgT6 inExtraArg6;
    input FT inStartValue;
    output FT outResult;

    partial function FoldFunc
      input T inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input ArgT3 inArg3;
      input ArgT4 inArg4;
      input ArgT5 inArg5;
      input ArgT6 inArg6;
      input FT inFoldArg;
      output FT outFoldArg;
    end FoldFunc;
  end fold6;

  function mapFold
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    input list<TI> inList;
    input FuncType inFunc;
    input FT inArg;
    output list<TO> outList;
    output FT outArg;

    partial function FuncType
      input TI inElem;
      input FT inArg;
      output TO outResult;
      output FT outArg;
    end FuncType;
  end mapFold;

  function mapFold2
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type FT1 = polymorphic<Any>;
    final type FT2 = polymorphic<Any>;
    input list<TI> inList;
    input FuncType inFunc;
    input FT1 inArg1;
    input FT2 inArg2;
    output list<TO> outList;
    output FT1 outArg1;
    output FT2 outArg2;

    partial function FuncType
      input TI inElem;
      input FT1 inArg1;
      input FT2 inArg2;
      output TO outResult;
      output FT1 outArg1;
      output FT2 outArg2;
    end FuncType;
  end mapFold2;

  function mapFold3
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type FT1 = polymorphic<Any>;
    final type FT2 = polymorphic<Any>;
    final type FT3 = polymorphic<Any>;
    input list<TI> inList;
    input FuncType inFunc;
    output list<TO> outList;
    input output FT1 inArg1;
    input output FT2 inArg2;
    input output FT3 inArg3;

    partial function FuncType
      input TI inElem;
      output TO outResult;
      input output FT1 inArg1;
      input output FT2 inArg2;
      input output FT3 inArg3;
    end FuncType;
  end mapFold3;

  function mapFold4
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type FT1 = polymorphic<Any>;
    final type FT2 = polymorphic<Any>;
    final type FT3 = polymorphic<Any>;
    final type FT4 = polymorphic<Any>;
    input list<TI> inList;
    input FuncType inFunc;
    output list<TO> outList;
    input output FT1 inArg1;
    input output FT2 inArg2;
    input output FT3 inArg3;
    input output FT4 inArg4;

    partial function FuncType
      input TI inElem;
      output TO outResult;
      input output FT1 inArg1;
      input output FT2 inArg2;
      input output FT3 inArg3;
      input output FT4 inArg4;
    end FuncType;
  end mapFold4;

  function mapFold5
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type FT1 = polymorphic<Any>;
    final type FT2 = polymorphic<Any>;
    final type FT3 = polymorphic<Any>;
    final type FT4 = polymorphic<Any>;
    final type FT5 = polymorphic<Any>;
    input list<TI> inList;
    input FuncType inFunc;
    output list<TO> outList;
    input output FT1 inArg1;
    input output FT2 inArg2;
    input output FT3 inArg3;
    input output FT4 inArg4;
    input output FT5 inArg5;

    partial function FuncType
      input TI inElem;
      output TO outResult;
      input output FT1 inArg1;
      input output FT2 inArg2;
      input output FT3 inArg3;
      input output FT4 inArg4;
      input output FT5 inArg5;
    end FuncType;
  end mapFold5;

  function map1Fold
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<TI> inList;
    input FuncType inFunc;
    input ArgT1 inConstArg;
    input FT inArg;
    output list<TO> outList;
    output FT outArg;

    partial function FuncType
      input TI inElem;
      input ArgT1 inConstArg;
      input FT inArg;
      output TO outResult;
      output FT outArg;
    end FuncType;
  end map1Fold;

  function map2Fold
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    input list<TI> inList;
    input FuncType inFunc;
    input ArgT1 inConstArg;
    input ArgT2 inConstArg2;
    input FT inArg;
    input list<TO> inAccum = {};
    output list<TO> outList;
    output FT outArg;

    partial function FuncType
      input TI inElem;
      input ArgT1 inConstArg;
      input ArgT2 inConstArg2;
      input FT inArg;
      output TO outResult;
      output FT outArg;
    end FuncType;
  end map2Fold;

  function map2FoldCheckReferenceEq
    final type TIO = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    input list<TIO> inList;
    input FuncType inFunc;
    input ArgT1 inConstArg;
    input ArgT2 inConstArg2;
    input FT inArg;
    output list<TIO> outList;
    output FT outArg;

    partial function FuncType
      input TIO inElem;
      input ArgT1 inConstArg;
      input ArgT2 inConstArg2;
      input FT inArg;
      output TIO outResult;
      output FT outArg;
    end FuncType;
  end map2FoldCheckReferenceEq;

  function map3Fold
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    input list<TI> inList;
    input FuncType inFunc;
    input ArgT1 inConstArg;
    input ArgT2 inConstArg2;
    input ArgT3 inConstArg3;
    input FT inArg;
    output list<TO> outList;
    output FT outArg;

    partial function FuncType
      input TI inElem;
      input ArgT1 inConstArg;
      input ArgT2 inConstArg2;
      input ArgT3 inConstArg3;
      input FT inArg;
      output TO outResult;
      output FT outArg;
    end FuncType;
  end map3Fold;

  function map4Fold
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    final type ArgT4 = polymorphic<Any>;
    input list<TI> inList;
    input FuncType inFunc;
    input ArgT1 inConstArg;
    input ArgT2 inConstArg2;
    input ArgT3 inConstArg3;
    input ArgT4 inConstArg4;
    input FT inArg;
    output list<TO> outList;
    output FT outArg;

    partial function FuncType
      input TI inElem;
      input ArgT1 inConstArg;
      input ArgT2 inConstArg2;
      input ArgT3 inConstArg3;
      input ArgT4 inConstArg4;
      input FT inArg;
      output TO outResult;
      output FT outArg;
    end FuncType;
  end map4Fold;

  function mapFoldList
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    input list<list<TI>> inListList;
    input FuncType inFunc;
    input FT inArg;
    output list<list<TO>> outListList;
    output FT outArg;

    partial function FuncType
      input TI inElem;
      input FT inArg;
      output TO outResult;
      output FT outArg;
    end FuncType;
  end mapFoldList;

  function map3FoldList
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    input list<list<TI>> inListList;
    input FuncType inFunc;
    input ArgT1 inConstArg1;
    input ArgT2 inConstArg2;
    input ArgT3 inConstArg3;
    input FT inArg;
    output list<list<TO>> outListList;
    output FT outArg;

    partial function FuncType
      input TI inElem;
      input ArgT1 inConstArg1;
      input ArgT2 inConstArg2;
      input ArgT3 inConstArg3;
      input FT inArg;
      output TO outResult;
      output FT outArg;
    end FuncType;
  end map3FoldList;

  function reduce
    final type T = polymorphic<Any>;
    input list<T> inList;
    input ReduceFunc inReduceFunc;
    output T outResult;

    partial function ReduceFunc
      input T inElement1;
      input T inElement2;
      output T outElement;
    end ReduceFunc;
  end reduce;

  function reduce1
    final type T = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<T> inList;
    input ReduceFunc inReduceFunc;
    input ArgT1 inExtraArg1;
    output T outResult;

    partial function ReduceFunc
      input T inElement1;
      input T inElement2;
      input ArgT1 inExtraArg1;
      output T outElement;
    end ReduceFunc;
  end reduce1;

  function flatten
    final type T = polymorphic<Any>;
    input list<list<T>> inList;
    output list<T> outList;
  end flatten;

  function flattenReverse
    final type T = polymorphic<Any>;
    input list<list<T>> inList;
    output list<T> outList;
  end flattenReverse;

  function thread
    final type T = polymorphic<Any>;
    input list<T> inList1;
    input list<T> inList2;
    input list<T> inAccum = {};
    output list<T> outList;
  end thread;

  function thread3
    final type T = polymorphic<Any>;
    input list<T> inList1;
    input list<T> inList2;
    input list<T> inList3;
    output list<T> outList;
  end thread3;

  function zip
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    output list<tuple<T1, T2>> outTuples;
  end zip;

  function zip3
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type T3 = polymorphic<Any>;
    input list<T1> l1;
    input list<T2> l2;
    input list<T3> l3;
    output list<tuple<T1, T2, T3>> res;
  end zip3;

  function unzip
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    input list<tuple<T1, T2>> inTuples;
    output list<T1> outList1;
    output list<T2> outList2;
  end unzip;

  function unzip3
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type T3 = polymorphic<Any>;
    input list<tuple<T1, T2, T3>> tuples;
    output list<T1> l1;
    output list<T2> l2;
    output list<T3> l3;
  end unzip3;

  function unzipReverse
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    input list<tuple<T1, T2>> inTuples;
    output list<T1> outList1;
    output list<T2> outList2;
  end unzipReverse;

  function unzipFirst
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    input list<tuple<T1, T2>> inTuples;
    output list<T1> outList;
  end unzipFirst;

  function unzipSecond
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    input list<tuple<T1, T2>> inTuples;
    output list<T2> outList;
  end unzipSecond;

  function threadMap
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input MapFunc inMapFunc;
    output list<TO> outList;

    partial function MapFunc
      input T1 inElement1;
      input T2 inElement2;
      output TO outElement;
    end MapFunc;
  end threadMap;

  function threadMapReverse
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input MapFunc inMapFunc;
    output list<TO> outList;

    partial function MapFunc
      input T1 inElement1;
      input T2 inElement2;
      output TO outElement;
    end MapFunc;
  end threadMapReverse;

  function threadMap_2
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type TO1 = polymorphic<Any>;
    final type TO2 = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input MapFunc inMapFunc;
    output list<TO1> outList1;
    output list<TO2> outList2;

    partial function MapFunc
      input T1 inElement1;
      input T2 inElement2;
      output TO1 outElement1;
      output TO2 outElement2;
    end MapFunc;
  end threadMap_2;

  function threadMapList
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    input list<list<T1>> inList1;
    input list<list<T2>> inList2;
    input MapFunc inMapFunc;
    output list<list<TO>> outList;

    partial function MapFunc
      input T1 inElement1;
      input T2 inElement2;
      output TO outElement;
    end MapFunc;
  end threadMapList;

  function threadMapList_2
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type TO1 = polymorphic<Any>;
    final type TO2 = polymorphic<Any>;
    input list<list<T1>> inList1;
    input list<list<T2>> inList2;
    input MapFunc inMapFunc;
    output list<list<TO1>> outList1;
    output list<list<TO2>> outList2;

    partial function MapFunc
      input T1 inElement1;
      input T2 inElement2;
      output TO1 outElement1;
      output TO2 outElement2;
    end MapFunc;
  end threadMapList_2;

  function threadMapAllValue
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type VT = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input MapFunc inMapFunc;
    input VT inValue;

    partial function MapFunc
      input T1 inElement1;
      input T2 inElement2;
      output TO outElement;
    end MapFunc;
  end threadMapAllValue;

  function threadMap1
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input MapFunc inMapFunc;
    input ArgT1 inArg1;
    output list<TO> outList;

    partial function MapFunc
      input T1 inElement1;
      input T2 inElement2;
      input ArgT1 inArg1;
      output TO outElement;
    end MapFunc;
  end threadMap1;

  function threadMap1Reverse
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input MapFunc inMapFunc;
    input ArgT1 inArg1;
    output list<TO> outList;

    partial function MapFunc
      input T1 inElement1;
      input T2 inElement2;
      input ArgT1 inArg1;
      output TO outElement;
    end MapFunc;
  end threadMap1Reverse;

  function threadMap1_0
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input MapFunc inMapFunc;
    input ArgT1 inArg1;

    partial function MapFunc
      input T1 inElement1;
      input T2 inElement2;
      input ArgT1 inArg1;
    end MapFunc;
  end threadMap1_0;

  function threadMap2
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input MapFunc inMapFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    output list<TO> outList;

    partial function MapFunc
      input T1 inElement1;
      input T2 inElement2;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      output TO outElement;
    end MapFunc;
  end threadMap2;

  function threadMap2Reverse
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input MapFunc inMapFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    output list<TO> outList;

    partial function MapFunc
      input T1 inElement1;
      input T2 inElement2;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      output TO outElement;
    end MapFunc;
  end threadMap2Reverse;

  function threadMap2ReverseFold
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input MapFunc inMapFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    input FT inFoldArg;
    input list<TO> inAccum = {};
    output list<TO> outList;
    output FT outFoldArg;

    partial function MapFunc
      input T1 inElement1;
      input T2 inElement2;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input FT inFoldArg;
      output TO outElement;
      output FT outFoldArg;
    end MapFunc;
  end threadMap2ReverseFold;

  function threadMap3
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input MapFunc inMapFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    input ArgT3 inArg3;
    output list<TO> outList;

    partial function MapFunc
      input T1 inElement1;
      input T2 inElement2;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input ArgT3 inArg3;
      output TO outElement;
    end MapFunc;
  end threadMap3;

  function threadMap3Reverse
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input MapFunc inMapFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    input ArgT3 inArg3;
    output list<TO> outList;

    partial function MapFunc
      input T1 inElement1;
      input T2 inElement2;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input ArgT3 inArg3;
      output TO outElement;
    end MapFunc;
  end threadMap3Reverse;

  function thread3Map
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type T3 = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input list<T3> inList3;
    input MapFunc inFunc;
    output list<TO> outList;

    partial function MapFunc
      input T1 inElement1;
      input T2 inElement2;
      input T3 inElement3;
      output TO outElement;
    end MapFunc;
  end thread3Map;

  function threadMap3ReverseFold
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input MapFunc inMapFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    input ArgT3 inArg3;
    input FT inFoldArg;
    input list<TO> inAccum = {};
    output list<TO> outList;
    output FT outFoldArg;

    partial function MapFunc
      input T1 inElement1;
      input T2 inElement2;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input ArgT3 inArg3;
      input FT inFoldArg;
      output TO outElement;
      output FT outFoldArg;
    end MapFunc;
  end threadMap3ReverseFold;

  function thread3Map_2
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type T3 = polymorphic<Any>;
    final type TO1 = polymorphic<Any>;
    final type TO2 = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input list<T3> inList3;
    input MapFunc inFunc;
    output list<TO1> outList1;
    output list<TO2> outList2;

    partial function MapFunc
      input T1 inElement1;
      input T2 inElement2;
      input T3 inElement3;
      output TO1 outElement1;
      output TO2 outElement2;
    end MapFunc;
  end thread3Map_2;

  function thread3MapFold
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type T3 = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input list<T3> inList3;
    input MapFunc inFunc;
    input ArgT1 inArg;
    output list<TO> outList;
    output ArgT1 outArg;

    partial function MapFunc
      input T1 inElement1;
      input T2 inElement2;
      input T3 inElement3;
      input ArgT1 inArg;
      output TO outElement;
      output ArgT1 outArg;
    end MapFunc;
  end thread3MapFold;

  function thread3Map3
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type T3 = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input list<T3> inList3;
    input MapFunc inFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    input ArgT3 inArg3;
    output list<TO> outList;

    partial function MapFunc
      input T1 inElement1;
      input T2 inElement2;
      input T3 inElement3;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input ArgT3 inArg3;
      output TO outElement;
    end MapFunc;
  end thread3Map3;

  function threadFold1
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input FoldFunc inFoldFunc;
    input ArgT1 inArg1;
    input FT inFoldArg;
    output FT outFoldArg;

    partial function FoldFunc
      input T1 inElement1;
      input T2 inElement2;
      input ArgT1 inArg1;
      input FT inFoldArg;
      output FT outFoldArg;
    end FoldFunc;
  end threadFold1;

  function threadFold2
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input FoldFunc inFoldFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    input FT inFoldArg;
    output FT outFoldArg;

    partial function FoldFunc
      input T1 inElement1;
      input T2 inElement2;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input FT inFoldArg;
      output FT outFoldArg;
    end FoldFunc;
  end threadFold2;

  function threadFold3
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input FoldFunc inFoldFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    input ArgT3 inArg3;
    input FT inFoldArg;
    output FT outFoldArg;

    partial function FoldFunc
      input T1 inElement1;
      input T2 inElement2;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input ArgT3 inArg3;
      input FT inFoldArg;
      output FT outFoldArg;
    end FoldFunc;
  end threadFold3;

  function threadFold4
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    final type ArgT4 = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input FoldFunc inFoldFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    input ArgT3 inArg3;
    input ArgT4 inArg4;
    input FT inFoldArg;
    output FT outFoldArg;

    partial function FoldFunc
      input T1 inElement1;
      input T2 inElement2;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input ArgT3 inArg3;
      input ArgT4 inArg4;
      input FT inFoldArg;
      output FT outFoldArg;
    end FoldFunc;
  end threadFold4;

  function threadFold
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input FoldFunc inFoldFunc;
    input FT inFoldArg;
    output FT outFoldArg;

    partial function FoldFunc
      input T1 inElement1;
      input T2 inElement2;
      input FT inFoldArg;
      output FT outFoldArg;
    end FoldFunc;
  end threadFold;

  function threadMapFold
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input FuncType inFunc;
    input FT inArg;
    output list<TO> outList;
    output FT outArg;

    partial function FuncType
      input T1 inElem1;
      input T2 inElem2;
      input FT inArg;
      output TO outResult;
      output FT outArg;
    end FuncType;
  end threadMapFold;

  function position
    final type T = polymorphic<Any>;
    input T inElement;
    input list<T> inList;
    output Integer outPosition;
  end position;

  function positionOnTrue
    final type T = polymorphic<Any>;
    input list<T> inList;
    input PredFunc inPredFunc;
    output Integer outPosition;

    partial function PredFunc
      input T inElement;
      output Boolean outMatch;
    end PredFunc;
  end positionOnTrue;

  function position1OnTrue
    final type T = polymorphic<Any>;
    final type ArgT = polymorphic<Any>;
    input list<T> inList;
    input PredFunc inPredFunc;
    input ArgT inArg;
    output Integer outPosition;

    partial function PredFunc
      input T inElement;
      input ArgT inArg;
      output Boolean outMatch;
    end PredFunc;
  end position1OnTrue;

  function positionList
    final type T = polymorphic<Any>;
    input T inElement;
    input list<list<T>> inList;
    output Integer outListIndex;
    output Integer outPosition;
  end positionList;

  function getMember
    final type T = polymorphic<Any>;
    input T inElement;
    input list<T> inList;
    output T outElement;
  end getMember;

  function getMemberOnTrue
    final type T = polymorphic<Any>;
    final type VT = polymorphic<Any>;
    input VT inValue;
    input list<T> inList;
    input CompFunc inCompFunc;
    output T outElement;

    partial function CompFunc
      input VT inValue;
      input T inElement;
      output Boolean outIsEqual;
    end CompFunc;
  end getMemberOnTrue;

  function notMember
    final type T = polymorphic<Any>;
    input T inElement;
    input list<T> inList;
    output Boolean outIsNotMember;
  end notMember;

  function isMemberOnTrue
    final type T = polymorphic<Any>;
    final type VT = polymorphic<Any>;
    input VT inValue;
    input list<T> inList;
    input CompFunc inCompFunc;
    output Boolean outIsMember;

    partial function CompFunc
      input VT inValue;
      input T inElement;
      output Boolean outIsEqual;
    end CompFunc;
  end isMemberOnTrue;

  function exist
    final type T = polymorphic<Any>;
    input list<T> inList;
    input FindFunc inFindFunc;
    output Boolean outExists;

    partial function FindFunc
      input T inElement;
      output Boolean outFound;
    end FindFunc;
  end exist;

  function exist1
    final type T = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<T> inList;
    input FindFunc inFindFunc;
    input ArgT1 inExtraArg;
    output Boolean outExists;

    partial function FindFunc
      input T inElement;
      input ArgT1 inExtraArg;
      output Boolean outFound;
    end FindFunc;
  end exist1;

  function exist2
    final type T = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    input list<T> inList;
    input FindFunc inFindFunc;
    input ArgT1 inExtraArg1;
    input ArgT2 inExtraArg2;
    output Boolean outExists;

    partial function FindFunc
      input T inElement;
      input ArgT1 inExtraArg1;
      input ArgT2 inExtraArg2;
      output Boolean outFound;
    end FindFunc;
  end exist2;

  function extractOnTrue
    final type T = polymorphic<Any>;
    input list<T> inList;
    input FilterFunc inFilterFunc;
    output list<T> outExtractedList;
    output list<T> outRemainingList;

    partial function FilterFunc
      input T inElement;
      output Boolean outResult;
    end FilterFunc;
  end extractOnTrue;

  function extract1OnTrue
    final type T = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<T> inList;
    input FilterFunc inFilterFunc;
    input ArgT1 inArg;
    output list<T> outExtractedList;
    output list<T> outRemainingList;

    partial function FilterFunc
      input T inElement;
      input ArgT1 inArg;
      output Boolean outResult;
    end FilterFunc;
  end extract1OnTrue;

  function filter
    final type T = polymorphic<Any>;
    input list<T> inList;
    input FilterFunc inFilterFunc;
    output list<T> outList;

    partial function FilterFunc
      input T inElement;
    end FilterFunc;
  end filter;

  function filterMap
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    input list<TI> inList;
    input FilterMapFunc inFilterMapFunc;
    output list<TO> outList;

    partial function FilterMapFunc
      input TI inElement;
      output TO outElement;
    end FilterMapFunc;
  end filterMap;

  function filterMap1
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<TI> inList;
    input FilterMapFunc inFilterMapFunc;
    input ArgT1 inExtraArg;
    output list<TO> outList;

    partial function FilterMapFunc
      input TI inElement;
      input ArgT1 inExtraArg;
      output TO outElement;
    end FilterMapFunc;
  end filterMap1;

  function filterOnTrue
    final type T = polymorphic<Any>;
    input list<T> inList;
    input FilterFunc inFilterFunc;
    output list<T> outList;

    partial function FilterFunc
      input T inElement;
      output Boolean outResult;
    end FilterFunc;
  end filterOnTrue;

  function filterOnFalse
    final type T = polymorphic<Any>;
    input list<T> inList;
    input FilterFunc inFilterFunc;
    output list<T> outList;

    partial function FilterFunc
      input T inElement;
      output Boolean outResult;
    end FilterFunc;
  end filterOnFalse;

  function filter1OnTrueSync
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<T1> inList;
    input FilterFunc inFilterFunc;
    input ArgT1 inArg1;
    input list<T2> inSyncList;
    output list<T1> outList_a;
    output list<T2> outList_b;

    partial function FilterFunc
      input T1 inElement;
      input ArgT1 inArg1;
      output Boolean outResult;
    end FilterFunc;
  end filter1OnTrueSync;

  function filterOnTrueSync
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    input list<T1> inList;
    input FilterFunc inFilterFunc;
    input list<T2> inSyncList;
    output list<T1> outList_a;
    output list<T2> outList_b;

    partial function FilterFunc
      input T1 inElement;
      output Boolean outResult;
    end FilterFunc;
  end filterOnTrueSync;

  function filterOnTrueReverse
    final type T = polymorphic<Any>;
    input list<T> inList;
    input FilterFunc inFilterFunc;
    output list<T> outList;

    partial function FilterFunc
      input T inElement;
      output Boolean outResult;
    end FilterFunc;
  end filterOnTrueReverse;

  function filter1
    final type T = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<T> inList;
    input FilterFunc inFilterFunc;
    input ArgT1 inArg1;
    output list<T> outList;

    partial function FilterFunc
      input T inElement;
      input ArgT1 inArg1;
    end FilterFunc;
  end filter1;

  function filter1OnTrue
    final type T = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<T> inList;
    input FilterFunc inFilterFunc;
    input ArgT1 inArg1;
    output list<T> outList;

    partial function FilterFunc
      input T inElement;
      input ArgT1 inArg1;
      output Boolean outResult;
    end FilterFunc;
  end filter1OnTrue;

  function filter1OnTrueAndUpdate
    final type T = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<T> inList;
    input FilterFunc inFilterFunc;
    input UpdateFunc inUpdateFunc;
    input ArgT1 inArg1;
    output list<T> outList;

    partial function FilterFunc
      input T inElement;
      input ArgT1 inArg1;
      output Boolean outResult;
    end FilterFunc;

    partial function UpdateFunc
      input output T inElement;
      input ArgT1 inArg1;
    end UpdateFunc;
  end filter1OnTrueAndUpdate;

  function filter1rOnTrue
    final type T = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<T> inList;
    input FilterFunc inFilterFunc;
    input ArgT1 inArg1;
    output list<T> outList;

    partial function FilterFunc
      input ArgT1 inArg1;
      input T inElement;
      output Boolean outResult;
    end FilterFunc;
  end filter1rOnTrue;

  function filter2OnTrue
    final type T = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    input list<T> inList;
    input FilterFunc inFilterFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    output list<T> outList;

    partial function FilterFunc
      input T inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      output Boolean outResult;
    end FilterFunc;
  end filter2OnTrue;

  function removeOnTrue
    final type T = polymorphic<Any>;
    final type VT = polymorphic<Any>;
    input VT inValue;
    input CompFunc inCompFunc;
    input list<T> inList;
    output list<T> outList;

    partial function CompFunc
      input VT inValue;
      input T inElement;
      output Boolean outIsEqual;
    end CompFunc;
  end removeOnTrue;

  function filterCons
    final type T = polymorphic<Any>;
    input list<T> inList;
    input FilterFunc fn;
    input output list<T> accumList;

    partial function FilterFunc
      input T e;
      output Boolean res;
    end FilterFunc;
  end filterCons;

  function select = filterOnTrue;
  function select1 = filter1OnTrue;
  function select1r = filter1rOnTrue;
  function select2 = filter2OnTrue;

  function find
    final type T = polymorphic<Any>;
    input list<T> inList;
    input SelectFunc inFunc;
    output T outElement;

    partial function SelectFunc
      input T inElement;
      output Boolean outSelect;
    end SelectFunc;
  end find;

  function findOption
    final type T = polymorphic<Any>;
    input list<T> lst;
    input Predicate fn;
    output Option<T> result;

    partial function Predicate
      input T e;
      output Boolean matching;
    end Predicate;
  end findOption;

  function find1
    final type T = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<T> inList;
    input SelectFunc inFunc;
    input ArgT1 arg1;
    output T outElement;

    partial function SelectFunc
      input T inElement;
      input ArgT1 arg;
      output Boolean outSelect;
    end SelectFunc;
  end find1;

  function findAndRemove
    final type T = polymorphic<Any>;
    input list<T> inList;
    input SelectFunc inFunc;
    output T outElement;
    output list<T> rest;

    partial function SelectFunc
      input T inElement;
      output Boolean outSelect;
    end SelectFunc;
  end findAndRemove;

  function findAndRemove1
    final type T = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<T> inList;
    input SelectFunc inFunc;
    input ArgT1 arg1;
    output T outElement;
    output list<T> rest;

    partial function SelectFunc
      input T inElement;
      input ArgT1 arg;
      output Boolean outSelect;
    end SelectFunc;
  end findAndRemove1;

  function findBoolList
    final type T = polymorphic<Any>;
    input list<Boolean> inBooleans;
    input list<T> inList;
    input T inFalseValue;
    output T outElement;
  end findBoolList;

  function deleteMember
    final type T = polymorphic<Any>;
    input list<T> inList;
    input T inElement;
    output list<T> outList;
  end deleteMember;

  function deleteMemberF
    final type T = polymorphic<Any>;
    input list<T> inList;
    input T inElement;
    output list<T> outList;
  end deleteMemberF;

  function deleteMemberOnTrue
    final type T = polymorphic<Any>;
    final type VT = polymorphic<Any>;
    input VT inValue;
    input list<T> inList;
    input CompareFunc inCompareFunc;
    output list<T> outList;
    output Option<T> outDeletedElement;

    partial function CompareFunc
      input VT inValue;
      input T inElement;
      output Boolean outIsEqual;
    end CompareFunc;
  end deleteMemberOnTrue;

  function deletePositions
    final type T = polymorphic<Any>;
    input list<T> inList;
    input list<Integer> inPositions;
    output list<T> outList;
  end deletePositions;

  function deletePositionsSorted
    final type T = polymorphic<Any>;
    input list<T> inList;
    input list<Integer> inPositions;
    output list<T> outList;
  end deletePositionsSorted;

  function keepPositions
    final type T = polymorphic<Any>;
    input list<T> inList;
    input list<Integer> inPositions;
    output list<T> outList;
  end keepPositions;

  function keepPositionsSorted
    final type T = polymorphic<Any>;
    input list<T> inList;
    input list<Integer> inPositions;
    output list<T> outList;
  end keepPositionsSorted;

  function removeMatchesFirst
    input list<Integer> inList;
    input Integer inN;
    output list<Integer> outList;
  end removeMatchesFirst;

  function replaceAt
    final type T = polymorphic<Any>;
    input T inElement;
    input Integer inPosition;
    input list<T> inList;
    output list<T> outList;
  end replaceAt;

  function replaceOnTrue
    final type T = polymorphic<Any>;
    input T inReplacement;
    input list<T> inList;
    input FuncType inFunc;
    output list<T> outList;
    output Boolean outReplaced;

    partial function FuncType
      input T inElement;
      output Boolean outReplace;
    end FuncType;
  end replaceOnTrue;

  function replaceAtIndexFirst
    final type T = polymorphic<Any>;
    input Integer inPosition;
    input T inElement;
    input list<T> inList;
    output list<T> outList;
  end replaceAtIndexFirst;

  function replaceAtWithList
    final type T = polymorphic<Any>;
    input list<T> inReplacementList;
    input Integer inPosition;
    input list<T> inList;
    output list<T> outList;
  end replaceAtWithList;

  function replaceAtWithFill
    final type T = polymorphic<Any>;
    input T inElement;
    input Integer inPosition;
    input list<T> inList;
    input T inFillValue;
    output list<T> outList;
  end replaceAtWithFill;

  function toString
    final type T = polymorphic<Any>;
    input list<T> inList;
    input FuncType inPrintFunc;
    input String inListNameStr = "";
    input String inBeginStr = "{";
    input String inDelimitStr = ", ";
    input String inEndStr = "}";
    input Boolean inPrintEmpty = true;
    input Integer maxLength = 0;
    output String outString;

    partial function FuncType
      input T inElement;
      output String outString;
    end FuncType;
  end toString;

  function hasOneElement
    final type T = polymorphic<Any>;
    input list<T> inList;
    output Boolean b;
  end hasOneElement;

  function hasSeveralElements
    final type T = polymorphic<Any>;
    input list<T> inList;
    output Boolean b;
  end hasSeveralElements;

  function lengthListElements
    final type T = polymorphic<Any>;
    input list<list<T>> inListList;
    output Integer outLength;
  end lengthListElements;

  function generate
    final type T = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input ArgT1 inArg;
    input GenerateFunc inFunc;
    output list<T> outList;

    partial function GenerateFunc
      input ArgT1 inArg;
      output ArgT1 outArg;
      output T outElement;
      output Boolean outContinue;
    end GenerateFunc;
  end generate;

  function generateReverse
    final type T = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input ArgT1 inArg;
    input GenerateFunc inFunc;
    output list<T> outList;

    partial function GenerateFunc
      input ArgT1 inArg;
      output ArgT1 outArg;
      output T outElement;
      output Boolean outContinue;
    end GenerateFunc;
  end generateReverse;

  function mapFoldSplit
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inMapFunc;
    input FoldFunc inFoldFunc;
    input FT inStartValue;
    output list<TO> outList;
    output FT outResult;

    partial function MapFunc
      input TI inElem;
      output TO outElem;
      output FT outResult;
    end MapFunc;

    partial function FoldFunc
      input FT inNewValue;
      input FT inOldValue;
      output FT outFoldedValue;
    end FoldFunc;
  end mapFoldSplit;

  function map1FoldSplit
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inMapFunc;
    input FoldFunc inFoldFunc;
    input ArgT1 inConstArg;
    input FT inStartValue;
    output list<TO> outList;
    output FT outResult;

    partial function MapFunc
      input TI inElem;
      input ArgT1 inConstArg;
      output TO outElem;
      output FT outResult;
    end MapFunc;

    partial function FoldFunc
      input FT inNewValue;
      input FT inOldValue;
      output FT outFoldedValue;
    end FoldFunc;
  end map1FoldSplit;

  function accumulateMap = accumulateMapAccum;

  function accumulateMapReverse
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inMapFunc;
    output list<TO> outList;

    partial function MapFunc
      input TI inElement;
      input list<TO> inAccumList;
      output list<TO> outList;
    end MapFunc;
  end accumulateMapReverse;

  function accumulateMapAccum
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inMapFunc;
    output list<TO> outList;

    partial function MapFunc
      input TI inElement;
      input list<TO> inAccumList;
      output list<TO> outList;
    end MapFunc;
  end accumulateMapAccum;

  function accumulateMapAccum1
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<TI> inList;
    input MapFunc inMapFunc;
    input ArgT1 inArg;
    output list<TO> outList;

    partial function MapFunc
      input TI inElement;
      input ArgT1 inArg;
      input list<TO> inAccumList;
      output list<TO> outList;
    end MapFunc;
  end accumulateMapAccum1;

  function accumulateMapFold = accumulateMapFoldAccum;

  function accumulateMapFoldAccum
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type FT = polymorphic<Any>;
    input list<TI> inList;
    input FuncType inFunc;
    input FT inFoldArg;
    output list<TO> outList;
    output FT outFoldArg;

    partial function FuncType
      input TI inElement;
      input FT inFoldArg;
      input list<TO> inAccumList;
      output list<TO> outList;
      output FT outFoldArg;
    end FuncType;
  end accumulateMapFoldAccum;

  function findMap
    final type T = polymorphic<Any>;
    input list<T> inList;
    input FuncType inFunc;
    output list<T> outList;
    output Boolean outFound;

    partial function FuncType
      input T inElement;
      output T outElement;
      output Boolean outFound;
    end FuncType;
  end findMap;

  function findMap1
    final type T = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<T> inList;
    input FuncType inFunc;
    input ArgT1 inArg1;
    output list<T> outList;
    output Boolean outFound;

    partial function FuncType
      input T inElement;
      input ArgT1 inArg1;
      output T outElement;
      output Boolean outFound;
    end FuncType;
  end findMap1;

  function findMap2
    final type T = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    input list<T> inList;
    input FuncType inFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    output list<T> outList;
    output Boolean outFound;

    partial function FuncType
      input T inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      output T outElement;
      output Boolean outFound;
    end FuncType;
  end findMap2;

  function findMap3
    final type T = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    final type ArgT2 = polymorphic<Any>;
    final type ArgT3 = polymorphic<Any>;
    input list<T> inList;
    input FuncType inFunc;
    input ArgT1 inArg1;
    input ArgT2 inArg2;
    input ArgT3 inArg3;
    output list<T> outList;
    output Boolean outFound;

    partial function FuncType
      input T inElement;
      input ArgT1 inArg1;
      input ArgT2 inArg2;
      input ArgT3 inArg3;
      output T outElement;
      output Boolean outFound;
    end FuncType;
  end findMap3;

  function findSome
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    input list<T1> inList;
    input FuncType inFunc;
    output T2 outVal;

    partial function FuncType
      input T1 inElement;
      output Option<T2> outValOpt;
    end FuncType;
  end findSome;

  function findSome1
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    final type Arg = polymorphic<Any>;
    input list<T1> inList;
    input FuncType inFunc;
    input Arg inArg;
    output T2 outVal;

    partial function FuncType
      input T1 inElement;
      input Arg inArg;
      output Option<T2> outValOpt;
    end FuncType;
  end findSome1;

  function splitEqualPrefix
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    input list<T1> inFullList;
    input list<T2> inPrefixList;
    input EqFunc inEqFunc;
    input list<T1> inAccum = {};
    output list<T1> outPrefix;
    output list<T1> outRest;

    partial function EqFunc
      input T1 inElem1;
      input T2 inElem2;
      output Boolean outIsEqual;
    end EqFunc;
  end splitEqualPrefix;

  function combination
    final type TI = polymorphic<Any>;
    input list<list<TI>> inElements;
    output list<list<TI>> outElements;
  end combination;

  function combinationMap
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    input list<list<TI>> inElements;
    input MapFunc inMapFunc;
    output list<TO> outElements;

    partial function MapFunc
      input list<TI> inElements;
      output TO outElement;
    end MapFunc;
  end combinationMap;

  function combinationMap1
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<list<TI>> inElements;
    input MapFunc inMapFunc;
    input ArgT1 inArg;
    output list<TO> outElements;

    partial function MapFunc
      input list<TI> inElements;
      input ArgT1 inArg;
      output TO outElement;
    end MapFunc;
  end combinationMap1;

  function allReferenceEq
    final type T = polymorphic<Any>;
    input list<T> inList1;
    input list<T> inList2;
    output Boolean outEqual;
  end allReferenceEq;

  function removeEqualPrefix
    final type T1 = polymorphic<Any>;
    final type T2 = polymorphic<Any>;
    input list<T1> inList1;
    input list<T2> inList2;
    input CompFunc inCompFunc;
    output list<T1> outList1;
    output list<T2> outList2;

    partial function CompFunc
      input T1 inElement1;
      input T2 inElement2;
      output Boolean outIsEqual;
    end CompFunc;
  end removeEqualPrefix;

  function listIsLonger
    final type T = polymorphic<Any>;
    input list<T> inList1;
    input list<T> inList2;
    output Boolean isLonger;
  end listIsLonger;

  function toListWithPositions
    final type T = polymorphic<Any>;
    input list<T> inList;
    output list<tuple<T, Integer>> outList;
  end toListWithPositions;

  function mkOption
    final type T = polymorphic<Any>;
    input list<T> inList;
    output Option<list<T>> outOption;
  end mkOption;

  function all
    final type T = polymorphic<Any>;
    input list<T> inList;
    input PredFunc inFunc;
    output Boolean outResult;

    partial function PredFunc
      input T inElement;
      output Boolean outMatch;
    end PredFunc;
  end all;

  function none
    final type T = polymorphic<Any>;
    input list<T> inList;
    input PredFunc inFunc;
    output Boolean outResult;

    partial function PredFunc
      input T inElement;
      output Boolean outMatch;
    end PredFunc;
  end none;

  function any
    final type T = polymorphic<Any>;
    input list<T> inList;
    input PredFunc inFunc;
    output Boolean outResult;

    partial function PredFunc
      input T inElement;
      output Boolean outMatch;
    end PredFunc;
  end any;

  function separateOnTrue
    final type T = polymorphic<Any>;
    input list<T> inList;
    input FilterFunc inFilterFunc;
    output list<T> outListTrue;
    output list<T> outListFalse;

    partial function FilterFunc
      input T inElement;
      output Boolean outResult;
    end FilterFunc;
  end separateOnTrue;

  function separate1OnTrue
    final type T = polymorphic<Any>;
    final type ArgT1 = polymorphic<Any>;
    input list<T> inList;
    input FilterFunc inFilterFunc;
    input ArgT1 inArg1;
    output list<T> outListTrue;
    output list<T> outListFalse;

    partial function FilterFunc
      input T inElement;
      input ArgT1 inArg1;
      output Boolean outResult;
    end FilterFunc;
  end separate1OnTrue;

  function mapFirst
    final type TI = polymorphic<Any>;
    final type TO = polymorphic<Any>;
    input list<TI> inList;
    input FindMapFunc inFunc;
    output TO outElement;

    partial function FindMapFunc
      input TI inElement;
      output TO outElement;
      output Boolean outFound;
    end FindMapFunc;
  end mapFirst;

  function isSorted
    final type T = polymorphic<Any>;
    input list<T> inList;
    input Comp inFunc;
    output Boolean b;

    partial function Comp
      input T a;
      input T b;
      output Boolean c;
    end Comp;
  end isSorted;

  function mapIndices
    final type T = polymorphic<Any>;
    input list<T> inList;
    input list<Integer> indices;
    input MapFunc func;
    output list<T> outList;

    partial function MapFunc
      input output T e;
    end MapFunc;
  end mapIndices;

  function allCombinations
    final type T = polymorphic<Any>;
    input list<list<T>> lst;
    input Option<Integer> maxTotalSize;
    input SourceInfo info;
    output list<list<T>> out;
  end allCombinations;

  function contains
    final type T = polymorphic<Any>;
    input list<T> lst;
    input T elem;
    input equalityFunc eqFunc;

    partial function equalityFunc
      input T t1;
      input T t2;
      output Boolean res;
    end equalityFunc;

    output Boolean res;
  end contains;

  function minElement
    final type T = polymorphic<Any>;
    input list<T> inList;
    input LessFn lessFn;
    output T res;

    partial function LessFn
      input T e1;
      input T e2;
      output Boolean res;
    end LessFn;
  end minElement;

  function maxElement
    final type T = polymorphic<Any>;
    input list<T> inList;
    input LessFn lessFn;
    output T res;

    partial function LessFn
      input T e1;
      input T e2;
      output Boolean res;
    end LessFn;
  end maxElement;

  function trim
    final type T = polymorphic<Any>;
    input output list<T> l;
    input PredFn fn;

    partial function PredFn
      input T e;
      output Boolean res;
    end PredFn;
  end trim;
  annotation(__OpenModelica_Interface = "util");
end List;
