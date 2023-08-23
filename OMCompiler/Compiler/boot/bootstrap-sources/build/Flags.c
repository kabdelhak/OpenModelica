#ifdef OMC_BASE_FILE
  #define OMC_FILE OMC_BASE_FILE
#else
  #define OMC_FILE "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/boot/build/tmp/Flags.c"
#endif
#include "omc_simulation_settings.h"
#include "Flags.h"
#define _OMC_LIT0_data "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,64,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT1_6,1692109645.0);
#define _OMC_LIT1_6 MMC_REFREALLIT(_OMC_LIT_STRUCT1_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1514)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1514)),MMC_IMMEDIATE(MMC_TAGFIXNUM(78)),_OMC_LIT1_6}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT2_6,1692109645.0);
#define _OMC_LIT2_6 MMC_REFREALLIT(_OMC_LIT_STRUCT2_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1481)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1481)),MMC_IMMEDIATE(MMC_TAGFIXNUM(77)),_OMC_LIT2_6}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
#include "util/modelica.h"

#include "Flags_includes.h"



DLLExport
modelica_integer omc_Flags_getConfigEnum(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_integer _outValue;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
#line 1574 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  /* Pattern-matching assignment */
#line 1574 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  tmpMeta1 = omc_Flags_getConfigValue(threadData, _inFlag);
#line 1574 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,7,2) == 0) MMC_THROW_INTERNAL();
#line 1574 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
#line 1574 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  tmp3 = mmc_unbox_integer(tmpMeta2);
#line 1574 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  _outValue = tmp3  /* pattern as ty=Integer */;
#line 47 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outValue;
}
modelica_metatype boxptr_Flags_getConfigEnum(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_integer _outValue;
  modelica_metatype out_outValue;
  _outValue = omc_Flags_getConfigEnum(threadData, _inFlag);
  out_outValue = mmc_mk_icon(_outValue);
  return out_outValue;
}

DLLExport
modelica_metatype omc_Flags_getConfigStringList(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
#line 1566 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  /* Pattern-matching assignment */
#line 1566 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  tmpMeta1 = omc_Flags_getConfigValue(threadData, _inFlag);
#line 1566 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,6,1) == 0) MMC_THROW_INTERNAL();
#line 1566 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
#line 1566 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  _outValue = tmpMeta2;
#line 79 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLExport
modelica_string omc_Flags_getConfigString(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_string _outValue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
#line 1558 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  /* Pattern-matching assignment */
#line 1558 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  tmpMeta1 = omc_Flags_getConfigValue(threadData, _inFlag);
#line 1558 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,5,1) == 0) MMC_THROW_INTERNAL();
#line 1558 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
#line 1558 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  _outValue = tmpMeta2;
#line 103 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLExport
modelica_real omc_Flags_getConfigReal(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_real _outValue;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
#line 1550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  /* Pattern-matching assignment */
#line 1550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  tmpMeta1 = omc_Flags_getConfigValue(threadData, _inFlag);
#line 1550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,4,1) == 0) MMC_THROW_INTERNAL();
#line 1550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
#line 1550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  tmp3 = mmc_unbox_real(tmpMeta2);
#line 1550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  _outValue = tmp3  /* pattern as ty=Real */;
#line 130 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outValue;
}
modelica_metatype boxptr_Flags_getConfigReal(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_real _outValue;
  modelica_metatype out_outValue;
  _outValue = omc_Flags_getConfigReal(threadData, _inFlag);
  out_outValue = mmc_mk_rcon(_outValue);
  return out_outValue;
}

DLLExport
modelica_metatype omc_Flags_getConfigIntList(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
#line 1542 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  /* Pattern-matching assignment */
#line 1542 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  tmpMeta1 = omc_Flags_getConfigValue(threadData, _inFlag);
#line 1542 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,3,1) == 0) MMC_THROW_INTERNAL();
#line 1542 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
#line 1542 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  _outValue = tmpMeta2;
#line 162 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLExport
modelica_integer omc_Flags_getConfigInt(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_integer _outValue;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
#line 1534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  /* Pattern-matching assignment */
#line 1534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  tmpMeta1 = omc_Flags_getConfigValue(threadData, _inFlag);
#line 1534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,2,1) == 0) MMC_THROW_INTERNAL();
#line 1534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
#line 1534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  tmp3 = mmc_unbox_integer(tmpMeta2);
#line 1534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  _outValue = tmp3  /* pattern as ty=Integer */;
#line 189 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outValue;
}
modelica_metatype boxptr_Flags_getConfigInt(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_integer _outValue;
  modelica_metatype out_outValue;
  _outValue = omc_Flags_getConfigInt(threadData, _inFlag);
  out_outValue = mmc_mk_icon(_outValue);
  return out_outValue;
}

DLLExport
modelica_boolean omc_Flags_getConfigBool(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_boolean _outValue;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
#line 1526 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  /* Pattern-matching assignment */
#line 1526 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  tmpMeta1 = omc_Flags_getConfigValue(threadData, _inFlag);
#line 1526 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,1,1) == 0) MMC_THROW_INTERNAL();
#line 1526 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
#line 1526 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  tmp3 = mmc_unbox_integer(tmpMeta2);
#line 1526 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  _outValue = tmp3  /* pattern as ty=Boolean */;
#line 224 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outValue;
}
modelica_metatype boxptr_Flags_getConfigBool(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_boolean _outValue;
  modelica_metatype out_outValue;
  _outValue = omc_Flags_getConfigBool(threadData, _inFlag);
  out_outValue = mmc_mk_icon(_outValue);
  return out_outValue;
}

DLLExport
modelica_metatype omc_Flags_getConfigValue(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype _config_flags = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  // _config_flags has no default value.
#line 1512 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  /* Pattern-matching assignment */
#line 1512 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  tmpMeta1 = omc_Flags_getFlags(threadData, 1 /* true */);
#line 1512 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,2) == 0) MMC_THROW_INTERNAL();
#line 1512 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
#line 1512 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  _config_flags = tmpMeta2;
#line 258 OMC_FILE

#line 1513 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  if(omc_UnorderedMap_contains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFlag), 2))), _config_flags))
#line 1513 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  {
#line 1514 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
    _outValue = omc_UnorderedMap_getSafe(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFlag), 2))), _config_flags, _OMC_LIT1);
