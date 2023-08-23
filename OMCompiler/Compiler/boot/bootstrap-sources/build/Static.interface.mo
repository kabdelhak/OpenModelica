encapsulated package Static
  import Absyn;
  import DAE;
  import FCore;
  import SCode;
  import Values;
protected
  protected import AbsynToSCode;
  protected import AbsynUtil;
  protected import FGraph;
  protected import FNode;
  protected import InstMeta;
  protected import MetaUtil;
  protected import Util;
  protected import Array;
  protected import BackendInterface;
  protected import Ceval;
  protected import ClassInf;
  protected import ComponentReference;
  protected import Config;
  protected import DAEUtil;
  protected import Debug;
  protected import Dump;
  protected import Error;
  protected import ErrorExt;
  protected import Expression;
  protected import ExpressionDump;
  protected import ExpressionSimplify;
  protected import Flags;
  protected import Global;
  protected import Inline;
  protected import Inst;
  protected import InstFunction;
  protected import InstTypes;
  protected import InnerOuter;
  protected import List;
  protected import Lookup;
  protected import Mutable;
  protected import OperatorOverloading;
  protected import Patternm;
  protected import PrefixUtil;
  protected import Print;
  protected import SCodeDump;
  protected import SCodeUtil;
  protected import System;
  protected import Types;
  protected import ValuesUtil;
  protected import VarTransform;

