encapsulated package StaticScript
  import Absyn;
  import DAE;
  import FCore;
  import GlobalScript;
protected
  protected import Ceval;
  protected import CevalScript;
  protected import CevalScriptBackend;
  protected import ClassInf;
  protected import ComponentReference;
  protected import Error;
  protected import ErrorExt;
  protected import Expression;
  protected import ExpressionSimplify;
  protected import Flags;
  protected import Static;
  protected import Values;

public
  function getSimulationArguments
    input FCore.Cache inCache;
    input FCore.Graph inEnv;
    input list<Absyn.Exp> inAbsynExpLst;
    input list<Absyn.NamedArg> inAbsynNamedArgLst;
    input Boolean inImplInst;
    input DAE.Prefix inPrefix;
    input String callName;
    input SourceInfo inInfo;
    input Option<GlobalScript.SimulationOptions> defaultOption;
    output FCore.Cache outCache;
    output list<DAE.Exp> outSimulationArguments;
  end getSimulationArguments;

  constant list<String> VALID_SIMULATE_ARGS = {"startTime", "stopTime", "numberOfIntervals", "stepSize", "tolerance", "method", "fileNamePrefix", "options", "outputFormat", "variableFilter", "cflags", "simflags"};

  function checkSimulationArguments
    input list<Absyn.NamedArg> args;
    input String callName;
    input SourceInfo info;
  end checkSimulationArguments;

  function elabCallInteractive
    input output FCore.Cache cache;
    input FCore.Graph env;
    input Absyn.ComponentRef fn;
    input list<Absyn.Exp> args;
    input list<Absyn.NamedArg> nargs;
    input Boolean impl;
    input DAE.Prefix pre;
    input SourceInfo info;
    output DAE.Exp e;
    output DAE.Properties prop;
  end elabCallInteractive;

  function elabExp
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
  end elabExp;

  function elabGraphicsExp
    input FCore.Cache inCache;
    input FCore.Graph inEnv;
    input Absyn.Exp inExp;
    input Boolean inImplInst;
    input DAE.Prefix inPrefix;
    input SourceInfo info;
    output FCore.Cache outCache;
    output DAE.Exp outExp;
    output DAE.Properties outProperties;
  end elabGraphicsExp;
  annotation(__OpenModelica_Interface = "backend");
end StaticScript;
