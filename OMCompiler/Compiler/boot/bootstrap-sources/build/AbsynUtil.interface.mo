encapsulated package AbsynUtil
protected
  protected import Absyn;
  protected import Dump;
  protected import Error;
  protected import List;
  protected import System;
  protected import Util;
  protected import MetaModelica.Dangerous.listReverseInPlace;
public
  constant Absyn.ClassDef dummyParts = Absyn.PARTS({}, {}, {}, {}, NONE());
  constant Absyn.Info dummyInfo = SOURCEINFO("", false, 0, 0, 0, 0, 0.0);
  constant Absyn.Program dummyProgram = Absyn.PROGRAM({}, Absyn.TOP());

  function traverseExp
    final type Arg = polymorphic<Any>;
    input Absyn.Exp inExp;
    input FuncType inFunc;
    input Arg inArg;
    output Absyn.Exp outExp;
    output Arg outArg;

    partial function FuncType
      input output Absyn.Exp exp;
      input output Arg arg;
    end FuncType;
  end traverseExp;

  function traverseExpTopDown
    final type Arg = polymorphic<Any>;
    input Absyn.Exp inExp;
    input FuncType inFunc;
    input Arg inArg;
    output Absyn.Exp outExp;
    output Arg outArg;

    partial function FuncType
      input output Absyn.Exp exp;
      input output Arg arg;
    end FuncType;
  end traverseExpTopDown;

  function traverseExpList
    final type Arg = polymorphic<Any>;
    input list<Absyn.Exp> inExpList;
    input FuncType inFunc;
    input Arg inArg;
    output list<Absyn.Exp> outExpList;
    output Arg outArg;

    partial function FuncType
      input output Absyn.Exp exp;
      input output Arg arg;
    end FuncType;
  end traverseExpList;

  function traverseExpListBidir
    final type Arg = polymorphic<Any>;
    input list<Absyn.Exp> inExpl;
    input FuncType enterFunc;
    input FuncType exitFunc;
    input Arg inArg;
    output list<Absyn.Exp> outExpl;
    output Arg outArg;

    partial function FuncType
      input output Absyn.Exp exp;
      input output Arg arg;
    end FuncType;
  end traverseExpListBidir;

  function traverseExpBidir
    final type Arg = polymorphic<Any>;
    input Absyn.Exp inExp;
    input FuncType enterFunc;
    input FuncType exitFunc;
    input Arg inArg;
    output Absyn.Exp e;
    output Arg arg;

    partial function FuncType
      input output Absyn.Exp exp;
      input output Arg arg;
    end FuncType;
  end traverseExpBidir;

  function traverseExpOptBidir
    final type Arg = polymorphic<Any>;
    input Option<Absyn.Exp> inExp;
    input FuncType enterFunc;
    input FuncType exitFunc;
    input Arg inArg;
    output Option<Absyn.Exp> outExp;
    output Arg arg;

    partial function FuncType
      input output Absyn.Exp exp;
      input output Arg arg;
    end FuncType;
  end traverseExpOptBidir;

  function traverseExpBidirCref
    final type Arg = polymorphic<Any>;
    input output Absyn.ComponentRef cref;
    input FuncType enterFunc;
    input FuncType exitFunc;
    input output Arg arg;

    partial function FuncType
      input output Absyn.Exp exp;
      input output Arg arg;
    end FuncType;
  end traverseExpBidirCref;

  function traverseExpBidirSubs
    final type Arg = polymorphic<Any>;
    input output list<Absyn.Subscript> subscripts;
    input FuncType enterFunc;
    input FuncType exitFunc;
    input output Arg arg;

    partial function FuncType
      input output Absyn.Exp exp;
      input output Arg arg;
    end FuncType;
  end traverseExpBidirSubs;

  function traverseExpBidirSub
    final type Arg = polymorphic<Any>;
    input output Absyn.Subscript subscript;
    input FuncType enterFunc;
    input FuncType exitFunc;
    input output Arg arg;

    partial function FuncType
      input output Absyn.Exp exp;
      input output Arg arg;
    end FuncType;
  end traverseExpBidirSub;

  function traverseExpBidirElseIf
    final type Arg = polymorphic<Any>;
    input tuple<Absyn.Exp, Absyn.Exp> inElseIf;
    input FuncType enterFunc;
    input FuncType exitFunc;
    input Arg inArg;
    output tuple<Absyn.Exp, Absyn.Exp> outElseIf;
    output Arg arg;

    partial function FuncType
      input output Absyn.Exp exp;
      input output Arg arg;
    end FuncType;
  end traverseExpBidirElseIf;

  function traverseExpBidirFunctionArgs
    final type Arg = polymorphic<Any>;
    input output Absyn.FunctionArgs args;
    input FuncType enterFunc;
    input FuncType exitFunc;
    input output Arg arg;

    partial function FuncType
      input output Absyn.Exp exp;
      input output Arg arg;
    end FuncType;
  end traverseExpBidirFunctionArgs;

  function traverseExpBidirNamedArg
    final type Arg = polymorphic<Any>;
    input Absyn.NamedArg inArg;
    input FuncType enterFunc;
    input FuncType exitFunc;
    input Arg inExtra;
    output Absyn.NamedArg outArg;
    output Arg outExtra;

    partial function FuncType
      input output Absyn.Exp exp;
      input output Arg arg;
    end FuncType;
  end traverseExpBidirNamedArg;

  function traverseExpBidirIterator
    final type Arg = polymorphic<Any>;
    input Absyn.ForIterator inIterator;
    input FuncType enterFunc;
    input FuncType exitFunc;
    input Arg inArg;
    output Absyn.ForIterator outIterator;
    output Arg outArg;

    partial function FuncType
      input output Absyn.Exp exp;
      input output Arg arg;
    end FuncType;
  end traverseExpBidirIterator;

  function traverseMatchCase
    final type Arg = polymorphic<Any>;
    input output Absyn.Case matchCase;
    input FuncType enterFunc;
    input FuncType exitFunc;
    input output Arg arg;

    partial function FuncType
      input output Absyn.Exp exp;
      input output Arg arg;
    end FuncType;
  end traverseMatchCase;

  function traverseEquationBidir
    final type Arg = polymorphic<Any>;
    input output Absyn.Equation eq;
    input FuncType enterFunc;
    input FuncType exitFunc;
    input output Arg arg;

    partial function FuncType
      input output Absyn.Exp exp;
      input output Arg arg;
    end FuncType;
  end traverseEquationBidir;

  function makeIdentPathFromString
    input String s;
    output Absyn.Path p;
    annotation(__OpenModelica_EarlyInline = true);
  end makeIdentPathFromString;

  function makeQualifiedPathFromStrings
    input String s1;
    input String s2;
    output Absyn.Path p;
    annotation(__OpenModelica_EarlyInline = true);
  end makeQualifiedPathFromStrings;

  function className
    input Absyn.Class cl;
    output Absyn.Path name;
  end className;

  function isClassNamed
    input String inName;
    input Absyn.Class inClass;
    output Boolean outIsNamed;
  end isClassNamed;

  function isComponentItemNamed
    input String name;
    input Absyn.ComponentItem component;
    output Boolean res;
  end isComponentItemNamed;

  function isComponentNamed
    input String name;
    input Absyn.Component component;
    output Boolean res;
  end isComponentNamed;

  function elementSpecName
    input Absyn.ElementSpec inElementSpec;
    output Absyn.Ident outIdent;
  end elementSpecName;

  function isClassdef
    input Absyn.Element inElement;
    output Boolean b;
  end isClassdef;

  function printImportString
    input Absyn.Import imp;
    output String ostring;
  end printImportString;

  function expString
    input Absyn.Exp exp;
    output String str;
  end expString;

  function expCref
    input Absyn.Exp exp;
    output Absyn.ComponentRef cr;
  end expCref;

  function crefExp
    input Absyn.ComponentRef cr;
    output Absyn.Exp exp;
    annotation(__OpenModelica_EarlyInline = true);
  end crefExp;

  function pathEqual
    input Absyn.Path path1;
    input Absyn.Path path2;
    output Boolean equal;
  end pathEqual;

  function pathEqualCaseInsensitive
    input Absyn.Path path1;
    input Absyn.Path path2;
    output Boolean equal;
  end pathEqualCaseInsensitive;

  function typeSpecEqual
    input Absyn.TypeSpec a;
    input Absyn.TypeSpec b;
    output Boolean ob;
  end typeSpecEqual;

  function optArrayDimEqual
    input Option<Absyn.ArrayDim> oad1;
    input Option<Absyn.ArrayDim> oad2;
    output Boolean b;
  end optArrayDimEqual;

  function typeSpecPathString
    input Absyn.TypeSpec tp;
    output String s;
  end typeSpecPathString;

  function typeSpecPath
    input Absyn.TypeSpec tp;
    output Absyn.Path op;
  end typeSpecPath;

  function typeSpecDimensions
    input Absyn.TypeSpec inTypeSpec;
    output Absyn.ArrayDim outDimensions;
  end typeSpecDimensions;

  function pathString
    input Absyn.Path path;
    input String delimiter = ".";
    input Boolean usefq = true;
    input Boolean reverse = false;
    output String s;
  end pathString;

  function pathStringNoQual = pathString(usefq = false);

  function pathStringDefault
    input Absyn.Path path;
    output String s;
  end pathStringDefault;

  function classNameCompare
    input Absyn.Class c1;
    input Absyn.Class c2;
    output Integer o;
  end classNameCompare;

  function classNameGreater
    input Absyn.Class c1;
    input Absyn.Class c2;
    output Boolean b;
  end classNameGreater;

  function pathCompare
    input Absyn.Path ip1;
    input Absyn.Path ip2;
    output Integer o;
  end pathCompare;

  function pathCompareNoQual
    input Absyn.Path ip1;
    input Absyn.Path ip2;
    output Integer o;
  end pathCompareNoQual;

  function pathHash
    input Absyn.Path path;
    output Integer hash;
  end pathHash;

  function pathHashWork
    input Absyn.Path path;
    input Integer acc;
    output Integer hash;
  end pathHashWork;

  function optPathString
    input Option<Absyn.Path> inPathOption;
    output String outString;
  end optPathString;

  function pathStringUnquoteReplaceDot
    input Absyn.Path inPath;
    input String repStr;
    output String outString;
  end pathStringUnquoteReplaceDot;

  function stringPath
    input String str;
    output Absyn.Path qualifiedPath;
  end stringPath;

  function stringListPath
    input list<String> paths;
    output Absyn.Path qualifiedPath;
  end stringListPath;

  function stringListPathReversed
    input list<String> inStrings;
    output Absyn.Path outPath;
  end stringListPathReversed;

  function pathLastIdent
    input Absyn.Path path;
    output String outIdent;
  end pathLastIdent;

  function pathSetLastIdent
    input Absyn.Path path;
    input String ident;
    output Absyn.Path outPath;
  end pathSetLastIdent;

  function pathLast
    input output Absyn.Path path;
  end pathLast;

  function pathFirstIdent
    input Absyn.Path path;
    output Absyn.Ident outIdent;
  end pathFirstIdent;

  function pathSetFirstIdent
    input Absyn.Path path;
    input String ident;
    output Absyn.Path outPath;
  end pathSetFirstIdent;

  function pathFirstPath
    input Absyn.Path path;
    output Absyn.Path outPath;
  end pathFirstPath;

  function pathSecondIdent
    input Absyn.Path inPath;
    output Absyn.Ident outIdent;
  end pathSecondIdent;

  function pathNthIdent
    input Absyn.Path path;
    input Integer n;
    output Absyn.Ident ident;
  end pathNthIdent;

  function pathSetNthIdent
    input Absyn.Path path;
    input Absyn.Ident ident;
    input Integer n;
    output Absyn.Path outPath;
  end pathSetNthIdent;

  function pathRest
    input Absyn.Path inPath;
    output Absyn.Path outPath;
  end pathRest;

  function pathStripSamePrefix
    input Absyn.Path inPath1;
    input Absyn.Path inPath2;
    output Absyn.Path outPath;
  end pathStripSamePrefix;

  function pathPrefix
    input Absyn.Path path;
    output Absyn.Path prefix;
  end pathPrefix;

  function prefixPath
    input Absyn.Ident prefix;
    input Absyn.Path path;
    output Absyn.Path outPath;
  end prefixPath;

  function suffixPath
    input Absyn.Path inPath;
    input Absyn.Ident inSuffix;
    output Absyn.Path outPath;
  end suffixPath;

  function pathSuffixOf
    input Absyn.Path suffix_path;
    input Absyn.Path path;
    output Boolean res;
  end pathSuffixOf;

  function pathSuffixOfr
    input Absyn.Path path;
    input Absyn.Path suffix_path;
    output Boolean res;
  end pathSuffixOfr;

  function pathToStringList
    input Absyn.Path path;
    output list<String> outPaths;
  end pathToStringList;

  function addSubscriptsLast
    input Absyn.ComponentRef icr;
    input list<Absyn.Subscript> i;
    output Absyn.ComponentRef ocr;
  end addSubscriptsLast;

  function crefReplaceFirst
    input Absyn.ComponentRef cref;
    input Absyn.ComponentRef replacement;
    output Absyn.ComponentRef outCref;
  end crefReplaceFirst;

  function crefReplaceFirstIdent
    input Absyn.ComponentRef icref;
    input Absyn.Path replPath;
    output Absyn.ComponentRef outCref;
  end crefReplaceFirstIdent;

  function pathPrefixOf
    input Absyn.Path prefixPath;
    input Absyn.Path path;
    output Boolean isPrefix;
  end pathPrefixOf;

  function removePrefix
    input Absyn.Path prefix_path;
    input Absyn.Path path;
    output Absyn.Path newPath;
  end removePrefix;

  function removePrefixOpt
    input Absyn.Path prefixPath;
    input Absyn.Path path;
    output Option<Absyn.Path> outPath;
  end removePrefixOpt;

  function removePartialPrefix
    input Absyn.Path inPrefix;
    input Absyn.Path inPath;
    output Absyn.Path outPath;
  end removePartialPrefix;

  function getCrefsFromSubs
    input list<Absyn.Subscript> isubs;
    input Boolean includeSubs;
    input Boolean includeFunctions;
    output list<Absyn.ComponentRef> crefs;
  end getCrefsFromSubs;

  function getCrefFromExp
    input Absyn.Exp inExp;
    input Boolean includeSubs;
    input Boolean includeFunctions;
    output list<Absyn.ComponentRef> outComponentRefLst;
  end getCrefFromExp;

  function getCrefFromFarg
    input Absyn.FunctionArgs inFunctionArgs;
    input Boolean includeSubs;
    input Boolean includeFunctions;
    output list<Absyn.ComponentRef> outComponentRefLst;
  end getCrefFromFarg;

  function iteratorName
    input Absyn.ForIterator iterator;
    output String name;
  end iteratorName;

  function iteratorRange
    input Absyn.ForIterator iterator;
    output Option<Absyn.Exp> range;
  end iteratorRange;

  function iteratorGuard
    input Absyn.ForIterator iterator;
    output Option<Absyn.Exp> guardExp;
  end iteratorGuard;

  function getNamedFuncArgNamesAndValues
    input list<Absyn.NamedArg> namedArgs;
    output list<String> names;
    output list<Absyn.Exp> values;
  end getNamedFuncArgNamesAndValues;

  function joinPaths
    input Absyn.Path inPath1;
    input Absyn.Path inPath2;
    output Absyn.Path outPath;
  end joinPaths;

  function joinPathsOpt
    input Option<Absyn.Path> inPath1;
    input Absyn.Path inPath2;
    output Absyn.Path outPath;
  end joinPathsOpt;

  function joinPathsOptSuffix
    input Absyn.Path inPath1;
    input Option<Absyn.Path> inPath2;
    output Absyn.Path outPath;
  end joinPathsOptSuffix;

  function stripLast
    input Absyn.Path inPath;
    output Absyn.Path outPath;
  end stripLast;

  function crefStripLast
    input Absyn.ComponentRef inCref;
    output Absyn.ComponentRef outCref;
  end crefStripLast;

  function splitQualAndIdentPath
    input Absyn.Path inPath;
    output Absyn.Path outPath1;
    output Absyn.Path outPath2;
  end splitQualAndIdentPath;

  function crefToPath
    input Absyn.ComponentRef inComponentRef;
    output Absyn.Path outPath;
  end crefToPath;

  function elementSpecToPath
    input Absyn.ElementSpec inElementSpec;
    output Absyn.Path outPath;
  end elementSpecToPath;

  function crefToPathIgnoreSubs
    input Absyn.ComponentRef inComponentRef;
    output Absyn.Path outPath;
  end crefToPathIgnoreSubs;

  function pathToCref
    input Absyn.Path inPath;
    output Absyn.ComponentRef outComponentRef;
  end pathToCref;

  function pathToCrefWithSubs
    input Absyn.Path inPath;
    input list<Absyn.Subscript> inSubs;
    output Absyn.ComponentRef outComponentRef;
  end pathToCrefWithSubs;

  function crefLastIdent
    input Absyn.ComponentRef cref;
    output Absyn.Ident outIdent;
  end crefLastIdent;

  function crefFirstIdentNoSubs
    input Absyn.ComponentRef cref;
    output Absyn.Ident outIdent;
  end crefFirstIdentNoSubs;

  function crefIsIdent
    input Absyn.ComponentRef inComponentRef;
    output Boolean outIsIdent;
  end crefIsIdent;

  function crefIsQual
    input Absyn.ComponentRef inComponentRef;
    output Boolean outIsQual;
  end crefIsQual;

  function crefFirstSubs
    input Absyn.ComponentRef cref;
    output list<Absyn.Subscript> subscripts;
  end crefFirstSubs;

  function crefLastSubs
    input Absyn.ComponentRef cref;
    output list<Absyn.Subscript> subscripts;
  end crefLastSubs;

  function crefSetFirstSubs
    input output Absyn.ComponentRef cref;
    input list<Absyn.Subscript> subscripts;
  end crefSetFirstSubs;

  function crefSetLastSubs
    input output Absyn.ComponentRef cref;
    input list<Absyn.Subscript> inSubscripts;
  end crefSetLastSubs;

  function crefHasSubscripts
    input Absyn.ComponentRef cref;
    output Boolean hasSubscripts;
  end crefHasSubscripts;

  function getSubsFromCref
    input Absyn.ComponentRef cr;
    input Boolean includeSubs;
    input Boolean includeFunctions;
    output list<Absyn.Subscript> subscripts;
  end getSubsFromCref;

  function getString
    input Absyn.Exp exp;
    output String str;
  end getString;

  function stripCommentExpressions
    input output Absyn.Exp exp;
  end stripCommentExpressions;

  function crefGetLastIdent
    input Absyn.ComponentRef cref;
    output Absyn.Ident ident;
  end crefGetLastIdent;

  function crefGetLastSubs
    input Absyn.ComponentRef cref;
    output list<Absyn.Subscript> subscripts;
  end crefGetLastSubs;

  function crefStripLastSubs
    input output Absyn.ComponentRef cref;
  end crefStripLastSubs;

  function joinCrefs
    input Absyn.ComponentRef inComponentRef1;
    input Absyn.ComponentRef inComponentRef2;
    output Absyn.ComponentRef outComponentRef;
  end joinCrefs;

  function crefFirstIdent
    input Absyn.ComponentRef inCref;
    output Absyn.Ident outIdent;
  end crefFirstIdent;

  function crefSetFirstIdent
    input output Absyn.ComponentRef cref;
    input Absyn.Ident ident;
  end crefSetFirstIdent;

  function crefSecondIdent
    input Absyn.ComponentRef cref;
    output Absyn.Ident ident;
  end crefSecondIdent;

  function crefFirstCref
    input Absyn.ComponentRef inCref;
    output Absyn.ComponentRef outCref;
  end crefFirstCref;

  function crefStripFirst
    input Absyn.ComponentRef inComponentRef;
    output Absyn.ComponentRef outComponentRef;
  end crefStripFirst;

  function crefIsFullyQualified
    input Absyn.ComponentRef inCref;
    output Boolean outIsFullyQualified;
  end crefIsFullyQualified;

  function crefMakeFullyQualified
    input Absyn.ComponentRef inComponentRef;
    output Absyn.ComponentRef outComponentRef;
  end crefMakeFullyQualified;

  function restrString
    input Absyn.Restriction inRestriction;
    output String outString;
  end restrString;

  function lastClassname
    input Absyn.Program inProgram;
    output Absyn.Path outPath;
  end lastClassname;

  function classFilename
    input Absyn.Class inClass;
    output String outFilename;
  end classFilename;

  function setClassFilename
    input Absyn.Class inClass;
    input String fileName;
    output Absyn.Class outClass;
  end setClassFilename;

  function setClassName
    input Absyn.Class inClass;
    input String newName;
    output Absyn.Class outClass;
  end setClassName;

  function setClassBody
    input Absyn.Class inClass;
    input Absyn.ClassDef inBody;
    output Absyn.Class outClass;
  end setClassBody;

  function crefEqual
    input Absyn.ComponentRef cref1;
    input Absyn.ComponentRef cref2;
    output Boolean equal;
  end crefEqual;

  function crefFirstEqual
    input Absyn.ComponentRef iCr1;
    input Absyn.ComponentRef iCr2;
    output Boolean outBoolean;
  end crefFirstEqual;

  function subscriptEqual
    input Absyn.Subscript inSubscript1;
    input Absyn.Subscript inSubscript2;
    output Boolean outIsEqual;
  end subscriptEqual;

  function subscriptsEqual
    input list<Absyn.Subscript> inSubList1;
    input list<Absyn.Subscript> inSubList2;
    output Boolean outIsEqual;
  end subscriptsEqual;

  function crefEqualNoSubs
    input Absyn.ComponentRef cr1;
    input Absyn.ComponentRef cr2;
    output Boolean equal;
  end crefEqualNoSubs;

  function isPackageRestriction
    input Absyn.Restriction inRestriction;
    output Boolean outIsPackage;
  end isPackageRestriction;

  function isFunctionRestriction
    input Absyn.Restriction inRestriction;
    output Boolean outIsFunction;
  end isFunctionRestriction;

  function expEqual
    input Absyn.Exp exp1;
    input Absyn.Exp exp2;
    output Boolean equal;
  end expEqual;

  function getClassName
    input Absyn.Class inClass;
    output String outName;
  end getClassName;

  type IteratorIndexedCref = tuple<Absyn.ComponentRef, Integer>;

  function findIteratorIndexedCrefs
    input Absyn.Exp inExp;
    input String inIterator;
    input list<IteratorIndexedCref> inCrefs = {};
    output list<IteratorIndexedCref> outCrefs;
  end findIteratorIndexedCrefs;

  function getFileNameFromInfo
    input SourceInfo inInfo;
    output String inFileName;
  end getFileNameFromInfo;

  function isOuter
    input Absyn.InnerOuter io;
    output Boolean isItAnOuter;
  end isOuter;

  function isInner
    input Absyn.InnerOuter io;
    output Boolean isItAnInner;
  end isInner;

  function isOnlyInner
    input Absyn.InnerOuter inIO;
    output Boolean outOnlyInner;
  end isOnlyInner;

  function isOnlyOuter
    input Absyn.InnerOuter inIO;
    output Boolean outOnlyOuter;
  end isOnlyOuter;

  function isInnerOuter
    input Absyn.InnerOuter inIO;
    output Boolean outIsInnerOuter;
  end isInnerOuter;

  function isNotInnerOuter
    input Absyn.InnerOuter inIO;
    output Boolean outIsNotInnerOuter;
  end isNotInnerOuter;

  function innerOuterEqual
    input Absyn.InnerOuter io1;
    input Absyn.InnerOuter io2;
    output Boolean res;
  end innerOuterEqual;

  function makeFullyQualified
    input Absyn.Path inPath;
    output Absyn.Path outPath;
  end makeFullyQualified;

  function makeNotFullyQualified
    input Absyn.Path inPath;
    output Absyn.Path outPath;
  end makeNotFullyQualified;

  function importEqual
    input Absyn.Import im1;
    input Absyn.Import im2;
    output Boolean outBoolean;
  end importEqual;

  function canonIfExp
    input Absyn.Exp inExp;
    output Absyn.Exp outExp;
  end canonIfExp;

  function onlyLiteralsInAnnotationMod
    input list<Absyn.ElementArg> inMod;
    output Boolean onlyLiterals;
  end onlyLiteralsInAnnotationMod;

  function onlyLiteralsInEqMod
    input Absyn.EqMod eqMod;
    output Boolean onlyLiterals;
  end onlyLiteralsInEqMod;

  function onlyLiteralsInExp
    input Absyn.Exp exp;
    output Boolean onlyLiterals;
  end onlyLiteralsInExp;

  function makeCons
    input Absyn.Exp e1;
    input Absyn.Exp e2;
    output Absyn.Exp e;
    annotation(__OpenModelica_EarlyInline = true);
  end makeCons;

  function crefIdent
    input Absyn.ComponentRef cr;
    output String str;
  end crefIdent;

  function unqotePathIdents
    input Absyn.Path inPath;
    output Absyn.Path path;
  end unqotePathIdents;

  function unqualifyCref
    input Absyn.ComponentRef inCref;
    output Absyn.ComponentRef outCref;
  end unqualifyCref;

  function pathIsFullyQualified
    input Absyn.Path inPath;
    output Boolean outIsQualified;
  end pathIsFullyQualified;

  function pathIsIdent
    input Absyn.Path inPath;
    output Boolean outIsIdent;
  end pathIsIdent;

  function pathIsQual
    input Absyn.Path inPath;
    output Boolean outIsQual;
  end pathIsQual;

  function withinEqual
    input Absyn.Within within1;
    input Absyn.Within within2;
    output Boolean b;
  end withinEqual;

  function withinEqualCaseInsensitive
    input Absyn.Within within1;
    input Absyn.Within within2;
    output Boolean b;
  end withinEqualCaseInsensitive;

  function withinString
    input Absyn.Within w1;
    output String str;
  end withinString;

  function joinWithinPath
    input Absyn.Within within_;
    input Absyn.Path path;
    output Absyn.Path outPath;
  end joinWithinPath;

  function innerOuterStr
    input Absyn.InnerOuter io;
    output String str;
  end innerOuterStr;

  function subscriptExpOpt
    input Absyn.Subscript inSub;
    output Option<Absyn.Exp> outExpOpt;
  end subscriptExpOpt;

  function crefInsertSubscriptLstLst
    input Absyn.Exp inExp;
    input list<list<Absyn.Subscript>> inLst;
    output Absyn.Exp outExp;
    output list<list<Absyn.Subscript>> outLst;
  end crefInsertSubscriptLstLst;

  function crefInsertSubscriptLstLst2
    input Absyn.ComponentRef inCref;
    input list<list<Absyn.Subscript>> inSubs;
    output Absyn.ComponentRef outCref;
  end crefInsertSubscriptLstLst2;

  function isCref
    input Absyn.Exp exp;
    output Boolean b;
  end isCref;

  function isTuple
    input Absyn.Exp exp;
    output Boolean b;
  end isTuple;

  function allFieldsAreCrefs
    input list<Absyn.Exp> expLst;
    output Boolean b;
  end allFieldsAreCrefs;

  function complexIsCref
    input Absyn.Exp inExp;
    output Boolean b;
  end complexIsCref;

  function isDerCref
    input Absyn.Exp exp;
    output Boolean b;
  end isDerCref;

  function isDerCrefFail
    input Absyn.Exp exp;
  end isDerCrefFail;

  function getExpsFromArrayDim
    input Absyn.ArrayDim inAd;
    output Boolean hasUnknownDimensions;
    output list<Absyn.Exp> outExps;
  end getExpsFromArrayDim;

  function getExpsFromArrayDimOpt
    input Option<Absyn.ArrayDim> inAdO;
    output Boolean hasUnknownDimensions;
    output list<Absyn.Exp> outExps;
  end getExpsFromArrayDimOpt;

  function getExpsFromArrayDim_tail
    input Absyn.ArrayDim inAd;
    input list<Absyn.Exp> inAccumulator;
    output Boolean hasUnknownDimensions;
    output list<Absyn.Exp> outExps;
  end getExpsFromArrayDim_tail;

  function isInputOrOutput
    input Absyn.Direction direction;
    output Boolean isIorO;
  end isInputOrOutput;

  function isInput
    input Absyn.Direction inDirection;
    output Boolean outIsInput;
  end isInput;

  function isOutput
    input Absyn.Direction inDirection;
    output Boolean outIsOutput;
  end isOutput;

  function directionEqual
    input Absyn.Direction inDirection1;
    input Absyn.Direction inDirection2;
    output Boolean outEqual;
  end directionEqual;

  function isFieldEqual
    input Absyn.IsField isField1;
    input Absyn.IsField isField2;
    output Boolean outEqual;
  end isFieldEqual;

  function pathLt
    input Absyn.Path path1;
    input Absyn.Path path2;
    output Boolean lt;
  end pathLt;

  function pathGe
    input Absyn.Path path1;
    input Absyn.Path path2;
    output Boolean ge;
  end pathGe;

  function getShortClass
    input output Absyn.Class cl;
  end getShortClass;

  function getFunctionInterface
    input output Absyn.Class cl;
  end getFunctionInterface;

  function filterNestedClasses
    input output Absyn.Class cl;
  end filterNestedClasses;

  function getExternalDecl
    input Absyn.Class inCls;
    output Absyn.ClassPart outExternal;
  end getExternalDecl;

  function isExternalPart
    input Absyn.ClassPart inClassPart;
    output Boolean outFound;
  end isExternalPart;

  function isParts
    input Absyn.ClassDef cl;
    output Boolean b;
  end isParts;

  function makeClassElement
    input Absyn.Class cl;
    output Absyn.ElementItem el;
  end makeClassElement;

  function componentName
    input Absyn.ComponentItem c;
    output String name;
  end componentName;

  function expContainsInitial
    input Absyn.Exp inExp;
    output Boolean hasInitial;
  end expContainsInitial;

  function isInitial
    input Absyn.Exp inExp;
    output Boolean hasReinit;
  end isInitial;

  function importPath
    input Absyn.Import inImport;
    output Absyn.Path outPath;
  end importPath;

  function importName
    input Absyn.Import inImport;
    output Absyn.Ident outName;
  end importName;

  function mergeAnnotations
    input Absyn.Annotation inAnnotation1;
    input Absyn.Annotation inAnnotation2;
    output Absyn.Annotation outAnnotation;
  end mergeAnnotations;

  function mergeCommentAnnotation
    input Absyn.Annotation inAnnotation;
    input Option<Absyn.Comment> inComment;
    output Option<Absyn.Comment> outComment;
  end mergeCommentAnnotation;

  function isModificationOfPath
    input Absyn.ElementArg mod;
    input Absyn.Path path;
    output Boolean yes;
  end isModificationOfPath;

  function subModsInSameOrder
    input Absyn.ElementArg oldmod;
    input Absyn.ElementArg newmod;
    output Absyn.ElementArg mod;
  end subModsInSameOrder;

  function annotationToElementArgs
    input Absyn.Annotation ann;
    output list<Absyn.ElementArg> args;
  end annotationToElementArgs;

  function pathToTypeSpec
    input Absyn.Path inPath;
    output Absyn.TypeSpec outTypeSpec;
  end pathToTypeSpec;

  function typeSpecString
    input Absyn.TypeSpec inTs;
    output String outStr;
  end typeSpecString;

  function crefString
    input Absyn.ComponentRef inCr;
    output String outStr;
  end crefString;

  function typeSpecStringNoQualNoDims
    input Absyn.TypeSpec inTs;
    output String outStr;
  end typeSpecStringNoQualNoDims;

  function typeSpecStringNoQualNoDimsLst
    input list<Absyn.TypeSpec> inTypeSpecLst;
    output String outString;
  end typeSpecStringNoQualNoDimsLst;

  function crefStringIgnoreSubs
    input Absyn.ComponentRef inCr;
    output String outStr;
  end crefStringIgnoreSubs;

  function importString
    input Absyn.Import inImp;
    output String outStr;
  end importString;

  function refString
    input Absyn.Ref inRef;
    output String outStr;
  end refString;

  function refStringBrief
    input Absyn.Ref inRef;
    output String outStr;
  end refStringBrief;

  function getArrayDimOptAsList
    input Option<Absyn.ArrayDim> inArrayDim;
    output Absyn.ArrayDim outArrayDim;
  end getArrayDimOptAsList;

  function removeCrefFromCrefs
    input list<Absyn.ComponentRef> inAbsynComponentRefLst;
    input Absyn.ComponentRef inComponentRef;
    output list<Absyn.ComponentRef> outAbsynComponentRefLst;
  end removeCrefFromCrefs;

  function getNamedAnnotationInClass
    final type T = polymorphic<Any>;
    input Absyn.Class inClass;
    input Absyn.Path id;
    input ModFunc f;
    output Option<T> outString;

    partial function ModFunc
      input Option<Absyn.Modification> mod;
      output T docStr;
    end ModFunc;
  end getNamedAnnotationInClass;

  function mapCrefParts
    input Absyn.ComponentRef inCref;
    input MapFunc inMapFunc;
    output Absyn.ComponentRef outCref;

    partial function MapFunc
      input Absyn.ComponentRef inCref;
      output Absyn.ComponentRef outCref;
    end MapFunc;
  end mapCrefParts;

  function opEqual
    input Absyn.Operator op1;
    input Absyn.Operator op2;
    output Boolean isEqual;
  end opEqual;

  function opIsElementWise
    input Absyn.Operator op;
    output Boolean isElementWise;
  end opIsElementWise;

  function getDefineUnitsInElements
    input list<Absyn.ElementItem> elts;
    output list<Absyn.Element> outElts;
  end getDefineUnitsInElements;

  function getClassPartsInClass
    input Absyn.Class cls;
    output list<Absyn.ClassPart> parts;
  end getClassPartsInClass;

  function getElementItemsInClass
    input Absyn.Class inClass;
    output list<Absyn.ElementItem> outElements;
  end getElementItemsInClass;

  function getElementItemsInClassPart
    input Absyn.ClassPart inClassPart;
    output list<Absyn.ElementItem> outElements;
  end getElementItemsInClassPart;

  function traverseClassComponents
    final type ArgT = polymorphic<Any>;
    input Absyn.Class inClass;
    input FuncType inFunc;
    input ArgT inArg;
    output Absyn.Class outClass;
    output ArgT outArg;

    partial function FuncType
      input output list<Absyn.ComponentItem> components;
      input output ArgT arg;
      output Boolean outContinue;
    end FuncType;
  end traverseClassComponents;

  function isEmptyMod
    input Absyn.Modification inMod;
    output Boolean outIsEmpty;
  end isEmptyMod;

  function isEmptySubMod
    input Absyn.ElementArg inSubMod;
    output Boolean outIsEmpty;
  end isEmptySubMod;

  function elementArgName
    input Absyn.ElementArg inArg;
    output Absyn.Path outName;
  end elementArgName;

  function elementArgEqualName
    input Absyn.ElementArg inArg1;
    input Absyn.ElementArg inArg2;
    output Boolean outEqual;
  end elementArgEqualName;

  function optMsg
    input Boolean inShowMessage;
    input SourceInfo inInfo;
    output Absyn.Msg outMsg;
    annotation(__OpenModelica_EarlyInline = true);
  end optMsg;

  function makeSubscript
    input Absyn.Exp inExp;
    output Absyn.Subscript outSubscript;
  end makeSubscript;

  function makeIntegerSubscript
    input Integer n;
    output Absyn.Subscript sub;
  end makeIntegerSubscript;

  function crefExplode
    input Absyn.ComponentRef inCref;
    input list<Absyn.ComponentRef> inAccum = {};
    output list<Absyn.ComponentRef> outCrefParts;
  end crefExplode;

  function traverseExpShallow
    final type ArgT = polymorphic<Any>;
    input Absyn.Exp inExp;
    input ArgT inArg;
    input FuncT inFunc;
    output Absyn.Exp outExp;

    partial function FuncT
      input Absyn.Exp inExp;
      input ArgT inArg;
      output Absyn.Exp outExp;
    end FuncT;
  end traverseExpShallow;

  function traverseExpShallowSub
    final type ArgT = polymorphic<Any>;
    input output Absyn.Subscript sub;
    input ArgT inArg;
    input FuncT inFunc;

    partial function FuncT
      input Absyn.Exp inExp;
      input ArgT inArg;
      output Absyn.Exp outExp;
    end FuncT;
  end traverseExpShallowSub;

  function isElementItemClass
    input Absyn.ElementItem inElement;
    output Boolean outIsClass;
  end isElementItemClass;

  function isElementItem
    input Absyn.ElementItem inElement;
    output Boolean outIsClass;
  end isElementItem;

  function isAlgorithmItem
    input Absyn.AlgorithmItem inAlg;
    output Boolean outIsClass;
  end isAlgorithmItem;

  function isElementItemClassNamed
    input String inName;
    input Absyn.ElementItem inElement;
    output Boolean outIsNamed;
  end isElementItemClassNamed;

  function isElementItemNamed
    input String name;
    input Absyn.ElementItem element;
    output Boolean res;
  end isElementItemNamed;

  function isElementNamed
    input String name;
    input Absyn.Element element;
    output Boolean res;
  end isElementNamed;

  function isElementSpecNamed
    input String name;
    input Absyn.ElementSpec elementSpec;
    output Boolean res;
  end isElementSpecNamed;

  function isEmptyClassPart
    input Absyn.ClassPart inClassPart;
    output Boolean outIsEmpty;
  end isEmptyClassPart;

  function isInvariantExpNoTraverse
    input output Absyn.Exp e;
    input output Boolean b;
  end isInvariantExpNoTraverse;

  function pathPartCount
    input Absyn.Path path;
    input Integer partsAccum = 0;
    output Integer parts;
  end pathPartCount;

  function getAnnotationsFromConstraintClass
    input Option<Absyn.ConstrainClass> inCC;
    output list<Absyn.ElementArg> elementArgs;
  end getAnnotationsFromConstraintClass;

  function getAnnotationsFromItems
    input list<Absyn.ComponentItem> inComponentItems;
    input list<Absyn.ElementArg> ccAnnotations;
    output list<list<Absyn.ElementArg>> outLst;
  end getAnnotationsFromItems;

  function stripGraphicsAndInteractionModification
    input list<Absyn.ElementArg> inAbsynElementArgLst;
    output list<Absyn.ElementArg> outAbsynElementArgLst1;
    output list<Absyn.ElementArg> outAbsynElementArgLst2;
  end stripGraphicsAndInteractionModification;

  function traverseClasses
    final type Arg = polymorphic<Any>;
    input Absyn.Program inProgram;
    input Option<Absyn.Path> inPath;
    input FuncType inFunc;
    input Arg inArg;
    input Boolean inVisitProtected;
    output tuple<Absyn.Program, Option<Absyn.Path>, Arg> outTpl;

    partial function FuncType
      input output tuple<Absyn.Class, Option<Absyn.Path>, Arg> tpl;
    end FuncType;
  end traverseClasses;

  function getTypeSpecFromElementItemOpt
    input Absyn.ElementItem inElementItem;
    output Option<Absyn.TypeSpec> outTypeSpec;
  end getTypeSpecFromElementItemOpt;

  function getElementSpecificationFromElementItemOpt
    input Absyn.ElementItem inElementItem;
    output Option<Absyn.ElementSpec> outSpec;
  end getElementSpecificationFromElementItemOpt;

  function getComponentItemsFromElementSpec
    input Absyn.ElementSpec elemSpec;
    output list<Absyn.ComponentItem> componentItems;
  end getComponentItemsFromElementSpec;

  function getComponentItemsFromElementItem
    input Absyn.ElementItem inElementItem;
    output list<Absyn.ComponentItem> componentItems;
  end getComponentItemsFromElementItem;

  function getDirection
    input Absyn.ElementItem elementItem;
    output Absyn.Direction oDirection;
  end getDirection;

  function isNamedPathIdent
    input Absyn.Path path;
    input String name;
    output Boolean res;
  end isNamedPathIdent;

  function isUniontype
    input Absyn.Class cls;
    output Boolean b;
  end isUniontype;

  function traverseClassElements
    final type ArgT = polymorphic<Any>;
    input Absyn.Class inClass;
    input FuncType inFunc;
    input ArgT inArg;
    output Absyn.Class outClass;
    output ArgT outArg;

    partial function FuncType
      input Absyn.Element inElement;
      input ArgT inArg;
      output Absyn.Element outElement;
      output ArgT outArg;
      output Boolean outContinue;
    end FuncType;
  end traverseClassElements;

  function elementSpec
    input Absyn.Element el;
    output Absyn.ElementSpec elSpec;
  end elementSpec;

  function isClassOrComponentElementSpec
    input Absyn.ElementSpec inElementSpec;
    output Boolean yes;
  end isClassOrComponentElementSpec;

  function isPartial
    input Absyn.Class inClass;
    output Boolean outBoolean;
  end isPartial;

  function isNotPartial
    input Absyn.Class inClass;
    output Boolean outBoolean;
  end isNotPartial;

  function crefIsWild
    input Absyn.ComponentRef cref;
    output Boolean wild;
  end crefIsWild;

  function makeCall
    input Absyn.ComponentRef name;
    input list<Absyn.Exp> posArgs;
    input list<Absyn.NamedArg> namedArgs = {};
    output Absyn.Exp callExp;
  end makeCall;

  function setClassCommentsAfterEnd
    input output Absyn.Class cl;
    input list<String> comments;
  end setClassCommentsAfterEnd;

  function pathReplaceFirst
    input Absyn.Path path;
    input Absyn.Path prefix;
    output Absyn.Path outPath;
  end pathReplaceFirst;

  function pathContains
    input Absyn.Path path;
    input Absyn.Ident name;
    output Boolean res;
  end pathContains;

  function getClassAnnotation
    input Absyn.Class cls;
    output Option<Absyn.Annotation> ann;
  end getClassAnnotation;

  function getClassDefAnnotation
    input Absyn.ClassDef cdef;
    output Option<Absyn.Annotation> ann;
  end getClassDefAnnotation;

  function setClassAnnotation
    input output Absyn.Class cls;
    input Option<Absyn.Annotation> ann;
  end setClassAnnotation;

  function setClassDefAnnotation
    input output Absyn.ClassDef cdef;
    input Option<Absyn.Annotation> ann;
  end setClassDefAnnotation;

  function setCommentAnnotation
    input output Option<Absyn.Comment> comment;
    input Option<Absyn.Annotation> ann;
  end setCommentAnnotation;

  function mapAnnotationBinding
    input output Absyn.Annotation ann;
    input Absyn.Path path;
    input MapFunc func;
    output Boolean found;

    partial function MapFunc
      input output Absyn.Exp exp;
    end MapFunc;
  end mapAnnotationBinding;

  function mapAnnotationBindingInArg
    input output Absyn.ElementArg arg;
    input Absyn.Path path;
    input MapFunc func;
    output Boolean found;

    partial function MapFunc
      input output Absyn.Exp exp;
    end MapFunc;
  end mapAnnotationBindingInArg;

  function mapAnnotationBindingInEqMod
    input output Absyn.EqMod eqMod;
    input MapFunc func;

    partial function MapFunc
      input output Absyn.Exp exp;
    end MapFunc;
  end mapAnnotationBindingInEqMod;

  function createChoiceArray
    input Absyn.ElementArg inChoices;
    output Absyn.ElementArg outChoices;
  end createChoiceArray;

  function mapCrefExps
    input output Absyn.ComponentRef cref;
    input Func func;

    partial function Func
      input output Absyn.Exp exp;
    end Func;
  end mapCrefExps;

  function mapSubscriptExp
    input output Absyn.Subscript sub;
    input Func func;

    partial function Func
      input output Absyn.Exp exp;
    end Func;
  end mapSubscriptExp;

  function getElementConstrainingClass
    input Absyn.Element element;
    output Option<Absyn.ConstrainClass> cc;
  end getElementConstrainingClass;

  function isElementReplaceable
    input Absyn.Element element;
    output Boolean res;
  end isElementReplaceable;

  function isElementRedeclare
    input Absyn.Element element;
    output Boolean res;
  end isElementRedeclare;

  function isModel
    input Absyn.Class cls;
    output Boolean res;
  end isModel;

  function isBlock
    input Absyn.Class cls;
    output Boolean res;
  end isBlock;
  annotation(__OpenModelica_Interface = "frontend");
end AbsynUtil;