public
  function elabExpList
    input FCore.Cache inCache;
    input FCore.Graph inEnv;
    input list<Absyn.Exp> inExpl;
    input Boolean inImplicit;
    input Boolean inDoVect;
    input DAE.Prefix inPrefix;
    input SourceInfo inInfo;
    input DAE.Type inLastType = DAE.T_UNKNOWN_DEFAULT;
    output FCore.Cache outCache;
    output list<DAE.Exp> outExpl;
    output list<DAE.Properties> outProperties;
  end elabExpList;

  function elabExpListList
    input FCore.Cache inCache;
    input FCore.Graph inEnv;
    input list<list<Absyn.Exp>> inExpl;
    input Boolean inImplicit;
    input Boolean inDoVect;
    input DAE.Prefix inPrefix;
    input SourceInfo inInfo;
    input DAE.Type inLastType = DAE.T_UNKNOWN_DEFAULT;
    output FCore.Cache outCache;
    output list<list<DAE.Exp>> outExpl;
    output list<list<DAE.Properties>> outProperties;
  end elabExpListList;

  function elabExp
    extends PartialElabExpFunc;
  end elabExp;

  partial function PartialElabExpFunc
    input FCore.Cache inCache;
    input FCore.Graph inEnv;
    input Absyn.Exp inExp;
    input Boolean inImplicit;
    input Boolean inDoVect;
    input DAE.Prefix inPrefix;
    input SourceInfo inInfo;
    output FCore.Cache outCache;
    output DAE.Exp outExp;
    output DAE.Properties outProperties;
  end PartialElabExpFunc;

  function elabExpLHS
    extends PartialElabExpFunc;
  end elabExpLHS;

  function elabExpInExpression
    input FCore.Cache inCache;
    input FCore.Graph inEnv;
    input Absyn.Exp inExp;
    input Boolean inImplicit;
    input Boolean performVectorization;
    input DAE.Prefix inPrefix;
    input SourceInfo info;
    output FCore.Cache outCache;
    output DAE.Exp outExp;
    output DAE.Properties outProperties;
  end elabExpInExpression;

  function checkAssignmentToInput
    input Absyn.Exp inExp;
    input DAE.Attributes inAttributes;
    input FCore.Graph inEnv;
    input Boolean inAllowTopLevelInputs;
    input SourceInfo inInfo;
  end checkAssignmentToInput;

  function checkAssignmentToInputs
    input list<Absyn.Exp> inExpCrefs;
    input list<DAE.Attributes> inAttributes;
    input FCore.Graph inEnv;
    input SourceInfo inInfo;
  end checkAssignmentToInputs;

  function elabExpCrefNoEvalList
    input FCore.Cache inCache;
    input FCore.Graph inEnv;
    input list<Absyn.Exp> inExpl;
    input Boolean inImplicit;
    input Boolean inDoVect;
    input DAE.Prefix inPrefix;
    input SourceInfo inInfo;
    output FCore.Cache outCache;
    output list<DAE.Exp> outExpl;
    output list<DAE.Properties> outProperties;
    output list<DAE.Attributes> outAttributes;
  end elabExpCrefNoEvalList;

  function elabListExp
    input FCore.Cache inCache;
    input FCore.Graph inEnv;
    input list<Absyn.Exp> inExpList;
    input DAE.Properties inProp;
    input Boolean inImplicit;
    input Boolean inDoVect;
    input DAE.Prefix inPrefix;
    input SourceInfo inInfo;
    output FCore.Cache outCache;
    output DAE.Exp outExp;
    output DAE.Properties outProperties;
  end elabListExp;

  function fromEquationsToAlgAssignments
    input Absyn.ClassPart cp;
    output list<Absyn.AlgorithmItem> algsOut;
  end fromEquationsToAlgAssignments;

  function deduceIterationRange
    input String inIterator;
    input list<AbsynUtil.IteratorIndexedCref> inCrefs;
    input FCore.Graph inEnv;
    input FCore.Cache inCache;
    input Absyn.Info inInfo;
    output DAE.Exp outRange;
    output DAE.Properties outProperties;
    output FCore.Cache outCache;
  end deduceIterationRange;

  function elabGraphicsExp
    input FCore.Cache inCache;
    input FCore.Graph inEnv;
    input Absyn.Exp inExp;
    input Boolean inBoolean;
    input DAE.Prefix inPrefix;
    input SourceInfo info;
    output FCore.Cache outCache;
    output DAE.Exp outExp;
    output DAE.Properties outProperties;
  end elabGraphicsExp;

  function elabBuiltinFill2
    input FCore.Cache inCache;
    input FCore.Graph inEnv;
    input DAE.Exp inExp;
    input DAE.Type inType;
    input list<Values.Value> inValuesValueLst;
    input DAE.Const constVar;
    input DAE.Prefix inPrefix;
    input list<Absyn.Exp> inDims;
    input SourceInfo inInfo;
    output FCore.Cache outCache;
    output DAE.Exp outExp;
    output DAE.Properties outProperties;
  end elabBuiltinFill2;

  function elabBuiltinMatrix
    input FCore.Cache inCache;
    input FCore.Graph inEnv;
    input list<Absyn.Exp> inPosArgs;
    input list<Absyn.NamedArg> inNamedArgs;
    input Boolean inImpl;
    input DAE.Prefix inPrefix;
    input SourceInfo inInfo;
    output FCore.Cache outCache;
    output DAE.Exp outExp;
    output DAE.Properties outProperties;
  end elabBuiltinMatrix;

  function elabBuiltinHandler
    input String inIdent;
    output HandlerFunc outHandler;

    partial function HandlerFunc
      input FCore.Cache inCache;
      input FCore.Graph inEnv;
      input list<Absyn.Exp> inAbsynExpLst;
      input list<Absyn.NamedArg> inNamedArg;
      input Boolean inBoolean;
      input DAE.Prefix inPrefix;
      input SourceInfo info;
      output FCore.Cache outCache;
      output DAE.Exp outExp;
      output DAE.Properties outProperties;
    end HandlerFunc;
  end elabBuiltinHandler;

  function isBuiltinFunc
    input Absyn.Path inPath;
    input DAE.Type ty;
    output DAE.FunctionBuiltin isBuiltin;
    output Boolean b;
    output Absyn.Path outPath;
  end isBuiltinFunc;

  function elabVariablenames
    input list<Absyn.Exp> inExpl;
    output list<DAE.Exp> outExpl;
  end elabVariablenames;

  function getOptionalNamedArgExpList
    input String name;
    input list<Absyn.NamedArg> nargs;
    output list<DAE.Exp> out;
  end getOptionalNamedArgExpList;

  function getOptionalNamedArg
    input FCore.Cache inCache;
    input FCore.Graph inEnv;
    input Boolean inImplicit;
    input String inArgName;
    input DAE.Type inType;
    input list<Absyn.NamedArg> inArgs;
    input DAE.Exp inDefaultExp;
    input DAE.Prefix inPrefix;
    input SourceInfo inInfo;
    output FCore.Cache outCache;
    output DAE.Exp outExp;
  end getOptionalNamedArg;

  function elabUntypedCref
    input FCore.Cache inCache;
    input FCore.Graph inEnv;
    input Absyn.ComponentRef inCref;
    input Boolean inImplicit;
    input DAE.Prefix inPrefix;
    input SourceInfo inInfo;
    output FCore.Cache outCache;
    output DAE.ComponentRef outCref;
  end elabUntypedCref;

  function needToRebuild
    input String newFile;
    input String oldFile;
    input Real buildTime;
    output Boolean buildNeeded;
  end needToRebuild;

  function elabCallArgs
    input FCore.Cache inCache;
    input FCore.Graph inEnv;
    input Absyn.Path inPath;
    input list<Absyn.Exp> inAbsynExpLst;
    input list<Absyn.NamedArg> inAbsynNamedArgLst;
    input list<Absyn.Path> typeVars;
    input Boolean inBoolean;
    input DAE.Prefix inPrefix;
    input SourceInfo info;
    output FCore.Cache outCache;
    output DAE.Exp outExp;
    output DAE.Properties outProperties;
  end elabCallArgs;

  function elabCallArgs3
    input FCore.Cache inCache;
    input FCore.Graph inEnv;
    input list<DAE.Type> typelist;
    input Absyn.Path fn;
    input list<Absyn.Exp> args;
    input list<Absyn.NamedArg> nargs;
    input list<Absyn.Path> typeVars;
    input Boolean impl;
    input DAE.Prefix pre;
    input SourceInfo info;
    output FCore.Cache outCache;
    output Option<tuple<DAE.Exp, DAE.Properties>> expProps;
  end elabCallArgs3;

  function inlineBuiltin
    input DAE.FunctionBuiltin isBuiltin;
    input DAE.InlineType inlineType;
    output DAE.InlineType outInlineType;
  end inlineBuiltin;

  function instantiateDaeFunction
    input FCore.Cache inCache;
    input FCore.Graph env;
    input Absyn.Path name;
    input Boolean builtin;
    input Option<SCode.Element> clOpt;
    input Boolean printErrorMsg;
    output FCore.Cache outCache;
    output Util.Status status;
  end instantiateDaeFunction;

  function instantiateDaeFunctionFromTypes
    input FCore.Cache inCache;
    input FCore.Graph env;
    input list<DAE.Type> tys;
    input Boolean builtin;
    input Option<SCode.Element> clOpt;
    input Boolean printErrorMsg;
    input Util.Status acc;
    output FCore.Cache outCache;
    output Util.Status status;
  end instantiateDaeFunctionFromTypes;

  function instantiateDaeFunctionForceInst
    input FCore.Cache inCache;
    input FCore.Graph env;
    input Absyn.Path name;
    input Boolean builtin;
    input Option<SCode.Element> clOpt;
    input Boolean printErrorMsg;
    output FCore.Cache outCache;
    output Util.Status status;
  end instantiateDaeFunctionForceInst;

  function isExternalObjectFunction
    input FCore.Cache inCache;
    input FCore.Graph inEnv;
    input Absyn.Path inPath;
    output FCore.Cache outCache;
    output Boolean outIsExt;
  end isExternalObjectFunction;

  function elabCref
    input FCore.Cache inCache;
    input FCore.Graph inEnv;
    input Absyn.ComponentRef inComponentRef;
    input Boolean inImplicit;
    input Boolean performVectorization;
    input DAE.Prefix inPrefix;
    input SourceInfo info;
    output FCore.Cache outCache;
    output Option<tuple<DAE.Exp, DAE.Properties, DAE.Attributes>> res;
  end elabCref;

  function elabCrefNoEval
    input FCore.Cache inCache;
    input FCore.Graph inEnv;
    input Absyn.ComponentRef inComponentRef;
    input Boolean inImplicit;
    input Boolean performVectorization;
    input DAE.Prefix inPrefix;
    input SourceInfo info;
    output FCore.Cache outCache;
    output DAE.Exp outExp;
    output DAE.Properties outProperties;
    output DAE.Attributes outAttributes;
  end elabCrefNoEval;

  function fixEnumerationType
    input DAE.Type inType;
    output DAE.Type outType;
  end fixEnumerationType;

  function applySubscriptsVariability
    input SCode.Variability inVariability;
    input DAE.Const inSubsConst;
    output SCode.Variability outVariability;
  end applySubscriptsVariability;

  function makeEnumerationArray
    input Absyn.Path enumTypeName;
    input list<String> enumLiterals;
    output DAE.Exp enumArray;
    output DAE.Type enumArrayType;
  end makeEnumerationArray;

  function crefVectorize
    input Boolean performVectorization;
    input DAE.Exp inExp;
    input DAE.Type inType;
    input Option<DAE.Exp> splicedExp;
    input DAE.Type crefIdType;
    output DAE.Exp outExp;
  end crefVectorize;

  function flattenSubscript2
    input list<DAE.Subscript> inSubs;
    input String name;
    input DAE.Type inType;
    output DAE.Exp outExp;
  end flattenSubscript2;

  function absynCrefToComponentReference
    input Absyn.ComponentRef inComponentRef;
    output DAE.ComponentRef outComponentRef;
  end absynCrefToComponentReference;

  function elabSubscripts
    input FCore.Cache inCache;
    input FCore.Graph inEnv;
    input list<Absyn.Subscript> inAbsynSubscriptLst;
    input Boolean inBoolean;
    input DAE.Prefix inPrefix;
    input SourceInfo info;
    output FCore.Cache outCache;
    output list<DAE.Subscript> outExpSubscriptLst;
    output DAE.Const outConst;
  end elabSubscripts;

  function canonCref
    input FCore.Cache inCache;
    input FCore.Graph inEnv;
    input DAE.ComponentRef inComponentRef;
    input Boolean inBoolean;
    output FCore.Cache outCache;
    output DAE.ComponentRef outComponentRef;
  end canonCref;

  function elabCodeExp
    input Absyn.Exp exp;
    input FCore.Cache cache;
    input FCore.Graph env;
    input DAE.CodeType ct;
    input SourceInfo info;
    output DAE.Exp outExp;
  end elabCodeExp;

  function elabCodeExp_dispatch
    input Absyn.Exp exp;
    input FCore.Cache cache;
    input FCore.Graph env;
    input DAE.CodeType ct;
    input Absyn.Info info;
    output DAE.Exp outExp;
  end elabCodeExp_dispatch;

  function elabArrayDims
    input FCore.Cache inCache;
    input FCore.Graph inEnv;
    input Absyn.ComponentRef inComponentRef;
    input list<Absyn.Subscript> inDimensions;
    input Boolean inImplicit;
    input Boolean inDoVect;
    input DAE.Prefix inPrefix;
    input SourceInfo inInfo;
    output FCore.Cache outCache;
    output DAE.Dimensions outDimensions;
  end elabArrayDims;
  annotation(__OpenModelica_Interface = "frontend");
end Static;
