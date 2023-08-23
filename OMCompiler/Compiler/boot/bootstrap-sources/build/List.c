#ifdef OMC_BASE_FILE
  #define OMC_FILE OMC_BASE_FILE
#else
  #define OMC_FILE "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/boot/build/tmp/List.c"
#endif
#include "omc_simulation_settings.h"
#include "List.h"
#define _OMC_LIT0_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,0,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,2,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "..."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,3,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#include "util/modelica.h"

#include "List_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_allCombinations4(threadData_t *threadData, modelica_metatype _x, modelica_metatype _ilst, modelica_metatype _iacc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_List_allCombinations4,2,0) {(void*) boxptr_List_allCombinations4,0}};
#define boxvar_List_allCombinations4 MMC_REFSTRUCTLIT(boxvar_lit_List_allCombinations4)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_allCombinations3(threadData_t *threadData, modelica_metatype _ilst1, modelica_metatype _ilst2, modelica_metatype _iacc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_List_allCombinations3,2,0) {(void*) boxptr_List_allCombinations3,0}};
#define boxvar_List_allCombinations3 MMC_REFSTRUCTLIT(boxvar_lit_List_allCombinations3)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_allCombinations2(threadData_t *threadData, modelica_metatype _ilst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_List_allCombinations2,2,0) {(void*) boxptr_List_allCombinations2,0}};
#define boxvar_List_allCombinations2 MMC_REFSTRUCTLIT(boxvar_lit_List_allCombinations2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_combinationMap1__tail2(threadData_t *threadData, modelica_metatype _inHead, modelica_metatype _inRest, modelica_fnptr _inMapFunc, modelica_metatype _inArg, modelica_metatype _inCombination, modelica_metatype _inAccumElems);
static const MMC_DEFSTRUCTLIT(boxvar_lit_List_combinationMap1__tail2,2,0) {(void*) boxptr_List_combinationMap1__tail2,0}};
#define boxvar_List_combinationMap1__tail2 MMC_REFSTRUCTLIT(boxvar_lit_List_combinationMap1__tail2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_combinationMap1__tail(threadData_t *threadData, modelica_metatype _inElements, modelica_fnptr _inMapFunc, modelica_metatype _inArg, modelica_metatype _inCombination, modelica_metatype _inAccumElems);
static const MMC_DEFSTRUCTLIT(boxvar_lit_List_combinationMap1__tail,2,0) {(void*) boxptr_List_combinationMap1__tail,0}};
#define boxvar_List_combinationMap1__tail MMC_REFSTRUCTLIT(boxvar_lit_List_combinationMap1__tail)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_combinationMap__tail(threadData_t *threadData, modelica_metatype _inElements, modelica_fnptr _inMapFunc, modelica_metatype _inCombination, modelica_metatype _inAccumElems);
static const MMC_DEFSTRUCTLIT(boxvar_lit_List_combinationMap__tail,2,0) {(void*) boxptr_List_combinationMap__tail,0}};
#define boxvar_List_combinationMap__tail MMC_REFSTRUCTLIT(boxvar_lit_List_combinationMap__tail)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_combination__tail(threadData_t *threadData, modelica_metatype _inElements, modelica_metatype _inCombination, modelica_metatype _inAccumElems);
static const MMC_DEFSTRUCTLIT(boxvar_lit_List_combination__tail,2,0) {(void*) boxptr_List_combination__tail,0}};
#define boxvar_List_combination__tail MMC_REFSTRUCTLIT(boxvar_lit_List_combination__tail)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_addPos(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inArray, modelica_integer _inIndex);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_List_addPos(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inArray, modelica_metatype _inIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_List_addPos,2,0) {(void*) boxptr_List_addPos,0}};
#define boxvar_List_addPos MMC_REFSTRUCTLIT(boxvar_lit_List_addPos)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_intersectionIntVec(threadData_t *threadData, modelica_metatype _inArray, modelica_metatype _inList1);
static const MMC_DEFSTRUCTLIT(boxvar_lit_List_intersectionIntVec,2,0) {(void*) boxptr_List_intersectionIntVec,0}};
#define boxvar_List_intersectionIntVec MMC_REFSTRUCTLIT(boxvar_lit_List_intersectionIntVec)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_uniqueIntNArr1(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inLength, modelica_integer _inMark, modelica_metatype _inMarkArray, modelica_metatype _inAccum);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_List_uniqueIntNArr1(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inLength, modelica_metatype _inMark, modelica_metatype _inMarkArray, modelica_metatype _inAccum);
static const MMC_DEFSTRUCTLIT(boxvar_lit_List_uniqueIntNArr1,2,0) {(void*) boxptr_List_uniqueIntNArr1,0}};
#define boxvar_List_uniqueIntNArr1 MMC_REFSTRUCTLIT(boxvar_lit_List_uniqueIntNArr1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_merge(threadData_t *threadData, modelica_metatype _inLeft, modelica_metatype _inRight, modelica_fnptr _inCompFunc, modelica_metatype _acc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_List_merge,2,0) {(void*) boxptr_List_merge,0}};
#define boxvar_List_merge MMC_REFSTRUCTLIT(boxvar_lit_List_merge)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_insertListSorted1(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inList2, modelica_fnptr _inCompFunc, modelica_metatype _inResultList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_List_insertListSorted1,2,0) {(void*) boxptr_List_insertListSorted1,0}};
#define boxvar_List_insertListSorted1 MMC_REFSTRUCTLIT(boxvar_lit_List_insertListSorted1)

DLLExport
modelica_metatype omc_List_trim(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fl, modelica_fnptr _fn)
{
  modelica_metatype _l = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _l = __omcQ_24in_5Fl;
#line 7708 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 7708 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 7708 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!((!listEmpty(_l)) && mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), listHead(_l)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, listHead(_l))))) break;
#line 7709 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _l = listRest(_l);
#line 86 OMC_FILE
  }
  _return: OMC_LABEL_UNUSED
  return _l;
}

DLLExport
modelica_metatype omc_List_maxElement(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _lessFn)
{
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
#line 7688 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _res = listHead(_inList);
#line 103 OMC_FILE

#line 7690 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 7690 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 7690 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = listRest(_inList); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 7690 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 7690 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 7691 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lessFn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lessFn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lessFn), 2))), _res, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lessFn), 1)))) (threadData, _res, _e)))
#line 7691 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 7692 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _res = _e;
#line 121 OMC_FILE
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _res;
}

DLLExport
modelica_metatype omc_List_minElement(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _lessFn)
{
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
#line 7666 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _res = listHead(_inList);
#line 140 OMC_FILE

#line 7668 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 7668 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 7668 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = listRest(_inList); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 7668 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 7668 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 7669 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lessFn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lessFn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lessFn), 2))), _e, _res) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lessFn), 1)))) (threadData, _e, _res)))
#line 7669 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 7670 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _res = _e;
#line 158 OMC_FILE
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _res;
}

DLLExport
modelica_boolean omc_List_contains(threadData_t *threadData, modelica_metatype _lst, modelica_metatype _elem, modelica_fnptr _eqFunc)
{
  modelica_boolean _res;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = 0 /* false */;
#line 7645 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 7645 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _i;
#line 7645 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _lst; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 7645 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 7645 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _i = MMC_CAR(tmpMeta1);
#line 7646 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqFunc), 2))), _i, _elem) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqFunc), 1)))) (threadData, _i, _elem)))
#line 7646 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 7647 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _res = 1 /* true */;
#line 191 OMC_FILE

#line 7648 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 195 OMC_FILE
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_List_contains(threadData_t *threadData, modelica_metatype _lst, modelica_metatype _elem, modelica_fnptr _eqFunc)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_List_contains(threadData, _lst, _elem, _eqFunc);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_allCombinations4(threadData_t *threadData, modelica_metatype _x, modelica_metatype _ilst, modelica_metatype _iacc)
{
  modelica_metatype _out = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
#line 218 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _ilst;
    tmp4_2 = _iacc;
    {
      modelica_metatype _l = NULL;
      modelica_metatype _lst = NULL;
      modelica_metatype _acc = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _l has no default value.
      // _lst has no default value.
      // _acc has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (!listEmpty(tmp4_1)) goto tmp3_end;

          _acc = tmp4_2;
          /* Pattern matching succeeded */
#line 7624 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta7 = mmc_mk_cons(_x, MMC_REFSTRUCTLIT(mmc_nil));
#line 7624 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta6 = mmc_mk_cons(tmpMeta7, _acc);
#line 7624 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = tmpMeta6;
#line 248 OMC_FILE
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_1);
          tmpMeta9 = MMC_CDR(tmp4_1);
          if (!listEmpty(tmpMeta9)) goto tmp3_end;

          _l = tmpMeta8;
          _acc = tmp4_2;
          /* Pattern matching succeeded */
#line 7625 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta11 = mmc_mk_cons(_x, _l);
#line 7625 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta10 = mmc_mk_cons(tmpMeta11, _acc);
#line 7625 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = tmpMeta10;
#line 270 OMC_FILE
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmp4_1);
          tmpMeta13 = MMC_CDR(tmp4_1);

          _l = tmpMeta12;
          _lst = tmpMeta13;
          _acc = tmp4_2;
          /* Pattern matching succeeded */
#line 7628 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta16 = mmc_mk_cons(_x, _l);
#line 7628 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta15 = mmc_mk_cons(tmpMeta16, _acc);
#line 7628 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* Tail recursive call */
#line 7628 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta14 = _x;
#line 7628 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _ilst = _lst;
#line 7628 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _iacc = tmpMeta15;
#line 7628 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _x = tmpMeta14;
#line 7628 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          goto _tailrecursive;
#line 7628 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* TODO: Make sure any eventual dead code below is never generated */
#line 305 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _out = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_allCombinations3(threadData_t *threadData, modelica_metatype _ilst1, modelica_metatype _ilst2, modelica_metatype _iacc)
{
  modelica_metatype _out = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
#line 331 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _ilst1;
    tmp4_2 = _ilst2;
    tmp4_3 = _iacc;
    {
      modelica_metatype _x = NULL;
      modelica_metatype _lst1 = NULL;
      modelica_metatype _lst2 = NULL;
      modelica_metatype _acc = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _x has no default value.
      // _lst1 has no default value.
      // _lst2 has no default value.
      // _acc has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;

          _acc = tmp4_3;
          /* Pattern matching succeeded */
#line 7604 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = listReverse(_acc);
#line 358 OMC_FILE
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);

          _x = tmpMeta6;
          _lst1 = tmpMeta7;
          _lst2 = tmp4_2;
          _acc = tmp4_3;
          /* Pattern matching succeeded */
#line 7607 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _acc = omc_List_allCombinations4(threadData, _x, _lst2, _acc);
#line 375 OMC_FILE
#line 7608 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* Tail recursive call */
#line 7608 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _ilst1 = _lst1;
#line 7608 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _ilst2 = _lst2;
#line 7608 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _iacc = _acc;
#line 7608 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          goto _tailrecursive;
#line 7608 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* TODO: Make sure any eventual dead code below is never generated */
#line 388 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _out = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_allCombinations2(threadData_t *threadData, modelica_metatype _ilst)
{
  modelica_metatype _out = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
#line 414 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ilst;
    {
      modelica_metatype _x = NULL;
      modelica_metatype _lst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _x has no default value.
      // _lst has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
#line 7583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
#line 7583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = tmpMeta6;
#line 436 OMC_FILE
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          _x = tmpMeta7;
          _lst = tmpMeta8;
          /* Pattern matching succeeded */
#line 7586 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _lst = omc_List_allCombinations2(threadData, _lst);
#line 451 OMC_FILE
#line 7587 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
#line 7587 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = omc_List_allCombinations3(threadData, _x, _lst, tmpMeta9);
#line 456 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _out = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out;
}

DLLExport
modelica_metatype omc_List_allCombinations(threadData_t *threadData, modelica_metatype _lst, modelica_metatype _maxTotalSize, modelica_metatype _info)
{
  modelica_metatype _out = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
#line 483 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _maxTotalSize;
    {
      modelica_integer _sz;
      modelica_integer _maxSz;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _sz has no default value.
      // _maxSz has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_boolean tmp8;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          _maxSz = tmp7  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
#line 7558 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _sz = (listLength(_lst)) * (mmc_unbox_integer(omc_List_applyAndFold(threadData, _lst, boxvar_intMul, boxvar_listLength, mmc_mk_integer(((modelica_integer) 1)))));
#line 508 OMC_FILE

#line 7559 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* Pattern-matching assignment */
#line 7559 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp8 = (_sz <= _maxSz);
#line 7559 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          if (1 /* true */ != tmp8) goto goto_2;
#line 516 OMC_FILE
#line 7560 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = omc_List_allCombinations2(threadData, _lst);
#line 519 OMC_FILE
          goto tmp3_done;
        }
        case 1: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
#line 7561 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = omc_List_allCombinations2(threadData, _lst);
#line 527 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _out = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out;
}

DLLExport
modelica_metatype omc_List_mapIndices(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _indices, modelica_fnptr _func)
{
  modelica_metatype _outList = NULL;
  modelica_integer _i;
  modelica_integer _idx;
  modelica_metatype _rest_idx = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _rest_lst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_integer tmp13;
  modelica_metatype tmpMeta14;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
  _i = ((modelica_integer) 1);
  // _idx has no default value.
  // _rest_idx has no default value.
  // _e has no default value.
  // _rest_lst has no default value.
#line 7511 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(listEmpty(_indices))
#line 7511 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 7512 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outList = _inList;
#line 583 OMC_FILE

#line 7513 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    goto _return;
#line 587 OMC_FILE
  }

#line 7516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 7516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta1 = _indices;
#line 7516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
#line 7516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta2 = MMC_CAR(tmpMeta1);
#line 7516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta3 = MMC_CDR(tmpMeta1);
#line 7516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp4 = mmc_unbox_integer(tmpMeta2);
#line 7516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _idx = tmp4  /* pattern as ty=Integer */;
#line 7516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _rest_idx = tmpMeta3;
#line 606 OMC_FILE

#line 7517 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _rest_lst = _inList;
#line 610 OMC_FILE

#line 7518 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
#line 7518 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta5;
#line 616 OMC_FILE

#line 7520 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 7520 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 7520 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!(!listEmpty(_rest_lst))) break;
#line 7521 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching assignment */
#line 7521 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta6 = _rest_lst;
#line 7521 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (listEmpty(tmpMeta6)) MMC_THROW_INTERNAL();
#line 7521 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta7 = MMC_CAR(tmpMeta6);
#line 7521 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta8 = MMC_CDR(tmpMeta6);
#line 7521 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e = tmpMeta7;
#line 7521 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _rest_lst = tmpMeta8;
#line 638 OMC_FILE

#line 7523 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if((_i == _idx))
#line 7523 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 7524 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta9 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e), _outList);
#line 7524 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta9;
#line 648 OMC_FILE

#line 7526 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(listEmpty(_rest_idx))
#line 7526 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 7527 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outList = omc_List_append__reverse(threadData, _rest_lst, _outList);
#line 656 OMC_FILE

#line 7528 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 660 OMC_FILE
      }
      else
      {
#line 7530 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        /* Pattern-matching assignment */
#line 7530 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta10 = _rest_idx;
#line 7530 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if (listEmpty(tmpMeta10)) MMC_THROW_INTERNAL();
#line 7530 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta11 = MMC_CAR(tmpMeta10);
#line 7530 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta12 = MMC_CDR(tmpMeta10);
#line 7530 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp13 = mmc_unbox_integer(tmpMeta11);
#line 7530 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _idx = tmp13  /* pattern as ty=Integer */;
#line 7530 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _rest_idx = tmpMeta12;
#line 680 OMC_FILE
      }
    }
    else
    {
#line 7533 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta14 = mmc_mk_cons(_e, _outList);
#line 7533 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta14;
#line 689 OMC_FILE
    }

#line 7536 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _i = ((modelica_integer) 1) + _i;
#line 694 OMC_FILE
  }

#line 7539 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 699 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_boolean omc_List_isSorted(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
  modelica_boolean _b;
  modelica_boolean _found;
  modelica_metatype _prev = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = 1 /* true */;
  // _found has no default value.
  // _prev has no default value.
#line 7483 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(listEmpty(_inList))
#line 7483 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 7484 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    goto _return;
#line 726 OMC_FILE
  }

#line 7486 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 7486 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta1 = _inList;
#line 7486 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
#line 7486 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta2 = MMC_CAR(tmpMeta1);
#line 7486 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta3 = MMC_CDR(tmpMeta1);
#line 7486 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _prev = tmpMeta2;
#line 741 OMC_FILE

#line 7487 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 7487 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 7487 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta4 = listRest(_inList); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
#line 7487 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 7487 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta4);
#line 7488 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _prev, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _prev, _e))))
#line 7488 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 7489 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _b = 0 /* false */;
#line 759 OMC_FILE

#line 7490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 763 OMC_FILE
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_List_isSorted(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_List_isSorted(threadData, _inList, _inFunc);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLExport
modelica_metatype omc_List_mapFirst(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
  modelica_metatype _outElement = NULL;
  modelica_boolean _found;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElement has no default value.
  // _found has no default value.
#line 7460 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 7460 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 7460 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 7460 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 7460 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 7461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching tuple assignment */
#line 7461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, &tmpMeta2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, &tmpMeta2);
#line 7461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outElement = tmpMeta4;
#line 7461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp3 = mmc_unbox_integer(tmpMeta2);
#line 7461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _found = tmp3  /* pattern as ty=Boolean */;
#line 813 OMC_FILE

#line 7463 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(_found)
#line 7463 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 7464 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 821 OMC_FILE
      }
    }
  }

#line 7467 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  MMC_THROW_INTERNAL();
#line 828 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outElement;
}

DLLExport
modelica_metatype omc_List_separate1OnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_metatype _inArg1, modelica_metatype *out_outListFalse)
{
  modelica_metatype _outListTrue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outListFalse = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outListTrue = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outListFalse = tmpMeta2;
#line 7438 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 7438 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 7438 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
#line 7438 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 7438 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta3);
#line 7439 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e, _inArg1)))
#line 7439 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 7440 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta4 = mmc_mk_cons(_e, _outListTrue);
#line 7440 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outListTrue = tmpMeta4;
#line 868 OMC_FILE
      }
      else
      {
#line 7442 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta5 = mmc_mk_cons(_e, _outListFalse);
#line 7442 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outListFalse = tmpMeta5;
#line 876 OMC_FILE
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outListFalse) { *out_outListFalse = _outListFalse; }
  return _outListTrue;
}

DLLExport
modelica_metatype omc_List_separateOnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_metatype *out_outListFalse)
{
  modelica_metatype _outListTrue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outListFalse = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outListTrue = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outListFalse = tmpMeta2;
#line 7414 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 7414 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 7414 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
#line 7414 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 7414 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta3);
#line 7415 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e)))
#line 7415 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 7416 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta4 = mmc_mk_cons(_e, _outListTrue);
#line 7416 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outListTrue = tmpMeta4;
#line 920 OMC_FILE
      }
      else
      {
#line 7418 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta5 = mmc_mk_cons(_e, _outListFalse);
#line 7418 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outListFalse = tmpMeta5;
#line 928 OMC_FILE
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outListFalse) { *out_outListFalse = _outListFalse; }
  return _outListTrue;
}

DLLExport
modelica_boolean omc_List_any(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
  modelica_boolean _outResult;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outResult has no default value.
#line 7391 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 7391 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 7391 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 7391 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 7391 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 7392 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e)))
#line 7392 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 7393 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outResult = 1 /* true */;
#line 962 OMC_FILE

#line 7394 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 966 OMC_FILE
      }
    }
  }

#line 7398 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outResult = 0 /* false */;
#line 973 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outResult;
}
modelica_metatype boxptr_List_any(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
  modelica_boolean _outResult;
  modelica_metatype out_outResult;
  _outResult = omc_List_any(threadData, _inList, _inFunc);
  out_outResult = mmc_mk_icon(_outResult);
  return out_outResult;
}

DLLExport
modelica_boolean omc_List_none(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
  modelica_boolean _outResult;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outResult has no default value.
#line 7369 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 7369 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 7369 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 7369 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 7369 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 7370 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e)))
#line 7370 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 7371 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outResult = 0 /* false */;
#line 1011 OMC_FILE

#line 7372 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 1015 OMC_FILE
      }
    }
  }

#line 7376 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outResult = 1 /* true */;
#line 1022 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outResult;
}
modelica_metatype boxptr_List_none(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
  modelica_boolean _outResult;
  modelica_metatype out_outResult;
  _outResult = omc_List_none(threadData, _inList, _inFunc);
  out_outResult = mmc_mk_icon(_outResult);
  return out_outResult;
}

DLLExport
modelica_boolean omc_List_all(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
  modelica_boolean _outResult;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outResult has no default value.
#line 7347 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 7347 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 7347 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 7347 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 7347 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 7348 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e))))
#line 7348 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 7349 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outResult = 0 /* false */;
#line 1060 OMC_FILE

#line 7350 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 1064 OMC_FILE
      }
    }
  }

#line 7354 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outResult = 1 /* true */;
#line 1071 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outResult;
}
modelica_metatype boxptr_List_all(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
  modelica_boolean _outResult;
  modelica_metatype out_outResult;
  _outResult = omc_List_all(threadData, _inList, _inFunc);
  out_outResult = mmc_mk_icon(_outResult);
  return out_outResult;
}

DLLExport
modelica_metatype omc_List_mkOption(threadData_t *threadData, modelica_metatype _inList)
{
  modelica_metatype _outOption = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outOption has no default value.
#line 7332 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outOption = (listEmpty(_inList)?mmc_mk_none():mmc_mk_some(_inList));
#line 1093 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outOption;
}

DLLExport
modelica_metatype omc_List_toListWithPositions(threadData_t *threadData, modelica_metatype _inList)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _pos;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  _pos = ((modelica_integer) 1);
#line 7318 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 7318 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 7318 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 7318 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 7318 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 7319 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = mmc_mk_box2(0, _e, mmc_mk_integer(_pos));
#line 7319 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = mmc_mk_cons(tmpMeta4, _outList);
#line 7319 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta3;
#line 1129 OMC_FILE

#line 7320 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _pos = ((modelica_integer) 1) + _pos;
#line 1133 OMC_FILE
    }
  }

#line 7322 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 1139 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_boolean omc_List_listIsLonger(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2)
{
  modelica_boolean _isLonger;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isLonger has no default value.
#line 7309 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _isLonger = (listLength(_inList1) > listLength(_inList2));
#line 1153 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _isLonger;
}
modelica_metatype boxptr_List_listIsLonger(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2)
{
  modelica_boolean _isLonger;
  modelica_metatype out_isLonger;
  _isLonger = omc_List_listIsLonger(threadData, _inList1, _inList2);
  out_isLonger = mmc_mk_icon(_isLonger);
  return out_isLonger;
}

DLLExport
modelica_metatype omc_List_removeEqualPrefix(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inCompFunc, modelica_metatype *out_outList2)
{
  modelica_metatype _outList1 = NULL;
  modelica_metatype _outList2 = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outList1 = _inList1;
  _outList2 = _inList2;
  // _e1 has no default value.
  // _e2 has no default value.
#line 7294 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 7294 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 7294 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!(!(listEmpty(_outList1) || listEmpty(_outList2)))) break;
#line 7295 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e1 = listHead(_outList1);
#line 1187 OMC_FILE

#line 7296 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e2 = listHead(_outList2);
#line 1191 OMC_FILE

#line 7297 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _e1, _e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _e1, _e2))))
#line 7297 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 7297 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      break;
#line 1199 OMC_FILE
    }

#line 7298 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outList1 = listRest(_outList1);
#line 1204 OMC_FILE

#line 7299 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outList2 = listRest(_outList2);
#line 1208 OMC_FILE
  }
  _return: OMC_LABEL_UNUSED
  if (out_outList2) { *out_outList2 = _outList2; }
  return _outList1;
}

DLLExport
modelica_boolean omc_List_allReferenceEq(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2)
{
  modelica_boolean _outEqual;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqual has no default value.
#line 1223 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inList1;
    tmp4_2 = _inList2;
    {
      modelica_metatype _el1 = NULL;
      modelica_metatype _el2 = NULL;
      modelica_metatype _rest1 = NULL;
      modelica_metatype _rest2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _el1 has no default value.
      // _el2 has no default value.
      // _rest1 has no default value.
      // _rest2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          modelica_boolean tmp11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          _el1 = tmpMeta6;
          _rest1 = tmpMeta7;
          _el2 = tmpMeta8;
          _rest2 = tmpMeta9;
          /* Pattern matching succeeded */
#line 7268 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp10 = (modelica_boolean)referenceEq(_el1, _el2);
#line 7268 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          if(tmp10)
#line 7268 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          {
#line 7268 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            /* Tail recursive call */
#line 7268 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            _inList1 = _rest1;
#line 7268 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            _inList2 = _rest2;
#line 7268 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            goto _tailrecursive;
#line 7268 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            /* TODO: Make sure any eventual dead code below is never generated */
#line 7268 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          }
#line 7268 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          else
#line 7268 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          {
#line 7268 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            tmp11 = 0 /* false */;
#line 7268 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          }
#line 7268 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp1 = tmp11;
#line 1288 OMC_FILE
          goto tmp3_done;
        }
        case 1: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
#line 7270 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp1 = 1 /* true */;
#line 1297 OMC_FILE
          goto tmp3_done;
        }
        case 2: {

          /* Pattern matching succeeded */
#line 7271 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp1 = 0 /* false */;
#line 1305 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outEqual = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outEqual;
}
modelica_metatype boxptr_List_allReferenceEq(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2)
{
  modelica_boolean _outEqual;
  modelica_metatype out_outEqual;
  _outEqual = omc_List_allReferenceEq(threadData, _inList1, _inList2);
  out_outEqual = mmc_mk_icon(_outEqual);
  return out_outEqual;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_combinationMap1__tail2(threadData_t *threadData, modelica_metatype _inHead, modelica_metatype _inRest, modelica_fnptr _inMapFunc, modelica_metatype _inArg, modelica_metatype _inCombination, modelica_metatype _inAccumElems)
{
  modelica_metatype _outElements = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElements has no default value.
#line 1339 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _inHead;
    tmp4_2 = _inCombination;
    tmp4_3 = _inAccumElems;
    {
      modelica_metatype _head = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _comb = NULL;
      modelica_metatype _accum = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _head has no default value.
      // _rest has no default value.
      // _comb has no default value.
      // _accum has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);

          _head = tmpMeta6;
          _rest = tmpMeta7;
          _comb = tmp4_2;
          _accum = tmp4_3;
          /* Pattern matching succeeded */
#line 7247 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta8 = mmc_mk_cons(_head, _comb);
#line 7247 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _accum = omc_List_combinationMap1__tail(threadData, _inRest, ((modelica_fnptr) _inMapFunc), _inArg, tmpMeta8, _accum);
#line 1376 OMC_FILE
#line 7248 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* Tail recursive call */
#line 7248 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inHead = _rest;
#line 7248 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inCombination = _comb;
#line 7248 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inAccumElems = _accum;
#line 7248 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          goto _tailrecursive;
#line 7248 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* TODO: Make sure any eventual dead code below is never generated */
#line 1389 OMC_FILE
          goto tmp3_done;
        }
        case 1: {

          /* Pattern matching succeeded */
#line 7251 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = _inAccumElems;
#line 1397 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outElements = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outElements;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_combinationMap1__tail(threadData_t *threadData, modelica_metatype _inElements, modelica_fnptr _inMapFunc, modelica_metatype _inArg, modelica_metatype _inCombination, modelica_metatype _inAccumElems)
{
  modelica_metatype _outElements = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElements has no default value.
#line 1423 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inElements;
    {
      modelica_metatype _head = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _acc = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _head has no default value.
      // _rest has no default value.
      // _acc has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _head = tmpMeta6;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
#line 7212 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _acc = _inAccumElems;
#line 1453 OMC_FILE

#line 7213 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          {
#line 7213 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            modelica_metatype _e;
#line 7213 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            for (tmpMeta8 = _head; !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
#line 7213 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            {
#line 7213 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              _e = MMC_CAR(tmpMeta8);
#line 7214 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              tmpMeta9 = mmc_mk_cons(_e, _inCombination);
#line 7214 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              _acc = omc_List_combinationMap1__tail(threadData, _rest, ((modelica_fnptr) _inMapFunc), _inArg, tmpMeta9, _acc);
#line 1469 OMC_FILE
            }
          }
#line 7216 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = _acc;
#line 1474 OMC_FILE
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;

          /* Pattern matching succeeded */
#line 7219 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta11 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), listReverse(_inCombination), _inArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, listReverse(_inCombination), _inArg), _inAccumElems);
#line 7219 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = tmpMeta11;
#line 1485 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outElements = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outElements;
}

DLLExport
modelica_metatype omc_List_combinationMap1(threadData_t *threadData, modelica_metatype _inElements, modelica_fnptr _inMapFunc, modelica_metatype _inArg)
{
  modelica_metatype _outElements = NULL;
  modelica_metatype _elems = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElements has no default value.
  // _elems has no default value.
#line 7186 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
#line 7186 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
#line 7186 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _elems = omc_List_combinationMap1__tail(threadData, _inElements, ((modelica_fnptr) _inMapFunc), _inArg, tmpMeta1, tmpMeta2);
#line 1521 OMC_FILE

#line 7187 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outElements = listReverse(_elems);
#line 1525 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outElements;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_combinationMap__tail(threadData_t *threadData, modelica_metatype _inElements, modelica_fnptr _inMapFunc, modelica_metatype _inCombination, modelica_metatype _inAccumElems)
{
  modelica_metatype _outElements = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElements has no default value.
#line 1537 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inElements;
    {
      modelica_metatype _head = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _acc = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _head has no default value.
      // _rest has no default value.
      // _acc has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _head = tmpMeta6;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
#line 7153 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _acc = _inAccumElems;
#line 1567 OMC_FILE

#line 7154 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          {
#line 7154 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            modelica_metatype _e;
#line 7154 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            for (tmpMeta8 = _head; !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
#line 7154 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            {
#line 7154 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              _e = MMC_CAR(tmpMeta8);
#line 7155 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              tmpMeta9 = mmc_mk_cons(_e, _inCombination);
#line 7155 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              _acc = omc_List_combinationMap__tail(threadData, _rest, ((modelica_fnptr) _inMapFunc), tmpMeta9, _acc);
#line 1583 OMC_FILE
            }
          }
#line 7157 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = _acc;
#line 1588 OMC_FILE
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;

          /* Pattern matching succeeded */
#line 7160 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta11 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), listReverse(_inCombination)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, listReverse(_inCombination)), _inAccumElems);
#line 7160 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = tmpMeta11;
#line 1599 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outElements = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outElements;
}

DLLExport
modelica_metatype omc_List_combinationMap(threadData_t *threadData, modelica_metatype _inElements, modelica_fnptr _inMapFunc)
{
  modelica_metatype _outElements = NULL;
  modelica_metatype _elems = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElements has no default value.
  // _elems has no default value.
#line 7129 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
#line 7129 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
#line 7129 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _elems = omc_List_combinationMap__tail(threadData, _inElements, ((modelica_fnptr) _inMapFunc), tmpMeta1, tmpMeta2);
#line 1635 OMC_FILE

#line 7130 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outElements = listReverse(_elems);
#line 1639 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outElements;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_combination__tail(threadData_t *threadData, modelica_metatype _inElements, modelica_metatype _inCombination, modelica_metatype _inAccumElems)
{
  modelica_metatype _outElements = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElements has no default value.
#line 1651 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inElements;
    {
      modelica_metatype _head = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _acc = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _head has no default value.
      // _rest has no default value.
      // _acc has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _head = tmpMeta6;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
#line 7099 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _acc = _inAccumElems;
#line 1681 OMC_FILE

#line 7100 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          {
#line 7100 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            modelica_metatype _e;
#line 7100 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            for (tmpMeta8 = _head; !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
#line 7100 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            {
#line 7100 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              _e = MMC_CAR(tmpMeta8);
#line 7101 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              tmpMeta9 = mmc_mk_cons(_e, _inCombination);
#line 7101 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              _acc = omc_List_combination__tail(threadData, _rest, tmpMeta9, _acc);
#line 1697 OMC_FILE
            }
          }
#line 7103 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = _acc;
#line 1702 OMC_FILE
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;

          /* Pattern matching succeeded */
#line 7106 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta11 = mmc_mk_cons(listReverse(_inCombination), _inAccumElems);
#line 7106 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = tmpMeta11;
#line 1713 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outElements = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outElements;
}

DLLExport
modelica_metatype omc_List_combination(threadData_t *threadData, modelica_metatype _inElements)
{
  modelica_metatype _outElements = NULL;
  modelica_metatype _elems = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElements has no default value.
  // _elems has no default value.
#line 7077 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(listEmpty(_inElements))
#line 7077 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 7078 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
#line 7078 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outElements = tmpMeta1;
#line 1752 OMC_FILE
  }
  else
  {
#line 7080 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
#line 7080 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 7080 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _elems = omc_List_combination__tail(threadData, _inElements, tmpMeta2, tmpMeta3);
#line 1762 OMC_FILE

#line 7081 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outElements = listReverse(_elems);
#line 1766 OMC_FILE
  }
  _return: OMC_LABEL_UNUSED
  return _outElements;
}

DLLExport
modelica_metatype omc_List_splitEqualPrefix(threadData_t *threadData, modelica_metatype _inFullList, modelica_metatype _inPrefixList, modelica_fnptr _inEqFunc, modelica_metatype _inAccum, modelica_metatype *out_outRest)
{
  modelica_metatype _outPrefix = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outRest = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _rest_e1 = NULL;
  modelica_metatype _rest_e2 = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outPrefix = tmpMeta1;
  // _outRest has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  _rest_e1 = _inFullList;
  _rest_e2 = _inPrefixList;
#line 7046 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 7046 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 7046 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!1 /* true */) break;
#line 7047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if((listEmpty(_rest_e1) || listEmpty(_rest_e2)))
#line 7047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 7048 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      break;
#line 1810 OMC_FILE
    }

#line 7051 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching assignment */
#line 7051 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = _rest_e1;
#line 7051 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
#line 7051 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_CAR(tmpMeta2);
#line 7051 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta4 = MMC_CDR(tmpMeta2);
#line 7051 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e1 = tmpMeta3;
#line 7051 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _rest_e1 = tmpMeta4;
#line 1827 OMC_FILE

#line 7052 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching assignment */
#line 7052 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta5 = _rest_e2;
#line 7052 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
#line 7052 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta6 = MMC_CAR(tmpMeta5);
#line 7052 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta7 = MMC_CDR(tmpMeta5);
#line 7052 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e2 = tmpMeta6;
#line 7052 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _rest_e2 = tmpMeta7;
#line 1843 OMC_FILE

#line 7054 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqFunc), 2))), _e1, _e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqFunc), 1)))) (threadData, _e1, _e2))))
#line 7054 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 7055 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      break;
#line 1851 OMC_FILE
    }

#line 7058 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta8 = mmc_mk_cons(_e1, _outPrefix);
#line 7058 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outPrefix = tmpMeta8;
#line 1858 OMC_FILE
  }

#line 7061 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outPrefix = listReverseInPlace(_outPrefix);
#line 1863 OMC_FILE

#line 7062 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outRest = _rest_e1;
#line 1867 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outRest) { *out_outRest = _outRest; }
  return _outPrefix;
}

DLLExport
modelica_metatype omc_List_findSome1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg)
{
  modelica_metatype _outVal = NULL;
  modelica_metatype _retOpt = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVal has no default value.
  _retOpt = mmc_mk_none();
  // _e has no default value.
  _rest = _inList;
#line 7017 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 7017 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 7017 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!isNone(_retOpt)) break;
#line 7018 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching assignment */
#line 7018 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = _rest;
#line 7018 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
#line 7018 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = MMC_CAR(tmpMeta1);
#line 7018 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_CDR(tmpMeta1);
#line 7018 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e = tmpMeta2;
#line 7018 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _rest = tmpMeta3;
#line 1910 OMC_FILE

#line 7019 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _retOpt = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg);
#line 1914 OMC_FILE
  }

#line 1917 OMC_FILE
  { /* match expression */
    modelica_metatype tmp7_1;
    tmp7_1 = _retOpt;
    {
      volatile mmc_switch_type tmp7;
      int tmp8;
      tmp7 = 0;
      for (; tmp7 < 1; tmp7++) {
        switch (MMC_SWITCH_CAST(tmp7)) {
        case 0: {
          modelica_metatype tmpMeta9;
          if (optionNone(tmp7_1)) goto tmp6_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 1));
          _outVal = tmpMeta9;
          /* Pattern matching succeeded */
#line 7023 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta4 = _outVal;
#line 1935 OMC_FILE
          goto tmp6_done;
        }
        }
        goto tmp6_end;
        tmp6_end: ;
      }
      goto goto_5;
      goto_5:;
      MMC_THROW_INTERNAL();
      goto tmp6_done;
      tmp6_done:;
    }
  }
  _outVal = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _outVal;
}

DLLExport
modelica_metatype omc_List_findSome(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
  modelica_metatype _outVal = NULL;
  modelica_metatype _retOpt = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVal has no default value.
  _retOpt = mmc_mk_none();
  // _e has no default value.
  _rest = _inList;
#line 6990 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 6990 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6990 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!isNone(_retOpt)) break;
#line 6991 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching assignment */
#line 6991 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = _rest;
#line 6991 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
#line 6991 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = MMC_CAR(tmpMeta1);
#line 6991 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_CDR(tmpMeta1);
#line 6991 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e = tmpMeta2;
#line 6991 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _rest = tmpMeta3;
#line 1991 OMC_FILE

#line 6992 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _retOpt = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e);
#line 1995 OMC_FILE
  }

#line 1998 OMC_FILE
  { /* match expression */
    modelica_metatype tmp7_1;
    tmp7_1 = _retOpt;
    {
      volatile mmc_switch_type tmp7;
      int tmp8;
      tmp7 = 0;
      for (; tmp7 < 1; tmp7++) {
        switch (MMC_SWITCH_CAST(tmp7)) {
        case 0: {
          modelica_metatype tmpMeta9;
          if (optionNone(tmp7_1)) goto tmp6_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 1));
          _outVal = tmpMeta9;
          /* Pattern matching succeeded */
#line 6996 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta4 = _outVal;
#line 2016 OMC_FILE
          goto tmp6_done;
        }
        }
        goto tmp6_end;
        tmp6_end: ;
      }
      goto goto_5;
      goto_5:;
      MMC_THROW_INTERNAL();
      goto tmp6_done;
      tmp6_done:;
    }
  }
  _outVal = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _outVal;
}

DLLExport
modelica_metatype omc_List_findMap3(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_boolean *out_outFound)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean _outFound;
  modelica_metatype _e = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  _outFound = 0 /* false */;
  // _e has no default value.
  _rest = _inList;
#line 6966 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 6966 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6966 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!((!listEmpty(_rest)) && (!_outFound))) break;
#line 6967 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching assignment */
#line 6967 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = _rest;
#line 6967 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
#line 6967 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_CAR(tmpMeta2);
#line 6967 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta4 = MMC_CDR(tmpMeta2);
#line 6967 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e = tmpMeta3;
#line 6967 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _rest = tmpMeta4;
#line 2077 OMC_FILE

#line 6968 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching tuple assignment */
#line 6968 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3, &tmpMeta5) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3, &tmpMeta5);
#line 6968 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e = tmpMeta7;
#line 6968 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp6 = mmc_unbox_integer(tmpMeta5);
#line 6968 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outFound = tmp6  /* pattern as ty=Boolean */;
#line 2089 OMC_FILE

#line 6969 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta8 = mmc_mk_cons(_e, _outList);
#line 6969 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outList = tmpMeta8;
#line 2095 OMC_FILE
  }

#line 6972 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = omc_List_append__reverse(threadData, _outList, _rest);
#line 2100 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outFound) { *out_outFound = _outFound; }
  return _outList;
}
modelica_metatype boxptr_List_findMap3(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_metatype *out_outFound)
{
  modelica_boolean _outFound;
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  _outList = omc_List_findMap3(threadData, _inList, _inFunc, _inArg1, _inArg2, _inArg3, &_outFound);
  /* skip box _outList; list<polymorphic<T>> */
  if (out_outFound) { *out_outFound = mmc_mk_icon(_outFound); }
  return _outList;
}

DLLExport
modelica_metatype omc_List_findMap2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_boolean *out_outFound)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean _outFound;
  modelica_metatype _e = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  _outFound = 0 /* false */;
  // _e has no default value.
  _rest = _inList;
#line 6933 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 6933 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6933 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!((!listEmpty(_rest)) && (!_outFound))) break;
#line 6934 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching assignment */
#line 6934 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = _rest;
#line 6934 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
#line 6934 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_CAR(tmpMeta2);
#line 6934 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta4 = MMC_CDR(tmpMeta2);
#line 6934 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e = tmpMeta3;
#line 6934 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _rest = tmpMeta4;
#line 2158 OMC_FILE

#line 6935 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching tuple assignment */
#line 6935 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, &tmpMeta5) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, &tmpMeta5);
#line 6935 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e = tmpMeta7;
#line 6935 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp6 = mmc_unbox_integer(tmpMeta5);
#line 6935 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outFound = tmp6  /* pattern as ty=Boolean */;
#line 2170 OMC_FILE

#line 6936 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta8 = mmc_mk_cons(_e, _outList);
#line 6936 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outList = tmpMeta8;
#line 2176 OMC_FILE
  }

#line 6939 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = omc_List_append__reverse(threadData, _outList, _rest);
#line 2181 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outFound) { *out_outFound = _outFound; }
  return _outList;
}
modelica_metatype boxptr_List_findMap2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype *out_outFound)
{
  modelica_boolean _outFound;
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  _outList = omc_List_findMap2(threadData, _inList, _inFunc, _inArg1, _inArg2, &_outFound);
  /* skip box _outList; list<polymorphic<T>> */
  if (out_outFound) { *out_outFound = mmc_mk_icon(_outFound); }
  return _outList;
}

DLLExport
modelica_metatype omc_List_findMap1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_boolean *out_outFound)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean _outFound;
  modelica_metatype _e = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  _outFound = 0 /* false */;
  // _e has no default value.
  _rest = _inList;
#line 6902 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 6902 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6902 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!((!listEmpty(_rest)) && (!_outFound))) break;
#line 6903 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching assignment */
#line 6903 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = _rest;
#line 6903 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
#line 6903 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_CAR(tmpMeta2);
#line 6903 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta4 = MMC_CDR(tmpMeta2);
#line 6903 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e = tmpMeta3;
#line 6903 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _rest = tmpMeta4;
#line 2239 OMC_FILE

#line 6904 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching tuple assignment */
#line 6904 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, &tmpMeta5) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, &tmpMeta5);
#line 6904 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e = tmpMeta7;
#line 6904 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp6 = mmc_unbox_integer(tmpMeta5);
#line 6904 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outFound = tmp6  /* pattern as ty=Boolean */;
#line 2251 OMC_FILE

#line 6905 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta8 = mmc_mk_cons(_e, _outList);
#line 6905 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outList = tmpMeta8;
#line 2257 OMC_FILE
  }

#line 6908 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = omc_List_append__reverse(threadData, _outList, _rest);
#line 2262 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outFound) { *out_outFound = _outFound; }
  return _outList;
}
modelica_metatype boxptr_List_findMap1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype *out_outFound)
{
  modelica_boolean _outFound;
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  _outList = omc_List_findMap1(threadData, _inList, _inFunc, _inArg1, &_outFound);
  /* skip box _outList; list<polymorphic<T>> */
  if (out_outFound) { *out_outFound = mmc_mk_icon(_outFound); }
  return _outList;
}

DLLExport
modelica_metatype omc_List_findMap(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_boolean *out_outFound)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean _outFound;
  modelica_metatype _e = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  _outFound = 0 /* false */;
  // _e has no default value.
  _rest = _inList;
#line 6873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 6873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!((!listEmpty(_rest)) && (!_outFound))) break;
#line 6874 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching assignment */
#line 6874 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = _rest;
#line 6874 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
#line 6874 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_CAR(tmpMeta2);
#line 6874 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta4 = MMC_CDR(tmpMeta2);
#line 6874 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e = tmpMeta3;
#line 6874 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _rest = tmpMeta4;
#line 2320 OMC_FILE

#line 6875 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching tuple assignment */
#line 6875 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, &tmpMeta5) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, &tmpMeta5);
#line 6875 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e = tmpMeta7;
#line 6875 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp6 = mmc_unbox_integer(tmpMeta5);
#line 6875 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outFound = tmp6  /* pattern as ty=Boolean */;
#line 2332 OMC_FILE

#line 6876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta8 = mmc_mk_cons(_e, _outList);
#line 6876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outList = tmpMeta8;
#line 2338 OMC_FILE
  }

#line 6879 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = omc_List_append__reverse(threadData, _outList, _rest);
#line 2343 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outFound) { *out_outFound = _outFound; }
  return _outList;
}
modelica_metatype boxptr_List_findMap(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype *out_outFound)
{
  modelica_boolean _outFound;
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  _outList = omc_List_findMap(threadData, _inList, _inFunc, &_outFound);
  /* skip box _outList; list<polymorphic<T>> */
  if (out_outFound) { *out_outFound = mmc_mk_icon(_outFound); }
  return _outList;
}

DLLExport
modelica_metatype omc_List_accumulateMapFoldAccum(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inFoldArg, modelica_metatype *out_outFoldArg)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outFoldArg = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  _outFoldArg = _inFoldArg;
#line 6849 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6849 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 6849 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 6849 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 6849 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 6850 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _outFoldArg, _outList ,&_outFoldArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _outFoldArg, _outList ,&_outFoldArg);
#line 2384 OMC_FILE
    }
  }

#line 6852 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverse(_outList);
#line 2390 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outFoldArg) { *out_outFoldArg = _outFoldArg; }
  return _outList;
}

DLLExport
modelica_metatype omc_List_accumulateMapFold(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inFoldArg, modelica_metatype *out_outFoldArg)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outFoldArg = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  _outFoldArg = _inFoldArg;
#line 6849 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6849 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 6849 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 6849 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 6849 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 6850 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _outFoldArg, _outList ,&_outFoldArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _outFoldArg, _outList ,&_outFoldArg);
#line 2421 OMC_FILE
    }
  }

#line 6852 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverse(_outList);
#line 2427 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outFoldArg) { *out_outFoldArg = _outFoldArg; }
  return _outList;
}

DLLExport
modelica_metatype omc_List_accumulateMapAccum1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inArg)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
#line 6826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 6826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 6826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 6826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 6827 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e, _inArg, _outList) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e, _inArg, _outList);
#line 2456 OMC_FILE
    }
  }

#line 6829 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverse(_outList);
#line 2462 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_accumulateMapAccum(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
#line 6804 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6804 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 6804 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 6804 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 6804 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 6805 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e, _outList) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e, _outList);
#line 2490 OMC_FILE
    }
  }

#line 6807 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverse(_outList);
#line 2496 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_accumulateMapReverse(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
#line 6785 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6785 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 6785 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 6785 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 6785 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 6786 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e, _outList) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e, _outList);
#line 2524 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_accumulateMap(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
#line 6804 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6804 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 6804 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 6804 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 6804 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 6805 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e, _outList) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e, _outList);
#line 2554 OMC_FILE
    }
  }

#line 6807 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverse(_outList);
#line 2560 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_map1FoldSplit(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_fnptr _inFoldFunc, modelica_metatype _inConstArg, modelica_metatype _inStartValue, modelica_metatype *out_outResult)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outResult = NULL;
  modelica_metatype _eo = NULL;
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  _outResult = _inStartValue;
  // _eo has no default value.
  // _res has no default value.
#line 6761 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6761 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 6761 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 6761 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 6761 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 6762 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _eo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e, _inConstArg ,&_res) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e, _inConstArg ,&_res);
#line 2595 OMC_FILE

#line 6763 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _res, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _res, _outResult);
#line 2599 OMC_FILE

#line 6764 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = mmc_mk_cons(_eo, _outList);
#line 6764 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta3;
#line 2605 OMC_FILE
    }
  }

#line 6766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 2611 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outResult) { *out_outResult = _outResult; }
  return _outList;
}

DLLExport
modelica_metatype omc_List_mapFoldSplit(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_fnptr _inFoldFunc, modelica_metatype _inStartValue, modelica_metatype *out_outResult)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outResult = NULL;
  modelica_metatype _eo = NULL;
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  _outResult = _inStartValue;
  // _eo has no default value.
  // _res has no default value.
#line 6727 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6727 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 6727 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 6727 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 6727 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 6728 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _eo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e ,&_res) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e ,&_res);
#line 2647 OMC_FILE

#line 6729 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _res, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _res, _outResult);
#line 2651 OMC_FILE

#line 6730 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = mmc_mk_cons(_eo, _outList);
#line 6730 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta3;
#line 2657 OMC_FILE
    }
  }

#line 6732 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 2663 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outResult) { *out_outResult = _outResult; }
  return _outList;
}

DLLExport
modelica_metatype omc_List_generateReverse(threadData_t *threadData, modelica_metatype _inArg, modelica_fnptr _inFunc)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean _cont;
  modelica_metatype _arg = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  // _cont has no default value.
  _arg = _inArg;
  // _e has no default value.
#line 6696 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 6696 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6696 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!1 /* true */) break;
#line 6697 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching tuple assignment */
#line 6697 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _arg, &tmpMeta2, &tmpMeta3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _arg, &tmpMeta2, &tmpMeta3);
#line 6697 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _arg = tmpMeta5;
#line 6697 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp4 = mmc_unbox_integer(tmpMeta3);
#line 6697 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e = tmpMeta2;
#line 6697 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _cont = tmp4  /* pattern as ty=Boolean */;
#line 2707 OMC_FILE

#line 6698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if((!_cont))
#line 6698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 6698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      break;
#line 2715 OMC_FILE
    }

#line 6699 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta6 = mmc_mk_cons(_e, _outList);
#line 6699 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outList = tmpMeta6;
#line 2722 OMC_FILE
  }
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_generate(threadData_t *threadData, modelica_metatype _inArg, modelica_fnptr _inFunc)
{
  modelica_metatype _outList = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 6673 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(omc_List_generateReverse(threadData, _inArg, ((modelica_fnptr) _inFunc)));
#line 2737 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_integer omc_List_lengthListElements(threadData_t *threadData, modelica_metatype _inListList)
{
  modelica_integer _outLength;
  modelica_integer tmp1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outLength has no default value.
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer __omcQ_24tmpVar1;
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer __omcQ_24tmpVar0;
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp2;
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _lst_loopVar = 0;
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _lst;
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _lst_loopVar = _inListList;
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar1 = ((modelica_integer) 0); /* defaultValue */
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp2 = 1;
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_lst_loopVar)) {
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _lst = MMC_CAR(_lst_loopVar);
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _lst_loopVar = MMC_CDR(_lst_loopVar);
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2--;
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp2 == 0) {
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar0 = listLength(_lst);
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar1 = __omcQ_24tmpVar1 + __omcQ_24tmpVar0;
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp2 == 1) {
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp1 = __omcQ_24tmpVar1;
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 6655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outLength = tmp1;
#line 2804 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outLength;
}
modelica_metatype boxptr_List_lengthListElements(threadData_t *threadData, modelica_metatype _inListList)
{
  modelica_integer _outLength;
  modelica_metatype out_outLength;
  _outLength = omc_List_lengthListElements(threadData, _inListList);
  out_outLength = mmc_mk_icon(_outLength);
  return out_outLength;
}

DLLExport
modelica_boolean omc_List_hasSeveralElements(threadData_t *threadData, modelica_metatype _inList)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
#line 2825 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inList;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          /* Pattern matching succeeded */
#line 6645 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp1 = 0 /* false */;
#line 2845 OMC_FILE
          goto tmp3_done;
        }
        case 1: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
#line 6646 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp1 = 0 /* false */;
#line 2853 OMC_FILE
          goto tmp3_done;
        }
        case 2: {

          /* Pattern matching succeeded */
#line 6647 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp1 = 1 /* true */;
#line 2861 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_List_hasSeveralElements(threadData_t *threadData, modelica_metatype _inList)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_List_hasSeveralElements(threadData, _inList);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLExport
modelica_boolean omc_List_hasOneElement(threadData_t *threadData, modelica_metatype _inList)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
#line 2896 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inList;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          /* Pattern matching succeeded */
#line 6633 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp1 = 1 /* true */;
#line 2916 OMC_FILE
          goto tmp3_done;
        }
        case 1: {

          /* Pattern matching succeeded */
#line 6634 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp1 = 0 /* false */;
#line 2924 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_List_hasOneElement(threadData_t *threadData, modelica_metatype _inList)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_List_hasOneElement(threadData, _inList);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLExport
modelica_string omc_List_toString(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inPrintFunc, modelica_string _inListNameStr, modelica_string _inBeginStr, modelica_string _inDelimitStr, modelica_string _inEndStr, modelica_boolean _inPrintEmpty, modelica_integer _maxLength)
{
  modelica_string _outString = NULL;
  modelica_metatype _lst = NULL;
  modelica_string _endStr = NULL;
  modelica_metatype tmpMeta1;
  modelica_string tmp2 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  _lst = _inList;
  _endStr = _inEndStr;
#line 6598 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(((_maxLength > ((modelica_integer) 0)) && (listLength(_lst) > _maxLength)))
#line 6598 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6599 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _lst = omc_List_firstN(threadData, _lst, _maxLength);
#line 2970 OMC_FILE

#line 6600 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = mmc_mk_cons(_inDelimitStr, mmc_mk_cons(_OMC_LIT4, mmc_mk_cons(_endStr, MMC_REFSTRUCTLIT(mmc_nil))));
#line 6600 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _endStr = stringAppendList(tmpMeta1);
#line 2976 OMC_FILE
  }

#line 2979 OMC_FILE
  { /* match expression */
    modelica_metatype tmp5_1;modelica_boolean tmp5_2;
    tmp5_1 = _lst;
    tmp5_2 = _inPrintEmpty;
    {
      modelica_string _str = NULL;
      volatile mmc_switch_type tmp5;
      int tmp6;
      // _str has no default value.
      tmp5 = 0;
      for (; tmp5 < 3; tmp5++) {
        switch (MMC_SWITCH_CAST(tmp5)) {
        case 0: {
          modelica_metatype tmpMeta7;
          if (1 /* true */ != tmp5_2) goto tmp4_end;
          if (!listEmpty(tmp5_1)) goto tmp4_end;
          /* Pattern matching succeeded */
#line 6610 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta7 = mmc_mk_cons(_inListNameStr, mmc_mk_cons(_inBeginStr, mmc_mk_cons(_endStr, MMC_REFSTRUCTLIT(mmc_nil))));
#line 6610 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp2 = stringAppendList(tmpMeta7);
#line 3001 OMC_FILE
          goto tmp4_done;
        }
        case 1: {
          if (0 /* false */ != tmp5_2) goto tmp4_end;
          if (!listEmpty(tmp5_1)) goto tmp4_end;
          /* Pattern matching succeeded */
#line 6614 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp2 = _inListNameStr;
#line 3010 OMC_FILE
          goto tmp4_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;

          /* Pattern matching succeeded */
#line 6618 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _str = stringDelimitList(omc_List_map(threadData, _lst, ((modelica_fnptr) _inPrintFunc)), _inDelimitStr);
#line 3019 OMC_FILE
#line 6619 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta8 = mmc_mk_cons(_inListNameStr, mmc_mk_cons(_inBeginStr, mmc_mk_cons(_str, mmc_mk_cons(_endStr, MMC_REFSTRUCTLIT(mmc_nil)))));
#line 6619 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp2 = stringAppendList(tmpMeta8);
#line 3024 OMC_FILE
          goto tmp4_done;
        }
        }
        goto tmp4_end;
        tmp4_end: ;
      }
      goto goto_3;
      goto_3:;
      MMC_THROW_INTERNAL();
      goto tmp4_done;
      tmp4_done:;
    }
  }
  _outString = tmp2;
  _return: OMC_LABEL_UNUSED
  return _outString;
}
modelica_metatype boxptr_List_toString(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inPrintFunc, modelica_metatype _inListNameStr, modelica_metatype _inBeginStr, modelica_metatype _inDelimitStr, modelica_metatype _inEndStr, modelica_metatype _inPrintEmpty, modelica_metatype _maxLength)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_string _outString = NULL;
  tmp1 = mmc_unbox_integer(_inPrintEmpty);
  tmp2 = mmc_unbox_integer(_maxLength);
  _outString = omc_List_toString(threadData, _inList, _inPrintFunc, _inListNameStr, _inBeginStr, _inDelimitStr, _inEndStr, tmp1, tmp2);
  /* skip box _outString; String */
  return _outString;
}

DLLExport
modelica_metatype omc_List_replaceAtWithFill(threadData_t *threadData, modelica_metatype _inElement, modelica_integer _inPosition, modelica_metatype _inList, modelica_metatype _inFillValue)
{
  modelica_metatype _outList = NULL;
  modelica_integer _len;
  modelica_metatype _fill_lst = NULL;
  modelica_boolean tmp1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
  // _len has no default value.
  // _fill_lst has no default value.
#line 6558 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 6558 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp1 = (_inPosition >= ((modelica_integer) 0));
#line 6558 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (1 /* true */ != tmp1) MMC_THROW_INTERNAL();
#line 3077 OMC_FILE

#line 6559 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _len = listLength(_inList);
#line 3081 OMC_FILE

#line 6561 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if((_inPosition <= _len))
#line 6561 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6562 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outList = omc_List_replaceAt(threadData, _inElement, _inPosition, _inList);
#line 3089 OMC_FILE
  }
  else
  {
#line 6564 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = mmc_mk_cons(_inElement, MMC_REFSTRUCTLIT(mmc_nil));
#line 6564 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _fill_lst = tmpMeta2;
#line 3097 OMC_FILE

#line 6565 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp4 = ((modelica_integer) 2); tmp5 = 1; tmp6 = _inPosition - _len;
#line 6565 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
#line 6565 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 6565 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      modelica_integer _i;
#line 6565 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      for(_i = ((modelica_integer) 2); in_range_integer(_i, tmp4, tmp6); _i += tmp5)
#line 6565 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 6566 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta3 = mmc_mk_cons(_inFillValue, _fill_lst);
#line 6566 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _fill_lst = tmpMeta3;
#line 3115 OMC_FILE
      }
    }

#line 6569 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outList = listAppend(_inList, _fill_lst);
#line 3121 OMC_FILE
  }
  _return: OMC_LABEL_UNUSED
  return _outList;
}
modelica_metatype boxptr_List_replaceAtWithFill(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inPosition, modelica_metatype _inList, modelica_metatype _inFillValue)
{
  modelica_integer tmp1;
  modelica_metatype _outList = NULL;
  tmp1 = mmc_unbox_integer(_inPosition);
  _outList = omc_List_replaceAtWithFill(threadData, _inElement, tmp1, _inList, _inFillValue);
  /* skip box _outList; list<polymorphic<T>> */
  return _outList;
}

DLLExport
modelica_metatype omc_List_replaceAtWithList(threadData_t *threadData, modelica_metatype _inReplacementList, modelica_integer _inPosition, modelica_metatype _inList)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _e = NULL;
  modelica_metatype _rest = NULL;
  modelica_boolean tmp2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  // _e has no default value.
  _rest = _inList;
#line 6524 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 6524 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp2 = (_inPosition >= ((modelica_integer) 0));
#line 6524 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (1 /* true */ != tmp2) MMC_THROW_INTERNAL();
#line 3166 OMC_FILE

#line 6527 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp7 = ((modelica_integer) 0); tmp8 = 1; tmp9 = ((modelica_integer) -1) + _inPosition;
#line 6527 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
#line 6527 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6527 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer _i;
#line 6527 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for(_i = ((modelica_integer) 0); in_range_integer(_i, tmp7, tmp9); _i += tmp8)
#line 6527 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 6528 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 6528 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = _rest;
#line 6528 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
#line 6528 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = MMC_CAR(tmpMeta3);
#line 6528 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = MMC_CDR(tmpMeta3);
#line 6528 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = tmpMeta4;
#line 6528 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _rest = tmpMeta5;
#line 3194 OMC_FILE

#line 6529 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta6 = mmc_mk_cons(_e, _outList);
#line 6529 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta6;
#line 3200 OMC_FILE
    }
  }

#line 6533 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 6533 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta10 = _rest;
#line 6533 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (listEmpty(tmpMeta10)) MMC_THROW_INTERNAL();
#line 6533 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta11 = MMC_CAR(tmpMeta10);
#line 6533 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta12 = MMC_CDR(tmpMeta10);
#line 6533 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _rest = tmpMeta12;
#line 3216 OMC_FILE

#line 6534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _rest = listAppend(_inReplacementList, _rest);
#line 3220 OMC_FILE

#line 6535 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = omc_List_append__reverse(threadData, _outList, _rest);
#line 3224 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}
modelica_metatype boxptr_List_replaceAtWithList(threadData_t *threadData, modelica_metatype _inReplacementList, modelica_metatype _inPosition, modelica_metatype _inList)
{
  modelica_integer tmp1;
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_inPosition);
  _outList = omc_List_replaceAtWithList(threadData, _inReplacementList, tmp1, _inList);
  /* skip box _outList; list<polymorphic<T>> */
  return _outList;
}

DLLExport
modelica_metatype omc_List_replaceAtIndexFirst(threadData_t *threadData, modelica_integer _inPosition, modelica_metatype _inElement, modelica_metatype _inList)
{
  modelica_metatype _outList = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 6508 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = omc_List_replaceAt(threadData, _inElement, _inPosition, _inList);
#line 3248 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}
modelica_metatype boxptr_List_replaceAtIndexFirst(threadData_t *threadData, modelica_metatype _inPosition, modelica_metatype _inElement, modelica_metatype _inList)
{
  modelica_integer tmp1;
  modelica_metatype _outList = NULL;
  tmp1 = mmc_unbox_integer(_inPosition);
  _outList = omc_List_replaceAtIndexFirst(threadData, tmp1, _inElement, _inList);
  /* skip box _outList; list<polymorphic<T>> */
  return _outList;
}

DLLExport
modelica_metatype omc_List_replaceOnTrue(threadData_t *threadData, modelica_metatype _inReplacement, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_boolean *out_outReplaced)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean _outReplaced;
  modelica_metatype _e = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  _outReplaced = 0 /* false */;
  // _e has no default value.
  _rest = _inList;
#line 6483 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 6483 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6483 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!(!listEmpty(_rest))) break;
#line 6484 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching assignment */
#line 6484 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = _rest;
#line 6484 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
#line 6484 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_CAR(tmpMeta2);
#line 6484 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta4 = MMC_CDR(tmpMeta2);
#line 6484 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e = tmpMeta3;
#line 6484 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _rest = tmpMeta4;
#line 3302 OMC_FILE

#line 6486 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e)))
#line 6486 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 6487 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outReplaced = 1 /* true */;
#line 3310 OMC_FILE

#line 6488 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = mmc_mk_cons(_inReplacement, _rest);
#line 6488 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = omc_List_append__reverse(threadData, _outList, tmpMeta5);
#line 3316 OMC_FILE

#line 6489 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      goto _return;
#line 3320 OMC_FILE
    }

#line 6492 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta6 = mmc_mk_cons(_e, _outList);
#line 6492 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outList = tmpMeta6;
#line 3327 OMC_FILE
  }

#line 6495 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = _inList;
#line 3332 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outReplaced) { *out_outReplaced = _outReplaced; }
  return _outList;
}
modelica_metatype boxptr_List_replaceOnTrue(threadData_t *threadData, modelica_metatype _inReplacement, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype *out_outReplaced)
{
  modelica_boolean _outReplaced;
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  _outList = omc_List_replaceOnTrue(threadData, _inReplacement, _inList, _inFunc, &_outReplaced);
  /* skip box _outList; list<polymorphic<T>> */
  if (out_outReplaced) { *out_outReplaced = mmc_mk_icon(_outReplaced); }
  return _outList;
}

DLLExport
modelica_metatype omc_List_replaceAt(threadData_t *threadData, modelica_metatype _inElement, modelica_integer _inPosition, modelica_metatype _inList)
{
  modelica_metatype _outList = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype _delst = NULL;
  modelica_boolean tmp1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
  // _e has no default value.
  _rest = _inList;
  // _delst has no default value.
#line 6451 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 6451 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp1 = (_inPosition >= ((modelica_integer) 1));
#line 6451 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (1 /* true */ != tmp1) MMC_THROW_INTERNAL();
#line 3379 OMC_FILE

#line 6452 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
#line 6452 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _delst = omc_DoubleEnded_fromList(threadData, tmpMeta2);
#line 3385 OMC_FILE

#line 6455 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp6 = ((modelica_integer) 1); tmp7 = 1; tmp8 = ((modelica_integer) -1) + _inPosition;
#line 6455 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(!(((tmp7 > 0) && (tmp6 > tmp8)) || ((tmp7 < 0) && (tmp6 < tmp8))))
#line 6455 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6455 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer _i;
#line 6455 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp6, tmp8); _i += tmp7)
#line 6455 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 6456 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 6456 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = _rest;
#line 6456 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
#line 6456 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = MMC_CAR(tmpMeta3);
#line 6456 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = MMC_CDR(tmpMeta3);
#line 6456 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = tmpMeta4;
#line 6456 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _rest = tmpMeta5;
#line 3413 OMC_FILE

#line 6457 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      omc_DoubleEnded_push__back(threadData, _delst, _e);
#line 3417 OMC_FILE
    }
  }

#line 6461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 6461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta9 = _rest;
#line 6461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
#line 6461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta10 = MMC_CAR(tmpMeta9);
#line 6461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta11 = MMC_CDR(tmpMeta9);
#line 6461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _rest = tmpMeta11;
#line 3433 OMC_FILE

#line 6462 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta12 = mmc_mk_cons(_inElement, _rest);
#line 6462 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = omc_DoubleEnded_toListAndClear(threadData, _delst, tmpMeta12);
#line 3439 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}
modelica_metatype boxptr_List_replaceAt(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inPosition, modelica_metatype _inList)
{
  modelica_integer tmp1;
  modelica_metatype _outList = NULL;
  tmp1 = mmc_unbox_integer(_inPosition);
  _outList = omc_List_replaceAt(threadData, _inElement, tmp1, _inList);
  /* skip box _outList; list<polymorphic<T>> */
  return _outList;
}

DLLExport
modelica_metatype omc_List_removeMatchesFirst(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inN)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outList = _inList;
#line 6428 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6428 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 6428 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 6428 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 6428 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 6429 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if((mmc_unbox_integer(_e) != _inN))
#line 6429 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 6430 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 3481 OMC_FILE
      }

#line 6433 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 6433 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta2 = _outList;
#line 6433 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
#line 6433 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = MMC_CAR(tmpMeta2);
#line 6433 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = MMC_CDR(tmpMeta2);
#line 6433 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta4;
#line 3496 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outList;
}
modelica_metatype boxptr_List_removeMatchesFirst(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inN)
{
  modelica_integer tmp1;
  modelica_metatype _outList = NULL;
  tmp1 = mmc_unbox_integer(_inN);
  _outList = omc_List_removeMatchesFirst(threadData, _inList, tmp1);
  /* skip box _outList; list<#Integer> */
  return _outList;
}

DLLExport
modelica_metatype omc_List_keepPositionsSorted(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inPositions)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _i;
  modelica_metatype _e = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  _i = ((modelica_integer) 0);
  // _e has no default value.
  _rest = _inList;
#line 6408 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6408 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _pos;
#line 6408 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inPositions; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 6408 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 6408 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _pos = MMC_CAR(tmpMeta2);
#line 6409 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      while(1)
#line 6409 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 6409 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if(!(_i != mmc_unbox_integer(_pos))) break;
#line 6410 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        /* Pattern-matching assignment */
#line 6410 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta3 = _rest;
#line 6410 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
#line 6410 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta4 = MMC_CAR(tmpMeta3);
#line 6410 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta5 = MMC_CDR(tmpMeta3);
#line 6410 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _rest = tmpMeta5;
#line 3564 OMC_FILE

#line 6411 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _i = ((modelica_integer) 1) + _i;
#line 3568 OMC_FILE
      }

#line 6414 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 6414 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta6 = _rest;
#line 6414 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta6)) MMC_THROW_INTERNAL();
#line 6414 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta7 = MMC_CAR(tmpMeta6);
#line 6414 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta8 = MMC_CDR(tmpMeta6);
#line 6414 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = tmpMeta7;
#line 6414 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _rest = tmpMeta8;
#line 3585 OMC_FILE

#line 6415 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta9 = mmc_mk_cons(_e, _outList);
#line 6415 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta9;
#line 3591 OMC_FILE

#line 6416 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _i = ((modelica_integer) 1) + _i;
#line 3595 OMC_FILE
    }
  }

#line 6418 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverse(_outList);
#line 3601 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_keepPositions(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inPositions)
{
  modelica_metatype _outList = NULL;
  modelica_metatype _sorted_pos = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
  // _sorted_pos has no default value.
#line 6392 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _sorted_pos = omc_List_sortedUnique(threadData, omc_List_sort(threadData, _inPositions, boxvar_intGt), boxvar_intEq);
#line 3617 OMC_FILE

#line 6393 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = omc_List_keepPositionsSorted(threadData, _inList, _sorted_pos);
#line 3621 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_deletePositionsSorted(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inPositions)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _i;
  modelica_metatype _e = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  _i = ((modelica_integer) 0);
  // _e has no default value.
  _rest = _inList;
#line 6368 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6368 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _pos;
#line 6368 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inPositions; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 6368 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 6368 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _pos = MMC_CAR(tmpMeta2);
#line 6369 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      while(1)
#line 6369 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 6369 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if(!(_i != mmc_unbox_integer(_pos))) break;
#line 6370 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        /* Pattern-matching assignment */
#line 6370 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta3 = _rest;
#line 6370 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
#line 6370 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta4 = MMC_CAR(tmpMeta3);
#line 6370 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta5 = MMC_CDR(tmpMeta3);
#line 6370 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = tmpMeta4;
#line 6370 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _rest = tmpMeta5;
#line 3680 OMC_FILE

#line 6371 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta6 = mmc_mk_cons(_e, _outList);
#line 6371 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outList = tmpMeta6;
#line 3686 OMC_FILE

#line 6372 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _i = ((modelica_integer) 1) + _i;
#line 3690 OMC_FILE
      }

#line 6375 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 6375 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta7 = _rest;
#line 6375 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
#line 6375 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta8 = MMC_CAR(tmpMeta7);
#line 6375 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta9 = MMC_CDR(tmpMeta7);
#line 6375 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _rest = tmpMeta9;
#line 3705 OMC_FILE

#line 6376 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _i = ((modelica_integer) 1) + _i;
#line 3709 OMC_FILE
    }
  }

#line 6379 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = omc_List_append__reverse(threadData, _outList, _rest);
#line 3715 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_deletePositions(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inPositions)
{
  modelica_metatype _outList = NULL;
  modelica_metatype _sorted_pos = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
  // _sorted_pos has no default value.
#line 6352 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _sorted_pos = omc_List_sortedUnique(threadData, omc_List_sort(threadData, _inPositions, boxvar_intGt), boxvar_intEq);
#line 3731 OMC_FILE

#line 6353 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = omc_List_deletePositionsSorted(threadData, _inList, _sorted_pos);
#line 3735 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_deleteMemberOnTrue(threadData_t *threadData, modelica_metatype _inValue, modelica_metatype _inList, modelica_fnptr _inCompareFunc, modelica_metatype *out_outDeletedElement)
{
  modelica_metatype _outList = NULL;
  modelica_metatype _outDeletedElement = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype _acc = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outList = _inList;
  _outDeletedElement = mmc_mk_none();
  // _e has no default value.
  _rest = _inList;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _acc = tmpMeta1;
#line 6329 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 6329 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6329 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!(!listEmpty(_rest))) break;
#line 6330 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching assignment */
#line 6330 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = _rest;
#line 6330 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
#line 6330 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_CAR(tmpMeta2);
#line 6330 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta4 = MMC_CDR(tmpMeta2);
#line 6330 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e = tmpMeta3;
#line 6330 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _rest = tmpMeta4;
#line 3781 OMC_FILE

#line 6332 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompareFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompareFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompareFunc), 2))), _inValue, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompareFunc), 1)))) (threadData, _inValue, _e)))
#line 6332 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 6333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = omc_List_append__reverse(threadData, _acc, _rest);
#line 3789 OMC_FILE

#line 6334 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outDeletedElement = mmc_mk_some(_e);
#line 3793 OMC_FILE

#line 6335 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      goto _return;
#line 3797 OMC_FILE
    }

#line 6338 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta5 = mmc_mk_cons(_e, _acc);
#line 6338 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _acc = tmpMeta5;
#line 3804 OMC_FILE
  }
  _return: OMC_LABEL_UNUSED
  if (out_outDeletedElement) { *out_outDeletedElement = _outDeletedElement; }
  return _outList;
}

DLLExport
modelica_metatype omc_List_deleteMemberF(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inElement)
{
  modelica_metatype _outList = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 6304 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = omc_List_deleteMember(threadData, _inList, _inElement);
#line 3820 OMC_FILE

#line 6305 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(referenceEq(_outList, _inList))
#line 6305 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6305 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    MMC_THROW_INTERNAL();
#line 3828 OMC_FILE
  }
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_deleteMember(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inElement)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _e = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  // _e has no default value.
  _rest = _inList;
#line 6285 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 6285 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6285 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!(!listEmpty(_rest))) break;
#line 6286 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching assignment */
#line 6286 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = _rest;
#line 6286 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
#line 6286 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_CAR(tmpMeta2);
#line 6286 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta4 = MMC_CDR(tmpMeta2);
#line 6286 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e = tmpMeta3;
#line 6286 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _rest = tmpMeta4;
#line 3871 OMC_FILE

#line 6288 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(valueEq(_e, _inElement))
#line 6288 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 6289 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = omc_List_append__reverse(threadData, _outList, _rest);
#line 3879 OMC_FILE

#line 6290 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      goto _return;
#line 3883 OMC_FILE
    }

#line 6293 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta5 = mmc_mk_cons(_e, _outList);
#line 6293 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outList = tmpMeta5;
#line 3890 OMC_FILE
  }

#line 6295 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = _inList;
#line 3895 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_findBoolList(threadData_t *threadData, modelica_metatype _inBooleans, modelica_metatype _inList, modelica_metatype _inFalseValue)
{
  modelica_metatype _outElement = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElement has no default value.
  // _e has no default value.
  _rest = _inList;
#line 6264 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6264 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _b;
#line 6264 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inBooleans; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 6264 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 6264 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _b = MMC_CAR(tmpMeta1);
#line 6265 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 6265 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta2 = _rest;
#line 6265 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
#line 6265 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = MMC_CAR(tmpMeta2);
#line 6265 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = MMC_CDR(tmpMeta2);
#line 6265 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = tmpMeta3;
#line 6265 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _rest = tmpMeta4;
#line 3940 OMC_FILE

#line 6267 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean(_b))
#line 6267 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 6268 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outElement = _e;
#line 3948 OMC_FILE

#line 6269 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 3952 OMC_FILE
      }
    }
  }

#line 6272 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outElement = _inFalseValue;
#line 3959 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outElement;
}

DLLExport
modelica_metatype omc_List_findAndRemove1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _arg1, modelica_metatype *out_rest)
{
  modelica_metatype _outElement = NULL;
  modelica_metatype _rest = NULL;
  modelica_integer _i;
  modelica_metatype _delst = NULL;
  modelica_metatype _t = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElement has no default value.
  // _rest has no default value.
  _i = ((modelica_integer) 0);
  // _delst has no default value.
  // _t has no default value.
#line 6235 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6235 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 6235 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 6235 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 6235 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 6236 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _arg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _arg1)))
#line 6236 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 6237 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outElement = _e;
#line 4007 OMC_FILE

#line 6238 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
#line 6238 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _delst = omc_DoubleEnded_fromList(threadData, tmpMeta2);
#line 4013 OMC_FILE

#line 6239 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _rest = _inList;
#line 4017 OMC_FILE

#line 6240 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp6 = ((modelica_integer) 1); tmp7 = 1; tmp8 = _i;
#line 6240 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if(!(((tmp7 > 0) && (tmp6 > tmp8)) || ((tmp7 < 0) && (tmp6 < tmp8))))
#line 6240 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 6240 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_integer _i;
#line 6240 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp6, tmp8); _i += tmp7)
#line 6240 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          {
#line 6241 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            /* Pattern-matching assignment */
#line 6241 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            tmpMeta3 = _rest;
#line 6241 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
#line 6241 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            tmpMeta4 = MMC_CAR(tmpMeta3);
#line 6241 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            tmpMeta5 = MMC_CDR(tmpMeta3);
#line 6241 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            _t = tmpMeta4;
#line 6241 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            _rest = tmpMeta5;
#line 4045 OMC_FILE

#line 6242 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            omc_DoubleEnded_push__back(threadData, _delst, _t);
#line 4049 OMC_FILE
          }
        }

#line 6244 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        /* Pattern-matching assignment */
#line 6244 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta9 = _rest;
#line 6244 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
#line 6244 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta10 = MMC_CAR(tmpMeta9);
#line 6244 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta11 = MMC_CDR(tmpMeta9);
#line 6244 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _rest = tmpMeta11;
#line 4065 OMC_FILE

#line 6245 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _rest = omc_DoubleEnded_toListAndClear(threadData, _delst, _rest);
#line 4069 OMC_FILE

#line 6246 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 4073 OMC_FILE
      }

#line 6248 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _i = ((modelica_integer) 1) + _i;
#line 4078 OMC_FILE
    }
  }

#line 6250 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  MMC_THROW_INTERNAL();
#line 4084 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_rest) { *out_rest = _rest; }
  return _outElement;
}

DLLExport
modelica_metatype omc_List_findAndRemove(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype *out_rest)
{
  modelica_metatype _outElement = NULL;
  modelica_metatype _rest = NULL;
  modelica_integer _i;
  modelica_metatype _delst = NULL;
  modelica_metatype _t = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElement has no default value.
  // _rest has no default value.
  _i = ((modelica_integer) 0);
  // _delst has no default value.
  // _t has no default value.
#line 6197 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6197 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 6197 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 6197 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 6197 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 6198 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e)))
#line 6198 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 6199 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outElement = _e;
#line 4133 OMC_FILE

#line 6200 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
#line 6200 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _delst = omc_DoubleEnded_fromList(threadData, tmpMeta2);
#line 4139 OMC_FILE

#line 6201 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _rest = _inList;
#line 4143 OMC_FILE

#line 6202 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp6 = ((modelica_integer) 1); tmp7 = 1; tmp8 = _i;
#line 6202 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if(!(((tmp7 > 0) && (tmp6 > tmp8)) || ((tmp7 < 0) && (tmp6 < tmp8))))
#line 6202 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 6202 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_integer _i;
#line 6202 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp6, tmp8); _i += tmp7)
#line 6202 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          {
#line 6203 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            /* Pattern-matching assignment */
#line 6203 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            tmpMeta3 = _rest;
#line 6203 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
#line 6203 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            tmpMeta4 = MMC_CAR(tmpMeta3);
#line 6203 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            tmpMeta5 = MMC_CDR(tmpMeta3);
#line 6203 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            _t = tmpMeta4;
#line 6203 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            _rest = tmpMeta5;
#line 4171 OMC_FILE

#line 6204 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            omc_DoubleEnded_push__back(threadData, _delst, _t);
#line 4175 OMC_FILE
          }
        }

#line 6206 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        /* Pattern-matching assignment */
#line 6206 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta9 = _rest;
#line 6206 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
#line 6206 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta10 = MMC_CAR(tmpMeta9);
#line 6206 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta11 = MMC_CDR(tmpMeta9);
#line 6206 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _rest = tmpMeta11;
#line 4191 OMC_FILE

#line 6207 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _rest = omc_DoubleEnded_toListAndClear(threadData, _delst, _rest);
#line 4195 OMC_FILE

#line 6208 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 4199 OMC_FILE
      }

#line 6210 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _i = ((modelica_integer) 1) + _i;
#line 4204 OMC_FILE
    }
  }

#line 6212 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  MMC_THROW_INTERNAL();
#line 4210 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_rest) { *out_rest = _rest; }
  return _outElement;
}

DLLExport
modelica_metatype omc_List_find1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _arg1)
{
  modelica_metatype _outElement = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElement has no default value.
#line 6171 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6171 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 6171 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 6171 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 6171 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 6172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _arg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _arg1)))
#line 6172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 6173 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outElement = _e;
#line 4241 OMC_FILE

#line 6174 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 4245 OMC_FILE
      }
    }
  }

#line 6177 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  MMC_THROW_INTERNAL();
#line 4252 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outElement;
}

DLLExport
modelica_metatype omc_List_findOption(threadData_t *threadData, modelica_metatype _lst, modelica_fnptr _fn)
{
  modelica_metatype _result = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
#line 6147 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6147 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 6147 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _lst; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 6147 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 6147 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 6148 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, _e)))
#line 6148 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 6149 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _result = mmc_mk_some(_e);
#line 4282 OMC_FILE

#line 6150 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 4286 OMC_FILE
      }
    }
  }

#line 6154 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _result = mmc_mk_none();
#line 4293 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _result;
}

DLLExport
modelica_metatype omc_List_find(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
  modelica_metatype _outElement = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElement has no default value.
#line 6126 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6126 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 6126 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 6126 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 6126 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 6127 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e)))
#line 6127 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 6128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outElement = _e;
#line 4323 OMC_FILE

#line 6129 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 4327 OMC_FILE
      }
    }
  }

#line 6132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  MMC_THROW_INTERNAL();
#line 4334 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outElement;
}

DLLExport
modelica_metatype omc_List_select2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar3;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar2;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar3 = tmpMeta3; /* defaultValue */
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar3;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      while (!listEmpty(_e_loopVar)) {
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e, _inArg1, _inArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e, _inArg1, _inArg2))) {
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp4--;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          break;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        }
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar2 = _e;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar2,0);
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar3;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 4419 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_select1r(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_metatype _inArg1)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar5;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar4;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar5 = tmpMeta3; /* defaultValue */
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar5;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      while (!listEmpty(_e_loopVar)) {
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _inArg1, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _inArg1, _e))) {
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp4--;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          break;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        }
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar4 = _e;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar4,0);
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar5;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 4504 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_select1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_metatype _inArg1)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar7;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar6;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar7 = tmpMeta3; /* defaultValue */
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar7;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      while (!listEmpty(_e_loopVar)) {
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e, _inArg1))) {
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp4--;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          break;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        }
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar6 = _e;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar6,0);
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar7;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 4589 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_select(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar9;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar8;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar9 = tmpMeta3; /* defaultValue */
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar9;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      while (!listEmpty(_e_loopVar)) {
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e))) {
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp4--;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          break;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        }
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar8 = _e;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar8,0);
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar9;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 4674 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_filterCons(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _fn, modelica_metatype __omcQ_24in_5FaccumList)
{
  modelica_metatype _accumList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _accumList = __omcQ_24in_5FaccumList;
#line 6102 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6102 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 6102 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 6102 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 6102 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 6103 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, _e)))
#line 6103 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 6104 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta2 = mmc_mk_cons(_e, _accumList);
#line 6104 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _accumList = tmpMeta2;
#line 4707 OMC_FILE
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _accumList;
}

DLLExport
modelica_metatype omc_List_removeOnTrue(threadData_t *threadData, modelica_metatype _inValue, modelica_fnptr _inCompFunc, modelica_metatype _inList)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar11;
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar10;
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar11 = tmpMeta3; /* defaultValue */
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar11;
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      while (!listEmpty(_e_loopVar)) {
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if ((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _inValue, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _inValue, _e)))) {
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp4--;
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          break;
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        }
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar10 = _e;
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar10,0);
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar11;
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 6086 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 4795 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_filter2OnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar13;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar12;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar13 = tmpMeta3; /* defaultValue */
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar13;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      while (!listEmpty(_e_loopVar)) {
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e, _inArg1, _inArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e, _inArg1, _inArg2))) {
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp4--;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          break;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        }
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar12 = _e;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar12,0);
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar13;
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 6069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 4880 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_filter1rOnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_metatype _inArg1)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar15;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar14;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar15 = tmpMeta3; /* defaultValue */
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar15;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      while (!listEmpty(_e_loopVar)) {
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _inArg1, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _inArg1, _e))) {
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp4--;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          break;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        }
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar14 = _e;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar14,0);
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar15;
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 6050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 4965 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_filter1OnTrueAndUpdate(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_fnptr _inUpdateFunc, modelica_metatype _inArg1)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar17;
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar16;
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar17 = tmpMeta3; /* defaultValue */
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar17;
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      while (!listEmpty(_e_loopVar)) {
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e, _inArg1))) {
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp4--;
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          break;
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        }
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inUpdateFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inUpdateFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inUpdateFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inUpdateFunc), 1)))) (threadData, _e, _inArg1);
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar16,0);
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar17;
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 6031 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 5050 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_filter1OnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_metatype _inArg1)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar19;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar18;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar19 = tmpMeta3; /* defaultValue */
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar19;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      while (!listEmpty(_e_loopVar)) {
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e, _inArg1))) {
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp4--;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          break;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        }
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar18 = _e;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar18,0);
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar19;
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 6005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 5135 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_filter1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_metatype _inArg1)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
#line 5978 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5978 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 5978 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 5978 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 5978 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 5161 OMC_FILE
      { /* matchcontinue expression */
        {
          volatile mmc_switch_type tmp5;
          int tmp6;
          tmp5 = 0;
          MMC_TRY_INTERNAL(mmc_jumper)
          tmp4_top:
          threadData->mmc_jumper = &new_mmc_jumper;
          for (; tmp5 < 2; tmp5++) {
            switch (MMC_SWITCH_CAST(tmp5)) {
            case 0: {
              modelica_metatype tmpMeta7;
              /* Pattern matching succeeded */
#line 5980 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e, _inArg1) : ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e, _inArg1);
#line 5177 OMC_FILE

#line 5981 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              tmpMeta7 = mmc_mk_cons(_e, _outList);
#line 5981 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              _outList = tmpMeta7;
#line 5183 OMC_FILE
#line 5184 OMC_FILE
              goto tmp4_done;
            }
            case 1: {
              /* Pattern matching succeeded */
#line 5189 OMC_FILE
              goto tmp4_done;
            }
            }
            goto tmp4_end;
            tmp4_end: ;
          }
          goto goto_3;
          tmp4_done:
          (void)tmp5;
          MMC_RESTORE_INTERNAL(mmc_jumper);
          goto tmp4_done2;
          goto_3:;
          MMC_CATCH_INTERNAL(mmc_jumper);
          if (++tmp5 < 2) {
            goto tmp4_top;
          }
          MMC_THROW_INTERNAL();
          tmp4_done2:;
        }
      }
      ;
    }
  }

#line 5986 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 5216 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_filterOnTrueReverse(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar21;
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta2;
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar20;
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp3;
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar21 = tmpMeta2; /* defaultValue */
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp3 = 1;
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      while (!listEmpty(_e_loopVar)) {
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e))) {
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp3--;
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          break;
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        }
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp3 == 0) {
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar20 = _e;
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar21 = mmc_mk_cons(__omcQ_24tmpVar20,__omcQ_24tmpVar21);
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp3 == 1) {
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar21;
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 5959 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 5293 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_filterOnTrueSync(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_metatype _inSyncList, modelica_metatype *out_outList_b)
{
  modelica_metatype _outList_a = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outList_b = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _e2 = NULL;
  modelica_metatype _rest2 = NULL;
  modelica_boolean tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList_a = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList_b = tmpMeta2;
  // _e2 has no default value.
  _rest2 = _inSyncList;
#line 5930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 5930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp3 = (listLength(_inList) == listLength(_inSyncList));
#line 5930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (1 /* true */ != tmp3) MMC_THROW_INTERNAL();
#line 5329 OMC_FILE

#line 5932 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5932 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1;
#line 5932 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta4 = _inList; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
#line 5932 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 5932 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e1 = MMC_CAR(tmpMeta4);
#line 5933 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 5933 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = _rest2;
#line 5933 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
#line 5933 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta6 = MMC_CAR(tmpMeta5);
#line 5933 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta7 = MMC_CDR(tmpMeta5);
#line 5933 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e2 = tmpMeta6;
#line 5933 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _rest2 = tmpMeta7;
#line 5355 OMC_FILE

#line 5935 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e1)))
#line 5935 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 5936 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta8 = mmc_mk_cons(_e1, _outList_a);
#line 5936 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outList_a = tmpMeta8;
#line 5365 OMC_FILE

#line 5937 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta9 = mmc_mk_cons(_e2, _outList_b);
#line 5937 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outList_b = tmpMeta9;
#line 5371 OMC_FILE
      }
    }
  }

#line 5941 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList_a = listReverseInPlace(_outList_a);
#line 5378 OMC_FILE

#line 5942 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList_b = listReverseInPlace(_outList_b);
#line 5382 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outList_b) { *out_outList_b = _outList_b; }
  return _outList_a;
}

DLLExport
modelica_metatype omc_List_filter1OnTrueSync(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_metatype _inArg1, modelica_metatype _inSyncList, modelica_metatype *out_outList_b)
{
  modelica_metatype _outList_a = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outList_b = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _e2 = NULL;
  modelica_metatype _rest2 = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList_a = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList_b = tmpMeta2;
  // _e2 has no default value.
  _rest2 = _inSyncList;
#line 5898 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5898 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1;
#line 5898 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
#line 5898 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 5898 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e1 = MMC_CAR(tmpMeta3);
#line 5899 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 5899 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = _rest2;
#line 5899 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
#line 5899 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = MMC_CAR(tmpMeta4);
#line 5899 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta6 = MMC_CDR(tmpMeta4);
#line 5899 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e2 = tmpMeta5;
#line 5899 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _rest2 = tmpMeta6;
#line 5436 OMC_FILE

#line 5901 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e1, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e1, _inArg1)))
#line 5901 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 5902 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta7 = mmc_mk_cons(_e1, _outList_a);
#line 5902 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outList_a = tmpMeta7;
#line 5446 OMC_FILE

#line 5903 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta8 = mmc_mk_cons(_e2, _outList_b);
#line 5903 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outList_b = tmpMeta8;
#line 5452 OMC_FILE
      }
    }
  }

#line 5907 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList_a = listReverseInPlace(_outList_a);
#line 5459 OMC_FILE

#line 5908 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList_b = listReverseInPlace(_outList_b);
#line 5463 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outList_b) { *out_outList_b = _outList_b; }
  return _outList_a;
}

DLLExport
modelica_metatype omc_List_filterOnFalse(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar23;
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar22;
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar23 = tmpMeta3; /* defaultValue */
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar23;
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      while (!listEmpty(_e_loopVar)) {
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if ((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e)))) {
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp4--;
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          break;
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        }
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar22 = _e;
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar22,0);
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar23;
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 5873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 5549 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_filterOnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar25;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar24;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar25 = tmpMeta3; /* defaultValue */
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar25;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      while (!listEmpty(_e_loopVar)) {
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e))) {
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp4--;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          break;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        }
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar24 = _e;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar24,0);
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar25;
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 5856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 5634 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_filterMap1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterMapFunc, modelica_metatype _inExtraArg)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _oe = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  // _oe has no default value.
#line 5831 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5831 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 5831 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 5831 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 5831 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 5662 OMC_FILE
      { /* matchcontinue expression */
        {
          volatile mmc_switch_type tmp5;
          int tmp6;
          tmp5 = 0;
          MMC_TRY_INTERNAL(mmc_jumper)
          tmp4_top:
          threadData->mmc_jumper = &new_mmc_jumper;
          for (; tmp5 < 2; tmp5++) {
            switch (MMC_SWITCH_CAST(tmp5)) {
            case 0: {
              modelica_metatype tmpMeta7;
              /* Pattern matching succeeded */
#line 5833 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              _oe = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterMapFunc), 2))), _e, _inExtraArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterMapFunc), 1)))) (threadData, _e, _inExtraArg);
#line 5678 OMC_FILE

#line 5834 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              tmpMeta7 = mmc_mk_cons(_oe, _outList);
#line 5834 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              _outList = tmpMeta7;
#line 5684 OMC_FILE
#line 5685 OMC_FILE
              goto tmp4_done;
            }
            case 1: {
              /* Pattern matching succeeded */
#line 5690 OMC_FILE
              goto tmp4_done;
            }
            }
            goto tmp4_end;
            tmp4_end: ;
          }
          goto goto_3;
          tmp4_done:
          (void)tmp5;
          MMC_RESTORE_INTERNAL(mmc_jumper);
          goto tmp4_done2;
          goto_3:;
          MMC_CATCH_INTERNAL(mmc_jumper);
          if (++tmp5 < 2) {
            goto tmp4_top;
          }
          MMC_THROW_INTERNAL();
          tmp4_done2:;
        }
      }
      ;
    }
  }

#line 5839 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 5717 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_filterMap(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterMapFunc)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _oe = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  // _oe has no default value.
#line 5804 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5804 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 5804 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 5804 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 5804 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 5745 OMC_FILE
      { /* matchcontinue expression */
        {
          volatile mmc_switch_type tmp5;
          int tmp6;
          tmp5 = 0;
          MMC_TRY_INTERNAL(mmc_jumper)
          tmp4_top:
          threadData->mmc_jumper = &new_mmc_jumper;
          for (; tmp5 < 2; tmp5++) {
            switch (MMC_SWITCH_CAST(tmp5)) {
            case 0: {
              modelica_metatype tmpMeta7;
              /* Pattern matching succeeded */
#line 5806 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              _oe = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterMapFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterMapFunc), 1)))) (threadData, _e);
#line 5761 OMC_FILE

#line 5807 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              tmpMeta7 = mmc_mk_cons(_oe, _outList);
#line 5807 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              _outList = tmpMeta7;
#line 5767 OMC_FILE
#line 5768 OMC_FILE
              goto tmp4_done;
            }
            case 1: {
              /* Pattern matching succeeded */
#line 5773 OMC_FILE
              goto tmp4_done;
            }
            }
            goto tmp4_end;
            tmp4_end: ;
          }
          goto goto_3;
          tmp4_done:
          (void)tmp5;
          MMC_RESTORE_INTERNAL(mmc_jumper);
          goto tmp4_done2;
          goto_3:;
          MMC_CATCH_INTERNAL(mmc_jumper);
          if (++tmp5 < 2) {
            goto tmp4_top;
          }
          MMC_THROW_INTERNAL();
          tmp4_done2:;
        }
      }
      ;
    }
  }

#line 5812 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 5800 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_filter(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
#line 5779 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5779 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 5779 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 5779 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 5779 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 5826 OMC_FILE
      { /* matchcontinue expression */
        {
          volatile mmc_switch_type tmp5;
          int tmp6;
          tmp5 = 0;
          MMC_TRY_INTERNAL(mmc_jumper)
          tmp4_top:
          threadData->mmc_jumper = &new_mmc_jumper;
          for (; tmp5 < 2; tmp5++) {
            switch (MMC_SWITCH_CAST(tmp5)) {
            case 0: {
              modelica_metatype tmpMeta7;
              /* Pattern matching succeeded */
#line 5781 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e);
#line 5842 OMC_FILE

#line 5782 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              tmpMeta7 = mmc_mk_cons(_e, _outList);
#line 5782 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              _outList = tmpMeta7;
#line 5848 OMC_FILE
#line 5849 OMC_FILE
              goto tmp4_done;
            }
            case 1: {
              /* Pattern matching succeeded */
#line 5854 OMC_FILE
              goto tmp4_done;
            }
            }
            goto tmp4_end;
            tmp4_end: ;
          }
          goto goto_3;
          tmp4_done:
          (void)tmp5;
          MMC_RESTORE_INTERNAL(mmc_jumper);
          goto tmp4_done2;
          goto_3:;
          MMC_CATCH_INTERNAL(mmc_jumper);
          if (++tmp5 < 2) {
            goto tmp4_top;
          }
          MMC_THROW_INTERNAL();
          tmp4_done2:;
        }
      }
      ;
    }
  }

#line 5787 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 5881 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_extract1OnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_metatype _inArg, modelica_metatype *out_outRemainingList)
{
  modelica_metatype _outExtractedList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outRemainingList = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outExtractedList = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outRemainingList = tmpMeta2;
#line 5754 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5754 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 5754 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
#line 5754 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 5754 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta3);
#line 5755 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e, _inArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e, _inArg)))
#line 5755 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 5756 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta4 = mmc_mk_cons(_e, _outExtractedList);
#line 5756 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outExtractedList = tmpMeta4;
#line 5921 OMC_FILE
      }
      else
      {
#line 5758 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta5 = mmc_mk_cons(_e, _outRemainingList);
#line 5758 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outRemainingList = tmpMeta5;
#line 5929 OMC_FILE
      }
    }
  }

#line 5762 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outExtractedList = listReverseInPlace(_outExtractedList);
#line 5936 OMC_FILE

#line 5763 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outRemainingList = listReverseInPlace(_outRemainingList);
#line 5940 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outRemainingList) { *out_outRemainingList = _outRemainingList; }
  return _outExtractedList;
}

DLLExport
modelica_metatype omc_List_extractOnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_metatype *out_outRemainingList)
{
  modelica_metatype _outExtractedList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outRemainingList = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outExtractedList = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outRemainingList = tmpMeta2;
#line 5726 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5726 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 5726 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
#line 5726 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 5726 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta3);
#line 5727 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e)))
#line 5727 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 5728 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta4 = mmc_mk_cons(_e, _outExtractedList);
#line 5728 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outExtractedList = tmpMeta4;
#line 5981 OMC_FILE
      }
      else
      {
#line 5730 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta5 = mmc_mk_cons(_e, _outRemainingList);
#line 5730 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outRemainingList = tmpMeta5;
#line 5989 OMC_FILE
      }
    }
  }

#line 5734 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outExtractedList = listReverseInPlace(_outExtractedList);
#line 5996 OMC_FILE

#line 5735 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outRemainingList = listReverseInPlace(_outRemainingList);
#line 6000 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outRemainingList) { *out_outRemainingList = _outRemainingList; }
  return _outExtractedList;
}

DLLExport
modelica_boolean omc_List_exist2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFindFunc, modelica_metatype _inExtraArg1, modelica_metatype _inExtraArg2)
{
  modelica_boolean _outExists;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExists has no default value.
#line 5700 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5700 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 5700 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 5700 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 5700 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 5701 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFindFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFindFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFindFunc), 2))), _e, _inExtraArg1, _inExtraArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFindFunc), 1)))) (threadData, _e, _inExtraArg1, _inExtraArg2)))
#line 5701 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 5702 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outExists = 1 /* true */;
#line 6031 OMC_FILE

#line 5703 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 6035 OMC_FILE
      }
    }
  }

#line 5707 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outExists = 0 /* false */;
#line 6042 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outExists;
}
modelica_metatype boxptr_List_exist2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFindFunc, modelica_metatype _inExtraArg1, modelica_metatype _inExtraArg2)
{
  modelica_boolean _outExists;
  modelica_metatype out_outExists;
  _outExists = omc_List_exist2(threadData, _inList, _inFindFunc, _inExtraArg1, _inExtraArg2);
  out_outExists = mmc_mk_icon(_outExists);
  return out_outExists;
}

DLLExport
modelica_boolean omc_List_exist1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFindFunc, modelica_metatype _inExtraArg)
{
  modelica_boolean _outExists;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExists has no default value.
#line 5673 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5673 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 5673 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 5673 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 5673 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 5674 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFindFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFindFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFindFunc), 2))), _e, _inExtraArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFindFunc), 1)))) (threadData, _e, _inExtraArg)))
#line 5674 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 5675 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outExists = 1 /* true */;
#line 6080 OMC_FILE

#line 5676 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 6084 OMC_FILE
      }
    }
  }

#line 5680 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outExists = 0 /* false */;
#line 6091 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outExists;
}
modelica_metatype boxptr_List_exist1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFindFunc, modelica_metatype _inExtraArg)
{
  modelica_boolean _outExists;
  modelica_metatype out_outExists;
  _outExists = omc_List_exist1(threadData, _inList, _inFindFunc, _inExtraArg);
  out_outExists = mmc_mk_icon(_outExists);
  return out_outExists;
}

DLLExport
modelica_boolean omc_List_exist(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFindFunc)
{
  modelica_boolean _outExists;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExists has no default value.
#line 5648 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5648 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 5648 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 5648 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 5648 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 5649 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFindFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFindFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFindFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFindFunc), 1)))) (threadData, _e)))
#line 5649 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 5650 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outExists = 1 /* true */;
#line 6129 OMC_FILE

#line 5651 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 6133 OMC_FILE
      }
    }
  }

#line 5655 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outExists = 0 /* false */;
#line 6140 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outExists;
}
modelica_metatype boxptr_List_exist(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFindFunc)
{
  modelica_boolean _outExists;
  modelica_metatype out_outExists;
  _outExists = omc_List_exist(threadData, _inList, _inFindFunc);
  out_outExists = mmc_mk_icon(_outExists);
  return out_outExists;
}

DLLExport
modelica_boolean omc_List_isMemberOnTrue(threadData_t *threadData, modelica_metatype _inValue, modelica_metatype _inList, modelica_fnptr _inCompFunc)
{
  modelica_boolean _outIsMember;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outIsMember has no default value.
#line 5623 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5623 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 5623 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 5623 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 5623 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 5624 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _inValue, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _inValue, _e)))
#line 5624 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 5625 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outIsMember = 1 /* true */;
#line 6178 OMC_FILE

#line 5626 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 6182 OMC_FILE
      }
    }
  }

#line 5630 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outIsMember = 0 /* false */;
#line 6189 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outIsMember;
}
modelica_metatype boxptr_List_isMemberOnTrue(threadData_t *threadData, modelica_metatype _inValue, modelica_metatype _inList, modelica_fnptr _inCompFunc)
{
  modelica_boolean _outIsMember;
  modelica_metatype out_outIsMember;
  _outIsMember = omc_List_isMemberOnTrue(threadData, _inValue, _inList, _inCompFunc);
  out_outIsMember = mmc_mk_icon(_outIsMember);
  return out_outIsMember;
}

DLLExport
modelica_boolean omc_List_notMember(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inList)
{
  modelica_boolean _outIsNotMember;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outIsNotMember has no default value.
#line 5606 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outIsNotMember = (!listMember(_inElement, _inList));
#line 6211 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outIsNotMember;
}
modelica_metatype boxptr_List_notMember(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inList)
{
  modelica_boolean _outIsNotMember;
  modelica_metatype out_outIsNotMember;
  _outIsNotMember = omc_List_notMember(threadData, _inElement, _inList);
  out_outIsNotMember = mmc_mk_icon(_outIsNotMember);
  return out_outIsNotMember;
}

DLLExport
modelica_metatype omc_List_getMemberOnTrue(threadData_t *threadData, modelica_metatype _inValue, modelica_metatype _inList, modelica_fnptr _inCompFunc)
{
  modelica_metatype _outElement = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElement has no default value.
#line 5591 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5591 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 5591 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 5591 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 5591 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 5592 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _inValue, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _inValue, _e)))
#line 5592 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 5593 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outElement = _e;
#line 6249 OMC_FILE

#line 5594 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 6253 OMC_FILE
      }
    }
  }

#line 5597 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  MMC_THROW_INTERNAL();
#line 6260 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outElement;
}

DLLExport
modelica_metatype omc_List_getMember(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inList)
{
  modelica_metatype _outElement = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _res = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElement has no default value.
  // _e has no default value.
  // _res has no default value.
  // _rest has no default value.
#line 5564 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5564 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 5564 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 5564 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 5564 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 5565 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(valueEq(_inElement, _e))
#line 5565 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 5566 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outElement = _e;
#line 6296 OMC_FILE

#line 5567 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 6300 OMC_FILE
      }
    }
  }

#line 5570 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  MMC_THROW_INTERNAL();
#line 6307 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outElement;
}

DLLExport
modelica_integer omc_List_positionList(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inList, modelica_integer *out_outPosition)
{
  modelica_integer _outListIndex;
  modelica_integer _outPosition;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outListIndex = ((modelica_integer) 1);
  // _outPosition has no default value.
#line 5535 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5535 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _lst;
#line 5535 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 5535 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 5535 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _lst = MMC_CAR(tmpMeta1);
#line 5536 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outPosition = ((modelica_integer) 1);
#line 6337 OMC_FILE

#line 5538 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 5538 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        modelica_metatype _e;
#line 5538 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        for (tmpMeta2 = _lst; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 5538 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 5538 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _e = MMC_CAR(tmpMeta2);
#line 5539 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          if(valueEq(_e, _inElement))
#line 5539 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          {
#line 5540 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            goto _return;
#line 6355 OMC_FILE
          }

#line 5543 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _outPosition = ((modelica_integer) 1) + _outPosition;
#line 6360 OMC_FILE
        }
      }

#line 5546 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outListIndex = ((modelica_integer) 1) + _outListIndex;
#line 6366 OMC_FILE
    }
  }

#line 5549 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  MMC_THROW_INTERNAL();
#line 6372 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outPosition) { *out_outPosition = _outPosition; }
  return _outListIndex;
}
modelica_metatype boxptr_List_positionList(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inList, modelica_metatype *out_outPosition)
{
  modelica_integer _outPosition;
  modelica_integer _outListIndex;
  modelica_metatype out_outListIndex;
  _outListIndex = omc_List_positionList(threadData, _inElement, _inList, &_outPosition);
  out_outListIndex = mmc_mk_icon(_outListIndex);
  if (out_outPosition) { *out_outPosition = mmc_mk_icon(_outPosition); }
  return out_outListIndex;
}

DLLExport
modelica_integer omc_List_position1OnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inPredFunc, modelica_metatype _inArg)
{
  modelica_integer _outPosition;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outPosition = ((modelica_integer) 1);
#line 5514 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5514 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 5514 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 5514 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 5514 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 5515 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPredFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPredFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPredFunc), 2))), _e, _inArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPredFunc), 1)))) (threadData, _e, _inArg)))
#line 5515 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 5516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 6413 OMC_FILE
      }

#line 5519 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outPosition = ((modelica_integer) 1) + _outPosition;
#line 6418 OMC_FILE
    }
  }

#line 5522 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outPosition = ((modelica_integer) -1);
#line 6424 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outPosition;
}
modelica_metatype boxptr_List_position1OnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inPredFunc, modelica_metatype _inArg)
{
  modelica_integer _outPosition;
  modelica_metatype out_outPosition;
  _outPosition = omc_List_position1OnTrue(threadData, _inList, _inPredFunc, _inArg);
  out_outPosition = mmc_mk_icon(_outPosition);
  return out_outPosition;
}

DLLExport
modelica_integer omc_List_positionOnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inPredFunc)
{
  modelica_integer _outPosition;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outPosition = ((modelica_integer) 1);
#line 5487 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5487 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 5487 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 5487 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 5487 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 5488 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPredFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPredFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPredFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPredFunc), 1)))) (threadData, _e)))
#line 5488 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 5489 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 6462 OMC_FILE
      }

#line 5492 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outPosition = ((modelica_integer) 1) + _outPosition;
#line 6467 OMC_FILE
    }
  }

#line 5495 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outPosition = ((modelica_integer) -1);
#line 6473 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outPosition;
}
modelica_metatype boxptr_List_positionOnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inPredFunc)
{
  modelica_integer _outPosition;
  modelica_metatype out_outPosition;
  _outPosition = omc_List_positionOnTrue(threadData, _inList, _inPredFunc);
  out_outPosition = mmc_mk_icon(_outPosition);
  return out_outPosition;
}

DLLExport
modelica_integer omc_List_position(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inList)
{
  modelica_integer _outPosition;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outPosition = ((modelica_integer) 1);
#line 5466 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5466 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 5466 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 5466 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 5466 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 5467 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(valueEq(_e, _inElement))
#line 5467 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 5468 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 6511 OMC_FILE
      }

#line 5470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outPosition = ((modelica_integer) 1) + _outPosition;
#line 6516 OMC_FILE
    }
  }

#line 5472 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  MMC_THROW_INTERNAL();
#line 6522 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outPosition;
}
modelica_metatype boxptr_List_position(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inList)
{
  modelica_integer _outPosition;
  modelica_metatype out_outPosition;
  _outPosition = omc_List_position(threadData, _inElement, _inList);
  out_outPosition = mmc_mk_icon(_outPosition);
  return out_outPosition;
}

DLLExport
modelica_metatype omc_List_threadMapFold(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inFunc, modelica_metatype _inArg, modelica_metatype *out_outArg)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outArg = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _rest_e2 = NULL;
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_boolean tmp8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  _outArg = _inArg;
  // _e2 has no default value.
  _rest_e2 = _inList2;
  // _res has no default value.
#line 5448 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5448 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1;
#line 5448 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 5448 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 5448 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e1 = MMC_CAR(tmpMeta2);
#line 5449 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 5449 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = _rest_e2;
#line 5449 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
#line 5449 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = MMC_CAR(tmpMeta3);
#line 5449 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = MMC_CDR(tmpMeta3);
#line 5449 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e2 = tmpMeta4;
#line 5449 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _rest_e2 = tmpMeta5;
#line 6583 OMC_FILE

#line 5450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e1, _e2, _outArg ,&_outArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e1, _e2, _outArg ,&_outArg);
#line 6587 OMC_FILE

#line 5451 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta6 = mmc_mk_cons(_res, _outList);
#line 5451 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta6;
#line 6593 OMC_FILE
    }
  }

#line 5454 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 5454 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp8 = listEmpty(_rest_e2);
#line 5454 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (1 /* true */ != tmp8) MMC_THROW_INTERNAL();
#line 6603 OMC_FILE

#line 5455 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 6607 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outArg) { *out_outArg = _outArg; }
  return _outList;
}

DLLExport
modelica_metatype omc_List_threadFold(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inFoldFunc, modelica_metatype _inFoldArg)
{
  modelica_metatype _outFoldArg = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outFoldArg has no default value.
#line 6621 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inList1;
    tmp4_2 = _inList2;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _rest1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _rest2 = NULL;
      modelica_metatype _res = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1 has no default value.
      // _rest1 has no default value.
      // _e2 has no default value.
      // _rest2 has no default value.
      // _res has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          _e1 = tmpMeta6;
          _rest1 = tmpMeta7;
          _e2 = tmpMeta8;
          _rest2 = tmpMeta9;
          /* Pattern matching succeeded */
#line 5416 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e1, _e2, _inFoldArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e1, _e2, _inFoldArg);
#line 6660 OMC_FILE
#line 5417 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* Tail recursive call */
#line 5417 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inList1 = _rest1;
#line 5417 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inList2 = _rest2;
#line 5417 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inFoldArg = _res;
#line 5417 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          goto _tailrecursive;
#line 5417 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* TODO: Make sure any eventual dead code below is never generated */
#line 6673 OMC_FILE
          goto tmp3_done;
        }
        case 1: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
#line 5420 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = _inFoldArg;
#line 6682 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outFoldArg = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outFoldArg;
}

DLLExport
modelica_metatype omc_List_threadFold4(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inFoldFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_metatype _inArg4, modelica_metatype _inFoldArg)
{
  modelica_metatype _outFoldArg = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outFoldArg has no default value.
#line 6709 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inList1;
    tmp4_2 = _inList2;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _rest1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _rest2 = NULL;
      modelica_metatype _res = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1 has no default value.
      // _rest1 has no default value.
      // _e2 has no default value.
      // _rest2 has no default value.
      // _res has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          _e1 = tmpMeta6;
          _rest1 = tmpMeta7;
          _e2 = tmpMeta8;
          _rest2 = tmpMeta9;
          /* Pattern matching succeeded */
#line 5381 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e1, _e2, _inArg1, _inArg2, _inArg3, _inArg4, _inFoldArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e1, _e2, _inArg1, _inArg2, _inArg3, _inArg4, _inFoldArg);
#line 6748 OMC_FILE
#line 5382 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* Tail recursive call */
#line 5382 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inList1 = _rest1;
#line 5382 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inList2 = _rest2;
#line 5382 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inFoldArg = _res;
#line 5382 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          goto _tailrecursive;
#line 5382 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* TODO: Make sure any eventual dead code below is never generated */
#line 6761 OMC_FILE
          goto tmp3_done;
        }
        case 1: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
#line 5385 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = _inFoldArg;
#line 6770 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outFoldArg = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outFoldArg;
}

DLLExport
modelica_metatype omc_List_threadFold3(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inFoldFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_metatype _inFoldArg)
{
  modelica_metatype _outFoldArg = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outFoldArg has no default value.
#line 6797 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inList1;
    tmp4_2 = _inList2;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _rest1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _rest2 = NULL;
      modelica_metatype _res = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1 has no default value.
      // _rest1 has no default value.
      // _e2 has no default value.
      // _rest2 has no default value.
      // _res has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          _e1 = tmpMeta6;
          _rest1 = tmpMeta7;
          _e2 = tmpMeta8;
          _rest2 = tmpMeta9;
          /* Pattern matching succeeded */
#line 5337 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e1, _e2, _inArg1, _inArg2, _inArg3, _inFoldArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e1, _e2, _inArg1, _inArg2, _inArg3, _inFoldArg);
#line 6836 OMC_FILE
#line 5338 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* Tail recursive call */
#line 5338 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inList1 = _rest1;
#line 5338 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inList2 = _rest2;
#line 5338 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inFoldArg = _res;
#line 5338 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          goto _tailrecursive;
#line 5338 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* TODO: Make sure any eventual dead code below is never generated */
#line 6849 OMC_FILE
          goto tmp3_done;
        }
        case 1: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
#line 5341 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = _inFoldArg;
#line 6858 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outFoldArg = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outFoldArg;
}

DLLExport
modelica_metatype omc_List_threadFold2(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inFoldFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inFoldArg)
{
  modelica_metatype _outFoldArg = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outFoldArg has no default value.
#line 6885 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inList1;
    tmp4_2 = _inList2;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _rest1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _rest2 = NULL;
      modelica_metatype _res = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1 has no default value.
      // _rest1 has no default value.
      // _e2 has no default value.
      // _rest2 has no default value.
      // _res has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          _e1 = tmpMeta6;
          _rest1 = tmpMeta7;
          _e2 = tmpMeta8;
          _rest2 = tmpMeta9;
          /* Pattern matching succeeded */
#line 5295 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e1, _e2, _inArg1, _inArg2, _inFoldArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e1, _e2, _inArg1, _inArg2, _inFoldArg);
#line 6924 OMC_FILE
#line 5296 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* Tail recursive call */
#line 5296 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inList1 = _rest1;
#line 5296 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inList2 = _rest2;
#line 5296 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inFoldArg = _res;
#line 5296 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          goto _tailrecursive;
#line 5296 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* TODO: Make sure any eventual dead code below is never generated */
#line 6937 OMC_FILE
          goto tmp3_done;
        }
        case 1: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
#line 5299 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = _inFoldArg;
#line 6946 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outFoldArg = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outFoldArg;
}

DLLExport
modelica_metatype omc_List_threadFold1(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inFoldFunc, modelica_metatype _inArg1, modelica_metatype _inFoldArg)
{
  modelica_metatype _outFoldArg = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outFoldArg has no default value.
#line 6973 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inList1;
    tmp4_2 = _inList2;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _rest1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _rest2 = NULL;
      modelica_metatype _res = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1 has no default value.
      // _rest1 has no default value.
      // _e2 has no default value.
      // _rest2 has no default value.
      // _res has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          _e1 = tmpMeta6;
          _rest1 = tmpMeta7;
          _e2 = tmpMeta8;
          _rest2 = tmpMeta9;
          /* Pattern matching succeeded */
#line 5255 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e1, _e2, _inArg1, _inFoldArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e1, _e2, _inArg1, _inFoldArg);
#line 7012 OMC_FILE
#line 5256 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* Tail recursive call */
#line 5256 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inList1 = _rest1;
#line 5256 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inList2 = _rest2;
#line 5256 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inFoldArg = _res;
#line 5256 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          goto _tailrecursive;
#line 5256 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* TODO: Make sure any eventual dead code below is never generated */
#line 7025 OMC_FILE
          goto tmp3_done;
        }
        case 1: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
#line 5259 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = _inFoldArg;
#line 7034 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outFoldArg = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outFoldArg;
}

DLLExport
modelica_metatype omc_List_thread3Map3(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_metatype _inList3, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar27;
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar26;
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1_loopVar = 0;
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1;
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e2_loopVar = 0;
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e2;
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e3_loopVar = 0;
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e3;
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e1_loopVar = _inList1;
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e2_loopVar = _inList2;
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e3_loopVar = _inList3;
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar27 = tmpMeta3; /* defaultValue */
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar27;
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 3;
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e1_loopVar)) {
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e1 = MMC_CAR(_e1_loopVar);
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e1_loopVar = MMC_CDR(_e1_loopVar);
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }if (!listEmpty(_e2_loopVar)) {
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e2 = MMC_CAR(_e2_loopVar);
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e2_loopVar = MMC_CDR(_e2_loopVar);
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }if (!listEmpty(_e3_loopVar)) {
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e3 = MMC_CAR(_e3_loopVar);
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e3_loopVar = MMC_CDR(_e3_loopVar);
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar26 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e1, _e2, _e3, _inArg1, _inArg2, _inArg3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e1, _e2, _e3, _inArg1, _inArg2, _inArg3);
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar26,0);
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 3) {
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar27;
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 5222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 7155 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_thread3MapFold(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_metatype _inList3, modelica_fnptr _inFunc, modelica_metatype _inArg, modelica_metatype *out_outArg)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outArg = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _rest_e2 = NULL;
  modelica_metatype _e3 = NULL;
  modelica_metatype _rest_e3 = NULL;
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  _outArg = _inArg;
  // _e2 has no default value.
  _rest_e2 = _inList2;
  // _e3 has no default value.
  _rest_e3 = _inList3;
  // _res has no default value.
#line 5187 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5187 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1;
#line 5187 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 5187 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 5187 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e1 = MMC_CAR(tmpMeta2);
#line 5188 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 5188 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = _rest_e2;
#line 5188 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
#line 5188 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = MMC_CAR(tmpMeta3);
#line 5188 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = MMC_CDR(tmpMeta3);
#line 5188 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e2 = tmpMeta4;
#line 5188 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _rest_e2 = tmpMeta5;
#line 7216 OMC_FILE

#line 5189 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 5189 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta6 = _rest_e3;
#line 5189 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta6)) MMC_THROW_INTERNAL();
#line 5189 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta7 = MMC_CAR(tmpMeta6);
#line 5189 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta8 = MMC_CDR(tmpMeta6);
#line 5189 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e3 = tmpMeta7;
#line 5189 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _rest_e3 = tmpMeta8;
#line 7232 OMC_FILE

#line 5190 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e1, _e2, _e3, _outArg ,&_outArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e1, _e2, _e3, _outArg ,&_outArg);
#line 7236 OMC_FILE

#line 5191 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta9 = mmc_mk_cons(_res, _outList);
#line 5191 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta9;
#line 7242 OMC_FILE
    }
  }

#line 5194 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 5194 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp11 = listEmpty(_rest_e2);
#line 5194 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (1 /* true */ != tmp11) MMC_THROW_INTERNAL();
#line 7252 OMC_FILE

#line 5195 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 5195 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp12 = listEmpty(_rest_e3);
#line 5195 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (1 /* true */ != tmp12) MMC_THROW_INTERNAL();
#line 7260 OMC_FILE

#line 5196 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 7264 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outArg) { *out_outArg = _outArg; }
  return _outList;
}

DLLExport
modelica_metatype omc_List_thread3Map__2(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_metatype _inList3, modelica_fnptr _inFunc, modelica_metatype *out_outList2)
{
  modelica_metatype _outList1 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outList2 = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _e2 = NULL;
  modelica_metatype _rest_e2 = NULL;
  modelica_metatype _e3 = NULL;
  modelica_metatype _rest_e3 = NULL;
  modelica_metatype _res1 = NULL;
  modelica_metatype _res2 = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList1 = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList2 = tmpMeta2;
  // _e2 has no default value.
  _rest_e2 = _inList2;
  // _e3 has no default value.
  _rest_e3 = _inList3;
  // _res1 has no default value.
  // _res2 has no default value.
#line 5146 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5146 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1;
#line 5146 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta3 = _inList1; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
#line 5146 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 5146 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e1 = MMC_CAR(tmpMeta3);
#line 5147 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 5147 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = _rest_e2;
#line 5147 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
#line 5147 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = MMC_CAR(tmpMeta4);
#line 5147 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta6 = MMC_CDR(tmpMeta4);
#line 5147 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e2 = tmpMeta5;
#line 5147 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _rest_e2 = tmpMeta6;
#line 7331 OMC_FILE

#line 5148 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 5148 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta7 = _rest_e3;
#line 5148 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
#line 5148 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta8 = MMC_CAR(tmpMeta7);
#line 5148 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta9 = MMC_CDR(tmpMeta7);
#line 5148 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e3 = tmpMeta8;
#line 5148 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _rest_e3 = tmpMeta9;
#line 7347 OMC_FILE

#line 5149 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _res1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e1, _e2, _e3 ,&_res2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e1, _e2, _e3 ,&_res2);
#line 7351 OMC_FILE

#line 5150 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta10 = mmc_mk_cons(_res1, _outList1);
#line 5150 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList1 = tmpMeta10;
#line 7357 OMC_FILE

#line 5151 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta11 = mmc_mk_cons(_res2, _outList2);
#line 5151 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList2 = tmpMeta11;
#line 7363 OMC_FILE
    }
  }

#line 5154 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 5154 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp13 = listEmpty(_rest_e2);
#line 5154 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (1 /* true */ != tmp13) MMC_THROW_INTERNAL();
#line 7373 OMC_FILE

#line 5155 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 5155 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp14 = listEmpty(_rest_e3);
#line 5155 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (1 /* true */ != tmp14) MMC_THROW_INTERNAL();
#line 7381 OMC_FILE

#line 5156 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList1 = listReverseInPlace(_outList1);
#line 7385 OMC_FILE

#line 5157 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList2 = listReverseInPlace(_outList2);
#line 7389 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outList2) { *out_outList2 = _outList2; }
  return _outList1;
}

DLLExport
modelica_metatype omc_List_threadMap3ReverseFold(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_metatype _inFoldArg, modelica_metatype _inAccum, modelica_metatype *out_outFoldArg)
{
  modelica_metatype _outList = NULL;
  modelica_metatype _outFoldArg = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
  // _outFoldArg has no default value.
#line 5098 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"

#line 5098 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"

#line 7409 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inList1;
    tmp4_2 = _inList2;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _rest1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _rest2 = NULL;
      modelica_metatype _res = NULL;
      modelica_metatype _foldArg = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1 has no default value.
      // _rest1 has no default value.
      // _e2 has no default value.
      // _rest2 has no default value.
      // _res has no default value.
      // _foldArg has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          _e1 = tmpMeta6;
          _rest1 = tmpMeta7;
          _e2 = tmpMeta8;
          _rest2 = tmpMeta9;
          /* Pattern matching succeeded */
#line 5109 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2, _inArg1, _inArg2, _inArg3, _inFoldArg ,&_foldArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2, _inArg1, _inArg2, _inArg3, _inFoldArg ,&_foldArg);
#line 7451 OMC_FILE
#line 5110 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta10 = mmc_mk_cons(_res, _inAccum);
#line 5110 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* Tail recursive call */
#line 5110 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inList1 = _rest1;
#line 5110 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inList2 = _rest2;
#line 5110 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inFoldArg = _foldArg;
#line 5110 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inAccum = tmpMeta10;
#line 5110 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          goto _tailrecursive;
#line 5110 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* TODO: Make sure any eventual dead code below is never generated */
#line 7468 OMC_FILE
          goto tmp3_done;
        }
        case 1: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
#line 5115 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta[0+0] = _inAccum;
#line 5115 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta[0+1] = _inFoldArg;
#line 7479 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outList = tmpMeta[0+0];
  _outFoldArg = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outFoldArg) { *out_outFoldArg = _outFoldArg; }
  return _outList;
}

DLLExport
modelica_metatype omc_List_thread3Map(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_metatype _inList3, modelica_fnptr _inFunc)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar29;
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar28;
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1_loopVar = 0;
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1;
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e2_loopVar = 0;
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e2;
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e3_loopVar = 0;
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e3;
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e1_loopVar = _inList1;
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e2_loopVar = _inList2;
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e3_loopVar = _inList3;
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar29 = tmpMeta3; /* defaultValue */
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar29;
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 3;
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e1_loopVar)) {
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e1 = MMC_CAR(_e1_loopVar);
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e1_loopVar = MMC_CDR(_e1_loopVar);
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }if (!listEmpty(_e2_loopVar)) {
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e2 = MMC_CAR(_e2_loopVar);
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e2_loopVar = MMC_CDR(_e2_loopVar);
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }if (!listEmpty(_e3_loopVar)) {
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e3 = MMC_CAR(_e3_loopVar);
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e3_loopVar = MMC_CDR(_e3_loopVar);
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar28 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e1, _e2, _e3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e1, _e2, _e3);
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar28,0);
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 3) {
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar29;
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 5068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 7602 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_threadMap3Reverse(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar31;
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta2;
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar30;
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp3;
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1_loopVar = 0;
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1;
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e2_loopVar = 0;
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e2;
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e1_loopVar = _inList1;
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e2_loopVar = _inList2;
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar31 = tmpMeta2; /* defaultValue */
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp3 = 2;
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e1_loopVar)) {
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e1 = MMC_CAR(_e1_loopVar);
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e1_loopVar = MMC_CDR(_e1_loopVar);
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp3--;
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }if (!listEmpty(_e2_loopVar)) {
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e2 = MMC_CAR(_e2_loopVar);
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e2_loopVar = MMC_CDR(_e2_loopVar);
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp3--;
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp3 == 0) {
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar30 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2, _inArg1, _inArg2, _inArg3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2, _inArg1, _inArg2, _inArg3);
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar31 = mmc_mk_cons(__omcQ_24tmpVar30,__omcQ_24tmpVar31);
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp3 == 2) {
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar31;
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 5047 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 7687 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_threadMap3(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar33;
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar32;
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1_loopVar = 0;
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1;
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e2_loopVar = 0;
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e2;
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e1_loopVar = _inList1;
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e2_loopVar = _inList2;
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar33 = tmpMeta3; /* defaultValue */
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar33;
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 2;
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e1_loopVar)) {
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e1 = MMC_CAR(_e1_loopVar);
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e1_loopVar = MMC_CDR(_e1_loopVar);
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }if (!listEmpty(_e2_loopVar)) {
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e2 = MMC_CAR(_e2_loopVar);
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e2_loopVar = MMC_CDR(_e2_loopVar);
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar32 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2, _inArg1, _inArg2, _inArg3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2, _inArg1, _inArg2, _inArg3);
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar32,0);
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 2) {
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar33;
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 5022 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 7780 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_threadMap2ReverseFold(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inFoldArg, modelica_metatype _inAccum, modelica_metatype *out_outFoldArg)
{
  modelica_metatype _outList = NULL;
  modelica_metatype _outFoldArg = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
  // _outFoldArg has no default value.
#line 4981 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"

#line 4981 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"

#line 7799 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inList1;
    tmp4_2 = _inList2;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _rest1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _rest2 = NULL;
      modelica_metatype _res = NULL;
      modelica_metatype _foldArg = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1 has no default value.
      // _rest1 has no default value.
      // _e2 has no default value.
      // _rest2 has no default value.
      // _res has no default value.
      // _foldArg has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
#line 4990 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta[0+0] = _inAccum;
#line 4990 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta[0+1] = _inFoldArg;
#line 7830 OMC_FILE
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          _e1 = tmpMeta6;
          _rest1 = tmpMeta7;
          _e2 = tmpMeta8;
          _rest2 = tmpMeta9;
          /* Pattern matching succeeded */
#line 4993 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2, _inArg1, _inArg2, _inFoldArg ,&_foldArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2, _inArg1, _inArg2, _inFoldArg ,&_foldArg);
#line 7852 OMC_FILE
#line 4994 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta10 = mmc_mk_cons(_res, _inAccum);
#line 4994 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* Tail recursive call */
#line 4994 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inList1 = _rest1;
#line 4994 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inList2 = _rest2;
#line 4994 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inFoldArg = _foldArg;
#line 4994 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inAccum = tmpMeta10;
#line 4994 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          goto _tailrecursive;
#line 4994 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* TODO: Make sure any eventual dead code below is never generated */
#line 7869 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outList = tmpMeta[0+0];
  _outFoldArg = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outFoldArg) { *out_outFoldArg = _outFoldArg; }
  return _outList;
}

DLLExport
modelica_metatype omc_List_threadMap2Reverse(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar35;
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta2;
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar34;
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp3;
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1_loopVar = 0;
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1;
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e2_loopVar = 0;
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e2;
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e1_loopVar = _inList1;
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e2_loopVar = _inList2;
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar35 = tmpMeta2; /* defaultValue */
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp3 = 2;
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e1_loopVar)) {
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e1 = MMC_CAR(_e1_loopVar);
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e1_loopVar = MMC_CDR(_e1_loopVar);
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp3--;
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }if (!listEmpty(_e2_loopVar)) {
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e2 = MMC_CAR(_e2_loopVar);
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e2_loopVar = MMC_CDR(_e2_loopVar);
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp3--;
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp3 == 0) {
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar34 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2, _inArg1, _inArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2, _inArg1, _inArg2);
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar35 = mmc_mk_cons(__omcQ_24tmpVar34,__omcQ_24tmpVar35);
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp3 == 2) {
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar35;
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 4953 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 7970 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_threadMap2(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar37;
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar36;
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1_loopVar = 0;
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1;
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e2_loopVar = 0;
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e2;
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e1_loopVar = _inList1;
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e2_loopVar = _inList2;
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar37 = tmpMeta3; /* defaultValue */
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar37;
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 2;
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e1_loopVar)) {
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e1 = MMC_CAR(_e1_loopVar);
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e1_loopVar = MMC_CDR(_e1_loopVar);
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }if (!listEmpty(_e2_loopVar)) {
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e2 = MMC_CAR(_e2_loopVar);
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e2_loopVar = MMC_CDR(_e2_loopVar);
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar36 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2, _inArg1, _inArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2, _inArg1, _inArg2);
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar36,0);
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 2) {
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar37;
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 4930 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 8063 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
void omc_List_threadMap1__0(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc, modelica_metatype _inArg1)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
#line 8073 OMC_FILE
  { /* match expression */
    modelica_metatype tmp3_1;modelica_metatype tmp3_2;
    tmp3_1 = _inList1;
    tmp3_2 = _inList2;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _rest1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _rest2 = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _e1 has no default value.
      // _rest1 has no default value.
      // _e2 has no default value.
      // _rest2 has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          if (!listEmpty(tmp3_2)) goto tmp2_end;
          /* Pattern matching succeeded */
#line 8096 OMC_FILE
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          if (listEmpty(tmp3_2)) goto tmp2_end;
          tmpMeta7 = MMC_CAR(tmp3_2);
          tmpMeta8 = MMC_CDR(tmp3_2);
          _e1 = tmpMeta5;
          _rest1 = tmpMeta6;
          _e2 = tmpMeta7;
          _rest2 = tmpMeta8;
          /* Pattern matching succeeded */
#line 4904 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2, _inArg1) : ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2, _inArg1);
#line 8117 OMC_FILE

#line 4905 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* Tail recursive call */
#line 4905 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inList1 = _rest1;
#line 4905 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inList2 = _rest2;
#line 4905 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          goto _tailrecursive;
#line 4905 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* TODO: Make sure any eventual dead code below is never generated */
#line 4905 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          ;
#line 8131 OMC_FILE
#line 8132 OMC_FILE
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      goto_1:;
      MMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return;
}

DLLExport
modelica_metatype omc_List_threadMap1Reverse(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc, modelica_metatype _inArg1)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar39;
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta2;
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar38;
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp3;
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1_loopVar = 0;
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1;
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e2_loopVar = 0;
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e2;
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e1_loopVar = _inList1;
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e2_loopVar = _inList2;
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar39 = tmpMeta2; /* defaultValue */
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp3 = 2;
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e1_loopVar)) {
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e1 = MMC_CAR(_e1_loopVar);
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e1_loopVar = MMC_CDR(_e1_loopVar);
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp3--;
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }if (!listEmpty(_e2_loopVar)) {
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e2 = MMC_CAR(_e2_loopVar);
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e2_loopVar = MMC_CDR(_e2_loopVar);
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp3--;
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp3 == 0) {
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar38 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2, _inArg1);
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar39 = mmc_mk_cons(__omcQ_24tmpVar38,__omcQ_24tmpVar39);
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp3 == 2) {
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar39;
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 4876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 8231 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_threadMap1(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc, modelica_metatype _inArg1)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar41;
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar40;
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1_loopVar = 0;
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1;
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e2_loopVar = 0;
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e2;
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e1_loopVar = _inList1;
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e2_loopVar = _inList2;
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar41 = tmpMeta3; /* defaultValue */
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar41;
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 2;
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e1_loopVar)) {
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e1 = MMC_CAR(_e1_loopVar);
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e1_loopVar = MMC_CDR(_e1_loopVar);
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }if (!listEmpty(_e2_loopVar)) {
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e2 = MMC_CAR(_e2_loopVar);
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e2_loopVar = MMC_CDR(_e2_loopVar);
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar40 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2, _inArg1);
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar40,0);
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 2) {
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar41;
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 4855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 8324 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
void omc_List_threadMapAllValue(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc, modelica_metatype _inValue)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
#line 8334 OMC_FILE
  { /* match expression */
    modelica_metatype tmp3_1;modelica_metatype tmp3_2;
    tmp3_1 = _inList1;
    tmp3_2 = _inList2;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _rest1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _rest2 = NULL;
      modelica_metatype _res = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _e1 has no default value.
      // _rest1 has no default value.
      // _e2 has no default value.
      // _rest2 has no default value.
      // _res has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          if (listEmpty(tmp3_2)) goto tmp2_end;
          tmpMeta7 = MMC_CAR(tmp3_2);
          tmpMeta8 = MMC_CDR(tmp3_2);
          _e1 = tmpMeta5;
          _rest1 = tmpMeta6;
          _e2 = tmpMeta7;
          _rest2 = tmpMeta8;
          /* Pattern matching succeeded */
#line 4828 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2);
#line 8373 OMC_FILE

#line 4829 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          equality(_res, _inValue);
#line 8377 OMC_FILE

#line 4830 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* Tail recursive call */
#line 4830 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inList1 = _rest1;
#line 4830 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inList2 = _rest2;
#line 4830 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          goto _tailrecursive;
#line 4830 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* TODO: Make sure any eventual dead code below is never generated */
#line 4830 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          ;
#line 8391 OMC_FILE
#line 8392 OMC_FILE
          goto tmp2_done;
        }
        case 1: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          if (!listEmpty(tmp3_2)) goto tmp2_end;
          /* Pattern matching succeeded */
#line 8399 OMC_FILE
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      goto_1:;
      MMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return;
}

DLLExport
modelica_metatype omc_List_threadMapList__2(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc, modelica_metatype *out_outList2)
{
  modelica_metatype _outList1 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outList2 = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _l2 = NULL;
  modelica_metatype _rest_l2 = NULL;
  modelica_metatype _ret1 = NULL;
  modelica_metatype _ret2 = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList1 = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList2 = tmpMeta2;
  // _l2 has no default value.
  _rest_l2 = _inList2;
  // _ret1 has no default value.
  // _ret2 has no default value.
#line 4790 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4790 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _l1;
#line 4790 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta3 = _inList1; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
#line 4790 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 4790 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _l1 = MMC_CAR(tmpMeta3);
#line 4791 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 4791 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = _rest_l2;
#line 4791 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
#line 4791 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = MMC_CAR(tmpMeta4);
#line 4791 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta6 = MMC_CDR(tmpMeta4);
#line 4791 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _l2 = tmpMeta5;
#line 4791 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _rest_l2 = tmpMeta6;
#line 8470 OMC_FILE

#line 4792 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _ret1 = omc_List_threadMap__2(threadData, _l1, _l2, ((modelica_fnptr) _inMapFunc) ,&_ret2);
#line 8474 OMC_FILE

#line 4793 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta7 = mmc_mk_cons(_ret1, _outList1);
#line 4793 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList1 = tmpMeta7;
#line 8480 OMC_FILE

#line 4794 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta8 = mmc_mk_cons(_ret2, _outList2);
#line 4794 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList2 = tmpMeta8;
#line 8486 OMC_FILE
    }
  }

#line 4797 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList1 = listReverseInPlace(_outList1);
#line 8492 OMC_FILE

#line 4798 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList2 = listReverseInPlace(_outList2);
#line 8496 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outList2) { *out_outList2 = _outList2; }
  return _outList1;
}

DLLExport
modelica_metatype omc_List_threadMapList(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar43;
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar42;
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _lst1_loopVar = 0;
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _lst1;
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _lst2_loopVar = 0;
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _lst2;
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _lst1_loopVar = _inList1;
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _lst2_loopVar = _inList2;
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar43 = tmpMeta3; /* defaultValue */
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar43;
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 2;
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_lst1_loopVar)) {
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _lst1 = MMC_CAR(_lst1_loopVar);
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _lst1_loopVar = MMC_CDR(_lst1_loopVar);
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }if (!listEmpty(_lst2_loopVar)) {
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _lst2 = MMC_CAR(_lst2_loopVar);
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _lst2_loopVar = MMC_CDR(_lst2_loopVar);
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar42 = omc_List_threadMap(threadData, _lst1, _lst2, ((modelica_fnptr) _inMapFunc));
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar42,0);
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 2) {
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar43;
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 4766 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 8590 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_threadMap__2(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc, modelica_metatype *out_outList2)
{
  modelica_metatype _outList1 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outList2 = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _e2 = NULL;
  modelica_metatype _rest_e2 = NULL;
  modelica_metatype _ret1 = NULL;
  modelica_metatype _ret2 = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList1 = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList2 = tmpMeta2;
  // _e2 has no default value.
  _rest_e2 = _inList2;
  // _ret1 has no default value.
  // _ret2 has no default value.
#line 4740 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4740 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1;
#line 4740 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta3 = _inList1; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
#line 4740 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 4740 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e1 = MMC_CAR(tmpMeta3);
#line 4741 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 4741 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = _rest_e2;
#line 4741 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
#line 4741 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = MMC_CAR(tmpMeta4);
#line 4741 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta6 = MMC_CDR(tmpMeta4);
#line 4741 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e2 = tmpMeta5;
#line 4741 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _rest_e2 = tmpMeta6;
#line 8647 OMC_FILE

#line 4742 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _ret1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2 ,&_ret2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2 ,&_ret2);
#line 8651 OMC_FILE

#line 4743 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta7 = mmc_mk_cons(_ret1, _outList1);
#line 4743 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList1 = tmpMeta7;
#line 8657 OMC_FILE

#line 4744 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta8 = mmc_mk_cons(_ret2, _outList2);
#line 4744 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList2 = tmpMeta8;
#line 8663 OMC_FILE
    }
  }

#line 4747 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList1 = listReverseInPlace(_outList1);
#line 8669 OMC_FILE

#line 4748 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList2 = listReverseInPlace(_outList2);
#line 8673 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outList2) { *out_outList2 = _outList2; }
  return _outList1;
}

DLLExport
modelica_metatype omc_List_threadMapReverse(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar45;
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta2;
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar44;
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp3;
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1_loopVar = 0;
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1;
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e2_loopVar = 0;
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e2;
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e1_loopVar = _inList1;
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e2_loopVar = _inList2;
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar45 = tmpMeta2; /* defaultValue */
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp3 = 2;
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e1_loopVar)) {
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e1 = MMC_CAR(_e1_loopVar);
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e1_loopVar = MMC_CDR(_e1_loopVar);
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp3--;
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }if (!listEmpty(_e2_loopVar)) {
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e2 = MMC_CAR(_e2_loopVar);
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e2_loopVar = MMC_CDR(_e2_loopVar);
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp3--;
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp3 == 0) {
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar44 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2);
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar45 = mmc_mk_cons(__omcQ_24tmpVar44,__omcQ_24tmpVar45);
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp3 == 2) {
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar45;
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 4717 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 8759 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_threadMap(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar47;
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar46;
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1_loopVar = 0;
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1;
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e2_loopVar = 0;
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e2;
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e1_loopVar = _inList1;
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e2_loopVar = _inList2;
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar47 = tmpMeta3; /* defaultValue */
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar47;
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 2;
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e1_loopVar)) {
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e1 = MMC_CAR(_e1_loopVar);
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e1_loopVar = MMC_CDR(_e1_loopVar);
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }if (!listEmpty(_e2_loopVar)) {
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e2 = MMC_CAR(_e2_loopVar);
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e2_loopVar = MMC_CDR(_e2_loopVar);
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar46 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2);
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar46,0);
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 2) {
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar47;
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 4698 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 8852 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_unzipSecond(threadData_t *threadData, modelica_metatype _inTuples)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _e = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  // _e has no default value.
#line 4676 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4676 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _tpl;
#line 4676 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inTuples; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 4676 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 4676 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _tpl = MMC_CAR(tmpMeta2);
#line 4677 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 4677 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = _tpl;
#line 4677 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
#line 4677 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = tmpMeta4;
#line 8891 OMC_FILE

#line 4678 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = mmc_mk_cons(_e, _outList);
#line 4678 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta5;
#line 8897 OMC_FILE
    }
  }

#line 4680 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 8903 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_unzipFirst(threadData_t *threadData, modelica_metatype _inTuples)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _e = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  // _e has no default value.
#line 4661 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4661 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _tpl;
#line 4661 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inTuples; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 4661 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 4661 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _tpl = MMC_CAR(tmpMeta2);
#line 4662 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 4662 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = _tpl;
#line 4662 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
#line 4662 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = tmpMeta4;
#line 8942 OMC_FILE

#line 4663 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = mmc_mk_cons(_e, _outList);
#line 4663 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta5;
#line 8948 OMC_FILE
    }
  }

#line 4665 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 8954 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_unzipReverse(threadData_t *threadData, modelica_metatype _inTuples, modelica_metatype *out_outList2)
{
  modelica_metatype _outList1 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outList2 = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList1 = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList2 = tmpMeta2;
  // _e1 has no default value.
  // _e2 has no default value.
#line 4646 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4646 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _tpl;
#line 4646 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta3 = _inTuples; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
#line 4646 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 4646 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _tpl = MMC_CAR(tmpMeta3);
#line 4647 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 4647 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = _tpl;
#line 4647 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
#line 4647 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
#line 4647 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e1 = tmpMeta5;
#line 4647 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e2 = tmpMeta6;
#line 9005 OMC_FILE

#line 4648 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta7 = mmc_mk_cons(_e1, _outList1);
#line 4648 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList1 = tmpMeta7;
#line 9011 OMC_FILE

#line 4649 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta8 = mmc_mk_cons(_e2, _outList2);
#line 4649 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList2 = tmpMeta8;
#line 9017 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outList2) { *out_outList2 = _outList2; }
  return _outList1;
}

DLLExport
modelica_metatype omc_List_unzip3(threadData_t *threadData, modelica_metatype _tuples, modelica_metatype *out_l2, modelica_metatype *out_l3)
{
  modelica_metatype _l1 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _l2 = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _l3 = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _e3 = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _l1 = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _l2 = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _l3 = tmpMeta3;
  // _e1 has no default value.
  // _e2 has no default value.
  // _e3 has no default value.
#line 4629 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4629 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _t;
#line 4629 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta4 = listReverse(_tuples); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
#line 4629 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 4629 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _t = MMC_CAR(tmpMeta4);
#line 4630 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 4630 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = _t;
#line 4630 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
#line 4630 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
#line 4630 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 3));
#line 4630 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e1 = tmpMeta6;
#line 4630 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e2 = tmpMeta7;
#line 4630 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e3 = tmpMeta8;
#line 9083 OMC_FILE

#line 4631 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta9 = mmc_mk_cons(_e1, _l1);
#line 4631 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _l1 = tmpMeta9;
#line 9089 OMC_FILE

#line 4632 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta10 = mmc_mk_cons(_e2, _l2);
#line 4632 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _l2 = tmpMeta10;
#line 9095 OMC_FILE

#line 4633 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta11 = mmc_mk_cons(_e3, _l3);
#line 4633 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _l3 = tmpMeta11;
#line 9101 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_l2) { *out_l2 = _l2; }
  if (out_l3) { *out_l3 = _l3; }
  return _l1;
}

DLLExport
modelica_metatype omc_List_unzip(threadData_t *threadData, modelica_metatype _inTuples, modelica_metatype *out_outList2)
{
  modelica_metatype _outList1 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outList2 = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList1 = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList2 = tmpMeta2;
  // _e1 has no default value.
  // _e2 has no default value.
#line 4609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _tpl;
#line 4609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta3 = _inTuples; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
#line 4609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 4609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _tpl = MMC_CAR(tmpMeta3);
#line 4610 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 4610 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = _tpl;
#line 4610 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
#line 4610 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
#line 4610 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e1 = tmpMeta5;
#line 4610 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e2 = tmpMeta6;
#line 9156 OMC_FILE

#line 4611 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta7 = mmc_mk_cons(_e1, _outList1);
#line 4611 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList1 = tmpMeta7;
#line 9162 OMC_FILE

#line 4612 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta8 = mmc_mk_cons(_e2, _outList2);
#line 4612 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList2 = tmpMeta8;
#line 9168 OMC_FILE
    }
  }

#line 4614 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList1 = listReverseInPlace(_outList1);
#line 9174 OMC_FILE

#line 4615 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList2 = listReverseInPlace(_outList2);
#line 9178 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outList2) { *out_outList2 = _outList2; }
  return _outList1;
}

DLLExport
modelica_metatype omc_List_zip3(threadData_t *threadData, modelica_metatype _l1, modelica_metatype _l2, modelica_metatype _l3)
{
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar49;
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta4;
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar48;
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp5;
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1_loopVar = 0;
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1;
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e2_loopVar = 0;
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e2;
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e3_loopVar = 0;
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e3;
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e1_loopVar = _l1;
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e2_loopVar = _l2;
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e3_loopVar = _l3;
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar49 = tmpMeta3; /* defaultValue */
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar49;
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp5 = 3;
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e1_loopVar)) {
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e1 = MMC_CAR(_e1_loopVar);
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e1_loopVar = MMC_CDR(_e1_loopVar);
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp5--;
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }if (!listEmpty(_e2_loopVar)) {
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e2 = MMC_CAR(_e2_loopVar);
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e2_loopVar = MMC_CDR(_e2_loopVar);
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp5--;
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }if (!listEmpty(_e3_loopVar)) {
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e3 = MMC_CAR(_e3_loopVar);
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e3_loopVar = MMC_CDR(_e3_loopVar);
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp5--;
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp5 == 0) {
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta4 = mmc_mk_box3(0, _e1, _e2, _e3);
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar48 = tmpMeta4;
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar48,0);
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp5 == 3) {
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar49;
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 4596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _res = tmpMeta1;
#line 9290 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _res;
}

DLLExport
modelica_metatype omc_List_zip(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2)
{
  modelica_metatype _outTuples = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTuples has no default value.
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar51;
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta4;
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar50;
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp5;
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1_loopVar = 0;
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1;
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e2_loopVar = 0;
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e2;
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e1_loopVar = _inList1;
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e2_loopVar = _inList2;
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar51 = tmpMeta3; /* defaultValue */
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar51;
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp5 = 2;
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e1_loopVar)) {
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e1 = MMC_CAR(_e1_loopVar);
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e1_loopVar = MMC_CDR(_e1_loopVar);
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp5--;
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }if (!listEmpty(_e2_loopVar)) {
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e2 = MMC_CAR(_e2_loopVar);
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e2_loopVar = MMC_CDR(_e2_loopVar);
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp5--;
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp5 == 0) {
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta4 = mmc_mk_box2(0, _e1, _e2);
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar50 = tmpMeta4;
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar50,0);
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp5 == 2) {
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar51;
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 4583 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outTuples = tmpMeta1;
#line 9387 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outTuples;
}

DLLExport
modelica_metatype omc_List_thread3(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_metatype _inList3)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _e2 = NULL;
  modelica_metatype _e3 = NULL;
  modelica_metatype _rest_e2 = NULL;
  modelica_metatype _rest_e3 = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  // _e2 has no default value.
  // _e3 has no default value.
  _rest_e2 = _inList2;
  _rest_e3 = _inList3;
#line 4562 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4562 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1;
#line 4562 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 4562 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 4562 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e1 = MMC_CAR(tmpMeta2);
#line 4563 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 4563 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = _rest_e2;
#line 4563 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
#line 4563 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = MMC_CAR(tmpMeta3);
#line 4563 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = MMC_CDR(tmpMeta3);
#line 4563 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e2 = tmpMeta4;
#line 4563 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _rest_e2 = tmpMeta5;
#line 9446 OMC_FILE

#line 4564 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 4564 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta6 = _rest_e3;
#line 4564 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta6)) MMC_THROW_INTERNAL();
#line 4564 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta7 = MMC_CAR(tmpMeta6);
#line 4564 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta8 = MMC_CDR(tmpMeta6);
#line 4564 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e3 = tmpMeta7;
#line 4564 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _rest_e3 = tmpMeta8;
#line 9462 OMC_FILE

#line 4566 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta11 = mmc_mk_cons(_e3, _outList);
#line 4566 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta10 = mmc_mk_cons(_e2, tmpMeta11);
#line 4566 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta9 = mmc_mk_cons(_e1, tmpMeta10);
#line 4566 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta9;
#line 9472 OMC_FILE
    }
  }

#line 4569 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 4569 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp13 = listEmpty(_rest_e2);
#line 4569 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (1 /* true */ != tmp13) MMC_THROW_INTERNAL();
#line 9482 OMC_FILE

#line 4570 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 4570 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp14 = listEmpty(_rest_e3);
#line 4570 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (1 /* true */ != tmp14) MMC_THROW_INTERNAL();
#line 9490 OMC_FILE

#line 4571 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 9494 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_thread(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_metatype _inAccum)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _e2 = NULL;
  modelica_metatype _rest_e2 = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_boolean tmp9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  // _e2 has no default value.
  _rest_e2 = _inList2;
#line 4540 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4540 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1;
#line 4540 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 4540 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 4540 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e1 = MMC_CAR(tmpMeta2);
#line 4541 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 4541 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = _rest_e2;
#line 4541 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
#line 4541 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = MMC_CAR(tmpMeta3);
#line 4541 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = MMC_CDR(tmpMeta3);
#line 4541 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e2 = tmpMeta4;
#line 4541 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _rest_e2 = tmpMeta5;
#line 9544 OMC_FILE

#line 4543 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta7 = mmc_mk_cons(_e2, _outList);
#line 4543 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta6 = mmc_mk_cons(_e1, tmpMeta7);
#line 4543 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta6;
#line 9552 OMC_FILE
    }
  }

#line 4546 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 4546 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp9 = listEmpty(_rest_e2);
#line 4546 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (1 /* true */ != tmp9) MMC_THROW_INTERNAL();
#line 9562 OMC_FILE

#line 4547 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 9566 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_flattenReverse(threadData_t *threadData, modelica_metatype _inList)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_boolean tmp5;
  modelica_metatype tmpMeta6;
  modelica_boolean tmp7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmp7 = (modelica_boolean)listEmpty(_inList);
  if(tmp7)
  {
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta8 = tmpMeta1;
  }
  else
  {
    tmp5 = (modelica_boolean)(listLength(_inList) == ((modelica_integer) 1));
    if(tmp5)
    {
      tmpMeta6 = omc_List_first(threadData, _inList);
    }
    else
    {
      {
        modelica_metatype __omcQ_24tmpVar53;
        modelica_metatype tmpMeta3;
        modelica_metatype __omcQ_24tmpVar52;
        modelica_integer tmp4;
        modelica_metatype _lst_loopVar = 0;
        modelica_metatype _lst;
        _lst_loopVar = _inList;
        tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar53 = tmpMeta3; /* defaultValue */
        while(1) {
          tmp4 = 1;
          if (!listEmpty(_lst_loopVar)) {
            _lst = MMC_CAR(_lst_loopVar);
            _lst_loopVar = MMC_CDR(_lst_loopVar);
            tmp4--;
          }
          if (tmp4 == 0) {
            __omcQ_24tmpVar52 = _lst;
            __omcQ_24tmpVar53 = listAppend(__omcQ_24tmpVar52, __omcQ_24tmpVar53);
          } else if (tmp4 == 1) {
            break;
          } else {
            MMC_THROW_INTERNAL();
          }
        }
        tmpMeta2 = __omcQ_24tmpVar53;
      }
      tmpMeta6 = tmpMeta2;
    }
    tmpMeta8 = tmpMeta6;
  }
  _outList = tmpMeta8;
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_flatten(threadData_t *threadData, modelica_metatype _inList)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_boolean tmp5;
  modelica_metatype tmpMeta6;
  modelica_boolean tmp7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmp7 = (modelica_boolean)listEmpty(_inList);
  if(tmp7)
  {
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta8 = tmpMeta1;
  }
  else
  {
    tmp5 = (modelica_boolean)(listLength(_inList) == ((modelica_integer) 1));
    if(tmp5)
    {
      tmpMeta6 = omc_List_first(threadData, _inList);
    }
    else
    {
      {
        modelica_metatype __omcQ_24tmpVar55;
        modelica_metatype tmpMeta3;
        modelica_metatype __omcQ_24tmpVar54;
        modelica_integer tmp4;
        modelica_metatype _lst_loopVar = 0;
        modelica_metatype _lst;
        _lst_loopVar = listReverse(_inList);
        tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar55 = tmpMeta3; /* defaultValue */
        while(1) {
          tmp4 = 1;
          if (!listEmpty(_lst_loopVar)) {
            _lst = MMC_CAR(_lst_loopVar);
            _lst_loopVar = MMC_CDR(_lst_loopVar);
            tmp4--;
          }
          if (tmp4 == 0) {
            __omcQ_24tmpVar54 = _lst;
            __omcQ_24tmpVar55 = listAppend(__omcQ_24tmpVar54, __omcQ_24tmpVar55);
          } else if (tmp4 == 1) {
            break;
          } else {
            MMC_THROW_INTERNAL();
          }
        }
        tmpMeta2 = __omcQ_24tmpVar55;
      }
      tmpMeta6 = tmpMeta2;
    }
    tmpMeta8 = tmpMeta6;
  }
  _outList = tmpMeta8;
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_reduce1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inReduceFunc, modelica_metatype _inExtraArg1)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outResult has no default value.
  // _rest has no default value.
#line 4510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 4510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta1 = _inList;
#line 4510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
#line 4510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta2 = MMC_CAR(tmpMeta1);
#line 4510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta3 = MMC_CDR(tmpMeta1);
#line 4510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outResult = tmpMeta2;
#line 4510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _rest = tmpMeta3;
#line 9727 OMC_FILE

#line 4511 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4511 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 4511 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta4 = _rest; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
#line 4511 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 4511 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta4);
#line 4512 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inReduceFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inReduceFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inReduceFunc), 2))), _outResult, _e, _inExtraArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inReduceFunc), 1)))) (threadData, _outResult, _e, _inExtraArg1);
#line 9741 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLExport
modelica_metatype omc_List_reduce(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inReduceFunc)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outResult has no default value.
  // _rest has no default value.
#line 4485 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 4485 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta1 = _inList;
#line 4485 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
#line 4485 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta2 = MMC_CAR(tmpMeta1);
#line 4485 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta3 = MMC_CDR(tmpMeta1);
#line 4485 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outResult = tmpMeta2;
#line 4485 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _rest = tmpMeta3;
#line 9776 OMC_FILE

#line 4486 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4486 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 4486 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta4 = _rest; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
#line 4486 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 4486 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta4);
#line 4487 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inReduceFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inReduceFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inReduceFunc), 2))), _outResult, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inReduceFunc), 1)))) (threadData, _outResult, _e);
#line 9790 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLExport
modelica_metatype omc_List_map3FoldList(threadData_t *threadData, modelica_metatype _inListList, modelica_fnptr _inFunc, modelica_metatype _inConstArg1, modelica_metatype _inConstArg2, modelica_metatype _inConstArg3, modelica_metatype _inArg, modelica_metatype *out_outArg)
{
  modelica_metatype _outListList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outArg = NULL;
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outListList = tmpMeta1;
  _outArg = _inArg;
  // _res has no default value.
#line 4461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _lst;
#line 4461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inListList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 4461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 4461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _lst = MMC_CAR(tmpMeta2);
#line 4462 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _res = omc_List_map3Fold(threadData, _lst, ((modelica_fnptr) _inFunc), _inConstArg1, _inConstArg2, _inConstArg3, _inArg ,&_outArg);
#line 9825 OMC_FILE

#line 4463 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = mmc_mk_cons(_res, _outListList);
#line 4463 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outListList = tmpMeta3;
#line 9831 OMC_FILE
    }
  }

#line 4465 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outListList = listReverseInPlace(_outListList);
#line 9837 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outArg) { *out_outArg = _outArg; }
  return _outListList;
}

DLLExport
modelica_metatype omc_List_mapFoldList(threadData_t *threadData, modelica_metatype _inListList, modelica_fnptr _inFunc, modelica_metatype _inArg, modelica_metatype *out_outArg)
{
  modelica_metatype _outListList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outArg = NULL;
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outListList = tmpMeta1;
  _outArg = _inArg;
  // _res has no default value.
#line 4429 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4429 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _lst;
#line 4429 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inListList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 4429 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 4429 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _lst = MMC_CAR(tmpMeta2);
#line 4430 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _res = omc_List_mapFold(threadData, _lst, ((modelica_fnptr) _inFunc), _outArg ,&_outArg);
#line 9871 OMC_FILE

#line 4431 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = mmc_mk_cons(_res, _outListList);
#line 4431 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outListList = tmpMeta3;
#line 9877 OMC_FILE
    }
  }

#line 4433 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outListList = listReverseInPlace(_outListList);
#line 9883 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outArg) { *out_outArg = _outArg; }
  return _outListList;
}

DLLExport
modelica_metatype omc_List_map4Fold(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inConstArg, modelica_metatype _inConstArg2, modelica_metatype _inConstArg3, modelica_metatype _inConstArg4, modelica_metatype _inArg, modelica_metatype *out_outArg)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outArg = NULL;
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  _outArg = _inArg;
  // _res has no default value.
#line 4402 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4402 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 4402 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 4402 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 4402 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 4403 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inConstArg, _inConstArg2, _inConstArg3, _inConstArg4, _outArg ,&_outArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inConstArg, _inConstArg2, _inConstArg3, _inConstArg4, _outArg ,&_outArg);
#line 9917 OMC_FILE

#line 4405 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = mmc_mk_cons(_res, _outList);
#line 4405 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta3;
#line 9923 OMC_FILE
    }
  }

#line 4407 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 9929 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outArg) { *out_outArg = _outArg; }
  return _outList;
}

DLLExport
modelica_metatype omc_List_map3Fold(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inConstArg, modelica_metatype _inConstArg2, modelica_metatype _inConstArg3, modelica_metatype _inArg, modelica_metatype *out_outArg)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outArg = NULL;
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  _outArg = _inArg;
  // _res has no default value.
#line 4368 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4368 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 4368 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 4368 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 4368 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 4369 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inConstArg, _inConstArg2, _inConstArg3, _outArg ,&_outArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inConstArg, _inConstArg2, _inConstArg3, _outArg ,&_outArg);
#line 9963 OMC_FILE

#line 4370 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = mmc_mk_cons(_res, _outList);
#line 4370 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta3;
#line 9969 OMC_FILE
    }
  }

#line 4372 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 9975 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outArg) { *out_outArg = _outArg; }
  return _outList;
}

DLLExport
modelica_metatype omc_List_map2FoldCheckReferenceEq(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inConstArg, modelica_metatype _inConstArg2, modelica_metatype _inArg, modelica_metatype *out_outArg)
{
  modelica_metatype _outList = NULL;
  modelica_metatype _outArg = NULL;
  modelica_metatype _res = NULL;
  modelica_boolean _allEq;
  modelica_metatype _delst = NULL;
  modelica_integer _n;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_boolean tmp6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
  _outArg = _inArg;
  // _res has no default value.
  _allEq = 1 /* true */;
  // _delst has no default value.
  _n = ((modelica_integer) 0);
#line 4321 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4321 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 4321 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 4321 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 4321 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 4322 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inConstArg, _inConstArg2, _outArg ,&_outArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inConstArg, _inConstArg2, _outArg ,&_outArg);
#line 10017 OMC_FILE

#line 4323 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if((_allEq?(!referenceEq(_e, _res)):0 /* false */))
#line 4323 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 4324 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _allEq = 0 /* false */;
#line 10025 OMC_FILE

#line 4325 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _delst = omc_DoubleEnded_empty(threadData, _res);
#line 10029 OMC_FILE

#line 4326 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 4326 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype _elt;
#line 4326 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 4326 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          {
#line 4326 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            _elt = MMC_CAR(tmpMeta2);
#line 4327 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            if((_n < ((modelica_integer) 1)))
#line 4327 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            {
#line 4328 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              break;
#line 10047 OMC_FILE
            }

#line 4330 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            omc_DoubleEnded_push__back(threadData, _delst, _elt);
#line 10052 OMC_FILE

#line 4331 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            _n = ((modelica_integer) -1) + _n;
#line 10056 OMC_FILE
          }
        }
      }

#line 4334 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(_allEq)
#line 4334 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 4335 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _n = ((modelica_integer) 1) + _n;
#line 10067 OMC_FILE
      }
      else
      {
#line 4337 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        omc_DoubleEnded_push__back(threadData, _delst, _res);
#line 10073 OMC_FILE
      }
    }
  }

#line 4340 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp6 = (modelica_boolean)_allEq;
#line 4340 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(tmp6)
#line 4340 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4340 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta7 = _inList;
#line 4340 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 4340 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  else
#line 4340 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4340 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
#line 4340 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta7 = omc_DoubleEnded_toListAndClear(threadData, _delst, tmpMeta5);
#line 4340 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 4340 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta7;
#line 10100 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outArg) { *out_outArg = _outArg; }
  return _outList;
}

DLLExport
modelica_metatype omc_List_map2Fold(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inConstArg, modelica_metatype _inConstArg2, modelica_metatype _inArg, modelica_metatype _inAccum, modelica_metatype *out_outArg)
{
  modelica_metatype _outList = NULL;
  modelica_metatype _outArg = NULL;
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outList = _inAccum;
  _outArg = _inArg;
  // _res has no default value.
#line 4288 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4288 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 4288 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 4288 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 4288 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 4289 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inConstArg, _inConstArg2, _outArg ,&_outArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inConstArg, _inConstArg2, _outArg ,&_outArg);
#line 10132 OMC_FILE

#line 4290 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta2 = mmc_mk_cons(_res, _outList);
#line 4290 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta2;
#line 10138 OMC_FILE
    }
  }

#line 4292 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 10144 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outArg) { *out_outArg = _outArg; }
  return _outList;
}

DLLExport
modelica_metatype omc_List_map1Fold(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inConstArg, modelica_metatype _inArg, modelica_metatype *out_outArg)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outArg = NULL;
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  _outArg = _inArg;
  // _res has no default value.
#line 4257 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4257 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 4257 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 4257 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 4257 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 4258 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inConstArg, _outArg ,&_outArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inConstArg, _outArg ,&_outArg);
#line 10178 OMC_FILE

#line 4259 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = mmc_mk_cons(_res, _outList);
#line 4259 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta3;
#line 10184 OMC_FILE
    }
  }

#line 4261 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 10190 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outArg) { *out_outArg = _outArg; }
  return _outList;
}

DLLExport
modelica_metatype omc_List_mapFold5(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype __omcQ_24in_5FinArg1, modelica_metatype __omcQ_24in_5FinArg2, modelica_metatype __omcQ_24in_5FinArg3, modelica_metatype __omcQ_24in_5FinArg4, modelica_metatype __omcQ_24in_5FinArg5, modelica_metatype *out_inArg1, modelica_metatype *out_inArg2, modelica_metatype *out_inArg3, modelica_metatype *out_inArg4, modelica_metatype *out_inArg5)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _inArg1 = NULL;
  modelica_metatype _inArg2 = NULL;
  modelica_metatype _inArg3 = NULL;
  modelica_metatype _inArg4 = NULL;
  modelica_metatype _inArg5 = NULL;
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  _inArg1 = __omcQ_24in_5FinArg1;
  _inArg2 = __omcQ_24in_5FinArg2;
  _inArg3 = __omcQ_24in_5FinArg3;
  _inArg4 = __omcQ_24in_5FinArg4;
  _inArg5 = __omcQ_24in_5FinArg5;
  // _res has no default value.
#line 4229 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4229 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 4229 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 4229 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 4229 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 4230 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3, _inArg4, _inArg5 ,&_inArg1 ,&_inArg2 ,&_inArg3 ,&_inArg4 ,&_inArg5) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3, _inArg4, _inArg5 ,&_inArg1 ,&_inArg2 ,&_inArg3 ,&_inArg4 ,&_inArg5);
#line 10232 OMC_FILE

#line 4231 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = mmc_mk_cons(_res, _outList);
#line 4231 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta3;
#line 10238 OMC_FILE
    }
  }

#line 4233 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 10244 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_inArg1) { *out_inArg1 = _inArg1; }
  if (out_inArg2) { *out_inArg2 = _inArg2; }
  if (out_inArg3) { *out_inArg3 = _inArg3; }
  if (out_inArg4) { *out_inArg4 = _inArg4; }
  if (out_inArg5) { *out_inArg5 = _inArg5; }
  return _outList;
}

DLLExport
modelica_metatype omc_List_mapFold4(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype __omcQ_24in_5FinArg1, modelica_metatype __omcQ_24in_5FinArg2, modelica_metatype __omcQ_24in_5FinArg3, modelica_metatype __omcQ_24in_5FinArg4, modelica_metatype *out_inArg1, modelica_metatype *out_inArg2, modelica_metatype *out_inArg3, modelica_metatype *out_inArg4)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _inArg1 = NULL;
  modelica_metatype _inArg2 = NULL;
  modelica_metatype _inArg3 = NULL;
  modelica_metatype _inArg4 = NULL;
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  _inArg1 = __omcQ_24in_5FinArg1;
  _inArg2 = __omcQ_24in_5FinArg2;
  _inArg3 = __omcQ_24in_5FinArg3;
  _inArg4 = __omcQ_24in_5FinArg4;
  // _res has no default value.
#line 4197 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4197 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 4197 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 4197 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 4197 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 4198 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3, _inArg4 ,&_inArg1 ,&_inArg2 ,&_inArg3 ,&_inArg4) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3, _inArg4 ,&_inArg1 ,&_inArg2 ,&_inArg3 ,&_inArg4);
#line 10288 OMC_FILE

#line 4199 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = mmc_mk_cons(_res, _outList);
#line 4199 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta3;
#line 10294 OMC_FILE
    }
  }

#line 4201 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 10300 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_inArg1) { *out_inArg1 = _inArg1; }
  if (out_inArg2) { *out_inArg2 = _inArg2; }
  if (out_inArg3) { *out_inArg3 = _inArg3; }
  if (out_inArg4) { *out_inArg4 = _inArg4; }
  return _outList;
}

DLLExport
modelica_metatype omc_List_mapFold3(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype __omcQ_24in_5FinArg1, modelica_metatype __omcQ_24in_5FinArg2, modelica_metatype __omcQ_24in_5FinArg3, modelica_metatype *out_inArg1, modelica_metatype *out_inArg2, modelica_metatype *out_inArg3)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _inArg1 = NULL;
  modelica_metatype _inArg2 = NULL;
  modelica_metatype _inArg3 = NULL;
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  _inArg1 = __omcQ_24in_5FinArg1;
  _inArg2 = __omcQ_24in_5FinArg2;
  _inArg3 = __omcQ_24in_5FinArg3;
  // _res has no default value.
#line 4167 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4167 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 4167 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 4167 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 4167 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 4168 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3 ,&_inArg1 ,&_inArg2 ,&_inArg3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3 ,&_inArg1 ,&_inArg2 ,&_inArg3);
#line 10341 OMC_FILE

#line 4169 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = mmc_mk_cons(_res, _outList);
#line 4169 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta3;
#line 10347 OMC_FILE
    }
  }

#line 4171 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 10353 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_inArg1) { *out_inArg1 = _inArg1; }
  if (out_inArg2) { *out_inArg2 = _inArg2; }
  if (out_inArg3) { *out_inArg3 = _inArg3; }
  return _outList;
}

DLLExport
modelica_metatype omc_List_mapFold2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype *out_outArg1, modelica_metatype *out_outArg2)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outArg1 = NULL;
  modelica_metatype _outArg2 = NULL;
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  _outArg1 = _inArg1;
  _outArg2 = _inArg2;
  // _res has no default value.
#line 4139 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4139 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 4139 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 4139 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 4139 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 4140 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _outArg1, _outArg2 ,&_outArg1 ,&_outArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _outArg1, _outArg2 ,&_outArg1 ,&_outArg2);
#line 10391 OMC_FILE

#line 4141 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = mmc_mk_cons(_res, _outList);
#line 4141 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta3;
#line 10397 OMC_FILE
    }
  }

#line 4143 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 10403 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outArg1) { *out_outArg1 = _outArg1; }
  if (out_outArg2) { *out_outArg2 = _outArg2; }
  return _outList;
}

DLLExport
modelica_metatype omc_List_mapFold(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg, modelica_metatype *out_outArg)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outArg = NULL;
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  _outArg = _inArg;
  // _res has no default value.
#line 4109 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4109 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 4109 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 4109 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 4109 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 4110 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _outArg ,&_outArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _outArg ,&_outArg);
#line 10438 OMC_FILE

#line 4111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = mmc_mk_cons(_res, _outList);
#line 4111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta3;
#line 10444 OMC_FILE
    }
  }

#line 4113 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 10450 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outArg) { *out_outArg = _outArg; }
  return _outList;
}

DLLExport
modelica_metatype omc_List_fold6(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg1, modelica_metatype _inExtraArg2, modelica_metatype _inExtraArg3, modelica_metatype _inExtraArg4, modelica_metatype _inExtraArg5, modelica_metatype _inExtraArg6, modelica_metatype _inStartValue)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult = _inStartValue;
#line 4084 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4084 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 4084 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 4084 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 4084 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 4085 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _inExtraArg1, _inExtraArg2, _inExtraArg3, _inExtraArg4, _inExtraArg5, _inExtraArg6, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _inExtraArg1, _inExtraArg2, _inExtraArg3, _inExtraArg4, _inExtraArg5, _inExtraArg6, _outResult);
#line 10477 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLExport
modelica_metatype omc_List_fold5(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg1, modelica_metatype _inExtraArg2, modelica_metatype _inExtraArg3, modelica_metatype _inExtraArg4, modelica_metatype _inExtraArg5, modelica_metatype _inStartValue)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult = _inStartValue;
#line 4050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 4050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 4050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 4050 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 4051 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _inExtraArg1, _inExtraArg2, _inExtraArg3, _inExtraArg4, _inExtraArg5, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _inExtraArg1, _inExtraArg2, _inExtraArg3, _inExtraArg4, _inExtraArg5, _outResult);
#line 10505 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLExport
modelica_metatype omc_List_fold31(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg1, modelica_metatype _inStartValue1, modelica_metatype _inStartValue2, modelica_metatype _inStartValue3, modelica_metatype *out_outResult2, modelica_metatype *out_outResult3)
{
  modelica_metatype _outResult1 = NULL;
  modelica_metatype _outResult2 = NULL;
  modelica_metatype _outResult3 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult1 = _inStartValue1;
  _outResult2 = _inStartValue2;
  _outResult3 = _inStartValue3;
#line 4018 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 4018 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 4018 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 4018 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 4018 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 4019 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outResult1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _inExtraArg1, _outResult1, _outResult2, _outResult3 ,&_outResult2 ,&_outResult3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _inExtraArg1, _outResult1, _outResult2, _outResult3 ,&_outResult2 ,&_outResult3);
#line 10537 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outResult2) { *out_outResult2 = _outResult2; }
  if (out_outResult3) { *out_outResult3 = _outResult3; }
  return _outResult1;
}

DLLExport
modelica_metatype omc_List_fold21(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg1, modelica_metatype _inStartValue1, modelica_metatype _inStartValue2, modelica_metatype *out_outResult2)
{
  modelica_metatype _outResult1 = NULL;
  modelica_metatype _outResult2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult1 = _inStartValue1;
  _outResult2 = _inStartValue2;
#line 3990 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3990 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3990 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3990 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3990 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3991 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outResult1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _inExtraArg1, _outResult1, _outResult2 ,&_outResult2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _inExtraArg1, _outResult1, _outResult2 ,&_outResult2);
#line 10569 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outResult2) { *out_outResult2 = _outResult2; }
  return _outResult1;
}

DLLExport
modelica_metatype omc_List_fold30(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inStartValue1, modelica_metatype _inStartValue2, modelica_metatype _inStartValue3, modelica_metatype *out_outResult2, modelica_metatype *out_outResult3)
{
  modelica_metatype _outResult1 = NULL;
  modelica_metatype _outResult2 = NULL;
  modelica_metatype _outResult3 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult1 = _inStartValue1;
  _outResult2 = _inStartValue2;
  _outResult3 = _inStartValue3;
#line 3963 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3963 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3963 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3963 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3963 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3964 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outResult1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _outResult1, _outResult2, _outResult3 ,&_outResult2 ,&_outResult3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _outResult1, _outResult2, _outResult3 ,&_outResult2 ,&_outResult3);
#line 10602 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outResult2) { *out_outResult2 = _outResult2; }
  if (out_outResult3) { *out_outResult3 = _outResult3; }
  return _outResult1;
}

DLLExport
modelica_metatype omc_List_fold20(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inStartValue1, modelica_metatype _inStartValue2, modelica_metatype *out_outResult2)
{
  modelica_metatype _outResult1 = NULL;
  modelica_metatype _outResult2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult1 = _inStartValue1;
  _outResult2 = _inStartValue2;
#line 3935 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3935 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3935 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3935 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3935 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3936 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outResult1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _outResult1, _outResult2 ,&_outResult2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _outResult1, _outResult2 ,&_outResult2);
#line 10634 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outResult2) { *out_outResult2 = _outResult2; }
  return _outResult1;
}

DLLExport
modelica_metatype omc_List_fold43(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg1, modelica_metatype _inExtraArg2, modelica_metatype _inExtraArg3, modelica_metatype _inExtraArg4, modelica_metatype _inStartValue1, modelica_metatype _inStartValue2, modelica_metatype _inStartValue3, modelica_metatype *out_outResult2, modelica_metatype *out_outResult3)
{
  modelica_metatype _outResult1 = NULL;
  modelica_metatype _outResult2 = NULL;
  modelica_metatype _outResult3 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult1 = _inStartValue1;
  _outResult2 = _inStartValue2;
  _outResult3 = _inStartValue3;
#line 3910 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3910 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3910 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3910 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3910 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3911 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outResult1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _inExtraArg1, _inExtraArg2, _inExtraArg3, _inExtraArg4, _outResult1, _outResult2, _outResult3 ,&_outResult2 ,&_outResult3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _inExtraArg1, _inExtraArg2, _inExtraArg3, _inExtraArg4, _outResult1, _outResult2, _outResult3 ,&_outResult2 ,&_outResult3);
#line 10667 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outResult2) { *out_outResult2 = _outResult2; }
  if (out_outResult3) { *out_outResult3 = _outResult3; }
  return _outResult1;
}

DLLExport
modelica_metatype omc_List_fold4(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg1, modelica_metatype _inExtraArg2, modelica_metatype _inExtraArg3, modelica_metatype _inExtraArg4, modelica_metatype _inStartValue)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult = _inStartValue;
#line 3872 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3872 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3872 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3872 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3872 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _inExtraArg1, _inExtraArg2, _inExtraArg3, _inExtraArg4, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _inExtraArg1, _inExtraArg2, _inExtraArg3, _inExtraArg4, _outResult);
#line 10697 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLExport
modelica_metatype omc_List_fold3r(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg1, modelica_metatype _inExtraArg2, modelica_metatype _inExtraArg3, modelica_metatype _inStartValue)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult = _inStartValue;
#line 3843 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3843 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3843 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3843 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3843 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3844 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _outResult, _e, _inExtraArg1, _inExtraArg2, _inExtraArg3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _outResult, _e, _inExtraArg1, _inExtraArg2, _inExtraArg3);
#line 10725 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLExport
modelica_metatype omc_List_fold3(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg1, modelica_metatype _inExtraArg2, modelica_metatype _inExtraArg3, modelica_metatype _inStartValue)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult = _inStartValue;
#line 3819 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3819 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3819 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3819 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3819 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3820 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _inExtraArg1, _inExtraArg2, _inExtraArg3, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _inExtraArg1, _inExtraArg2, _inExtraArg3, _outResult);
#line 10753 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLExport
modelica_metatype omc_List_fold2r(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg1, modelica_metatype _inExtraArg2, modelica_metatype _inStartValue)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult = _inStartValue;
#line 3792 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3792 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3792 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3792 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3792 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3793 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _outResult, _e, _inExtraArg1, _inExtraArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _outResult, _e, _inExtraArg1, _inExtraArg2);
#line 10781 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLExport
modelica_metatype omc_List_foldList2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg1, modelica_metatype _inExtraArg2, modelica_metatype _inStartValue)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult = _inStartValue;
#line 3768 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3768 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _lst;
#line 3768 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3768 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3768 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _lst = MMC_CAR(tmpMeta1);
#line 3769 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 3769 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        modelica_metatype _e;
#line 3769 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        for (tmpMeta2 = _lst; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 3769 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 3769 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _e = MMC_CAR(tmpMeta2);
#line 3770 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _inExtraArg1, _inExtraArg2, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _inExtraArg1, _inExtraArg2, _outResult);
#line 10821 OMC_FILE
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLExport
modelica_metatype omc_List_foldList1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg1, modelica_metatype _inStartValue)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult = _inStartValue;
#line 3741 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3741 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _lst;
#line 3741 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3741 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3741 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _lst = MMC_CAR(tmpMeta1);
#line 3742 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 3742 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        modelica_metatype _e;
#line 3742 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        for (tmpMeta2 = _lst; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 3742 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 3742 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _e = MMC_CAR(tmpMeta2);
#line 3743 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _inExtraArg1, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _inExtraArg1, _outResult);
#line 10863 OMC_FILE
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLExport
modelica_metatype omc_List_foldList(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inStartValue)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult = _inStartValue;
#line 3720 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3720 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _lst;
#line 3720 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3720 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3720 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _lst = MMC_CAR(tmpMeta1);
#line 3721 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 3721 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        modelica_metatype _e;
#line 3721 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        for (tmpMeta2 = _lst; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 3721 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 3721 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _e = MMC_CAR(tmpMeta2);
#line 3722 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _outResult);
#line 10905 OMC_FILE
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLExport
modelica_metatype omc_List_fold22(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg1, modelica_metatype _inExtraArg2, modelica_metatype _inStartValue1, modelica_metatype _inStartValue2, modelica_metatype *out_outResult2)
{
  modelica_metatype _outResult1 = NULL;
  modelica_metatype _outResult2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult1 = _inStartValue1;
  _outResult2 = _inStartValue2;
#line 3703 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3703 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3703 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3703 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3703 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3704 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outResult1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _inExtraArg1, _inExtraArg2, _outResult1, _outResult2 ,&_outResult2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _inExtraArg1, _inExtraArg2, _outResult1, _outResult2 ,&_outResult2);
#line 10937 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outResult2) { *out_outResult2 = _outResult2; }
  return _outResult1;
}

DLLExport
modelica_metatype omc_List_fold2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg1, modelica_metatype _inExtraArg2, modelica_metatype _inStartValue)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult = _inStartValue;
#line 3674 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3674 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3674 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3674 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3674 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3675 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _inExtraArg1, _inExtraArg2, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _inExtraArg1, _inExtraArg2, _outResult);
#line 10966 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLExport
modelica_metatype omc_List_fold1r(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg, modelica_metatype _inStartValue)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult = _inStartValue;
#line 3649 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3649 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3649 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3649 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3649 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3650 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _outResult, _e, _inExtraArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _outResult, _e, _inExtraArg);
#line 10994 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLExport
modelica_metatype omc_List_fold1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg, modelica_metatype _inStartValue)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult = _inStartValue;
#line 3629 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3629 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3629 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3629 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3629 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3630 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _inExtraArg, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _inExtraArg, _outResult);
#line 11022 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLExport
modelica_metatype omc_List_foldr(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inStartValue)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult = _inStartValue;
#line 3606 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3606 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3606 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3606 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3606 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3607 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _outResult, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _outResult, _e);
#line 11050 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLExport
modelica_metatype omc_List_fold(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inStartValue)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult = _inStartValue;
#line 3588 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3588 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3588 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3588 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3588 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3589 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _outResult);
#line 11078 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLExport
modelica_metatype omc_List_map2List(threadData_t *threadData, modelica_metatype _inListList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
  modelica_metatype _outListList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outListList has no default value.
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar59;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta4;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar58;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp8;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _lst_loopVar = 0;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _lst;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _lst_loopVar = _inListList;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar59 = tmpMeta3; /* defaultValue */
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar59;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp8 = 1;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_lst_loopVar)) {
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _lst = MMC_CAR(_lst_loopVar);
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _lst_loopVar = MMC_CDR(_lst_loopVar);
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp8--;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp8 == 0) {
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype __omcQ_24tmpVar57;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype* tmp5;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype tmpMeta6;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype __omcQ_24tmpVar56;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_integer tmp7;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype _e_loopVar = 0;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype _e;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _e_loopVar = _lst;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          __omcQ_24tmpVar57 = tmpMeta6; /* defaultValue */
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp5 = &__omcQ_24tmpVar57;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          while(1) {
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            tmp7 = 1;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            if (!listEmpty(_e_loopVar)) {
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              _e = MMC_CAR(_e_loopVar);
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              _e_loopVar = MMC_CDR(_e_loopVar);
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              tmp7--;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            }
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            if (tmp7 == 0) {
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              __omcQ_24tmpVar56 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2);
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              *tmp5 = mmc_mk_cons(__omcQ_24tmpVar56,0);
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              tmp5 = &MMC_CDR(*tmp5);
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            } else if (tmp7 == 1) {
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              break;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            } else {
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              MMC_THROW_INTERNAL();
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            }
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          }
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          *tmp5 = mmc_mk_nil();
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta4 = __omcQ_24tmpVar57;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        }
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar58 = tmpMeta4;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar58,0);
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp8 == 1) {
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar59;
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 3568 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outListList = tmpMeta1;
#line 11225 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outListList;
}

DLLExport
modelica_metatype omc_List_map1List(threadData_t *threadData, modelica_metatype _inListList, modelica_fnptr _inFunc, modelica_metatype _inArg1)
{
  modelica_metatype _outListList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outListList has no default value.
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar63;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta4;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar62;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp8;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _lst_loopVar = 0;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _lst;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _lst_loopVar = _inListList;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar63 = tmpMeta3; /* defaultValue */
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar63;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp8 = 1;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_lst_loopVar)) {
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _lst = MMC_CAR(_lst_loopVar);
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _lst_loopVar = MMC_CDR(_lst_loopVar);
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp8--;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp8 == 0) {
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype __omcQ_24tmpVar61;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype* tmp5;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype tmpMeta6;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype __omcQ_24tmpVar60;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_integer tmp7;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype _e_loopVar = 0;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype _e;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _e_loopVar = _lst;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          __omcQ_24tmpVar61 = tmpMeta6; /* defaultValue */
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp5 = &__omcQ_24tmpVar61;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          while(1) {
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            tmp7 = 1;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            if (!listEmpty(_e_loopVar)) {
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              _e = MMC_CAR(_e_loopVar);
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              _e_loopVar = MMC_CDR(_e_loopVar);
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              tmp7--;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            }
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            if (tmp7 == 0) {
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              __omcQ_24tmpVar60 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1);
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              *tmp5 = mmc_mk_cons(__omcQ_24tmpVar60,0);
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              tmp5 = &MMC_CDR(*tmp5);
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            } else if (tmp7 == 1) {
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              break;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            } else {
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              MMC_THROW_INTERNAL();
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            }
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          }
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          *tmp5 = mmc_mk_nil();
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta4 = __omcQ_24tmpVar61;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        }
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar62 = tmpMeta4;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar62,0);
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp8 == 1) {
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar63;
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 3550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outListList = tmpMeta1;
#line 11370 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outListList;
}

DLLExport
modelica_metatype omc_List_mapListReverse(threadData_t *threadData, modelica_metatype _inListList, modelica_fnptr _inFunc)
{
  modelica_metatype _outListList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outListList has no default value.
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar67;
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta4;
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar66;
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp7;
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _lst_loopVar = 0;
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _lst;
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _lst_loopVar = _inListList;
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar67 = tmpMeta3; /* defaultValue */
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar67;
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp7 = 1;
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_lst_loopVar)) {
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _lst = MMC_CAR(_lst_loopVar);
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _lst_loopVar = MMC_CDR(_lst_loopVar);
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp7--;
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp7 == 0) {
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype __omcQ_24tmpVar65;
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype tmpMeta5;
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype __omcQ_24tmpVar64;
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_integer tmp6;
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype _e_loopVar = 0;
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype _e;
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _e_loopVar = _lst;
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          __omcQ_24tmpVar65 = tmpMeta5; /* defaultValue */
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          while(1) {
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            tmp6 = 1;
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            if (!listEmpty(_e_loopVar)) {
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              _e = MMC_CAR(_e_loopVar);
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              _e_loopVar = MMC_CDR(_e_loopVar);
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              tmp6--;
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            }
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            if (tmp6 == 0) {
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              __omcQ_24tmpVar64 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e);
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              __omcQ_24tmpVar65 = mmc_mk_cons(__omcQ_24tmpVar64,__omcQ_24tmpVar65);
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            } else if (tmp6 == 1) {
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              break;
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            } else {
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              MMC_THROW_INTERNAL();
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            }
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          }
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta4 = __omcQ_24tmpVar65;
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        }
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar66 = tmpMeta4;
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar66,0);
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp7 == 1) {
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar67;
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 3534 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outListList = tmpMeta1;
#line 11507 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outListList;
}

DLLExport
modelica_metatype omc_List_mapList1__1(threadData_t *threadData, modelica_metatype _inListList, modelica_fnptr _inFunc, modelica_metatype _inArg1)
{
  modelica_metatype _outListList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outListList has no default value.
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar71;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta4;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar70;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp8;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _lst_loopVar = 0;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _lst;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _lst_loopVar = _inListList;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar71 = tmpMeta3; /* defaultValue */
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar71;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp8 = 1;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_lst_loopVar)) {
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _lst = MMC_CAR(_lst_loopVar);
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _lst_loopVar = MMC_CDR(_lst_loopVar);
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp8--;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp8 == 0) {
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype __omcQ_24tmpVar69;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype* tmp5;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype tmpMeta6;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype __omcQ_24tmpVar68;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_integer tmp7;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype _e_loopVar = 0;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype _e;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _e_loopVar = _lst;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          __omcQ_24tmpVar69 = tmpMeta6; /* defaultValue */
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp5 = &__omcQ_24tmpVar69;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          while(1) {
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            tmp7 = 1;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            if (!listEmpty(_e_loopVar)) {
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              _e = MMC_CAR(_e_loopVar);
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              _e_loopVar = MMC_CDR(_e_loopVar);
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              tmp7--;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            }
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            if (tmp7 == 0) {
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              __omcQ_24tmpVar68 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1);
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              *tmp5 = mmc_mk_cons(__omcQ_24tmpVar68,0);
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              tmp5 = &MMC_CDR(*tmp5);
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            } else if (tmp7 == 1) {
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              break;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            } else {
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              MMC_THROW_INTERNAL();
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            }
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          }
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          *tmp5 = mmc_mk_nil();
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta4 = __omcQ_24tmpVar69;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        }
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar70 = tmpMeta4;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar70,0);
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp8 == 1) {
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar71;
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 3516 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outListList = tmpMeta1;
#line 11652 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outListList;
}

DLLExport
void omc_List_mapList2__0(threadData_t *threadData, modelica_metatype _inListList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
#line 3497 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  omc_List_map3__0(threadData, _inListList, boxvar_List_map2__0, ((modelica_fnptr) _inFunc), _inArg1, _inArg2);
#line 11664 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return;
}

DLLExport
void omc_List_mapList1__0(threadData_t *threadData, modelica_metatype _inListList, modelica_fnptr _inFunc, modelica_metatype _inArg1)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
#line 3478 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  omc_List_map2__0(threadData, _inListList, boxvar_List_map1__0, ((modelica_fnptr) _inFunc), _inArg1);
#line 11676 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return;
}

DLLExport
void omc_List_mapList0(threadData_t *threadData, modelica_metatype _inListList, modelica_fnptr _inFunc)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
#line 3461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  omc_List_map1__0(threadData, _inListList, boxvar_List_map__0, ((modelica_fnptr) _inFunc));
#line 11688 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return;
}

DLLExport
modelica_metatype omc_List_mapList(threadData_t *threadData, modelica_metatype _inListList, modelica_fnptr _inFunc)
{
  modelica_metatype _outListList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outListList has no default value.
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar75;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta4;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar74;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp8;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _lst_loopVar = 0;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _lst;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _lst_loopVar = _inListList;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar75 = tmpMeta3; /* defaultValue */
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar75;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp8 = 1;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_lst_loopVar)) {
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _lst = MMC_CAR(_lst_loopVar);
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _lst_loopVar = MMC_CDR(_lst_loopVar);
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp8--;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp8 == 0) {
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype __omcQ_24tmpVar73;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype* tmp5;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype tmpMeta6;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype __omcQ_24tmpVar72;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_integer tmp7;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype _e_loopVar = 0;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype _e;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _e_loopVar = _lst;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          __omcQ_24tmpVar73 = tmpMeta6; /* defaultValue */
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp5 = &__omcQ_24tmpVar73;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          while(1) {
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            tmp7 = 1;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            if (!listEmpty(_e_loopVar)) {
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              _e = MMC_CAR(_e_loopVar);
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              _e_loopVar = MMC_CDR(_e_loopVar);
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              tmp7--;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            }
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            if (tmp7 == 0) {
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              __omcQ_24tmpVar72 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e);
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              *tmp5 = mmc_mk_cons(__omcQ_24tmpVar72,0);
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              tmp5 = &MMC_CDR(*tmp5);
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            } else if (tmp7 == 1) {
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              break;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            } else {
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              MMC_THROW_INTERNAL();
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            }
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          }
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          *tmp5 = mmc_mk_nil();
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta4 = __omcQ_24tmpVar73;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        }
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar74 = tmpMeta4;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar74,0);
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp8 == 1) {
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar75;
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 3446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outListList = tmpMeta1;
#line 11833 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outListList;
}

DLLExport
modelica_boolean omc_List_map1ListBoolOr(threadData_t *threadData, modelica_metatype _inListList, modelica_fnptr _inFunc, modelica_metatype _inArg1)
{
  modelica_boolean _res;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = 0 /* false */;
#line 3421 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3421 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _el;
#line 3421 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inListList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3421 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3421 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _el = MMC_CAR(tmpMeta1);
#line 3422 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 3422 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        modelica_metatype _e;
#line 3422 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        for (tmpMeta2 = _el; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 3422 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 3422 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _e = MMC_CAR(tmpMeta2);
#line 3423 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1)))
#line 3423 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          {
#line 3424 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            _res = 1 /* true */;
#line 11875 OMC_FILE

#line 3425 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            goto _return;
#line 11879 OMC_FILE
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_List_map1ListBoolOr(threadData_t *threadData, modelica_metatype _inListList, modelica_fnptr _inFunc, modelica_metatype _inArg1)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_List_map1ListBoolOr(threadData, _inListList, _inFunc, _inArg1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLExport
modelica_boolean omc_List_map1BoolAnd(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1)
{
  modelica_boolean _res;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = 0 /* false */;
#line 3398 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3398 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3398 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3398 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3398 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3399 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1))))
#line 3399 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 3400 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 11922 OMC_FILE
      }
    }
  }

#line 3403 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _res = 1 /* true */;
#line 11929 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_List_map1BoolAnd(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_List_map1BoolAnd(threadData, _inList, _inFunc, _inArg1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLExport
modelica_boolean omc_List_map1BoolOr(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1)
{
  modelica_boolean _res;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = 0 /* false */;
#line 3375 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3375 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3375 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3375 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3375 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3376 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1)))
#line 3376 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 3377 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _res = 1 /* true */;
#line 11967 OMC_FILE

#line 3378 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 11971 OMC_FILE
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_List_map1BoolOr(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_List_map1BoolOr(threadData, _inList, _inFunc, _inArg1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLExport
modelica_boolean omc_List_mapMapBoolAnd(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_fnptr _inBFunc)
{
  modelica_boolean _res;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = 0 /* false */;
#line 3352 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3352 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3352 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3352 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3352 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3353 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inBFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inBFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inBFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inBFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e)))))
#line 3353 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 3354 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 12012 OMC_FILE
      }
    }
  }

#line 3357 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _res = 1 /* true */;
#line 12019 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_List_mapMapBoolAnd(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_fnptr _inBFunc)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_List_mapMapBoolAnd(threadData, _inList, _inFunc, _inBFunc);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLExport
modelica_boolean omc_List_mapBoolAnd(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
  modelica_boolean _res;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = 0 /* false */;
#line 3328 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3328 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3328 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3328 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3328 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3329 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e))))
#line 3329 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 3330 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 12057 OMC_FILE
      }
    }
  }

#line 3333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _res = 1 /* true */;
#line 12064 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_List_mapBoolAnd(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_List_mapBoolAnd(threadData, _inList, _inFunc);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLExport
modelica_boolean omc_List_mapBoolOr(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
  modelica_boolean _res;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = 0 /* false */;
#line 3309 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3309 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3309 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3309 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3309 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3310 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e)))
#line 3310 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 3311 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _res = 1 /* true */;
#line 12102 OMC_FILE

#line 3312 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 12106 OMC_FILE
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_List_mapBoolOr(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_List_mapBoolOr(threadData, _inList, _inFunc);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLExport
modelica_metatype omc_List_applyAndFold1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_fnptr _inApplyFunc, modelica_metatype _inExtraArg, modelica_metatype _inFoldArg)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult = _inFoldArg;
#line 3293 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3293 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3293 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3293 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3293 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3294 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 2))), _e, _inExtraArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 1)))) (threadData, _e, _inExtraArg), _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 2))), _e, _inExtraArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 1)))) (threadData, _e, _inExtraArg), _outResult);
#line 12143 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLExport
modelica_metatype omc_List_applyAndFold(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_fnptr _inApplyFunc, modelica_metatype _inFoldArg)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult = _inFoldArg;
#line 3266 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3266 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3266 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3266 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3266 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3267 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 1)))) (threadData, _e), _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 1)))) (threadData, _e), _outResult);
#line 12171 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLExport
void omc_List_foldAllValue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inValue, modelica_metatype _inArg1)
{
  modelica_metatype _arg = NULL;
  modelica_metatype _eo = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean tmp2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _arg = _inArg1;
  // _eo has no default value.
#line 3240 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3240 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3240 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3240 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3240 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3241 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _eo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e, _arg ,&_arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e, _arg ,&_arg);
#line 12202 OMC_FILE

#line 3242 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 3242 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp2 = valueEq(_eo, _inValue);
#line 3242 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (1 /* true */ != tmp2) MMC_THROW_INTERNAL();
#line 12210 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLExport
modelica_boolean omc_List_map1ListAllValueBool(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inValue, modelica_metatype _inArg1)
{
  modelica_boolean _outAllValue;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outAllValue = 1 /* true */;
#line 3213 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3213 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _lst;
#line 3213 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3213 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3213 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _lst = MMC_CAR(tmpMeta1);
#line 3214 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if((!omc_List_map1AllValueBool(threadData, _lst, ((modelica_fnptr) _inMapFunc), _inValue, _inArg1)))
#line 3214 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 3215 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outAllValue = 0 /* false */;
#line 12242 OMC_FILE

#line 3216 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 12246 OMC_FILE
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outAllValue;
}
modelica_metatype boxptr_List_map1ListAllValueBool(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inValue, modelica_metatype _inArg1)
{
  modelica_boolean _outAllValue;
  modelica_metatype out_outAllValue;
  _outAllValue = omc_List_map1ListAllValueBool(threadData, _inList, _inMapFunc, _inValue, _inArg1);
  out_outAllValue = mmc_mk_icon(_outAllValue);
  return out_outAllValue;
}

DLLExport
modelica_boolean omc_List_mapListAllValueBool(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inValue)
{
  modelica_boolean _outAllValue;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outAllValue = 1 /* true */;
#line 3191 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3191 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _lst;
#line 3191 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3191 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3191 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _lst = MMC_CAR(tmpMeta1);
#line 3192 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if((!omc_List_mapAllValueBool(threadData, _lst, ((modelica_fnptr) _inMapFunc), _inValue)))
#line 3192 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 3193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outAllValue = 0 /* false */;
#line 12287 OMC_FILE

#line 3194 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 12291 OMC_FILE
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outAllValue;
}
modelica_metatype boxptr_List_mapListAllValueBool(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inValue)
{
  modelica_boolean _outAllValue;
  modelica_metatype out_outAllValue;
  _outAllValue = omc_List_mapListAllValueBool(threadData, _inList, _inMapFunc, _inValue);
  out_outAllValue = mmc_mk_icon(_outAllValue);
  return out_outAllValue;
}

DLLExport
void omc_List_map2AllValue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inValue, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
  modelica_metatype _eo = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean tmp2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eo has no default value.
#line 3172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3173 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _eo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e, _inArg1, _inArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e, _inArg1, _inArg2);
#line 12329 OMC_FILE

#line 3174 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 3174 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp2 = valueEq(_eo, _inValue);
#line 3174 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (1 /* true */ != tmp2) MMC_THROW_INTERNAL();
#line 12337 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLExport
void omc_List_map1rAllValue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inValue, modelica_metatype _inArg1)
{
  modelica_metatype _eo = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean tmp2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eo has no default value.
#line 3147 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3147 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3147 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3147 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3147 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3148 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _eo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _inArg1, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _inArg1, _e);
#line 12366 OMC_FILE

#line 3149 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 3149 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp2 = valueEq(_eo, _inValue);
#line 3149 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (1 /* true */ != tmp2) MMC_THROW_INTERNAL();
#line 12374 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLExport
void omc_List_map1AllValue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inValue, modelica_metatype _inArg1)
{
  modelica_metatype _eo = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean tmp2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eo has no default value.
#line 3124 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3124 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3124 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3124 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3124 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3125 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _eo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e, _inArg1);
#line 12403 OMC_FILE

#line 3126 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 3126 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp2 = valueEq(_eo, _inValue);
#line 3126 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (1 /* true */ != tmp2) MMC_THROW_INTERNAL();
#line 12411 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLExport
modelica_boolean omc_List_map1AllValueBool(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inValue, modelica_metatype _inArg1)
{
  modelica_boolean _outAllValue;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outAllValue has no default value.
#line 12425 OMC_FILE
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          /* Pattern matching succeeded */
#line 3100 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          omc_List_map1AllValue(threadData, _inList, ((modelica_fnptr) _inMapFunc), _inValue, _inArg1);
#line 12440 OMC_FILE

#line 3101 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _outAllValue = 1 /* true */;
#line 12444 OMC_FILE
#line 12445 OMC_FILE
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
#line 3103 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _outAllValue = 0 /* false */;
#line 12452 OMC_FILE
#line 12453 OMC_FILE
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      tmp2_done:
      (void)tmp3;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp2_done2;
      goto_1:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp3 < 2) {
        goto tmp2_top;
      }
      MMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return _outAllValue;
}
modelica_metatype boxptr_List_map1AllValueBool(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inValue, modelica_metatype _inArg1)
{
  modelica_boolean _outAllValue;
  modelica_metatype out_outAllValue;
  _outAllValue = omc_List_map1AllValueBool(threadData, _inList, _inMapFunc, _inValue, _inArg1);
  out_outAllValue = mmc_mk_icon(_outAllValue);
  return out_outAllValue;
}

DLLExport
modelica_boolean omc_List_mapAllValueBool(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inValue)
{
  modelica_boolean _outAllValue;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outAllValue has no default value.
#line 12494 OMC_FILE
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          /* Pattern matching succeeded */
#line 3078 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          omc_List_mapAllValue(threadData, _inList, ((modelica_fnptr) _inMapFunc), _inValue);
#line 12509 OMC_FILE

#line 3079 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _outAllValue = 1 /* true */;
#line 12513 OMC_FILE
#line 12514 OMC_FILE
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
#line 3081 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _outAllValue = 0 /* false */;
#line 12521 OMC_FILE
#line 12522 OMC_FILE
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      tmp2_done:
      (void)tmp3;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp2_done2;
      goto_1:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp3 < 2) {
        goto tmp2_top;
      }
      MMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return _outAllValue;
}
modelica_metatype boxptr_List_mapAllValueBool(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inValue)
{
  modelica_boolean _outAllValue;
  modelica_metatype out_outAllValue;
  _outAllValue = omc_List_mapAllValueBool(threadData, _inList, _inMapFunc, _inValue);
  out_outAllValue = mmc_mk_icon(_outAllValue);
  return out_outAllValue;
}

DLLExport
void omc_List_mapAllValue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inValue)
{
  modelica_metatype _eo = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean tmp2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eo has no default value.
#line 3058 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3058 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3058 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3058 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3058 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3059 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _eo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e);
#line 12578 OMC_FILE

#line 3060 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 3060 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp2 = valueEq(_eo, _inValue);
#line 3060 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (1 /* true */ != tmp2) MMC_THROW_INTERNAL();
#line 12586 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLExport
void omc_List_mapMap__0(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc1, modelica_fnptr _inMapFunc2)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
#line 3039 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3039 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3039 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 3039 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 3039 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 3040 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc2), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc2), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc2), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 1)))) (threadData, _e)) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc2), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 1)))) (threadData, _e));
#line 12612 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLExport
modelica_metatype omc_List_mapMap(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc1, modelica_fnptr _inMapFunc2)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar77;
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar76;
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar77 = tmpMeta3; /* defaultValue */
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar77;
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e_loopVar)) {
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar76 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc2), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc2), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc2), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 1)))) (threadData, _e)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc2), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 1)))) (threadData, _e));
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar76,0);
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar77;
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 3021 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 12693 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_map2Flat(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
#line 2998 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2998 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2998 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 2998 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 2998 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 2999 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = listAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e, _inArg1, _inArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e, _inArg1, _inArg2), _outList);
#line 12721 OMC_FILE
    }
  }

#line 3001 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 12727 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_map1Flat(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inArg1)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
#line 2975 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2975 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2975 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 2975 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 2975 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 2976 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = listAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e, _inArg1), _outList);
#line 12755 OMC_FILE
    }
  }

#line 2978 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 12761 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_mapFlatReverse(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
#line 2955 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2955 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2955 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 2955 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 2955 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 2956 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = listAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e), _outList);
#line 12789 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_mapFlat(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc)
{
  modelica_metatype _outList = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 2938 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverse(omc_List_mapFlatReverse(threadData, _inList, ((modelica_fnptr) _inMapFunc)));
#line 12805 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_map9(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_metatype _inArg4, modelica_metatype _inArg5, modelica_metatype _inArg6, modelica_metatype _inArg7, modelica_metatype _inArg8, modelica_metatype _inArg9)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar79;
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar78;
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar79 = tmpMeta3; /* defaultValue */
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar79;
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e_loopVar)) {
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar78 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3, _inArg4, _inArg5, _inArg6, _inArg7, _inArg8, _inArg9) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3, _inArg4, _inArg5, _inArg6, _inArg7, _inArg8, _inArg9);
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar78,0);
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar79;
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 2921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 12884 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_map8(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_metatype _inArg4, modelica_metatype _inArg5, modelica_metatype _inArg6, modelica_metatype _inArg7, modelica_metatype _inArg8)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar81;
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar80;
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar81 = tmpMeta3; /* defaultValue */
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar81;
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e_loopVar)) {
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar80 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3, _inArg4, _inArg5, _inArg6, _inArg7, _inArg8) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3, _inArg4, _inArg5, _inArg6, _inArg7, _inArg8);
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar80,0);
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar81;
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 2887 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 12963 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_map7(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_metatype _inArg4, modelica_metatype _inArg5, modelica_metatype _inArg6, modelica_metatype _inArg7)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar83;
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar82;
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar83 = tmpMeta3; /* defaultValue */
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar83;
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e_loopVar)) {
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar82 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3, _inArg4, _inArg5, _inArg6, _inArg7) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3, _inArg4, _inArg5, _inArg6, _inArg7);
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar82,0);
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar83;
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 2855 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 13042 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_map6(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_metatype _inArg4, modelica_metatype _inArg5, modelica_metatype _inArg6)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar85;
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar84;
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar85 = tmpMeta3; /* defaultValue */
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar85;
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e_loopVar)) {
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar84 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3, _inArg4, _inArg5, _inArg6) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3, _inArg4, _inArg5, _inArg6);
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar84,0);
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar85;
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 2826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 13121 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_map5(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_metatype _inArg4, modelica_metatype _inArg5)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar87;
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar86;
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar87 = tmpMeta3; /* defaultValue */
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar87;
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e_loopVar)) {
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar86 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3, _inArg4, _inArg5) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3, _inArg4, _inArg5);
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar86,0);
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar87;
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 2799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 13200 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_map4__2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_metatype _inArg4, modelica_metatype *out_outList2)
{
  modelica_metatype _outList1 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outList2 = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList1 = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList2 = tmpMeta2;
  // _e1 has no default value.
  // _e2 has no default value.
#line 2767 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2767 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2767 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
#line 2767 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 2767 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta3);
#line 2768 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3, _inArg4 ,&_e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3, _inArg4 ,&_e2);
#line 13238 OMC_FILE

#line 2769 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = mmc_mk_cons(_e1, _outList1);
#line 2769 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList1 = tmpMeta4;
#line 13244 OMC_FILE

#line 2770 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = mmc_mk_cons(_e2, _outList2);
#line 2770 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList2 = tmpMeta5;
#line 13250 OMC_FILE
    }
  }

#line 2773 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList1 = listReverseInPlace(_outList1);
#line 13256 OMC_FILE

#line 2774 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList2 = listReverseInPlace(_outList2);
#line 13260 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outList2) { *out_outList2 = _outList2; }
  return _outList1;
}

DLLExport
void omc_List_map4__0(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_metatype _inArg4)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
#line 2737 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2737 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2737 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 2737 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 2737 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 2738 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3, _inArg4) : ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3, _inArg4);
#line 13285 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLExport
modelica_metatype omc_List_map4(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_metatype _inArg4)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar89;
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar88;
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar89 = tmpMeta3; /* defaultValue */
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar89;
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e_loopVar)) {
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar88 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3, _inArg4) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3, _inArg4);
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar88,0);
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar89;
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 2716 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 13366 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_map3__2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_metatype *out_outList2)
{
  modelica_metatype _outList1 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outList2 = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList1 = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList2 = tmpMeta2;
  // _e1 has no default value.
  // _e2 has no default value.
#line 2686 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2686 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2686 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
#line 2686 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 2686 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta3);
#line 2687 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3 ,&_e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3 ,&_e2);
#line 13404 OMC_FILE

#line 2688 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = mmc_mk_cons(_e1, _outList1);
#line 2688 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList1 = tmpMeta4;
#line 13410 OMC_FILE

#line 2689 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = mmc_mk_cons(_e2, _outList2);
#line 2689 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList2 = tmpMeta5;
#line 13416 OMC_FILE
    }
  }

#line 2692 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList1 = listReverseInPlace(_outList1);
#line 13422 OMC_FILE

#line 2693 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList2 = listReverseInPlace(_outList2);
#line 13426 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outList2) { *out_outList2 = _outList2; }
  return _outList1;
}

DLLExport
void omc_List_map3__0(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
#line 2658 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2658 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2658 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 2658 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 2658 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 2659 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3) : ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3);
#line 13451 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLExport
modelica_metatype omc_List_map3r(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar91;
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar90;
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar91 = tmpMeta3; /* defaultValue */
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar91;
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e_loopVar)) {
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar90 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _inArg1, _inArg2, _inArg3, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _inArg1, _inArg2, _inArg3, _e);
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar90,0);
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar91;
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 2639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 13532 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_map3(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar93;
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar92;
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar93 = tmpMeta3; /* defaultValue */
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar93;
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e_loopVar)) {
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar92 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3);
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar92,0);
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar93;
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 2617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 13611 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_map2__3(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype *out_outList2, modelica_metatype *out_outList3)
{
  modelica_metatype _outList1 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outList2 = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _outList3 = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _e3 = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList1 = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList2 = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList3 = tmpMeta3;
  // _e1 has no default value.
  // _e2 has no default value.
  // _e3 has no default value.
#line 2587 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2587 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2587 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta4 = _inList; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
#line 2587 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 2587 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta4);
#line 2588 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2 ,&_e2 ,&_e3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2 ,&_e2 ,&_e3);
#line 13656 OMC_FILE

#line 2589 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = mmc_mk_cons(_e1, _outList1);
#line 2589 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList1 = tmpMeta5;
#line 13662 OMC_FILE

#line 2590 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta6 = mmc_mk_cons(_e2, _outList2);
#line 2590 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList2 = tmpMeta6;
#line 13668 OMC_FILE

#line 2591 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta7 = mmc_mk_cons(_e3, _outList3);
#line 2591 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList3 = tmpMeta7;
#line 13674 OMC_FILE
    }
  }

#line 2594 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList1 = listReverseInPlace(_outList1);
#line 13680 OMC_FILE

#line 2595 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList2 = listReverseInPlace(_outList2);
#line 13684 OMC_FILE

#line 2596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList3 = listReverseInPlace(_outList3);
#line 13688 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outList2) { *out_outList2 = _outList2; }
  if (out_outList3) { *out_outList3 = _outList3; }
  return _outList1;
}

DLLExport
modelica_metatype omc_List_map2__2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype *out_outList2)
{
  modelica_metatype _outList1 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outList2 = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList1 = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList2 = tmpMeta2;
  // _e1 has no default value.
  // _e2 has no default value.
#line 2553 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2553 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2553 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
#line 2553 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 2553 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta3);
#line 2554 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2 ,&_e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2 ,&_e2);
#line 13728 OMC_FILE

#line 2555 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = mmc_mk_cons(_e1, _outList1);
#line 2555 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList1 = tmpMeta4;
#line 13734 OMC_FILE

#line 2556 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = mmc_mk_cons(_e2, _outList2);
#line 2556 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList2 = tmpMeta5;
#line 13740 OMC_FILE
    }
  }

#line 2559 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList1 = listReverseInPlace(_outList1);
#line 13746 OMC_FILE

#line 2560 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList2 = listReverseInPlace(_outList2);
#line 13750 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outList2) { *out_outList2 = _outList2; }
  return _outList1;
}

DLLExport
void omc_List_map2__0(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
#line 2527 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2527 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2527 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 2527 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 2527 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 2528 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2) : ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2);
#line 13775 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLExport
modelica_metatype omc_List_map2r(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar95;
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar94;
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar95 = tmpMeta3; /* defaultValue */
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar95;
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e_loopVar)) {
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar94 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _inArg1, _inArg2, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _inArg1, _inArg2, _e);
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar94,0);
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar95;
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 2510 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 13856 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_map2rm(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar97;
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar96;
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar97 = tmpMeta3; /* defaultValue */
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar97;
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e_loopVar)) {
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar96 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _inArg1, _e, _inArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _inArg1, _e, _inArg2);
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar96,0);
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar97;
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 2490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 13935 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_map2Reverse(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar99;
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta2;
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar98;
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp3;
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar99 = tmpMeta2; /* defaultValue */
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp3 = 1;
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e_loopVar)) {
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp3--;
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp3 == 0) {
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar98 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2);
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar99 = mmc_mk_cons(__omcQ_24tmpVar98,__omcQ_24tmpVar99);
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp3 == 1) {
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar99;
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 2470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 14006 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_map2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar101;
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar100;
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar101 = tmpMeta3; /* defaultValue */
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar101;
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e_loopVar)) {
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar100 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2);
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar100,0);
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar101;
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 2450 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 14085 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_map1__3(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype *out_outList2, modelica_metatype *out_outList3)
{
  modelica_metatype _outList1 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outList2 = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _outList3 = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _e3 = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList1 = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList2 = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList3 = tmpMeta3;
  // _e1 has no default value.
  // _e2 has no default value.
  // _e3 has no default value.
#line 2422 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2422 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2422 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta4 = _inList; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
#line 2422 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 2422 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta4);
#line 2423 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1 ,&_e2 ,&_e3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1 ,&_e2 ,&_e3);
#line 14130 OMC_FILE

#line 2424 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = mmc_mk_cons(_e1, _outList1);
#line 2424 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList1 = tmpMeta5;
#line 14136 OMC_FILE

#line 2425 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta6 = mmc_mk_cons(_e2, _outList2);
#line 2425 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList2 = tmpMeta6;
#line 14142 OMC_FILE

#line 2426 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta7 = mmc_mk_cons(_e3, _outList3);
#line 2426 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList3 = tmpMeta7;
#line 14148 OMC_FILE
    }
  }

#line 2429 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList1 = listReverseInPlace(_outList1);
#line 14154 OMC_FILE

#line 2430 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList2 = listReverseInPlace(_outList2);
#line 14158 OMC_FILE

#line 2431 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList3 = listReverseInPlace(_outList3);
#line 14162 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outList2) { *out_outList2 = _outList2; }
  if (out_outList3) { *out_outList3 = _outList3; }
  return _outList1;
}

DLLExport
modelica_metatype omc_List_map1__2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype *out_outList2)
{
  modelica_metatype _outList1 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outList2 = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList1 = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList2 = tmpMeta2;
  // _e1 has no default value.
  // _e2 has no default value.
#line 2390 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2390 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2390 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
#line 2390 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 2390 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta3);
#line 2391 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1 ,&_e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1 ,&_e2);
#line 14202 OMC_FILE

#line 2392 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = mmc_mk_cons(_e1, _outList1);
#line 2392 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList1 = tmpMeta4;
#line 14208 OMC_FILE

#line 2393 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = mmc_mk_cons(_e2, _outList2);
#line 2393 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList2 = tmpMeta5;
#line 14214 OMC_FILE
    }
  }

#line 2396 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList1 = listReverseInPlace(_outList1);
#line 14220 OMC_FILE

#line 2397 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList2 = listReverseInPlace(_outList2);
#line 14224 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outList2) { *out_outList2 = _outList2; }
  return _outList1;
}

DLLExport
void omc_List_map1__0(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
#line 2366 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2366 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2366 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 2366 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 2366 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 2367 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1) : ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1);
#line 14249 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLExport
modelica_metatype omc_List_map1r(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar103;
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar102;
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar103 = tmpMeta3; /* defaultValue */
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar103;
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e_loopVar)) {
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar102 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _inArg1, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _inArg1, _e);
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar102,0);
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar103;
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 2351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 14330 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_map1Reverse(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inArg1)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar105;
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta2;
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar104;
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp3;
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar105 = tmpMeta2; /* defaultValue */
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp3 = 1;
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e_loopVar)) {
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp3--;
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp3 == 0) {
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar104 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e, _inArg1);
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar105 = mmc_mk_cons(__omcQ_24tmpVar104,__omcQ_24tmpVar105);
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp3 == 1) {
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar105;
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 2333 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 14401 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_map1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inArg1)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar107;
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar106;
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar107 = tmpMeta3; /* defaultValue */
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar107;
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e_loopVar)) {
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar106 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e, _inArg1);
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar106,0);
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar107;
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 2315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 14480 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
void omc_List_map__0(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
#line 2296 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2296 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2296 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 2296 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 2296 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 2297 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e);
#line 14504 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLExport
modelica_metatype omc_List_map2Option(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _ei = NULL;
  modelica_metatype _eo = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  // _ei has no default value.
  // _eo has no default value.
#line 2275 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2275 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _oe;
#line 2275 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 2275 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 2275 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _oe = MMC_CAR(tmpMeta2);
#line 2276 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(isSome(_oe))
#line 2276 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 2277 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        /* Pattern-matching assignment */
#line 2277 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta3 = _oe;
#line 2277 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if (optionNone(tmpMeta3)) MMC_THROW_INTERNAL();
#line 2277 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
#line 2277 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _ei = tmpMeta4;
#line 14553 OMC_FILE

#line 2278 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _eo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _ei, _inArg1, _inArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _ei, _inArg1, _inArg2);
#line 14557 OMC_FILE

#line 2279 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta5 = mmc_mk_cons(_eo, _outList);
#line 2279 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outList = tmpMeta5;
#line 14563 OMC_FILE
      }
    }
  }

#line 2283 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 14570 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_map1Option(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _ei = NULL;
  modelica_metatype _eo = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  // _ei has no default value.
  // _eo has no default value.
#line 2245 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2245 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _oe;
#line 2245 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 2245 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 2245 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _oe = MMC_CAR(tmpMeta2);
#line 2246 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if((!isNone(_oe)))
#line 2246 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 2247 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        /* Pattern-matching assignment */
#line 2247 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta3 = _oe;
#line 2247 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if (optionNone(tmpMeta3)) MMC_THROW_INTERNAL();
#line 2247 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
#line 2247 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _ei = tmpMeta4;
#line 14617 OMC_FILE

#line 2248 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _eo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _ei, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _ei, _inArg1);
#line 14621 OMC_FILE

#line 2249 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta5 = mmc_mk_cons(_eo, _outList);
#line 2249 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outList = tmpMeta5;
#line 14627 OMC_FILE
      }
    }
  }

#line 2253 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 14634 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_mapOption(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _ei = NULL;
  modelica_metatype _eo = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  // _ei has no default value.
  // _eo has no default value.
#line 2217 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2217 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _oe;
#line 2217 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 2217 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 2217 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _oe = MMC_CAR(tmpMeta2);
#line 2218 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if((!isNone(_oe)))
#line 2218 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 2219 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        /* Pattern-matching assignment */
#line 2219 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta3 = _oe;
#line 2219 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if (optionNone(tmpMeta3)) MMC_THROW_INTERNAL();
#line 2219 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
#line 2219 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _ei = tmpMeta4;
#line 14681 OMC_FILE

#line 2220 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _eo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _ei) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _ei);
#line 14685 OMC_FILE

#line 2221 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta5 = mmc_mk_cons(_eo, _outList);
#line 2221 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outList = tmpMeta5;
#line 14691 OMC_FILE
      }
    }
  }

#line 2225 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 14698 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_map__3(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype *out_outList2, modelica_metatype *out_outList3)
{
  modelica_metatype _outList1 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outList2 = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _outList3 = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _e3 = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList1 = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList2 = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList3 = tmpMeta3;
  // _e1 has no default value.
  // _e2 has no default value.
  // _e3 has no default value.
#line 2182 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2182 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2182 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta4 = _inList; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
#line 2182 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 2182 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta4);
#line 2183 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e ,&_e2 ,&_e3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e ,&_e2 ,&_e3);
#line 14743 OMC_FILE

#line 2184 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = mmc_mk_cons(_e1, _outList1);
#line 2184 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList1 = tmpMeta5;
#line 14749 OMC_FILE

#line 2185 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(isPresent(_outList2))
#line 2185 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 2186 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta6 = mmc_mk_cons(_e2, _outList2);
#line 2186 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outList2 = tmpMeta6;
#line 14759 OMC_FILE
      }

#line 2188 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(isPresent(_outList3))
#line 2188 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 2189 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta7 = mmc_mk_cons(_e3, _outList3);
#line 2189 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outList3 = tmpMeta7;
#line 14770 OMC_FILE
      }
    }
  }

#line 2193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList1 = listReverseInPlace(_outList1);
#line 14777 OMC_FILE

#line 2194 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(isPresent(_outList2))
#line 2194 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2195 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outList2 = listReverseInPlace(_outList2);
#line 14785 OMC_FILE
  }

#line 2197 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(isPresent(_outList3))
#line 2197 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2198 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outList3 = listReverseInPlace(_outList3);
#line 14794 OMC_FILE
  }
  _return: OMC_LABEL_UNUSED
  if (out_outList2) { *out_outList2 = _outList2; }
  if (out_outList3) { *out_outList3 = _outList3; }
  return _outList1;
}

DLLExport
modelica_metatype omc_List_map__2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype *out_outList2)
{
  modelica_metatype _outList1 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outList2 = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList1 = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList2 = tmpMeta2;
  // _e1 has no default value.
  // _e2 has no default value.
#line 2148 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2148 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2148 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
#line 2148 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 2148 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta3);
#line 2149 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e ,&_e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e ,&_e2);
#line 14835 OMC_FILE

#line 2150 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = mmc_mk_cons(_e1, _outList1);
#line 2150 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList1 = tmpMeta4;
#line 14841 OMC_FILE

#line 2151 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(isPresent(_outList2))
#line 2151 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 2152 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta5 = mmc_mk_cons(_e2, _outList2);
#line 2152 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outList2 = tmpMeta5;
#line 14851 OMC_FILE
      }
    }
  }

#line 2156 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList1 = listReverseInPlace(_outList1);
#line 14858 OMC_FILE

#line 2157 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(isPresent(_outList2))
#line 2157 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2158 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outList2 = listReverseInPlace(_outList2);
#line 14866 OMC_FILE
  }
  _return: OMC_LABEL_UNUSED
  if (out_outList2) { *out_outList2 = _outList2; }
  return _outList1;
}

DLLExport
modelica_metatype omc_List_mapReverse(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar109;
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta2;
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar108;
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp3;
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar109 = tmpMeta2; /* defaultValue */
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp3 = 1;
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e_loopVar)) {
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp3--;
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp3 == 0) {
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar108 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e);
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar109 = mmc_mk_cons(__omcQ_24tmpVar108,__omcQ_24tmpVar109);
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp3 == 1) {
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar109;
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 2128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 14939 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_mapCheckReferenceEq(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
  modelica_metatype _outList = NULL;
  modelica_boolean _allEq;
  modelica_metatype _delst = NULL;
  modelica_integer _n;
  modelica_metatype _e1 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_boolean tmp6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
  _allEq = 1 /* true */;
  // _delst has no default value.
  _n = ((modelica_integer) 0);
  // _e1 has no default value.
#line 2092 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2092 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2092 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 2092 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 2092 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 2093 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e);
#line 14978 OMC_FILE

#line 2095 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if((_allEq?(!referenceEq(_e, _e1)):0 /* false */))
#line 2095 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 2096 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _allEq = 0 /* false */;
#line 14986 OMC_FILE

#line 2097 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _delst = omc_DoubleEnded_empty(threadData, _e1);
#line 14990 OMC_FILE

#line 2098 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 2098 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          modelica_metatype _elt;
#line 2098 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 2098 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          {
#line 2098 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            _elt = MMC_CAR(tmpMeta2);
#line 2099 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            if((_n < ((modelica_integer) 1)))
#line 2099 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            {
#line 2100 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              break;
#line 15008 OMC_FILE
            }

#line 2102 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            omc_DoubleEnded_push__back(threadData, _delst, _elt);
#line 15013 OMC_FILE

#line 2103 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            _n = ((modelica_integer) -1) + _n;
#line 15017 OMC_FILE
          }
        }
      }

#line 2106 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(_allEq)
#line 2106 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 2107 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _n = ((modelica_integer) 1) + _n;
#line 15028 OMC_FILE
      }
      else
      {
#line 2109 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        omc_DoubleEnded_push__back(threadData, _delst, _e1);
#line 15034 OMC_FILE
      }
    }
  }

#line 2112 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp6 = (modelica_boolean)_allEq;
#line 2112 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(tmp6)
#line 2112 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2112 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta7 = _inList;
#line 2112 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 2112 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  else
#line 2112 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2112 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
#line 2112 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta7 = omc_DoubleEnded_toListAndClear(threadData, _delst, tmpMeta5);
#line 2112 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 2112 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta7;
#line 15061 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_map(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar111;
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar110;
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar111 = tmpMeta3; /* defaultValue */
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar111;
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e_loopVar)) {
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar110 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e);
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar110,0);
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar111;
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 2072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 15140 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_unionOnTrueList(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inCompFunc)
{
  modelica_metatype _outUnion = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean tmp2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outUnion has no default value.
#line 2056 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp2 = (modelica_boolean)listEmpty(_inList);
#line 2056 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(tmp2)
#line 2056 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2056 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
#line 2056 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = tmpMeta1;
#line 2056 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 2056 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  else
#line 2056 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2056 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = omc_List_reduce1(threadData, _inList, boxvar_List_unionOnTrue, ((modelica_fnptr) _inCompFunc));
#line 2056 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 2056 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outUnion = tmpMeta3;
#line 15177 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outUnion;
}

DLLExport
modelica_metatype omc_List_unionList(threadData_t *threadData, modelica_metatype _inList)
{
  modelica_metatype _outUnion = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean tmp2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outUnion has no default value.
#line 2037 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp2 = (modelica_boolean)listEmpty(_inList);
#line 2037 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(tmp2)
#line 2037 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2037 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
#line 2037 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = tmpMeta1;
#line 2037 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 2037 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  else
#line 2037 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2037 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = omc_List_reduce(threadData, _inList, boxvar_List_union);
#line 2037 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 2037 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outUnion = tmpMeta3;
#line 15214 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outUnion;
}

static modelica_metatype closure0_List_unionEltOnTrue(threadData_t *thData, modelica_metatype closure, modelica_metatype inElement, modelica_metatype inList)
{
  modelica_fnptr inCompFunc = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_List_unionEltOnTrue(thData, inElement, inList, inCompFunc);
}
DLLExport
modelica_metatype omc_List_unionAppendListOnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inUnion, modelica_fnptr _inCompFunc)
{
  modelica_metatype _outUnion = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outUnion has no default value.
#line 2028 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta1 = mmc_mk_box1(0, ((modelica_fnptr) _inCompFunc));
#line 2028 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outUnion = omc_List_fold(threadData, _inList, (modelica_fnptr) mmc_mk_box2(0,closure0_List_unionEltOnTrue,tmpMeta1), _inUnion);
#line 15236 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outUnion;
}

DLLExport
modelica_metatype omc_List_unionOnTrue(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inCompFunc)
{
  modelica_metatype _outUnion = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outUnion = tmpMeta1;
#line 2005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 2005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 2005 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 2006 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outUnion = omc_List_unionEltOnTrue(threadData, _e, _outUnion, ((modelica_fnptr) _inCompFunc));
#line 15266 OMC_FILE
    }
  }

#line 2009 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 2009 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 2009 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta4 = _inList2; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
#line 2009 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 2009 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta4);
#line 2010 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outUnion = omc_List_unionEltOnTrue(threadData, _e, _outUnion, ((modelica_fnptr) _inCompFunc));
#line 15282 OMC_FILE
    }
  }

#line 2013 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outUnion = listReverseInPlace(_outUnion);
#line 15288 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outUnion;
}

DLLExport
modelica_metatype omc_List_unionAppendonUnion(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2)
{
  modelica_metatype _outUnion = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outUnion has no default value.
#line 1980 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outUnion = listReverse(_inList1);
#line 15304 OMC_FILE

#line 1982 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1982 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 1982 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList2; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 1982 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1982 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 1983 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outUnion = omc_List_unionElt(threadData, _e, _outUnion);
#line 15318 OMC_FILE
    }
  }

#line 1986 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outUnion = listReverseInPlace(_outUnion);
#line 15324 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outUnion;
}

DLLExport
modelica_metatype omc_List_union(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2)
{
  modelica_metatype _outUnion = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outUnion = tmpMeta1;
#line 1960 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1960 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 1960 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 1960 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1960 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 1961 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outUnion = omc_List_unionElt(threadData, _e, _outUnion);
#line 15354 OMC_FILE
    }
  }

#line 1964 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1964 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 1964 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta4 = _inList2; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
#line 1964 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1964 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta4);
#line 1965 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outUnion = omc_List_unionElt(threadData, _e, _outUnion);
#line 15370 OMC_FILE
    }
  }

#line 1968 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outUnion = listReverseInPlace(_outUnion);
#line 15376 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outUnion;
}

DLLExport
modelica_metatype omc_List_unionEltOnTrue(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inList, modelica_fnptr _inCompFunc)
{
  modelica_metatype _outList = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 1948 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = omc_List_consOnTrue(threadData, (!omc_List_isMemberOnTrue(threadData, _inElement, _inList, ((modelica_fnptr) _inCompFunc))), _inElement, _inList);
#line 15390 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_unionElt(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inList)
{
  modelica_metatype _outList = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 1932 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = omc_List_consOnTrue(threadData, (!listMember(_inElement, _inList)), _inElement, _inList);
#line 15404 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_unionIntN(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_integer _inN)
{
  modelica_metatype _outUnion = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _a = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outUnion = tmpMeta1;
  // _a has no default value.
#line 1908 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if((_inN > ((modelica_integer) 0)))
#line 1908 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1909 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _a = arrayCreate(_inN, mmc_mk_integer(((modelica_integer) 0)));
#line 15430 OMC_FILE

#line 1910 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _a = omc_List_addPos(threadData, _inList1, _a, ((modelica_integer) 1));
#line 15434 OMC_FILE

#line 1911 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _a = omc_List_addPos(threadData, _inList2, _a, ((modelica_integer) 1));
#line 15438 OMC_FILE

#line 1913 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp3 = _inN; tmp4 = ((modelica_integer) -1); tmp5 = ((modelica_integer) 1);
#line 1913 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
#line 1913 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1913 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      modelica_integer _i;
#line 1913 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      for(_i = _inN; in_range_integer(_i, tmp3, tmp5); _i += tmp4)
#line 1913 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 1914 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if((mmc_unbox_integer(arrayGet(_a, _i)) > ((modelica_integer) 0)))
#line 1914 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 1915 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta2 = mmc_mk_cons(mmc_mk_integer(_i), _outUnion);
#line 1915 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _outUnion = tmpMeta2;
#line 15460 OMC_FILE
        }
      }
    }

#line 1918 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    omc_GCExt_free(threadData, _a);
#line 15467 OMC_FILE
  }
  _return: OMC_LABEL_UNUSED
  return _outUnion;
}
modelica_metatype boxptr_List_unionIntN(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_metatype _inN)
{
  modelica_integer tmp1;
  modelica_metatype _outUnion = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_inN);
  _outUnion = omc_List_unionIntN(threadData, _inList1, _inList2, tmp1);
  /* skip box _outUnion; list<#Integer> */
  return _outUnion;
}

DLLExport
modelica_metatype omc_List_setDifference(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2)
{
  modelica_metatype _outDifference = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outDifference = _inList1;
#line 1889 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(listEmpty(_inList1))
#line 1889 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1890 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    goto _return;
#line 15498 OMC_FILE
  }

#line 1893 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1893 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 1893 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList2; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 1893 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1893 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 1894 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outDifference = omc_List_deleteMember(threadData, _outDifference, _e);
#line 15513 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outDifference;
}

DLLExport
modelica_metatype omc_List_setDifferenceOnTrue(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inCompFunc)
{
  modelica_metatype _outDifference = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outDifference = _inList1;
#line 1872 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(listEmpty(_inList1))
#line 1872 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1873 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    goto _return;
#line 15535 OMC_FILE
  }

#line 1876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 1876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList2; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 1876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1876 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 1877 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outDifference = omc_List_deleteMemberOnTrue(threadData, _e, _outDifference, ((modelica_fnptr) _inCompFunc), NULL);
#line 15550 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outDifference;
}

DLLExport
modelica_metatype omc_List_setDifferenceIntN(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_integer _inN)
{
  modelica_metatype _outDifference = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _a = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outDifference = tmpMeta1;
  // _a has no default value.
#line 1840 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if((_inN > ((modelica_integer) 0)))
#line 1840 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1841 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _a = arrayCreate(_inN, mmc_mk_integer(((modelica_integer) 0)));
#line 15578 OMC_FILE

#line 1842 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _a = omc_List_addPos(threadData, _inList1, _a, ((modelica_integer) 1));
#line 15582 OMC_FILE

#line 1843 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _a = omc_List_addPos(threadData, _inList2, _a, ((modelica_integer) 1));
#line 15586 OMC_FILE

#line 1845 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp3 = _inN; tmp4 = ((modelica_integer) -1); tmp5 = ((modelica_integer) 1);
#line 1845 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
#line 1845 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1845 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      modelica_integer _i;
#line 1845 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      for(_i = _inN; in_range_integer(_i, tmp3, tmp5); _i += tmp4)
#line 1845 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 1846 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if((mmc_unbox_integer(arrayGet(_a, _i)) == ((modelica_integer) 1)))
#line 1846 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 1847 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta2 = mmc_mk_cons(mmc_mk_integer(_i), _outDifference);
#line 1847 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _outDifference = tmpMeta2;
#line 15608 OMC_FILE
        }
      }
    }

#line 1850 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    omc_GCExt_free(threadData, _a);
#line 15615 OMC_FILE
  }
  _return: OMC_LABEL_UNUSED
  return _outDifference;
}
modelica_metatype boxptr_List_setDifferenceIntN(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_metatype _inN)
{
  modelica_integer tmp1;
  modelica_metatype _outDifference = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_inN);
  _outDifference = omc_List_setDifferenceIntN(threadData, _inList1, _inList2, tmp1);
  /* skip box _outDifference; list<#Integer> */
  return _outDifference;
}

DLLExport
modelica_metatype omc_List_intersection1OnTrue(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inCompFunc, modelica_metatype *out_outList1Rest, modelica_metatype *out_outList2Rest)
{
  modelica_metatype _outIntersection = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outList1Rest = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _outList2Rest = NULL;
  modelica_metatype _oe = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_boolean tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_boolean tmp11;
  modelica_metatype tmpMeta12;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outIntersection = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList1Rest = tmpMeta2;
  _outList2Rest = _inList2;
  // _oe has no default value.
#line 1810 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(listEmpty(_inList1))
#line 1810 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1811 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    goto _return;
#line 15664 OMC_FILE
  }

#line 1813 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(listEmpty(_inList2))
#line 1813 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1814 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outList1Rest = _inList1;
#line 15673 OMC_FILE

#line 1815 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    goto _return;
#line 15677 OMC_FILE
  }

#line 1817 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1817 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 1817 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta3 = _inList1; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
#line 1817 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1817 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta3);
#line 1818 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(omc_List_isMemberOnTrue(threadData, _e, _inList2, ((modelica_fnptr) _inCompFunc)))
#line 1818 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 1819 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta4 = mmc_mk_cons(_e, _outIntersection);
#line 1819 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outIntersection = tmpMeta4;
#line 15698 OMC_FILE
      }
      else
      {
        if(isPresent(_outList1Rest))
        {
#line 1821 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta5 = mmc_mk_cons(_e, _outList1Rest);
#line 1821 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _outList1Rest = tmpMeta5;
#line 15708 OMC_FILE
        }
      }
    }
  }

#line 1825 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outIntersection = listReverseInPlace(_outIntersection);
#line 15716 OMC_FILE

#line 1826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp8 = (modelica_boolean)isPresent(_outList1Rest);
#line 1826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(tmp8)
#line 1826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta9 = listReverseInPlace(_outList1Rest);
#line 1826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 1826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  else
#line 1826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
#line 1826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta9 = tmpMeta7;
#line 1826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 1826 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList1Rest = tmpMeta9;
#line 15740 OMC_FILE

#line 1827 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp11 = (modelica_boolean)isPresent(_outList2Rest);
#line 1827 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(tmp11)
#line 1827 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1827 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta12 = omc_List_setDifferenceOnTrue(threadData, _inList2, _outIntersection, ((modelica_fnptr) _inCompFunc));
#line 1827 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 1827 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  else
#line 1827 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1827 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
#line 1827 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta12 = tmpMeta10;
#line 1827 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 1827 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList2Rest = tmpMeta12;
#line 15764 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outList1Rest) { *out_outList1Rest = _outList1Rest; }
  if (out_outList2Rest) { *out_outList2Rest = _outList2Rest; }
  return _outIntersection;
}

DLLExport
modelica_metatype omc_List_intersectionOnTrue(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inCompFunc)
{
  modelica_metatype _outIntersection = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outIntersection = tmpMeta1;
#line 1780 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1780 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 1780 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 1780 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1780 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 1781 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(omc_List_isMemberOnTrue(threadData, _e, _inList2, ((modelica_fnptr) _inCompFunc)))
#line 1781 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 1782 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta3 = mmc_mk_cons(_e, _outIntersection);
#line 1782 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outIntersection = tmpMeta3;
#line 15801 OMC_FILE
      }
    }
  }

#line 1786 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outIntersection = listReverseInPlace(_outIntersection);
#line 15808 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outIntersection;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_addPos(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inArray, modelica_integer _inIndex)
{
  modelica_metatype _outArray = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outArray has no default value.
#line 1756 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1756 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _i;
#line 1756 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 1756 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1756 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _i = MMC_CAR(tmpMeta1);
#line 1757 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      arrayUpdate(_inArray, mmc_unbox_integer(_i), mmc_mk_integer(mmc_unbox_integer(arrayGet(_inArray, mmc_unbox_integer(_i))) + _inIndex));
#line 15833 OMC_FILE
    }
  }

#line 1760 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outArray = _inArray;
#line 15839 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outArray;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_List_addPos(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inArray, modelica_metatype _inIndex)
{
  modelica_integer tmp1;
  modelica_metatype _outArray = NULL;
  tmp1 = mmc_unbox_integer(_inIndex);
  _outArray = omc_List_addPos(threadData, _inList, _inArray, tmp1);
  /* skip box _outArray; array<#Integer> */
  return _outArray;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_intersectionIntVec(threadData_t *threadData, modelica_metatype _inArray, modelica_metatype _inList1)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outResult = tmpMeta1;
#line 1742 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1742 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _i;
#line 1742 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 1742 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1742 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _i = MMC_CAR(tmpMeta2);
#line 1743 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if((mmc_unbox_integer(arrayGet(_inArray, mmc_unbox_integer(_i))) == ((modelica_integer) 2)))
#line 1743 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 1744 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta3 = mmc_mk_cons(_i, _outResult);
#line 1744 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outResult = tmpMeta3;
#line 15882 OMC_FILE
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLExport
modelica_metatype omc_List_intersectionIntN(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_integer _inN)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype _a = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outResult has no default value.
  // _a has no default value.
#line 1725 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if((_inN > ((modelica_integer) 0)))
#line 1725 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1726 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _a = arrayCreate(_inN, mmc_mk_integer(((modelica_integer) 0)));
#line 15906 OMC_FILE

#line 1727 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _a = omc_List_addPos(threadData, _inList1, _a, ((modelica_integer) 1));
#line 15910 OMC_FILE

#line 1728 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _a = omc_List_addPos(threadData, _inList2, _a, ((modelica_integer) 1));
#line 15914 OMC_FILE

#line 1729 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outResult = omc_List_intersectionIntVec(threadData, _a, _inList1);
#line 15918 OMC_FILE

#line 1730 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    omc_GCExt_free(threadData, _a);
#line 15922 OMC_FILE
  }
  else
  {
#line 1732 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
#line 1732 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outResult = tmpMeta1;
#line 15930 OMC_FILE
  }
  _return: OMC_LABEL_UNUSED
  return _outResult;
}
modelica_metatype boxptr_List_intersectionIntN(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_metatype _inN)
{
  modelica_integer tmp1;
  modelica_metatype _outResult = NULL;
  tmp1 = mmc_unbox_integer(_inN);
  _outResult = omc_List_intersectionIntN(threadData, _inList1, _inList2, tmp1);
  /* skip box _outResult; list<#Integer> */
  return _outResult;
}

DLLExport
modelica_metatype omc_List_intersectionIntSorted(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _i1;
  modelica_integer _i2;
  modelica_integer _o1;
  modelica_integer _o2;
  modelica_metatype _l1 = NULL;
  modelica_metatype _l2 = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_integer tmp9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_integer tmp13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_integer tmp17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_integer tmp22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  modelica_integer tmp26;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outResult = tmpMeta1;
  // _i1 has no default value.
  // _i2 has no default value.
  // _o1 has no default value.
  // _o2 has no default value.
  _l1 = _inList1;
  _l2 = _inList2;
#line 1682 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if((listEmpty(_inList1) || listEmpty(_inList2)))
#line 1682 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1683 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    goto _return;
#line 15997 OMC_FILE
  }

#line 1685 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 1685 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta2 = _l1;
#line 1685 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
#line 1685 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta3 = MMC_CAR(tmpMeta2);
#line 1685 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta4 = MMC_CDR(tmpMeta2);
#line 1685 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp5 = mmc_unbox_integer(tmpMeta3);
#line 1685 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _i1 = tmp5  /* pattern as ty=Integer */;
#line 1685 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _l1 = tmpMeta4;
#line 16016 OMC_FILE

#line 1686 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 1686 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta6 = _l2;
#line 1686 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (listEmpty(tmpMeta6)) MMC_THROW_INTERNAL();
#line 1686 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta7 = MMC_CAR(tmpMeta6);
#line 1686 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta8 = MMC_CDR(tmpMeta6);
#line 1686 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp9 = mmc_unbox_integer(tmpMeta7);
#line 1686 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _i2 = tmp9  /* pattern as ty=Integer */;
#line 1686 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _l2 = tmpMeta8;
#line 16034 OMC_FILE

#line 1687 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _o1 = _i1;
#line 16038 OMC_FILE

#line 1687 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _o2 = _i2;
#line 16042 OMC_FILE

#line 1688 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 1688 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1688 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!1 /* true */) break;
#line 1689 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if((_i1 > _i2))
#line 1689 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1690 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(listEmpty(_l2))
#line 1690 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 1691 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 16060 OMC_FILE
      }

#line 1693 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 1693 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta10 = _l2;
#line 1693 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta10)) MMC_THROW_INTERNAL();
#line 1693 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta11 = MMC_CAR(tmpMeta10);
#line 1693 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta12 = MMC_CDR(tmpMeta10);
#line 1693 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp13 = mmc_unbox_integer(tmpMeta11);
#line 1693 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _i2 = tmp13  /* pattern as ty=Integer */;
#line 1693 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _l2 = tmpMeta12;
#line 16079 OMC_FILE

#line 1694 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if((_o2 > _i2))
#line 1694 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 1694 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 16087 OMC_FILE
      }

#line 1694 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _o2 = _i2;
#line 16092 OMC_FILE
    }
    else
    {
      if((_i1 < _i2))
      {
#line 1696 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if(listEmpty(_l1))
#line 1696 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 1697 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          break;
#line 16104 OMC_FILE
        }

#line 1699 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        /* Pattern-matching assignment */
#line 1699 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta14 = _l1;
#line 1699 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if (listEmpty(tmpMeta14)) MMC_THROW_INTERNAL();
#line 1699 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta15 = MMC_CAR(tmpMeta14);
#line 1699 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta16 = MMC_CDR(tmpMeta14);
#line 1699 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp17 = mmc_unbox_integer(tmpMeta15);
#line 1699 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _i1 = tmp17  /* pattern as ty=Integer */;
#line 1699 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _l1 = tmpMeta16;
#line 16123 OMC_FILE

#line 1700 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if((_o1 > _i1))
#line 1700 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 1700 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          MMC_THROW_INTERNAL();
#line 16131 OMC_FILE
        }

#line 1700 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _o1 = _i1;
#line 16136 OMC_FILE
      }
      else
      {
#line 1702 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta18 = mmc_mk_cons(mmc_mk_integer(_i1), _outResult);
#line 1702 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outResult = tmpMeta18;
#line 16144 OMC_FILE

#line 1703 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if((listEmpty(_l1) || listEmpty(_l2)))
#line 1703 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 1704 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          break;
#line 16152 OMC_FILE
        }

#line 1706 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        /* Pattern-matching assignment */
#line 1706 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta19 = _l1;
#line 1706 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if (listEmpty(tmpMeta19)) MMC_THROW_INTERNAL();
#line 1706 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta20 = MMC_CAR(tmpMeta19);
#line 1706 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta21 = MMC_CDR(tmpMeta19);
#line 1706 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp22 = mmc_unbox_integer(tmpMeta20);
#line 1706 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _i1 = tmp22  /* pattern as ty=Integer */;
#line 1706 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _l1 = tmpMeta21;
#line 16171 OMC_FILE

#line 1707 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        /* Pattern-matching assignment */
#line 1707 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta23 = _l2;
#line 1707 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if (listEmpty(tmpMeta23)) MMC_THROW_INTERNAL();
#line 1707 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta24 = MMC_CAR(tmpMeta23);
#line 1707 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta25 = MMC_CDR(tmpMeta23);
#line 1707 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp26 = mmc_unbox_integer(tmpMeta24);
#line 1707 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _i2 = tmp26  /* pattern as ty=Integer */;
#line 1707 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _l2 = tmpMeta25;
#line 16189 OMC_FILE

#line 1708 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if((_o1 > _i1))
#line 1708 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 1708 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          MMC_THROW_INTERNAL();
#line 16197 OMC_FILE
        }

#line 1708 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _o1 = _i1;
#line 16202 OMC_FILE

#line 1709 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if((_o2 > _i2))
#line 1709 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 1709 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          MMC_THROW_INTERNAL();
#line 16210 OMC_FILE
        }

#line 1709 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _o2 = _i2;
#line 16215 OMC_FILE
      }
    }
  }

#line 1712 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outResult = listReverseInPlace(_outResult);
#line 16222 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLExport
modelica_boolean omc_List_setEqualOnTrue(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inCompFunc)
{
  modelica_boolean _outIsEqual;
  modelica_metatype _lst = NULL;
  modelica_integer _lst_size;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outIsEqual has no default value.
  // _lst has no default value.
  // _lst_size has no default value.
#line 1665 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _lst = omc_List_intersectionOnTrue(threadData, _inList1, _inList2, ((modelica_fnptr) _inCompFunc));
#line 16240 OMC_FILE

#line 1666 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _lst_size = listLength(_lst);
#line 16244 OMC_FILE

#line 1667 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outIsEqual = ((_lst_size == listLength(_inList1)) && (_lst_size == listLength(_inList2)));
#line 16248 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outIsEqual;
}
modelica_metatype boxptr_List_setEqualOnTrue(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inCompFunc)
{
  modelica_boolean _outIsEqual;
  modelica_metatype out_outIsEqual;
  _outIsEqual = omc_List_setEqualOnTrue(threadData, _inList1, _inList2, _inCompFunc);
  out_outIsEqual = mmc_mk_icon(_outIsEqual);
  return out_outIsEqual;
}

DLLExport
modelica_metatype omc_List_listArrayReverse(threadData_t *threadData, modelica_metatype _inLst)
{
  modelica_metatype _outArr = NULL;
  modelica_integer _len;
  modelica_metatype _defaultValue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outArr has no default value.
  // _len has no default value.
  // _defaultValue has no default value.
#line 1635 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(listEmpty(_inLst))
#line 1635 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1636 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outArr = listArray(_inLst);
#line 16283 OMC_FILE

#line 1637 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    goto _return;
#line 16287 OMC_FILE
  }

#line 1639 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _len = listLength(_inLst);
#line 16292 OMC_FILE

#line 1640 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 1640 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta1 = _inLst;
#line 1640 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
#line 1640 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta2 = MMC_CAR(tmpMeta1);
#line 1640 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta3 = MMC_CDR(tmpMeta1);
#line 1640 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _defaultValue = tmpMeta2;
#line 16306 OMC_FILE

#line 1641 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outArr = arrayCreateNoInit(_len, _defaultValue);
#line 16310 OMC_FILE

#line 1642 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1642 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 1642 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta4 = _inLst; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
#line 1642 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1642 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta4);
#line 1643 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      arrayUpdateNoBoundsChecking(_outArr, _len, _e);
#line 16324 OMC_FILE

#line 1644 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _len = ((modelica_integer) -1) + _len;
#line 16328 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outArr;
}

DLLExport
modelica_metatype omc_List_transposeList(threadData_t *threadData, modelica_metatype _inList)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _arr = NULL;
  modelica_metatype _arr_row = NULL;
  modelica_metatype _new_row = NULL;
  modelica_integer _c_len;
  modelica_integer _r_len;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  modelica_integer tmp14;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  // _arr has no default value.
  // _arr_row has no default value.
  // _new_row has no default value.
  // _c_len has no default value.
  // _r_len has no default value.
#line 1603 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(listEmpty(_inList))
#line 1603 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1604 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    goto _return;
#line 16370 OMC_FILE
  }

#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar113;
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp3;
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta4;
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar112;
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp5;
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _lst_loopVar = 0;
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _lst;
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _lst_loopVar = _inList;
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar113 = tmpMeta4; /* defaultValue */
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp3 = &__omcQ_24tmpVar113;
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp5 = 1;
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_lst_loopVar)) {
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _lst = MMC_CAR(_lst_loopVar);
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _lst_loopVar = MMC_CDR(_lst_loopVar);
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp5--;
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp5 == 0) {
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar112 = listArray(_lst);
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar112,0);
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp3 = &MMC_CDR(*tmp3);
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp5 == 1) {
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp3 = mmc_mk_nil();
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = __omcQ_24tmpVar113;
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 1609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _arr = listArray(tmpMeta2);
#line 16439 OMC_FILE

#line 1612 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _c_len = arrayLength(_arr);
#line 16443 OMC_FILE

#line 1613 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _r_len = arrayLength(arrayGet(_arr, ((modelica_integer) 1)));
#line 16447 OMC_FILE

#line 1617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp12 = _r_len; tmp13 = ((modelica_integer) -1); tmp14 = ((modelica_integer) 1);
#line 1617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(!(((tmp13 > 0) && (tmp12 > tmp14)) || ((tmp13 < 0) && (tmp12 < tmp14))))
#line 1617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer _i;
#line 1617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for(_i = _r_len; in_range_integer(_i, tmp12, tmp14); _i += tmp13)
#line 1617 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1618 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
#line 1618 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _new_row = tmpMeta6;
#line 16465 OMC_FILE

#line 1620 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp8 = _c_len; tmp9 = ((modelica_integer) -1); tmp10 = ((modelica_integer) 1);
#line 1620 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(!(((tmp9 > 0) && (tmp8 > tmp10)) || ((tmp9 < 0) && (tmp8 < tmp10))))
#line 1620 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 1620 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        modelica_integer _j;
#line 1620 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        for(_j = _c_len; in_range_integer(_j, tmp8, tmp10); _j += tmp9)
#line 1620 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 1621 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta7 = mmc_mk_cons(arrayGetNoBoundsChecking(arrayGet(_arr, _j), _i), _new_row);
#line 1621 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _new_row = tmpMeta7;
#line 16483 OMC_FILE
        }
      }

#line 1624 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta11 = mmc_mk_cons(_new_row, _outList);
#line 1624 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta11;
#line 16491 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_product(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2)
{
  modelica_metatype _outProduct = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outProduct = tmpMeta1;
#line 1587 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1587 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1;
#line 1587 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 1587 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1587 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e1 = MMC_CAR(tmpMeta2);
#line 1587 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 1587 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        modelica_metatype _e2;
#line 1587 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        for (tmpMeta3 = _inList2; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
#line 1587 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 1587 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _e2 = MMC_CAR(tmpMeta3);
#line 1588 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta4 = mmc_mk_cons(listAppend(_e1, _e2), _outProduct);
#line 1588 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _outProduct = tmpMeta4;
#line 16536 OMC_FILE
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outProduct;
}

DLLExport
modelica_metatype omc_List_productMap(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outResult = tmpMeta1;
#line 1573 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1573 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1;
#line 1573 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = listReverse(_inList1); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 1573 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1573 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e1 = MMC_CAR(tmpMeta2);
#line 1573 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 1573 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        modelica_metatype _e2;
#line 1573 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        for (tmpMeta3 = listReverse(_inList2); !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
#line 1573 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 1573 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _e2 = MMC_CAR(tmpMeta3);
#line 1574 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta4 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2), _outResult);
#line 1574 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _outResult = tmpMeta4;
#line 16583 OMC_FILE
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLExport
modelica_metatype omc_List_sublist(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inOffset, modelica_integer _inLength)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _e = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype _res = NULL;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_integer tmp14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  // _e has no default value.
  _rest = _inList;
  // _res has no default value.
#line 1541 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 1541 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp2 = (_inOffset > ((modelica_integer) 0));
#line 1541 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (1 /* true */ != tmp2) MMC_THROW_INTERNAL();
#line 16628 OMC_FILE

#line 1542 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 1542 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp3 = (_inLength >= ((modelica_integer) 0));
#line 1542 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (1 /* true */ != tmp3) MMC_THROW_INTERNAL();
#line 16636 OMC_FILE

#line 1545 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp7 = ((modelica_integer) 2); tmp8 = 1; tmp9 = _inOffset;
#line 1545 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
#line 1545 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1545 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer _i;
#line 1545 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for(_i = ((modelica_integer) 2); in_range_integer(_i, tmp7, tmp9); _i += tmp8)
#line 1545 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1546 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 1546 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = _rest;
#line 1546 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
#line 1546 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = MMC_CAR(tmpMeta4);
#line 1546 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta6 = MMC_CDR(tmpMeta4);
#line 1546 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _rest = tmpMeta6;
#line 16662 OMC_FILE
    }
  }

#line 1550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp14 = ((modelica_integer) 1); tmp15 = 1; tmp16 = _inLength;
#line 1550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(!(((tmp15 > 0) && (tmp14 > tmp16)) || ((tmp15 < 0) && (tmp14 < tmp16))))
#line 1550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer _i;
#line 1550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp14, tmp16); _i += tmp15)
#line 1550 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1551 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 1551 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta10 = _rest;
#line 1551 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta10)) MMC_THROW_INTERNAL();
#line 1551 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta11 = MMC_CAR(tmpMeta10);
#line 1551 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta12 = MMC_CDR(tmpMeta10);
#line 1551 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = tmpMeta11;
#line 1551 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _rest = tmpMeta12;
#line 16692 OMC_FILE

#line 1552 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta13 = mmc_mk_cons(_e, _outList);
#line 1552 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta13;
#line 16698 OMC_FILE
    }
  }

#line 1555 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 16704 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}
modelica_metatype boxptr_List_sublist(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inOffset, modelica_metatype _inLength)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta3;
  tmp1 = mmc_unbox_integer(_inOffset);
  tmp2 = mmc_unbox_integer(_inLength);
  _outList = omc_List_sublist(threadData, _inList, tmp1, tmp2);
  /* skip box _outList; list<polymorphic<T>> */
  return _outList;
}

DLLExport
modelica_metatype omc_List_balancedPartition(threadData_t *threadData, modelica_metatype _lst, modelica_integer _maxLength)
{
  modelica_metatype _outPartitions = NULL;
  modelica_integer _length;
  modelica_integer _n;
  modelica_boolean tmp1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outPartitions has no default value.
  // _length has no default value.
  // _n has no default value.
#line 1520 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 1520 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp1 = (_maxLength > ((modelica_integer) 0));
#line 1520 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (1 /* true */ != tmp1) MMC_THROW_INTERNAL();
#line 16742 OMC_FILE

#line 1521 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(listEmpty(_lst))
#line 1521 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1522 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
#line 1522 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outPartitions = tmpMeta2;
#line 16752 OMC_FILE

#line 1523 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    goto _return;
#line 16756 OMC_FILE
  }

#line 1525 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _length = listLength(_lst);
#line 16761 OMC_FILE

#line 1526 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp3 = _maxLength;
#line 1526 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (tmp3 == 0) {MMC_THROW_INTERNAL();}
#line 1526 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _n = ((modelica_integer) 1) + modelica_div_integer(((modelica_integer) -1) + _length,tmp3).quot;
#line 16769 OMC_FILE

#line 1527 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp4 = _n;
#line 1527 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (tmp4 == 0) {MMC_THROW_INTERNAL();}
#line 1527 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outPartitions = omc_List_partition(threadData, _lst, ((modelica_integer) 1) + modelica_div_integer(((modelica_integer) -1) + _length,tmp4).quot);
#line 16777 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outPartitions;
}
modelica_metatype boxptr_List_balancedPartition(threadData_t *threadData, modelica_metatype _lst, modelica_metatype _maxLength)
{
  modelica_integer tmp1;
  modelica_metatype _outPartitions = NULL;
  tmp1 = mmc_unbox_integer(_maxLength);
  _outPartitions = omc_List_balancedPartition(threadData, _lst, tmp1);
  /* skip box _outPartitions; list<list<polymorphic<T>>> */
  return _outPartitions;
}

DLLExport
modelica_metatype omc_List_partition(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inPartitionLength)
{
  modelica_metatype _outPartitions = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _lst = NULL;
  modelica_metatype _part = NULL;
  modelica_integer _length;
  modelica_boolean tmp2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outPartitions = tmpMeta1;
  _lst = _inList;
  // _part has no default value.
  // _length has no default value.
#line 1484 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 1484 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp2 = (_inPartitionLength > ((modelica_integer) 0));
#line 1484 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (1 /* true */ != tmp2) MMC_THROW_INTERNAL();
#line 16820 OMC_FILE

#line 1485 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _length = listLength(_inList);
#line 16824 OMC_FILE

#line 1487 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if((_length == ((modelica_integer) 0)))
#line 1487 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1488 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    goto _return;
#line 16832 OMC_FILE
  }
  else
  {
    if((_inPartitionLength >= _length))
    {
#line 1490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = mmc_mk_cons(_inList, MMC_REFSTRUCTLIT(mmc_nil));
#line 1490 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outPartitions = tmpMeta3;
#line 16842 OMC_FILE

#line 1491 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      goto _return;
#line 16846 OMC_FILE
    }
  }

#line 1495 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp8 = _inPartitionLength;
#line 1495 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (tmp8 == 0) {MMC_THROW_INTERNAL();}
#line 1495 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp5 = ((modelica_integer) 1); tmp6 = 1; tmp7 = modelica_div_integer(_length,tmp8).quot;
#line 1495 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
#line 1495 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1495 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer _i;
#line 1495 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp5, tmp7); _i += tmp6)
#line 1495 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1496 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _part = omc_List_split(threadData, _lst, _inPartitionLength ,&_lst);
#line 16868 OMC_FILE

#line 1497 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = mmc_mk_cons(_part, _outPartitions);
#line 1497 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outPartitions = tmpMeta4;
#line 16874 OMC_FILE
    }
  }

#line 1501 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if((!listEmpty(_lst)))
#line 1501 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1502 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta9 = mmc_mk_cons(_lst, _outPartitions);
#line 1502 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outPartitions = tmpMeta9;
#line 16886 OMC_FILE
  }

#line 1505 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outPartitions = listReverseInPlace(_outPartitions);
#line 16891 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outPartitions;
}
modelica_metatype boxptr_List_partition(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inPartitionLength)
{
  modelica_integer tmp1;
  modelica_metatype _outPartitions = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_inPartitionLength);
  _outPartitions = omc_List_partition(threadData, _inList, tmp1);
  /* skip box _outPartitions; list<list<polymorphic<T>>> */
  return _outPartitions;
}

DLLExport
modelica_metatype omc_List_splitOnBoolList(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inBools, modelica_metatype *out_outFalseList)
{
  modelica_metatype _outTrueList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outFalseList = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _e = NULL;
  modelica_metatype _rest_e = NULL;
  modelica_boolean _b;
  modelica_metatype _rest_b = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_integer tmp9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outTrueList = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outFalseList = tmpMeta2;
  // _e has no default value.
  _rest_e = _inList;
  // _b has no default value.
  _rest_b = _inBools;
#line 1459 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 1459 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1459 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!(!listEmpty(_rest_e))) break;
#line 1460 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching assignment */
#line 1460 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = _rest_e;
#line 1460 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
#line 1460 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta4 = MMC_CAR(tmpMeta3);
#line 1460 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta5 = MMC_CDR(tmpMeta3);
#line 1460 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e = tmpMeta4;
#line 1460 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _rest_e = tmpMeta5;
#line 16956 OMC_FILE

#line 1461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching assignment */
#line 1461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta6 = _rest_b;
#line 1461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (listEmpty(tmpMeta6)) MMC_THROW_INTERNAL();
#line 1461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta7 = MMC_CAR(tmpMeta6);
#line 1461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta8 = MMC_CDR(tmpMeta6);
#line 1461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp9 = mmc_unbox_integer(tmpMeta7);
#line 1461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _b = tmp9  /* pattern as ty=Boolean */;
#line 1461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _rest_b = tmpMeta8;
#line 16974 OMC_FILE

#line 1463 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(_b)
#line 1463 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1464 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta10 = mmc_mk_cons(_e, _outTrueList);
#line 1464 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outTrueList = tmpMeta10;
#line 16984 OMC_FILE
    }
    else
    {
      if(isPresent(_outFalseList))
      {
#line 1466 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta11 = mmc_mk_cons(_e, _outFalseList);
#line 1466 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outFalseList = tmpMeta11;
#line 16994 OMC_FILE
      }
    }
  }

#line 1470 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outTrueList = listReverseInPlace(_outTrueList);
#line 17001 OMC_FILE

#line 1471 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outFalseList = listReverseInPlace(_outFalseList);
#line 17005 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outFalseList) { *out_outFalseList = _outFalseList; }
  return _outTrueList;
}

DLLExport
modelica_metatype omc_List_splitEqualParts(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inParts)
{
  modelica_metatype _outParts = NULL;
  modelica_integer _length;
  modelica_metatype tmpMeta1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outParts has no default value.
  // _length has no default value.
#line 1438 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if((_inParts == ((modelica_integer) 0)))
#line 1438 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1439 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
#line 1439 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outParts = tmpMeta1;
#line 17031 OMC_FILE
  }
  else
  {
#line 1441 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _length = listLength(_inList);
#line 17037 OMC_FILE

#line 1442 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching assignment */
#line 1442 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = modelica_integer_mod(_length, _inParts);
#line 1442 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (0 != tmp2) MMC_THROW_INTERNAL();
#line 17045 OMC_FILE

#line 1443 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp3 = _inParts;
#line 1443 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (tmp3 == 0) {MMC_THROW_INTERNAL();}
#line 1443 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outParts = omc_List_partition(threadData, _inList, modelica_div_integer(_length,tmp3).quot);
#line 17053 OMC_FILE
  }
  _return: OMC_LABEL_UNUSED
  return _outParts;
}
modelica_metatype boxptr_List_splitEqualParts(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inParts)
{
  modelica_integer tmp1;
  modelica_metatype _outParts = NULL;
  tmp1 = mmc_unbox_integer(_inParts);
  _outParts = omc_List_splitEqualParts(threadData, _inList, tmp1);
  /* skip box _outParts; list<list<polymorphic<T>>> */
  return _outParts;
}

DLLExport
modelica_metatype omc_List_splitLast(threadData_t *threadData, modelica_metatype _inList, modelica_metatype *out_outRest)
{
  modelica_metatype _outLast = NULL;
  modelica_metatype _outRest = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outLast has no default value.
  // _outRest has no default value.
#line 1424 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 1424 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta1 = listReverse(_inList);
#line 1424 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
#line 1424 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta2 = MMC_CAR(tmpMeta1);
#line 1424 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta3 = MMC_CDR(tmpMeta1);
#line 1424 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outLast = tmpMeta2;
#line 1424 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outRest = tmpMeta3;
#line 17094 OMC_FILE

#line 1425 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outRest = listReverseInPlace(_outRest);
#line 17098 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outRest) { *out_outRest = _outRest; }
  return _outLast;
}

DLLExport
modelica_metatype omc_List_splitFirstOption(threadData_t *threadData, modelica_metatype _inList, modelica_metatype *out_outRest)
{
  modelica_metatype _outFirst = NULL;
  modelica_metatype _outRest = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outFirst has no default value.
  // _outRest has no default value.
#line 1405 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"

#line 1405 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"

#line 17118 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inList;
    {
      modelica_metatype _el = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _el has no default value.
      // _rest has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _el = tmpMeta6;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
#line 1410 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta[0+0] = mmc_mk_some(_el);
#line 1410 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta[0+1] = _rest;
#line 17145 OMC_FILE
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;

          /* Pattern matching succeeded */
#line 1411 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
#line 1411 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta[0+0] = mmc_mk_none();
#line 1411 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta[0+1] = tmpMeta8;
#line 17158 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outFirst = tmpMeta[0+0];
  _outRest = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outRest) { *out_outRest = _outRest; }
  return _outFirst;
}

DLLExport
modelica_metatype omc_List_splitFirst(threadData_t *threadData, modelica_metatype _inList, modelica_metatype *out_outRest)
{
  modelica_metatype _outFirst = NULL;
  modelica_metatype _outRest = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outFirst has no default value.
  // _outRest has no default value.
#line 1395 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 1395 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta1 = _inList;
#line 1395 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
#line 1395 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta2 = MMC_CAR(tmpMeta1);
#line 1395 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta3 = MMC_CDR(tmpMeta1);
#line 1395 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outFirst = tmpMeta2;
#line 1395 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outRest = tmpMeta3;
#line 17205 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outRest) { *out_outRest = _outRest; }
  return _outFirst;
}

DLLExport
modelica_metatype omc_List_splitOnFirstMatch(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype *out_outList2)
{
  modelica_metatype _outList1 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outList2 = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList1 = tmpMeta1;
  _outList2 = _inList;
  // _e has no default value.
#line 1375 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 1375 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1375 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!(!listEmpty(_outList2))) break;
#line 1376 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching assignment */
#line 1376 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = _outList2;
#line 1376 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
#line 1376 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_CAR(tmpMeta2);
#line 1376 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta4 = MMC_CDR(tmpMeta2);
#line 1376 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e = tmpMeta3;
#line 1376 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outList2 = tmpMeta4;
#line 17249 OMC_FILE

#line 1378 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e)))
#line 1378 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1379 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = mmc_mk_cons(_e, _outList2);
#line 1379 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList2 = tmpMeta5;
#line 17259 OMC_FILE

#line 1380 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      break;
#line 17263 OMC_FILE
    }

#line 1383 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta6 = mmc_mk_cons(_e, _outList1);
#line 1383 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outList1 = tmpMeta6;
#line 17270 OMC_FILE
  }

#line 1385 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList1 = listReverseInPlace(_outList1);
#line 17275 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outList2) { *out_outList2 = _outList2; }
  return _outList1;
}

DLLExport
modelica_metatype omc_List_split2OnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype *out_outFalseList)
{
  modelica_metatype _outTrueList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outFalseList = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outTrueList = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outFalseList = tmpMeta2;
#line 1347 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1347 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 1347 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
#line 1347 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1347 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta3);
#line 1348 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2)))
#line 1348 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 1349 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta4 = mmc_mk_cons(_e, _outTrueList);
#line 1349 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outTrueList = tmpMeta4;
#line 17316 OMC_FILE
      }
      else
      {
#line 1351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta5 = mmc_mk_cons(_e, _outFalseList);
#line 1351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outFalseList = tmpMeta5;
#line 17324 OMC_FILE
      }
    }
  }

#line 1355 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outTrueList = listReverseInPlace(_outTrueList);
#line 17331 OMC_FILE

#line 1356 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outFalseList = listReverseInPlace(_outFalseList);
#line 17335 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outFalseList) { *out_outFalseList = _outFalseList; }
  return _outTrueList;
}

DLLExport
modelica_metatype omc_List_split1OnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype *out_outFalseList)
{
  modelica_metatype _outTrueList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outFalseList = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outTrueList = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outFalseList = tmpMeta2;
#line 1319 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1319 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 1319 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
#line 1319 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1319 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta3);
#line 1320 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1)))
#line 1320 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 1321 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta4 = mmc_mk_cons(_e, _outTrueList);
#line 1321 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outTrueList = tmpMeta4;
#line 17376 OMC_FILE
      }
      else
      {
#line 1323 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta5 = mmc_mk_cons(_e, _outFalseList);
#line 1323 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outFalseList = tmpMeta5;
#line 17384 OMC_FILE
      }
    }
  }

#line 1327 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outTrueList = listReverseInPlace(_outTrueList);
#line 17391 OMC_FILE

#line 1328 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outFalseList = listReverseInPlace(_outFalseList);
#line 17395 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outFalseList) { *out_outFalseList = _outFalseList; }
  return _outTrueList;
}

DLLExport
modelica_metatype omc_List_splitOnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype *out_outFalseList)
{
  modelica_metatype _outTrueList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outFalseList = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outTrueList = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outFalseList = tmpMeta2;
#line 1293 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1293 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 1293 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
#line 1293 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1293 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta3);
#line 1294 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e)))
#line 1294 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 1295 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta4 = mmc_mk_cons(_e, _outTrueList);
#line 1295 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outTrueList = tmpMeta4;
#line 17436 OMC_FILE
      }
      else
      {
#line 1297 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta5 = mmc_mk_cons(_e, _outFalseList);
#line 1297 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outFalseList = tmpMeta5;
#line 17444 OMC_FILE
      }
    }
  }

#line 1301 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outTrueList = listReverseInPlace(_outTrueList);
#line 17451 OMC_FILE

#line 1302 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outFalseList = listReverseInPlace(_outFalseList);
#line 17455 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outFalseList) { *out_outFalseList = _outFalseList; }
  return _outTrueList;
}

DLLExport
modelica_metatype omc_List_splitr(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inPosition, modelica_metatype *out_outList2)
{
  modelica_metatype _outList1 = NULL;
  modelica_metatype _outList2 = NULL;
  modelica_integer _pos;
  modelica_metatype _l1 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _l2 = NULL;
  modelica_metatype _e = NULL;
  modelica_boolean tmp2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList1 has no default value.
  // _outList2 has no default value.
  // _pos has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _l1 = tmpMeta1;
  _l2 = _inList;
  // _e has no default value.
#line 1268 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 1268 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp2 = (_inPosition >= ((modelica_integer) 0));
#line 1268 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (1 /* true */ != tmp2) MMC_THROW_INTERNAL();
#line 17494 OMC_FILE

#line 1269 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _pos = _inPosition;
#line 17498 OMC_FILE

#line 1272 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = _pos;
#line 1272 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
#line 1272 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1272 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer _i;
#line 1272 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp7, tmp9); _i += tmp8)
#line 1272 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1273 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 1273 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = _l2;
#line 1273 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
#line 1273 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = MMC_CAR(tmpMeta3);
#line 1273 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = MMC_CDR(tmpMeta3);
#line 1273 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = tmpMeta4;
#line 1273 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _l2 = tmpMeta5;
#line 17526 OMC_FILE

#line 1274 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta6 = mmc_mk_cons(_e, _l1);
#line 1274 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _l1 = tmpMeta6;
#line 17532 OMC_FILE
    }
  }

#line 1277 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList1 = _l1;
#line 17538 OMC_FILE

#line 1278 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList2 = _l2;
#line 17542 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outList2) { *out_outList2 = _outList2; }
  return _outList1;
}
modelica_metatype boxptr_List_splitr(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inPosition, modelica_metatype *out_outList2)
{
  modelica_integer tmp1;
  modelica_metatype _outList1 = NULL;
  tmp1 = mmc_unbox_integer(_inPosition);
  _outList1 = omc_List_splitr(threadData, _inList, tmp1, out_outList2);
  /* skip box _outList1; list<polymorphic<T>> */
  /* skip box _outList2; list<polymorphic<T>> */
  return _outList1;
}

DLLExport
modelica_metatype omc_List_split(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inPosition, modelica_metatype *out_outList2)
{
  modelica_metatype _outList1 = NULL;
  modelica_metatype _outList2 = NULL;
  modelica_integer _pos;
  modelica_metatype _l1 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _l2 = NULL;
  modelica_metatype _e = NULL;
  modelica_boolean tmp2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList1 has no default value.
  // _outList2 has no default value.
  // _pos has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _l1 = tmpMeta1;
  _l2 = _inList;
  // _e has no default value.
#line 1243 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 1243 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp2 = (_inPosition >= ((modelica_integer) 0));
#line 1243 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (1 /* true */ != tmp2) MMC_THROW_INTERNAL();
#line 17591 OMC_FILE

#line 1244 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _pos = _inPosition;
#line 17595 OMC_FILE

#line 1247 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = _pos;
#line 1247 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
#line 1247 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1247 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer _i;
#line 1247 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp7, tmp9); _i += tmp8)
#line 1247 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1248 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 1248 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = _l2;
#line 1248 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
#line 1248 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = MMC_CAR(tmpMeta3);
#line 1248 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = MMC_CDR(tmpMeta3);
#line 1248 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = tmpMeta4;
#line 1248 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _l2 = tmpMeta5;
#line 17623 OMC_FILE

#line 1249 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta6 = mmc_mk_cons(_e, _l1);
#line 1249 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _l1 = tmpMeta6;
#line 17629 OMC_FILE
    }
  }

#line 1252 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList1 = listReverseInPlace(_l1);
#line 17635 OMC_FILE

#line 1253 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList2 = _l2;
#line 17639 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outList2) { *out_outList2 = _outList2; }
  return _outList1;
}
modelica_metatype boxptr_List_split(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inPosition, modelica_metatype *out_outList2)
{
  modelica_integer tmp1;
  modelica_metatype _outList1 = NULL;
  tmp1 = mmc_unbox_integer(_inPosition);
  _outList1 = omc_List_split(threadData, _inList, tmp1, out_outList2);
  /* skip box _outList1; list<polymorphic<T>> */
  /* skip box _outList2; list<polymorphic<T>> */
  return _outList1;
}

DLLExport
modelica_metatype omc_List_reverseList(threadData_t *threadData, modelica_metatype _inList)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar115;
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta2;
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar114;
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp3;
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e_loopVar = 0;
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e_loopVar = _inList;
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar115 = tmpMeta2; /* defaultValue */
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp3 = 1;
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (!listEmpty(_e_loopVar)) {
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e = MMC_CAR(_e_loopVar);
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _e_loopVar = MMC_CDR(_e_loopVar);
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp3--;
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp3 == 0) {
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar114 = listReverse(_e);
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar115 = mmc_mk_cons(__omcQ_24tmpVar114,__omcQ_24tmpVar115);
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp3 == 1) {
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar115;
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 1228 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 17721 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_uniqueOnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inCompFunc)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
#line 1212 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1212 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 1212 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 1212 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1212 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 1213 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if((!omc_List_isMemberOnTrue(threadData, _e, _outList, ((modelica_fnptr) _inCompFunc))))
#line 1213 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 1214 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta3 = mmc_mk_cons(_e, _outList);
#line 1214 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outList = tmpMeta3;
#line 17756 OMC_FILE
      }
    }
  }

#line 1217 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 17763 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_uniqueIntNArr1(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inLength, modelica_integer _inMark, modelica_metatype _inMarkArray, modelica_metatype _inAccum)
{
  modelica_metatype _outAccum = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outAccum = _inAccum;
#line 1186 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1186 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _i;
#line 1186 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 1186 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1186 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _i = MMC_CAR(tmpMeta1);
#line 1187 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if((mmc_unbox_integer(_i) >= _inLength))
#line 1187 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 1188 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 17793 OMC_FILE
      }

#line 1191 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if((mmc_unbox_integer(arrayGet(_inMarkArray, mmc_unbox_integer(_i))) != _inMark))
#line 1191 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 1192 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta2 = mmc_mk_cons(_i, _outAccum);
#line 1192 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outAccum = tmpMeta2;
#line 17804 OMC_FILE

#line 1193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        arrayUpdate(_inMarkArray, mmc_unbox_integer(_i), mmc_mk_integer(_inMark));
#line 17808 OMC_FILE
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outAccum;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_List_uniqueIntNArr1(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inLength, modelica_metatype _inMark, modelica_metatype _inMarkArray, modelica_metatype _inAccum)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outAccum = NULL;
  tmp1 = mmc_unbox_integer(_inLength);
  tmp2 = mmc_unbox_integer(_inMark);
  _outAccum = omc_List_uniqueIntNArr1(threadData, _inList, tmp1, tmp2, _inMarkArray, _inAccum);
  /* skip box _outAccum; list<#Integer> */
  return _outAccum;
}

DLLExport
modelica_metatype omc_List_uniqueIntNArr(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inMarkArray, modelica_metatype _inAccum)
{
  modelica_metatype _outAccum = NULL;
  modelica_integer _len;
  modelica_integer _mark;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outAccum has no default value.
  // _len has no default value.
  // _mark has no default value.
#line 1167 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(listEmpty(_inList))
#line 1167 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1168 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outAccum = _inAccum;
#line 17844 OMC_FILE
  }
  else
  {
#line 1170 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _len = arrayLength(_inMarkArray);
#line 17850 OMC_FILE

#line 1171 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _mark = mmc_unbox_integer(arrayGet(_inMarkArray,_len) /* DAE.ASUB */);
#line 17854 OMC_FILE

#line 1172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    arrayUpdate(_inMarkArray, _len, mmc_mk_integer(((modelica_integer) 1) + _mark));
#line 17858 OMC_FILE

#line 1173 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outAccum = omc_List_uniqueIntNArr1(threadData, _inList, _len, ((modelica_integer) 1) + _mark, _inMarkArray, _inAccum);
#line 17862 OMC_FILE
  }
  _return: OMC_LABEL_UNUSED
  return _outAccum;
}

DLLExport
modelica_metatype omc_List_uniqueIntN(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inN)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _arr = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  // _arr has no default value.
#line 1142 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _arr = arrayCreate(_inN, mmc_mk_boolean(1 /* true */));
#line 17884 OMC_FILE

#line 1144 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1144 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _i;
#line 1144 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 1144 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1144 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _i = MMC_CAR(tmpMeta2);
#line 1145 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(mmc_unbox_boolean(arrayGet(_arr, mmc_unbox_integer(_i))))
#line 1145 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 1146 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta3 = mmc_mk_cons(_i, _outList);
#line 1146 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outList = tmpMeta3;
#line 17904 OMC_FILE
      }

#line 1149 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      arrayUpdate(_arr, mmc_unbox_integer(_i), mmc_mk_boolean(0 /* false */));
#line 17909 OMC_FILE
    }
  }

#line 1151 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  omc_GCExt_free(threadData, _arr);
#line 17915 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}
modelica_metatype boxptr_List_uniqueIntN(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inN)
{
  modelica_integer tmp1;
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_inN);
  _outList = omc_List_uniqueIntN(threadData, _inList, tmp1);
  /* skip box _outList; list<#Integer> */
  return _outList;
}

DLLExport
modelica_metatype omc_List_unique(threadData_t *threadData, modelica_metatype _inList)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
#line 1125 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1125 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 1125 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 1125 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1125 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 1126 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if((!listMember(_e, _outList)))
#line 1126 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 1127 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta3 = mmc_mk_cons(_e, _outList);
#line 1127 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outList = tmpMeta3;
#line 17960 OMC_FILE
      }
    }
  }

#line 1130 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 17967 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_countingSort(threadData_t *threadData, modelica_metatype _inList, modelica_integer _N)
{
  modelica_metatype _outSorted = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _a1 = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outSorted = tmpMeta1;
  // _a1 has no default value.
#line 1101 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if((listLength(_inList) < ((modelica_integer) 2)))
#line 1101 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1102 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outSorted = _inList;
#line 17998 OMC_FILE

#line 1103 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    goto _return;
#line 18002 OMC_FILE
  }

#line 1106 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _a1 = arrayCreate(_N, mmc_mk_integer(((modelica_integer) 0)));
#line 18007 OMC_FILE

#line 1107 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1107 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _v;
#line 1107 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 1107 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1107 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _v = MMC_CAR(tmpMeta2);
#line 1108 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      arrayUpdate(_a1,mmc_unbox_integer(_v),mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer(arrayGet(_a1,mmc_unbox_integer(_v)) /* DAE.ASUB */)));
#line 18021 OMC_FILE
    }
  }

#line 1111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp8 = _N; tmp9 = ((modelica_integer) -1); tmp10 = ((modelica_integer) 1);
#line 1111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(!(((tmp9 > 0) && (tmp8 > tmp10)) || ((tmp9 < 0) && (tmp8 < tmp10))))
#line 1111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer _v;
#line 1111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for(_v = _N; in_range_integer(_v, tmp8, tmp10); _v += tmp9)
#line 1111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1112 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp5 = ((modelica_integer) 1); tmp6 = 1; tmp7 = mmc_unbox_integer(arrayGet(_a1,_v) /* DAE.ASUB */);
#line 1112 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
#line 1112 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 1112 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        modelica_integer _c;
#line 1112 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        for(_c = ((modelica_integer) 1); in_range_integer(_c, tmp5, tmp7); _c += tmp6)
#line 1112 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 1113 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta4 = mmc_mk_cons(mmc_mk_integer(_v), _outSorted);
#line 1113 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _outSorted = tmpMeta4;
#line 18053 OMC_FILE
        }
      }
    }
  }

#line 1116 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  omc_GCExt_free(threadData, _a1);
#line 18061 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outSorted;
}
modelica_metatype boxptr_List_countingSort(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _N)
{
  modelica_integer tmp1;
  modelica_metatype _outSorted = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_N);
  _outSorted = omc_List_countingSort(threadData, _inList, tmp1);
  /* skip box _outSorted; list<#Integer> */
  return _outSorted;
}

DLLExport
modelica_metatype omc_List_mergeSorted(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inCompFunc)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _l1 = NULL;
  modelica_metatype _l2 = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  // _l1 has no default value.
  // _l2 has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
#line 1068 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _l1 = _inList1;
#line 18109 OMC_FILE

#line 1069 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _l2 = _inList2;
#line 18113 OMC_FILE

#line 1072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 1072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 1072 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!((!listEmpty(_l1)) && (!listEmpty(_l2)))) break;
#line 1073 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching assignment */
#line 1073 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = _l1;
#line 1073 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
#line 1073 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_CAR(tmpMeta2);
#line 1073 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta4 = MMC_CDR(tmpMeta2);
#line 1073 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e1 = tmpMeta3;
#line 18133 OMC_FILE

#line 1074 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching assignment */
#line 1074 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta5 = _l2;
#line 1074 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
#line 1074 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta6 = MMC_CAR(tmpMeta5);
#line 1074 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta7 = MMC_CDR(tmpMeta5);
#line 1074 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e2 = tmpMeta6;
#line 18147 OMC_FILE

#line 1077 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _e1, _e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _e1, _e2)))
#line 1077 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1078 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta8 = mmc_mk_cons(_e1, _outList);
#line 1078 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta8;
#line 18157 OMC_FILE

#line 1079 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 1079 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta9 = _l1;
#line 1079 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
#line 1079 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta10 = MMC_CAR(tmpMeta9);
#line 1079 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta11 = MMC_CDR(tmpMeta9);
#line 1079 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _l1 = tmpMeta11;
#line 18171 OMC_FILE
    }
    else
    {
#line 1081 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta12 = mmc_mk_cons(_e2, _outList);
#line 1081 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta12;
#line 18179 OMC_FILE

#line 1082 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 1082 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta13 = _l2;
#line 1082 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta13)) MMC_THROW_INTERNAL();
#line 1082 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta14 = MMC_CAR(tmpMeta13);
#line 1082 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta15 = MMC_CDR(tmpMeta13);
#line 1082 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _l2 = tmpMeta15;
#line 18193 OMC_FILE
    }
  }

#line 1087 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _l1 = (listEmpty(_l1)?_l2:_l1);
#line 18199 OMC_FILE

#line 1088 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = omc_List_append__reverse(threadData, _outList, _l1);
#line 18203 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_merge(threadData_t *threadData, modelica_metatype _inLeft, modelica_metatype _inRight, modelica_fnptr _inCompFunc, modelica_metatype _acc)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 18215 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inLeft;
    tmp4_2 = _inRight;
    {
      modelica_metatype _l = NULL;
      modelica_metatype _r = NULL;
      modelica_metatype _el = NULL;
      modelica_metatype _l_rest = NULL;
      modelica_metatype _r_rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _l has no default value.
      // _r has no default value.
      // _el has no default value.
      // _l_rest has no default value.
      // _r_rest has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          _l = tmpMeta6;
          _l_rest = tmpMeta7;
          _r = tmpMeta8;
          _r_rest = tmpMeta9;
          /* Pattern matching succeeded */
#line 1032 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _r, _l) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _r, _l)))
#line 1032 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          {
#line 1033 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            _r_rest = _inRight;
#line 18259 OMC_FILE

#line 1034 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            _el = _l;
#line 18263 OMC_FILE
          }
          else
          {
#line 1036 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            _l_rest = _inLeft;
#line 18269 OMC_FILE

#line 1037 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            _el = _r;
#line 18273 OMC_FILE
          }
#line 1039 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta10 = mmc_mk_cons(_el, _acc);
#line 1039 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* Tail recursive call */
#line 1039 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inLeft = _l_rest;
#line 1039 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inRight = _r_rest;
#line 1039 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _acc = tmpMeta10;
#line 1039 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          goto _tailrecursive;
#line 1039 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* TODO: Make sure any eventual dead code below is never generated */
#line 18289 OMC_FILE
          goto tmp3_done;
        }
        case 1: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
#line 1042 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = listReverseInPlace(_acc);
#line 18298 OMC_FILE
          goto tmp3_done;
        }
        case 2: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;

          /* Pattern matching succeeded */
#line 1043 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = omc_List_append__reverse(threadData, _acc, _inRight);
#line 18307 OMC_FILE
          goto tmp3_done;
        }
        case 3: {
          if (!listEmpty(tmp4_2)) goto tmp3_end;

          /* Pattern matching succeeded */
#line 1044 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = omc_List_append__reverse(threadData, _acc, _inLeft);
#line 18316 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_sortedUniqueOnlyDuplicates(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inCompFunc)
{
  modelica_metatype _outDuplicateElements = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _e = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outDuplicateElements = tmpMeta1;
  // _e has no default value.
  _rest = _inList;
#line 998 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 998 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 998 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!(!listEmpty(_rest))) break;
#line 999 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching assignment */
#line 999 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = _rest;
#line 999 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
#line 999 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_CAR(tmpMeta2);
#line 999 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta4 = MMC_CDR(tmpMeta2);
#line 999 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e = tmpMeta3;
#line 999 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _rest = tmpMeta4;
#line 18372 OMC_FILE

#line 1001 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(((!listEmpty(_rest)) && mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _e, listHead(_rest)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _e, listHead(_rest)))))
#line 1001 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 1002 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = mmc_mk_cons(_e, _outDuplicateElements);
#line 1002 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outDuplicateElements = tmpMeta5;
#line 18382 OMC_FILE
    }
  }

#line 1006 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outDuplicateElements = listReverseInPlace(_outDuplicateElements);
#line 18388 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outDuplicateElements;
}

DLLExport
modelica_metatype omc_List_sortedUniqueAndDuplicates(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inCompFunc, modelica_metatype *out_outDuplicateElements)
{
  modelica_metatype _outUniqueElements = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outDuplicateElements = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _e = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outUniqueElements = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outDuplicateElements = tmpMeta2;
  // _e has no default value.
  _rest = _inList;
#line 968 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 968 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 968 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!(!listEmpty(_rest))) break;
#line 969 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching assignment */
#line 969 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = _rest;
#line 969 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
#line 969 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta4 = MMC_CAR(tmpMeta3);
#line 969 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta5 = MMC_CDR(tmpMeta3);
#line 969 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e = tmpMeta4;
#line 969 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _rest = tmpMeta5;
#line 18435 OMC_FILE

#line 971 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(((!listEmpty(_rest)) && mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _e, listHead(_rest)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _e, listHead(_rest)))))
#line 971 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 972 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta6 = mmc_mk_cons(_e, _outDuplicateElements);
#line 972 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outDuplicateElements = tmpMeta6;
#line 18445 OMC_FILE
    }
    else
    {
#line 974 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta7 = mmc_mk_cons(_e, _outUniqueElements);
#line 974 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outUniqueElements = tmpMeta7;
#line 18453 OMC_FILE
    }
  }

#line 978 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outUniqueElements = listReverseInPlace(_outUniqueElements);
#line 18459 OMC_FILE

#line 979 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outDuplicateElements = listReverseInPlace(_outDuplicateElements);
#line 18463 OMC_FILE
  _return: OMC_LABEL_UNUSED
  if (out_outDuplicateElements) { *out_outDuplicateElements = _outDuplicateElements; }
  return _outUniqueElements;
}

DLLExport
modelica_metatype omc_List_sortedUnique(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inCompFunc)
{
  modelica_metatype _outUniqueElements = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _e = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outUniqueElements = tmpMeta1;
  // _e has no default value.
  _rest = _inList;
#line 940 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 940 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 940 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!(!listEmpty(_rest))) break;
#line 941 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching assignment */
#line 941 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = _rest;
#line 941 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
#line 941 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_CAR(tmpMeta2);
#line 941 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta4 = MMC_CDR(tmpMeta2);
#line 941 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e = tmpMeta3;
#line 941 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _rest = tmpMeta4;
#line 18506 OMC_FILE

#line 943 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if((listEmpty(_rest) || (!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _e, listHead(_rest)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _e, listHead(_rest))))))
#line 943 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 944 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = mmc_mk_cons(_e, _outUniqueElements);
#line 944 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outUniqueElements = tmpMeta5;
#line 18516 OMC_FILE
    }
  }

#line 948 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outUniqueElements = listReverseInPlace(_outUniqueElements);
#line 18522 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outUniqueElements;
}

DLLExport
modelica_boolean omc_List_sortedListAllUnique(threadData_t *threadData, modelica_metatype _lst, modelica_fnptr _compareFn)
{
  modelica_boolean _allUnique;
  modelica_metatype _e = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _allUnique = 0 /* false */;
  // _e has no default value.
  _rest = _lst;
#line 908 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 908 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 908 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!(!listEmpty(_rest))) break;
#line 18545 OMC_FILE
    { /* match expression */
      modelica_metatype tmp4_1;
      tmp4_1 = _rest;
      {
        modelica_metatype _e1 = NULL;
        modelica_metatype _e2 = NULL;
        volatile mmc_switch_type tmp4;
        int tmp5;
        // _e1 has no default value.
        // _e2 has no default value.
        tmp4 = 0;
        for (; tmp4 < 2; tmp4++) {
          switch (MMC_SWITCH_CAST(tmp4)) {
          case 0: {
            modelica_metatype tmpMeta6;
            modelica_metatype tmpMeta7;
            modelica_metatype tmpMeta8;
            if (listEmpty(tmp4_1)) goto tmp3_end;
            tmpMeta6 = MMC_CAR(tmp4_1);
            tmpMeta7 = MMC_CDR(tmp4_1);
            if (!listEmpty(tmpMeta7)) goto tmp3_end;
            /* Pattern matching succeeded */
#line 912 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
#line 912 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            tmpMeta1 = tmpMeta8;
#line 18572 OMC_FILE
            goto tmp3_done;
          }
          case 1: {
            modelica_metatype tmpMeta9;
            modelica_metatype tmpMeta10;
            modelica_metatype tmpMeta11;
            modelica_metatype tmpMeta12;
            if (listEmpty(tmp4_1)) goto tmp3_end;
            tmpMeta9 = MMC_CAR(tmp4_1);
            tmpMeta10 = MMC_CDR(tmp4_1);
            if (listEmpty(tmpMeta10)) goto tmp3_end;
            tmpMeta11 = MMC_CAR(tmpMeta10);
            tmpMeta12 = MMC_CDR(tmpMeta10);
            _e1 = tmpMeta9;
            _rest = tmpMeta10;
            _e2 = tmpMeta11;
            /* Pattern matching succeeded */
#line 915 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_compareFn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_compareFn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_compareFn), 2))), _e1, _e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_compareFn), 1)))) (threadData, _e1, _e2)))
#line 915 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            {
#line 916 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
              goto _return;
#line 18596 OMC_FILE
            }
#line 918 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            tmpMeta1 = _rest;
#line 18600 OMC_FILE
            goto tmp3_done;
          }
          }
          goto tmp3_end;
          tmp3_end: ;
        }
        goto goto_2;
        goto_2:;
        MMC_THROW_INTERNAL();
        goto tmp3_done;
        tmp3_done:;
      }
    }
    _rest = tmpMeta1;
  }

#line 921 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _allUnique = 1 /* true */;
#line 18619 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _allUnique;
}
modelica_metatype boxptr_List_sortedListAllUnique(threadData_t *threadData, modelica_metatype _lst, modelica_fnptr _compareFn)
{
  modelica_boolean _allUnique;
  modelica_metatype out_allUnique;
  _allUnique = omc_List_sortedListAllUnique(threadData, _lst, _compareFn);
  out_allUnique = mmc_mk_icon(_allUnique);
  return out_allUnique;
}

DLLExport
modelica_metatype omc_List_sortedDuplicates(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inCompFunc)
{
  modelica_metatype _outDuplicates = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _e = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outDuplicates = tmpMeta1;
  // _e has no default value.
  _rest = _inList;
#line 882 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 882 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 882 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!(!listEmpty(_rest))) break;
#line 883 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching assignment */
#line 883 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = _rest;
#line 883 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
#line 883 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_CAR(tmpMeta2);
#line 883 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta4 = MMC_CDR(tmpMeta2);
#line 883 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e = tmpMeta3;
#line 883 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _rest = tmpMeta4;
#line 18669 OMC_FILE

#line 885 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(((!listEmpty(_rest)) && mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _e, listHead(_rest)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _e, listHead(_rest)))))
#line 885 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 886 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = mmc_mk_cons(_e, _outDuplicates);
#line 886 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outDuplicates = tmpMeta5;
#line 18679 OMC_FILE
    }
  }

#line 890 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outDuplicates = listReverseInPlace(_outDuplicates);
#line 18685 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outDuplicates;
}

DLLExport
modelica_metatype omc_List_sort(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inCompFunc)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _rest = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _left = NULL;
  modelica_metatype _right = NULL;
  modelica_integer _middle;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_boolean tmp9;
  modelica_metatype tmpMeta10;
  modelica_integer tmp11;
  modelica_metatype tmpMeta12;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  _rest = _inList;
  // _e1 has no default value.
  // _e2 has no default value.
  // _left has no default value.
  // _right has no default value.
  // _middle has no default value.
#line 847 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if((!listEmpty(_rest)))
#line 847 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 848 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching assignment */
#line 848 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = _rest;
#line 848 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
#line 848 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_CAR(tmpMeta2);
#line 848 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta4 = MMC_CDR(tmpMeta2);
#line 848 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _e1 = tmpMeta3;
#line 848 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _rest = tmpMeta4;
#line 18740 OMC_FILE

#line 849 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(listEmpty(_rest))
#line 849 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 850 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = _inList;
#line 18748 OMC_FILE
    }
    else
    {
#line 852 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 852 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = _rest;
#line 852 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
#line 852 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta6 = MMC_CAR(tmpMeta5);
#line 852 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta7 = MMC_CDR(tmpMeta5);
#line 852 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e2 = tmpMeta6;
#line 852 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _rest = tmpMeta7;
#line 18766 OMC_FILE

#line 853 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(listEmpty(_rest))
#line 853 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 854 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp9 = (modelica_boolean)mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _e2, _e1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _e2, _e1));
#line 854 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if(tmp9)
#line 854 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 854 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta10 = _inList;
#line 854 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        }
#line 854 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        else
#line 854 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        {
#line 854 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta8 = mmc_mk_cons(_e2, mmc_mk_cons(_e1, MMC_REFSTRUCTLIT(mmc_nil)));
#line 854 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta10 = tmpMeta8;
#line 854 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        }
#line 854 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outList = tmpMeta10;
#line 18794 OMC_FILE
      }
      else
      {
#line 856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp11 = ((modelica_integer) 2);
#line 856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        if (tmp11 == 0) {MMC_THROW_INTERNAL();}
#line 856 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _middle = modelica_div_integer(listLength(_inList),tmp11).quot;
#line 18804 OMC_FILE

#line 857 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _left = omc_List_split(threadData, _inList, _middle ,&_right);
#line 18808 OMC_FILE

#line 858 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _left = omc_List_sort(threadData, _left, ((modelica_fnptr) _inCompFunc));
#line 18812 OMC_FILE

#line 859 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _right = omc_List_sort(threadData, _right, ((modelica_fnptr) _inCompFunc));
#line 18816 OMC_FILE

#line 860 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
#line 860 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _outList = omc_List_merge(threadData, _left, _right, ((modelica_fnptr) _inCompFunc), tmpMeta12);
#line 18822 OMC_FILE
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_heapSortIntList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Flst)
{
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lst = __omcQ_24in_5Flst;
#line 18838 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _lst;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
#line 821 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = _lst;
#line 18853 OMC_FILE
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          /* Pattern matching succeeded */
#line 822 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = _lst;
#line 18866 OMC_FILE
          goto tmp3_done;
        }
        case 2: {

          /* Pattern matching succeeded */
#line 823 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = arrayList(omc_Array_heapSort(threadData, listArray(_lst)));
#line 18874 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _lst;
}

DLLExport
modelica_metatype omc_List_stripN(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inN)
{
  modelica_metatype _outList = NULL;
  modelica_boolean tmp1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outList = _inList;
#line 810 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 810 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp1 = (_inN >= ((modelica_integer) 0));
#line 810 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (1 /* true */ != tmp1) MMC_THROW_INTERNAL();
#line 18913 OMC_FILE

#line 812 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp5 = ((modelica_integer) 1); tmp6 = 1; tmp7 = _inN;
#line 812 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
#line 812 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 812 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer _i;
#line 812 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp5, tmp7); _i += tmp6)
#line 812 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 813 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 813 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta2 = _outList;
#line 813 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
#line 813 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = MMC_CAR(tmpMeta2);
#line 813 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = MMC_CDR(tmpMeta2);
#line 813 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta4;
#line 18939 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outList;
}
modelica_metatype boxptr_List_stripN(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inN)
{
  modelica_integer tmp1;
  modelica_metatype _outList = NULL;
  tmp1 = mmc_unbox_integer(_inN);
  _outList = omc_List_stripN(threadData, _inList, tmp1);
  /* skip box _outList; list<polymorphic<T>> */
  return _outList;
}

DLLExport
modelica_metatype omc_List_stripLast(threadData_t *threadData, modelica_metatype _inList)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 795 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(listEmpty(_inList))
#line 795 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 796 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
#line 796 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outList = tmpMeta1;
#line 18974 OMC_FILE
  }
  else
  {
#line 798 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching assignment */
#line 798 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = listReverse(_inList);
#line 798 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
#line 798 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_CAR(tmpMeta2);
#line 798 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta4 = MMC_CDR(tmpMeta2);
#line 798 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outList = tmpMeta4;
#line 18990 OMC_FILE

#line 799 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outList = listReverseInPlace(_outList);
#line 18994 OMC_FILE
  }
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_stripFirst(threadData_t *threadData, modelica_metatype _inList)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 782 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(listEmpty(_inList))
#line 782 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 783 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
#line 783 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outList = tmpMeta1;
#line 19019 OMC_FILE
  }
  else
  {
#line 785 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching assignment */
#line 785 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = _inList;
#line 785 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
#line 785 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_CAR(tmpMeta2);
#line 785 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta4 = MMC_CDR(tmpMeta2);
#line 785 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outList = tmpMeta4;
#line 19035 OMC_FILE
  }
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_firstN__reverse(threadData_t *threadData, modelica_metatype _inList, modelica_integer _N)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _e = NULL;
  modelica_metatype _rest = NULL;
  modelica_boolean tmp2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  // _e has no default value.
  // _rest has no default value.
#line 767 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 767 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp2 = (_N >= ((modelica_integer) 0));
#line 767 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (1 /* true */ != tmp2) MMC_THROW_INTERNAL();
#line 19068 OMC_FILE

#line 768 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _rest = _inList;
#line 19072 OMC_FILE

#line 770 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = _N;
#line 770 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
#line 770 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 770 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer _i;
#line 770 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp7, tmp9); _i += tmp8)
#line 770 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 771 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 771 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = _rest;
#line 771 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
#line 771 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = MMC_CAR(tmpMeta3);
#line 771 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta5 = MMC_CDR(tmpMeta3);
#line 771 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = tmpMeta4;
#line 771 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _rest = tmpMeta5;
#line 19100 OMC_FILE

#line 772 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta6 = mmc_mk_cons(_e, _outList);
#line 772 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta6;
#line 19106 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outList;
}
modelica_metatype boxptr_List_firstN__reverse(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _N)
{
  modelica_integer tmp1;
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_N);
  _outList = omc_List_firstN__reverse(threadData, _inList, tmp1);
  /* skip box _outList; list<polymorphic<T>> */
  return _outList;
}

DLLExport
modelica_metatype omc_List_firstN(threadData_t *threadData, modelica_metatype _inList, modelica_integer _N)
{
  modelica_metatype _outList = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 753 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = omc_List_firstN__reverse(threadData, _inList, _N);
#line 19132 OMC_FILE

#line 754 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(_outList);
#line 19136 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}
modelica_metatype boxptr_List_firstN(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _N)
{
  modelica_integer tmp1;
  modelica_metatype _outList = NULL;
  tmp1 = mmc_unbox_integer(_N);
  _outList = omc_List_firstN(threadData, _inList, tmp1);
  /* skip box _outList; list<polymorphic<T>> */
  return _outList;
}

DLLExport
modelica_metatype omc_List_getAtIndexLst(threadData_t *threadData, modelica_metatype _lst, modelica_metatype _positions, modelica_boolean _zeroBased)
{
  modelica_metatype _olst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _arr = NULL;
  modelica_integer _shift;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _olst = tmpMeta1;
  _arr = listArray(_lst);
  _shift = (_zeroBased?((modelica_integer) 1):((modelica_integer) 0));
#line 741 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 741 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _pos;
#line 741 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = listReverse(_positions); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 741 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 741 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _pos = MMC_CAR(tmpMeta2);
#line 742 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = mmc_mk_cons(arrayGet(_arr,mmc_unbox_integer(_pos) + _shift) /* DAE.ASUB */, _olst);
#line 742 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _olst = tmpMeta3;
#line 19180 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _olst;
}
modelica_metatype boxptr_List_getAtIndexLst(threadData_t *threadData, modelica_metatype _lst, modelica_metatype _positions, modelica_metatype _zeroBased)
{
  modelica_integer tmp1;
  modelica_metatype _olst = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_zeroBased);
  _olst = omc_List_getAtIndexLst(threadData, _lst, _positions, tmp1);
  /* skip box _olst; list<polymorphic<T>> */
  return _olst;
}

DLLExport
modelica_metatype omc_List_getIndexFirst(threadData_t *threadData, modelica_integer _index, modelica_metatype _inList)
{
  modelica_metatype _element = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _element has no default value.
#line 728 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _element = listGet(_inList, _index);
#line 19206 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _element;
}
modelica_metatype boxptr_List_getIndexFirst(threadData_t *threadData, modelica_metatype _index, modelica_metatype _inList)
{
  modelica_integer tmp1;
  modelica_metatype _element = NULL;
  tmp1 = mmc_unbox_integer(_index);
  _element = omc_List_getIndexFirst(threadData, tmp1, _inList);
  /* skip box _element; polymorphic<T> */
  return _element;
}

DLLExport
modelica_metatype omc_List_restOrEmpty(threadData_t *threadData, modelica_metatype _inList)
{
  modelica_metatype _outList = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 720 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = (listEmpty(_inList)?_inList:listRest(_inList));
#line 19229 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_restCond(threadData_t *threadData, modelica_boolean _cond, modelica_metatype _inList)
{
  modelica_metatype _outList = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 711 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = (_cond?listRest(_inList):_inList);
#line 19243 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}
modelica_metatype boxptr_List_restCond(threadData_t *threadData, modelica_metatype _cond, modelica_metatype _inList)
{
  modelica_integer tmp1;
  modelica_metatype _outList = NULL;
  tmp1 = mmc_unbox_integer(_cond);
  _outList = omc_List_restCond(threadData, tmp1, _inList);
  /* skip box _outList; list<polymorphic<T>> */
  return _outList;
}

DLLExport
modelica_metatype omc_List_rest(threadData_t *threadData, modelica_metatype _inList)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 702 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 702 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta1 = _inList;
#line 702 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
#line 702 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta2 = MMC_CAR(tmpMeta1);
#line 702 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta3 = MMC_CDR(tmpMeta1);
#line 702 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta3;
#line 19279 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_lastN(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inN)
{
  modelica_metatype _outList = NULL;
  modelica_integer _len;
  modelica_boolean tmp1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
  // _len has no default value.
#line 692 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 692 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp1 = (_inN >= ((modelica_integer) 0));
#line 692 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (1 /* true */ != tmp1) MMC_THROW_INTERNAL();
#line 19300 OMC_FILE

#line 693 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _len = listLength(_inList);
#line 19304 OMC_FILE

#line 694 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = omc_List_stripN(threadData, _inList, _len - _inN);
#line 19308 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}
modelica_metatype boxptr_List_lastN(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inN)
{
  modelica_integer tmp1;
  modelica_metatype _outList = NULL;
  tmp1 = mmc_unbox_integer(_inN);
  _outList = omc_List_lastN(threadData, _inList, tmp1);
  /* skip box _outList; list<polymorphic<T>> */
  return _outList;
}

DLLExport
modelica_metatype omc_List_secondLast(threadData_t *threadData, modelica_metatype _inList)
{
  modelica_metatype _outSecondLast = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outSecondLast has no default value.
#line 681 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 681 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta1 = listReverse(_inList);
#line 681 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
#line 681 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta2 = MMC_CAR(tmpMeta1);
#line 681 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta3 = MMC_CDR(tmpMeta1);
#line 681 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
#line 681 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta4 = MMC_CAR(tmpMeta3);
#line 681 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta5 = MMC_CDR(tmpMeta3);
#line 681 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outSecondLast = tmpMeta4;
#line 19352 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outSecondLast;
}

DLLExport
modelica_metatype omc_List_lastListOrEmpty(threadData_t *threadData, modelica_metatype _inListList)
{
  modelica_metatype _outLastList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outLastList = tmpMeta1;
#line 670 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 670 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 670 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta2 = _inListList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
#line 670 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 670 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta2);
#line 671 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outLastList = _e;
#line 19380 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outLastList;
}

DLLExport
modelica_metatype omc_List_lastElement(threadData_t *threadData, modelica_metatype _inList, modelica_integer *out_listLength)
{
  modelica_metatype _lst = NULL;
  modelica_integer _listLength;
  modelica_metatype _rest = NULL;
  modelica_boolean tmp1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _lst has no default value.
  _listLength = ((modelica_integer) 0);
  _rest = _inList;
#line 657 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 657 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp1 = listEmpty(_rest);
#line 657 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (0 /* false */ != tmp1) MMC_THROW_INTERNAL();
#line 19408 OMC_FILE

#line 658 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 658 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 658 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!(!listEmpty(_rest))) break;
#line 659 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    /* Pattern-matching assignment */
#line 659 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = _rest;
#line 659 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
#line 659 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_CAR(tmpMeta2);
#line 659 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta4 = MMC_CDR(tmpMeta2);
#line 659 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _lst = tmpMeta2;
#line 659 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _rest = tmpMeta4;
#line 19430 OMC_FILE

#line 660 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _listLength = ((modelica_integer) 1) + _listLength;
#line 19434 OMC_FILE
  }
  _return: OMC_LABEL_UNUSED
  if (out_listLength) { *out_listLength = _listLength; }
  return _lst;
}
modelica_metatype boxptr_List_lastElement(threadData_t *threadData, modelica_metatype _inList, modelica_metatype *out_listLength)
{
  modelica_integer _listLength;
  modelica_metatype _lst = NULL;
  _lst = omc_List_lastElement(threadData, _inList, &_listLength);
  /* skip box _lst; list<polymorphic<T>> */
  if (out_listLength) { *out_listLength = mmc_mk_icon(_listLength); }
  return _lst;
}

DLLExport
modelica_metatype omc_List_last(threadData_t *threadData, modelica_metatype _inList)
{
  modelica_metatype _outLast = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outLast has no default value.
  // _rest has no default value.
#line 643 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 643 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta1 = _inList;
#line 643 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
#line 643 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta2 = MMC_CAR(tmpMeta1);
#line 643 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta3 = MMC_CDR(tmpMeta1);
#line 643 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outLast = tmpMeta2;
#line 643 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _rest = tmpMeta3;
#line 19478 OMC_FILE

#line 644 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 644 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 644 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta4 = _rest; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
#line 644 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 644 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta4);
#line 645 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outLast = _e;
#line 19492 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outLast;
}

DLLExport
modelica_metatype omc_List_second(threadData_t *threadData, modelica_metatype _inList)
{
  modelica_metatype _outSecond = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outSecond has no default value.
#line 633 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outSecond = listGet(_inList, ((modelica_integer) 2));
#line 19508 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outSecond;
}

DLLExport
modelica_metatype omc_List_firstOrEmpty(threadData_t *threadData, modelica_metatype _inList)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 19521 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inList;
    {
      modelica_metatype _e = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _e = tmpMeta6;
          /* Pattern matching succeeded */
#line 623 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta8 = mmc_mk_cons(_e, MMC_REFSTRUCTLIT(mmc_nil));
#line 623 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = tmpMeta8;
#line 19546 OMC_FILE
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;

          /* Pattern matching succeeded */
#line 624 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
#line 624 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = tmpMeta9;
#line 19557 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_first(threadData_t *threadData, modelica_metatype _inList)
{
  modelica_metatype _out = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
#line 19584 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inList;
    {
      modelica_metatype _e = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _e = tmpMeta6;
          /* Pattern matching succeeded */
#line 609 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = _e;
#line 19606 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _out = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out;
}

DLLExport
modelica_metatype omc_List_set(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inN, modelica_metatype _inElement)
{
  modelica_metatype _outList = NULL;
  modelica_metatype _lst1 = NULL;
  modelica_metatype _lst2 = NULL;
  modelica_boolean tmp1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
  // _lst1 has no default value.
  // _lst2 has no default value.
#line 595 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 595 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp1 = (_inN > ((modelica_integer) 0));
#line 595 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (1 /* true */ != tmp1) MMC_THROW_INTERNAL();
#line 19644 OMC_FILE

#line 596 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _lst1 = omc_List_splitr(threadData, _inList, ((modelica_integer) -1) + _inN ,&_lst2);
#line 19648 OMC_FILE

#line 597 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _lst2 = omc_List_stripFirst(threadData, _lst2);
#line 19652 OMC_FILE

#line 598 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta2 = mmc_mk_cons(_inElement, _lst2);
#line 598 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = omc_List_append__reverse(threadData, _lst1, tmpMeta2);
#line 19658 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}
modelica_metatype boxptr_List_set(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inN, modelica_metatype _inElement)
{
  modelica_integer tmp1;
  modelica_metatype _outList = NULL;
  tmp1 = mmc_unbox_integer(_inN);
  _outList = omc_List_set(threadData, _inList, tmp1, _inElement);
  /* skip box _outList; list<polymorphic<T>> */
  return _outList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_insertListSorted1(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inList2, modelica_fnptr _inCompFunc, modelica_metatype _inResultList)
{
  modelica_metatype _outResultList = NULL;
  modelica_metatype _listRest = NULL;
  modelica_metatype _listRest2 = NULL;
  modelica_metatype _tmpResultList = NULL;
  modelica_metatype _listHead = NULL;
  modelica_metatype _listHead2 = NULL;
  modelica_metatype _elem = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outResultList has no default value.
  // _listRest has no default value.
  // _listRest2 has no default value.
  // _tmpResultList has no default value.
  // _listHead has no default value.
  // _listHead2 has no default value.
  // _elem has no default value.
#line 19691 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inList;
    tmp4_2 = _inList2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
#line 567 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = _inResultList;
#line 19708 OMC_FILE
          goto tmp3_done;
        }
        case 1: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;

          /* Pattern matching succeeded */
#line 569 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = omc_List_append__reverse(threadData, _inList2, _inResultList);
#line 19717 OMC_FILE
          goto tmp3_done;
        }
        case 2: {
          if (!listEmpty(tmp4_2)) goto tmp3_end;

          /* Pattern matching succeeded */
#line 571 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = omc_List_append__reverse(threadData, _inList, _inResultList);
#line 19726 OMC_FILE
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          _listHead = tmpMeta6;
          _listRest = tmpMeta7;
          _listHead2 = tmpMeta8;
          _listRest2 = tmpMeta9;
          /* Pattern matching succeeded */
#line 574 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _listHead, _listHead2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _listHead, _listHead2)))
#line 574 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          {
#line 575 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            tmpMeta10 = mmc_mk_cons(_listHead, _inResultList);
#line 575 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            _tmpResultList = tmpMeta10;
#line 19755 OMC_FILE

#line 576 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            _tmpResultList = omc_List_insertListSorted1(threadData, _listRest, _inList2, ((modelica_fnptr) _inCompFunc), _tmpResultList);
#line 19759 OMC_FILE
          }
          else
          {
#line 578 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            tmpMeta11 = mmc_mk_cons(_listHead2, _inResultList);
#line 578 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            _tmpResultList = tmpMeta11;
#line 19767 OMC_FILE

#line 579 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            _tmpResultList = omc_List_insertListSorted1(threadData, _inList, _listRest2, ((modelica_fnptr) _inCompFunc), _tmpResultList);
#line 19771 OMC_FILE
          }
#line 581 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = _tmpResultList;
#line 19775 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outResultList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outResultList;
}

DLLExport
modelica_metatype omc_List_insertListSorted(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inList2, modelica_fnptr _inCompFunc)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 543 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
#line 543 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listReverseInPlace(omc_List_insertListSorted1(threadData, _inList, _inList2, ((modelica_fnptr) _inCompFunc), tmpMeta1));
#line 19806 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_insert(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inN, modelica_metatype _inElement)
{
  modelica_metatype _outList = NULL;
  modelica_metatype _lst1 = NULL;
  modelica_metatype _lst2 = NULL;
  modelica_boolean tmp1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
  // _lst1 has no default value.
  // _lst2 has no default value.
#line 524 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 524 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp1 = (_inN > ((modelica_integer) 0));
#line 524 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (1 /* true */ != tmp1) MMC_THROW_INTERNAL();
#line 19830 OMC_FILE

#line 525 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _lst1 = omc_List_splitr(threadData, _inList, ((modelica_integer) -1) + _inN ,&_lst2);
#line 19834 OMC_FILE

#line 526 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta2 = mmc_mk_cons(_inElement, _lst2);
#line 526 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = omc_List_append__reverse(threadData, _lst1, tmpMeta2);
#line 19840 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}
modelica_metatype boxptr_List_insert(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inN, modelica_metatype _inElement)
{
  modelica_integer tmp1;
  modelica_metatype _outList = NULL;
  tmp1 = mmc_unbox_integer(_inN);
  _outList = omc_List_insert(threadData, _inList, tmp1, _inElement);
  /* skip box _outList; list<polymorphic<T>> */
  return _outList;
}

DLLExport
modelica_metatype omc_List_appendLastList(threadData_t *threadData, modelica_metatype _inListList, modelica_metatype _inList)
{
  modelica_metatype _outListList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outListList has no default value.
#line 19862 OMC_FILE
  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = _inListList;
    {
      modelica_metatype _l = NULL;
      modelica_metatype _ll = NULL;
      modelica_metatype _ol = NULL;
      modelica_metatype tmpMeta3;
      volatile mmc_switch_type tmp5;
      int tmp6;
      // _l has no default value.
      // _ll has no default value.
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      _ol = tmpMeta3;
      tmp5 = 0;
      for (; tmp5 < 3; tmp5++) {
        switch (MMC_SWITCH_CAST(tmp5)) {
        case 0: {
          modelica_metatype tmpMeta7;
          if (!listEmpty(tmp5_1)) goto tmp4_end;
          /* Pattern matching succeeded */
#line 496 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta7 = mmc_mk_cons(_inList, MMC_REFSTRUCTLIT(mmc_nil));
#line 496 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = tmpMeta7;
#line 19888 OMC_FILE
          goto tmp4_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp5_1)) goto tmp4_end;
          tmpMeta8 = MMC_CAR(tmp5_1);
          tmpMeta9 = MMC_CDR(tmp5_1);
          if (!listEmpty(tmpMeta9)) goto tmp4_end;
          _l = tmpMeta8;
          /* Pattern matching succeeded */
#line 499 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta10 = mmc_mk_cons(listAppend(_l, _inList), MMC_REFSTRUCTLIT(mmc_nil));
#line 499 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = tmpMeta10;
#line 19905 OMC_FILE
          goto tmp4_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (listEmpty(tmp5_1)) goto tmp4_end;
          tmpMeta11 = MMC_CAR(tmp5_1);
          tmpMeta12 = MMC_CDR(tmp5_1);
          _l = tmpMeta11;
          _ll = tmpMeta12;
          /* Pattern matching succeeded */
#line 503 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          while(1)
#line 503 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          {
#line 503 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            if(!(!listEmpty(_ll))) break;
#line 504 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            tmpMeta13 = mmc_mk_cons(_l, _ol);
#line 504 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            _ol = tmpMeta13;
#line 19932 OMC_FILE

#line 505 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            /* Pattern-matching assignment */
#line 505 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            tmpMeta14 = _ll;
#line 505 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            if (listEmpty(tmpMeta14)) goto goto_2;
#line 505 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            tmpMeta15 = MMC_CAR(tmpMeta14);
#line 505 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            tmpMeta16 = MMC_CDR(tmpMeta14);
#line 505 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            _l = tmpMeta15;
#line 505 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
            _ll = tmpMeta16;
#line 19948 OMC_FILE
          }

#line 507 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta17 = mmc_mk_cons(listAppend(_l, _inList), _ol);
#line 507 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _ol = tmpMeta17;
#line 19955 OMC_FILE
#line 508 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = listReverseInPlace(_ol);
#line 19958 OMC_FILE
          goto tmp4_done;
        }
        }
        goto tmp4_end;
        tmp4_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp4_done;
      tmp4_done:;
    }
  }
  _outListList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outListList;
}

DLLExport
modelica_metatype omc_List_appendElt(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inList)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 481 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta1 = mmc_mk_cons(_inElement, MMC_REFSTRUCTLIT(mmc_nil));
#line 481 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listAppend(_inList, tmpMeta1);
#line 19989 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_appendr(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2)
{
  modelica_metatype _outList = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 471 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = listAppend(_inList2, _inList1);
#line 20003 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_append__reverser(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outList = _inList1;
#line 460 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 460 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 460 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList2; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 460 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 460 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta2 = mmc_mk_cons(_e, _outList);
#line 461 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta2;
#line 20032 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_append__reverse(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outList = _inList2;
#line 446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e;
#line 446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _inList1; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 446 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e = MMC_CAR(tmpMeta1);
#line 447 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta2 = mmc_mk_cons(_e, _outList);
#line 447 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outList = tmpMeta2;
#line 20063 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_consN(threadData_t *threadData, modelica_integer _size, modelica_metatype _inElement, modelica_metatype __omcQ_24in_5FinList)
{
  modelica_metatype _inList = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _inList = __omcQ_24in_5FinList;
#line 432 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp2 = ((modelica_integer) 1); tmp3 = 1; tmp4 = _size;
#line 432 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(!(((tmp3 > 0) && (tmp2 > tmp4)) || ((tmp3 < 0) && (tmp2 < tmp4))))
#line 432 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 432 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer _i;
#line 432 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp2, tmp4); _i += tmp3)
#line 432 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 433 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta1 = mmc_mk_cons(_inElement, _inList);
#line 433 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _inList = tmpMeta1;
#line 20097 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _inList;
}
modelica_metatype boxptr_List_consN(threadData_t *threadData, modelica_metatype _size, modelica_metatype _inElement, modelica_metatype __omcQ_24in_5FinList)
{
  modelica_integer tmp1;
  modelica_metatype _inList = NULL;
  tmp1 = mmc_unbox_integer(_size);
  _inList = omc_List_consN(threadData, tmp1, _inElement, __omcQ_24in_5FinList);
  /* skip box _inList; list<polymorphic<T>> */
  return _inList;
}

DLLExport
modelica_metatype omc_List_consOnBool(threadData_t *threadData, modelica_boolean _inValue, modelica_metatype _inElement, modelica_metatype __omcQ_24in_5FtrueList, modelica_metatype __omcQ_24in_5FfalseList, modelica_metatype *out_falseList)
{
  modelica_metatype _trueList = NULL;
  modelica_metatype _falseList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _trueList = __omcQ_24in_5FtrueList;
  _falseList = __omcQ_24in_5FfalseList;
#line 418 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(_inValue)
#line 418 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 419 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = mmc_mk_cons(_inElement, _trueList);
#line 419 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _trueList = tmpMeta1;
#line 20132 OMC_FILE
  }
  else
  {
#line 421 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = mmc_mk_cons(_inElement, _falseList);
#line 421 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _falseList = tmpMeta2;
#line 20140 OMC_FILE
  }
  _return: OMC_LABEL_UNUSED
  if (out_falseList) { *out_falseList = _falseList; }
  return _trueList;
}
modelica_metatype boxptr_List_consOnBool(threadData_t *threadData, modelica_metatype _inValue, modelica_metatype _inElement, modelica_metatype __omcQ_24in_5FtrueList, modelica_metatype __omcQ_24in_5FfalseList, modelica_metatype *out_falseList)
{
  modelica_integer tmp1;
  modelica_metatype _trueList = NULL;
  tmp1 = mmc_unbox_integer(_inValue);
  _trueList = omc_List_consOnBool(threadData, tmp1, _inElement, __omcQ_24in_5FtrueList, __omcQ_24in_5FfalseList, out_falseList);
  /* skip box _trueList; list<polymorphic<T>> */
  /* skip box _falseList; list<polymorphic<T>> */
  return _trueList;
}

DLLExport
modelica_metatype omc_List_consOption(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inList)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 20165 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inElement;
    {
      modelica_metatype _e = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _e = tmpMeta6;
          /* Pattern matching succeeded */
#line 406 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta7 = mmc_mk_cons(_e, _inList);
#line 406 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = tmpMeta7;
#line 20188 OMC_FILE
          goto tmp3_done;
        }
        case 1: {

          /* Pattern matching succeeded */
#line 407 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = _inList;
#line 20196 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_consOnSuccess(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inList, modelica_fnptr _inPredicate)
{
  modelica_metatype _outList = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 20222 OMC_FILE
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          /* Pattern matching succeeded */
#line 388 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPredicate), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPredicate), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPredicate), 2))), _inElement) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPredicate), 1)))) (threadData, _inElement);
#line 20238 OMC_FILE

#line 389 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta5 = mmc_mk_cons(_inElement, _inList);
#line 389 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _outList = tmpMeta5;
#line 20244 OMC_FILE
#line 20245 OMC_FILE
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
#line 391 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _outList = _inList;
#line 20252 OMC_FILE
#line 20253 OMC_FILE
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      tmp2_done:
      (void)tmp3;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp2_done2;
      goto_1:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp3 < 2) {
        goto tmp2_top;
      }
      MMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_consOnTrue(threadData_t *threadData, modelica_boolean _inCondition, modelica_metatype _inElement, modelica_metatype _inList)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean tmp2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 372 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmp2 = (modelica_boolean)_inCondition;
#line 372 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if(tmp2)
#line 372 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 372 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = mmc_mk_cons(_inElement, _inList);
#line 372 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = tmpMeta1;
#line 372 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 372 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  else
#line 372 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 372 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = _inList;
#line 372 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 372 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta3;
#line 20311 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}
modelica_metatype boxptr_List_consOnTrue(threadData_t *threadData, modelica_metatype _inCondition, modelica_metatype _inElement, modelica_metatype _inList)
{
  modelica_integer tmp1;
  modelica_metatype _outList = NULL;
  tmp1 = mmc_unbox_integer(_inCondition);
  _outList = omc_List_consOnTrue(threadData, tmp1, _inElement, _inList);
  /* skip box _outList; list<polymorphic<T>> */
  return _outList;
}

DLLExport
modelica_metatype omc_List_consr(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inElement)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 362 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta1 = mmc_mk_cons(_inElement, _inList);
#line 362 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outList = tmpMeta1;
#line 20337 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_boolean omc_List_isPrefixOnTrue(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inCompFunc)
{
  modelica_boolean _outIsPrefix;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outIsPrefix has no default value.
#line 20350 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inList1;
    tmp4_2 = _inList2;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _rest1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _rest2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1 has no default value.
      // _rest1 has no default value.
      // _e2 has no default value.
      // _rest2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          _e1 = tmpMeta6;
          _rest1 = tmpMeta7;
          _e2 = tmpMeta8;
          _rest2 = tmpMeta9;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _e1, _e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _e1, _e2))) goto tmp3_end;
#line 348 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* Tail recursive call */
#line 348 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inList1 = _rest1;
#line 348 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inList2 = _rest2;
#line 348 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          goto _tailrecursive;
#line 348 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* TODO: Make sure any eventual dead code below is never generated */
#line 20397 OMC_FILE
          goto tmp3_done;
        }
        case 1: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;

          /* Pattern matching succeeded */
#line 350 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp1 = 1 /* true */;
#line 20406 OMC_FILE
          goto tmp3_done;
        }
        case 2: {

          /* Pattern matching succeeded */
#line 351 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp1 = 0 /* false */;
#line 20414 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outIsPrefix = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outIsPrefix;
}
modelica_metatype boxptr_List_isPrefixOnTrue(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inCompFunc)
{
  modelica_boolean _outIsPrefix;
  modelica_metatype out_outIsPrefix;
  _outIsPrefix = omc_List_isPrefixOnTrue(threadData, _inList1, _inList2, _inCompFunc);
  out_outIsPrefix = mmc_mk_icon(_outIsPrefix);
  return out_outIsPrefix;
}

DLLExport
modelica_integer omc_List_compare(threadData_t *threadData, modelica_metatype _list1, modelica_metatype _list2, modelica_fnptr _compareFn)
{
  modelica_integer _res;
  modelica_integer _l1;
  modelica_integer _l2;
  modelica_metatype _e2 = NULL;
  modelica_metatype _rest_e2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _l1 has no default value.
  // _l2 has no default value.
  // _e2 has no default value.
  // _rest_e2 has no default value.
#line 307 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _l1 = listLength(_list1);
#line 20463 OMC_FILE

#line 308 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _l2 = listLength(_list2);
#line 20467 OMC_FILE

#line 309 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _res = ((_l1 == _l2)?((modelica_integer) 0):((_l1 > _l2)?((modelica_integer) 1):((modelica_integer) -1)));
#line 20471 OMC_FILE

#line 310 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if((_res != ((modelica_integer) 0)))
#line 310 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 311 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    goto _return;
#line 20479 OMC_FILE
  }

#line 314 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _rest_e2 = _list2;
#line 20484 OMC_FILE

#line 315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype _e1;
#line 315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    for (tmpMeta1 = _list1; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
#line 315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 315 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e1 = MMC_CAR(tmpMeta1);
#line 316 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      /* Pattern-matching assignment */
#line 316 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta2 = _rest_e2;
#line 316 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
#line 316 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = MMC_CAR(tmpMeta2);
#line 316 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta4 = MMC_CDR(tmpMeta2);
#line 316 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _e2 = tmpMeta3;
#line 316 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _rest_e2 = tmpMeta4;
#line 20510 OMC_FILE

#line 317 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _res = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_compareFn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_compareFn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_compareFn), 2))), _e1, _e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_compareFn), 1)))) (threadData, _e1, _e2));
#line 20514 OMC_FILE

#line 319 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if((_res != ((modelica_integer) 0)))
#line 319 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      {
#line 320 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        goto _return;
#line 20522 OMC_FILE
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_List_compare(threadData_t *threadData, modelica_metatype _list1, modelica_metatype _list2, modelica_fnptr _compareFn)
{
  modelica_integer _res;
  modelica_metatype out_res;
  _res = omc_List_compare(threadData, _list1, _list2, _compareFn);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLExport
modelica_boolean omc_List_isEqualOnTrue(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inCompFunc)
{
  modelica_boolean _outIsEqual;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outIsEqual has no default value.
#line 20546 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inList1;
    tmp4_2 = _inList2;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _rest1 = NULL;
      modelica_metatype _rest2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1 has no default value.
      // _e2 has no default value.
      // _rest1 has no default value.
      // _rest2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          _e1 = tmpMeta6;
          _rest1 = tmpMeta7;
          _e2 = tmpMeta8;
          _rest2 = tmpMeta9;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _e1, _e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _e1, _e2))) goto tmp3_end;
#line 280 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* Tail recursive call */
#line 280 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inList1 = _rest1;
#line 280 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inList2 = _rest2;
#line 280 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          goto _tailrecursive;
#line 280 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* TODO: Make sure any eventual dead code below is never generated */
#line 20593 OMC_FILE
          goto tmp3_done;
        }
        case 1: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
#line 282 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp1 = 1 /* true */;
#line 20602 OMC_FILE
          goto tmp3_done;
        }
        case 2: {

          /* Pattern matching succeeded */
#line 283 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp1 = 0 /* false */;
#line 20610 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outIsEqual = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outIsEqual;
}
modelica_metatype boxptr_List_isEqualOnTrue(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inCompFunc)
{
  modelica_boolean _outIsEqual;
  modelica_metatype out_outIsEqual;
  _outIsEqual = omc_List_isEqualOnTrue(threadData, _inList1, _inList2, _inCompFunc);
  out_outIsEqual = mmc_mk_icon(_outIsEqual);
  return out_outIsEqual;
}

DLLExport
modelica_boolean omc_List_isEqual(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_boolean _inEqualLength)
{
  modelica_boolean _outIsEqual;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outIsEqual has no default value.
#line 20645 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_boolean tmp4_3;
    tmp4_1 = _inList1;
    tmp4_2 = _inList2;
    tmp4_3 = _inEqualLength;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _rest1 = NULL;
      modelica_metatype _rest2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1 has no default value.
      // _e2 has no default value.
      // _rest1 has no default value.
      // _rest2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);

          _e1 = tmpMeta6;
          _rest1 = tmpMeta7;
          _e2 = tmpMeta8;
          _rest2 = tmpMeta9;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!valueEq(_e1, _e2)) goto tmp3_end;
#line 249 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* Tail recursive call */
#line 249 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inList1 = _rest1;
#line 249 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          _inList2 = _rest2;
#line 249 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          goto _tailrecursive;
#line 249 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          /* TODO: Make sure any eventual dead code below is never generated */
#line 20694 OMC_FILE
          goto tmp3_done;
        }
        case 1: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;

          /* Pattern matching succeeded */
#line 251 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp1 = 1 /* true */;
#line 20704 OMC_FILE
          goto tmp3_done;
        }
        case 2: {
          if (0 /* false */ != tmp4_3) goto tmp3_end;
          if (!listEmpty(tmp4_1)) goto tmp3_end;

          /* Pattern matching succeeded */
#line 252 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp1 = 1 /* true */;
#line 20714 OMC_FILE
          goto tmp3_done;
        }
        case 3: {
          if (0 /* false */ != tmp4_3) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;

          /* Pattern matching succeeded */
#line 253 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp1 = 1 /* true */;
#line 20724 OMC_FILE
          goto tmp3_done;
        }
        case 4: {

          /* Pattern matching succeeded */
#line 254 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmp1 = 0 /* false */;
#line 20732 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outIsEqual = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outIsEqual;
}
modelica_metatype boxptr_List_isEqual(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_metatype _inEqualLength)
{
  modelica_integer tmp1;
  modelica_boolean _outIsEqual;
  modelica_metatype out_outIsEqual;
  tmp1 = mmc_unbox_integer(_inEqualLength);
  _outIsEqual = omc_List_isEqual(threadData, _inList1, _inList2, tmp1);
  out_outIsEqual = mmc_mk_icon(_outIsEqual);
  return out_outIsEqual;
}

DLLExport
void omc_List_assertIsEmpty(threadData_t *threadData, modelica_metatype _inList)
{
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
#line 231 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  /* Pattern-matching assignment */
#line 231 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  tmpMeta1 = _inList;
#line 231 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if (!listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
#line 20773 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return;
}

DLLExport
modelica_metatype omc_List_fromOption(threadData_t *threadData, modelica_metatype _inElement)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
#line 20786 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inElement;
    {
      modelica_metatype _e = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _e = tmpMeta6;
          /* Pattern matching succeeded */
#line 222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta7 = mmc_mk_cons(_e, MMC_REFSTRUCTLIT(mmc_nil));
#line 222 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = tmpMeta7;
#line 20809 OMC_FILE
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;

          /* Pattern matching succeeded */
#line 223 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
#line 223 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = tmpMeta8;
#line 20820 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_toOption(threadData_t *threadData, modelica_metatype _inList)
{
  modelica_metatype _outOption = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outOption has no default value.
#line 20847 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inList;
    {
      modelica_metatype _e = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
#line 207 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = mmc_mk_none();
#line 20864 OMC_FILE
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          _e = tmpMeta6;
          /* Pattern matching succeeded */
#line 208 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
          tmpMeta1 = mmc_mk_some(_e);
#line 20878 OMC_FILE
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outOption = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outOption;
}

DLLExport
modelica_metatype omc_List_intRange3(threadData_t *threadData, modelica_integer _inStart, modelica_integer _inStep, modelica_integer _inStop)
{
  modelica_metatype _outRange = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outRange has no default value.
#line 192 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if((_inStep == ((modelica_integer) 0)))
#line 192 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 192 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    MMC_THROW_INTERNAL();
#line 20911 OMC_FILE
  }

#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar117;
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype* tmp2;
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype tmpMeta3;
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_metatype __omcQ_24tmpVar116;
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp4;
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp5;
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer tmp6;
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    modelica_integer _i;
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp5 = _inStep /* Range step-value */;
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp6 = _inStop /* Range stop-value */;
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _i = _inStart /* Range start-value */;
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if (tmp5 == 0) {
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      omc_assert(threadData, omc_dummyFileInfo, "Range with a step of zero.");
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _i = (_inStart /* Range start-value */)-tmp5;
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    __omcQ_24tmpVar117 = tmpMeta3; /* defaultValue */
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmp2 = &__omcQ_24tmpVar117;
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1) {
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmp4 = 1;
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp5 > 0 ? _i+tmp5 <= tmp6 : _i+tmp5 >= tmp6) {
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        _i += tmp5;
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp4--;
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if (tmp4 == 0) {
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        __omcQ_24tmpVar116 = mmc_mk_integer(_i);
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar116,0);
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        tmp2 = &MMC_CDR(*tmp2);
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else if (tmp4 == 1) {
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        break;
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      } else {
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
        MMC_THROW_INTERNAL();
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      }
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    }
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    *tmp2 = mmc_mk_nil();
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta1 = __omcQ_24tmpVar117;
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  }
#line 193 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  _outRange = tmpMeta1;
#line 20992 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _outRange;
}
modelica_metatype boxptr_List_intRange3(threadData_t *threadData, modelica_metatype _inStart, modelica_metatype _inStep, modelica_metatype _inStop)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _outRange = NULL;
  tmp1 = mmc_unbox_integer(_inStart);
  tmp2 = mmc_unbox_integer(_inStep);
  tmp3 = mmc_unbox_integer(_inStop);
  _outRange = omc_List_intRange3(threadData, tmp1, tmp2, tmp3);
  /* skip box _outRange; list<#Integer> */
  return _outRange;
}

DLLExport
modelica_metatype omc_List_intRange2(threadData_t *threadData, modelica_integer _inStart, modelica_integer _inStop)
{
  modelica_metatype _outRange = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _i;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outRange = tmpMeta1;
  _i = _inStop;
#line 171 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  if((_inStart < _inStop))
#line 171 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1)
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(!(_i >= _inStart)) break;
#line 173 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta2 = mmc_mk_cons(mmc_mk_integer(_i), _outRange);
#line 173 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outRange = tmpMeta2;
#line 21037 OMC_FILE

#line 174 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _i = ((modelica_integer) -1) + _i;
#line 21041 OMC_FILE
    }
  }
  else
  {
#line 177 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    while(1)
#line 177 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    {
#line 177 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      if(!(_i <= _inStart)) break;
#line 178 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      tmpMeta3 = mmc_mk_cons(mmc_mk_integer(_i), _outRange);
#line 178 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _outRange = tmpMeta3;
#line 21056 OMC_FILE

#line 179 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
      _i = ((modelica_integer) 1) + _i;
#line 21060 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outRange;
}
modelica_metatype boxptr_List_intRange2(threadData_t *threadData, modelica_metatype _inStart, modelica_metatype _inStop)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outRange = NULL;
  modelica_metatype tmpMeta3;
  tmp1 = mmc_unbox_integer(_inStart);
  tmp2 = mmc_unbox_integer(_inStop);
  _outRange = omc_List_intRange2(threadData, tmp1, tmp2);
  /* skip box _outRange; list<#Integer> */
  return _outRange;
}

DLLExport
modelica_metatype omc_List_intRange(threadData_t *threadData, modelica_integer _inStop)
{
  modelica_metatype _outRange = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _i;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outRange = tmpMeta1;
  _i = _inStop;
#line 156 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 156 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 156 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!(_i > ((modelica_integer) 0))) break;
#line 157 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = mmc_mk_cons(mmc_mk_integer(_i), _outRange);
#line 157 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outRange = tmpMeta2;
#line 21101 OMC_FILE

#line 158 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _i = ((modelica_integer) -1) + _i;
#line 21105 OMC_FILE
  }
  _return: OMC_LABEL_UNUSED
  return _outRange;
}
modelica_metatype boxptr_List_intRange(threadData_t *threadData, modelica_metatype _inStop)
{
  modelica_integer tmp1;
  modelica_metatype _outRange = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_inStop);
  _outRange = omc_List_intRange(threadData, tmp1);
  /* skip box _outRange; list<#Integer> */
  return _outRange;
}

DLLExport
modelica_metatype omc_List_repeat(threadData_t *threadData, modelica_metatype _inElement, modelica_integer _inCount)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _i;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  _i = ((modelica_integer) 0);
#line 142 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 142 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 142 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!(_i < _inCount)) break;
#line 143 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outList = listAppend(_inElement, _outList);
#line 21140 OMC_FILE

#line 144 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _i = ((modelica_integer) 1) + _i;
#line 21144 OMC_FILE
  }
  _return: OMC_LABEL_UNUSED
  return _outList;
}
modelica_metatype boxptr_List_repeat(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inCount)
{
  modelica_integer tmp1;
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_inCount);
  _outList = omc_List_repeat(threadData, _inElement, tmp1);
  /* skip box _outList; list<polymorphic<T>> */
  return _outList;
}

DLLExport
modelica_metatype omc_List_fill(threadData_t *threadData, modelica_metatype _inElement, modelica_integer _inCount)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _i;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  _i = ((modelica_integer) 0);
#line 127 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  while(1)
#line 127 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
  {
#line 127 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    if(!(_i < _inCount)) break;
#line 128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    tmpMeta2 = mmc_mk_cons(_inElement, _outList);
#line 128 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _outList = tmpMeta2;
#line 21182 OMC_FILE

#line 129 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/List.mo"
    _i = ((modelica_integer) 1) + _i;
#line 21186 OMC_FILE
  }
  _return: OMC_LABEL_UNUSED
  return _outList;
}
modelica_metatype boxptr_List_fill(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inCount)
{
  modelica_integer tmp1;
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_inCount);
  _outList = omc_List_fill(threadData, _inElement, tmp1);
  /* skip box _outList; list<polymorphic<T>> */
  return _outList;
}

DLLExport
modelica_metatype omc_List_create2(threadData_t *threadData, modelica_metatype _inElement1, modelica_metatype _inElement2)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_cons(_inElement1, mmc_mk_cons(_inElement2, MMC_REFSTRUCTLIT(mmc_nil)));
  _outList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLExport
modelica_metatype omc_List_create(threadData_t *threadData, modelica_metatype _inElement)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_cons(_inElement, MMC_REFSTRUCTLIT(mmc_nil));
  _outList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outList;
}