#line 266 OMC_FILE
  }
  else
  {
#line 1517 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
    _outValue = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFlag), 5)));
#line 272 OMC_FILE
  }
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLExport
modelica_string omc_Flags_getConfigName(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_string _name = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _name has no default value.
#line 1502 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  /* Pattern-matching assignment */
#line 1502 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  tmpMeta1 = _inFlag;
#line 1502 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
#line 1502 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  _name = tmpMeta2;
#line 295 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _name;
}

DLLExport
modelica_boolean omc_Flags_isConfigFlagSet(threadData_t *threadData, modelica_metatype _inFlag, modelica_string _hasMember)
{
  modelica_boolean _isMember;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isMember has no default value.
#line 1494 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  _isMember = listMember(_hasMember, omc_Flags_getConfigStringList(threadData, _inFlag));
#line 309 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _isMember;
}
modelica_metatype boxptr_Flags_isConfigFlagSet(threadData_t *threadData, modelica_metatype _inFlag, modelica_metatype _hasMember)
{
  modelica_boolean _isMember;
  modelica_metatype out_isMember;
  _isMember = omc_Flags_isConfigFlagSet(threadData, _inFlag, _hasMember);
  out_isMember = mmc_mk_icon(_isMember);
  return out_isMember;
}

DLLExport
modelica_boolean omc_Flags_isSet(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_boolean _outValue;
  modelica_metatype _debug_flags = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  // _debug_flags has no default value.
#line 1479 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  /* Pattern-matching assignment */
#line 1479 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  tmpMeta1 = omc_Flags_getFlags(threadData, 1 /* true */);
#line 1479 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,2) == 0) MMC_THROW_INTERNAL();
#line 1479 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
#line 1479 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  _debug_flags = tmpMeta2;
#line 343 OMC_FILE

#line 1480 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  if(omc_UnorderedMap_contains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFlag), 2))), _debug_flags))
#line 1480 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  {
#line 1481 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
    _outValue = mmc_unbox_boolean(omc_UnorderedMap_getSafe(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFlag), 2))), _debug_flags, _OMC_LIT2));
#line 351 OMC_FILE
  }
  else
  {
#line 1484 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
    _outValue = mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFlag), 3))));
#line 357 OMC_FILE
  }
  _return: OMC_LABEL_UNUSED
  return _outValue;
}
modelica_metatype boxptr_Flags_isSet(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_boolean _outValue;
  modelica_metatype out_outValue;
  _outValue = omc_Flags_isSet(threadData, _inFlag);
  out_outValue = mmc_mk_icon(_outValue);
  return out_outValue;
}

DLLExport
modelica_metatype omc_Flags_getFlags(threadData_t *threadData, modelica_boolean _initialize)
{
  modelica_metatype _flags = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _flags has no default value.
#line 1469 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/Flags.mo"
  _flags = getGlobalRoot(((modelica_integer) 17));
#line 380 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _flags;
}
modelica_metatype boxptr_Flags_getFlags(threadData_t *threadData, modelica_metatype _initialize)
{
  modelica_integer tmp1;
  modelica_metatype _flags = NULL;
  tmp1 = mmc_unbox_integer(_initialize);
  _flags = omc_Flags_getFlags(threadData, tmp1);
  /* skip box _flags; Flags.Flag */
  return _flags;
}

DLLExport
modelica_metatype omc_Flags_Flag_empty(threadData_t *threadData)
{
  modelica_metatype _flags = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(3, &Flags_Flag_FLAGS__desc, omc_UnorderedMap_new(threadData, boxvar_stringHashDjb2, boxvar_stringEqual, ((modelica_integer) 1)), omc_UnorderedMap_new(threadData, boxvar_stringHashDjb2, boxvar_stringEqual, ((modelica_integer) 1)));
  _flags = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _flags;
}

