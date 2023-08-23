encapsulated package FlagsUtil
  import Flags;
protected
  protected import Corba;
  protected import Error;
  protected import ErrorExt;
  protected import Global;
  protected import List;
  protected import Print;
  protected import Settings;
  protected import StringUtil;
  protected import System;
  protected import UnorderedMap;
  protected import Util;

public
  function new
    input list<String> inArgs;
    output list<String> outArgs;
  end new;

  function saveFlags
    input Flags.Flag inFlags;
  end saveFlags;

  function loadFlags
    input Boolean initialize = true;
    output Flags.Flag flags;
  end loadFlags;

  function backupFlags
    output Flags.Flag outFlags;
  end backupFlags;

  function resetDebugFlags end resetDebugFlags;

  function resetConfigFlags end resetConfigFlags;

  function set
    input Flags.DebugFlag inFlag;
    input Boolean inValue;
    output Boolean outOldValue;
  end set;

  function getConfigOptionsStringList
    input Flags.ConfigFlag inFlag;
    output list<String> outOptions;
    output list<String> outComments;
  end getConfigOptionsStringList;

  function readArgs
    input list<String> inArgs;
    output list<String> outArgs;
  end readArgs;

  function setConfigValue
    input Flags.ConfigFlag inFlag;
    input Flags.FlagData inValue;
  end setConfigValue;

  function setConfigBool
    input Flags.ConfigFlag inFlag;
    input Boolean inValue;
  end setConfigBool;

  function setConfigInt
    input Flags.ConfigFlag inFlag;
    input Integer inValue;
  end setConfigInt;

  function setConfigReal
    input Flags.ConfigFlag inFlag;
    input Real inValue;
  end setConfigReal;

  function setConfigString
    input Flags.ConfigFlag inFlag;
    input String inValue;
  end setConfigString;

  function setConfigStringList
    input Flags.ConfigFlag inFlag;
    input list<String> inValue;
  end setConfigStringList;

  function setConfigEnum
    input Flags.ConfigFlag inFlag;
    input Integer inValue;
  end setConfigEnum;

  function printHelp
    input list<String> inTopics;
    output String help;
  end printHelp;

  function getValidOptionsAndDescription
    input String flagName;
    output list<String> validStrings;
    output String mainDescriptionStr;
    output list<String> descriptions;
  end getValidOptionsAndDescription;

  function printUsage
    output String usage;
  end printUsage;

  function printUsageSphinxAll
    output String usage;
  end printUsageSphinxAll;

  function printAllConfigFlags
    output String outString;
  end printAllConfigFlags;

  function debugFlagName
    input Flags.DebugFlag inFlag;
    output String name;
  end debugFlagName;

  function configFlagName
    input Flags.ConfigFlag inFlag;
    output String name;
  end configFlagName;

  function flagDataEq
    input Flags.FlagData data1;
    input Flags.FlagData data2;
    output Boolean eq;
  end flagDataEq;

  function flagDataString
    input Flags.FlagData flagData;
    output String str;
  end flagDataString;

  function unparseFlags
    output list<String> flagStrings;
  end unparseFlags;
  annotation(__OpenModelica_Interface = "util");
end FlagsUtil;
