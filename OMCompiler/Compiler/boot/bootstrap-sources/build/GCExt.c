#ifdef OMC_BASE_FILE
  #define OMC_FILE OMC_BASE_FILE
#else
  #define OMC_FILE "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/boot/build/tmp/GCExt.c"
#endif
#include "omc_simulation_settings.h"
#include "GCExt.h"
#define _OMC_LIT0_data "GC Profiling Stats: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,20,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "\n  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,3,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "heapsize_full: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,15,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "free_bytes_full: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,17,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "unmapped_bytes: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,16,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "bytes_allocd_since_gc: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,23,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "allocd_bytes_before_gc: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,24,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "total_allocd_bytes: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,20,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "non_gc_bytes: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,14,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "gc_no: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,7,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "markers_m1: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,12,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "bytes_reclaimed_since_gc: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,26,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "reclaimed_bytes_before_gc: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,27,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#include "util/modelica.h"

#include "GCExt_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_GCExt_getProfStats_GC__get__prof__stats__modelica(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_GCExt_getProfStats_GC__get__prof__stats__modelica,2,0) {(void*) boxptr_GCExt_getProfStats_GC__get__prof__stats__modelica,0}};
#define boxvar_GCExt_getProfStats_GC__get__prof__stats__modelica MMC_REFSTRUCTLIT(boxvar_lit_GCExt_getProfStats_GC__get__prof__stats__modelica)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_GCExt_getProfStats_GC__get__prof__stats__modelica(threadData_t *threadData)
{
  modelica_metatype _stats_ext;
  modelica_metatype _stats = NULL;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  // _stats has no default value.
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  _stats_ext = GC_get_prof_stats_modelica();
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  _stats = (modelica_metatype)_stats_ext;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  return _stats;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
}
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"

#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
DLLExport
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
modelica_metatype omc_GCExt_getProfStats(threadData_t *threadData)
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
{
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_metatype _stats = NULL;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_integer _heapsize_full;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_integer _free_bytes_full;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_integer _unmapped_bytes;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_integer _bytes_allocd_since_gc;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_integer _allocd_bytes_before_gc;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_integer _non_gc_bytes;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_integer _gc_no;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_integer _markers_m1;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_integer _bytes_reclaimed_since_gc;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_integer _reclaimed_bytes_before_gc;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_metatype tmpMeta1;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_metatype tmpMeta2;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_integer tmp3;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_metatype tmpMeta4;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_integer tmp5;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_metatype tmpMeta6;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_integer tmp7;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_metatype tmpMeta8;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_integer tmp9;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_metatype tmpMeta10;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_integer tmp11;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_metatype tmpMeta12;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_integer tmp13;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_metatype tmpMeta14;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_integer tmp15;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_metatype tmpMeta16;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_integer tmp17;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_metatype tmpMeta18;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_integer tmp19;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_metatype tmpMeta20;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_integer tmp21;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_metatype tmpMeta22;
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  MMC_SO();
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  _tailrecursive: OMC_LABEL_UNUSED
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  // _stats has no default value.
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  // _heapsize_full has no default value.
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  // _free_bytes_full has no default value.
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  // _unmapped_bytes has no default value.
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  // _bytes_allocd_since_gc has no default value.
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  // _allocd_bytes_before_gc has no default value.
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  // _non_gc_bytes has no default value.
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  // _gc_no has no default value.
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  // _markers_m1 has no default value.
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  // _bytes_reclaimed_since_gc has no default value.
#line 132 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  // _reclaimed_bytes_before_gc has no default value.
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  /* Pattern-matching assignment */
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  tmpMeta1 = omc_GCExt_getProfStats_GC__get__prof__stats__modelica(threadData);
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  tmp3 = mmc_unbox_integer(tmpMeta2);
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  tmp5 = mmc_unbox_integer(tmpMeta4);
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  tmp7 = mmc_unbox_integer(tmpMeta6);
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  tmp9 = mmc_unbox_integer(tmpMeta8);
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  tmp11 = mmc_unbox_integer(tmpMeta10);
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  tmp13 = mmc_unbox_integer(tmpMeta12);
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 7));
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  tmp15 = mmc_unbox_integer(tmpMeta14);
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 8));
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  tmp17 = mmc_unbox_integer(tmpMeta16);
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 9));
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  tmp19 = mmc_unbox_integer(tmpMeta18);
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 10));
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  tmp21 = mmc_unbox_integer(tmpMeta20);
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  _heapsize_full = tmp3  /* pattern as ty=Integer */;
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  _free_bytes_full = tmp5  /* pattern as ty=Integer */;
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  _unmapped_bytes = tmp7  /* pattern as ty=Integer */;
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  _bytes_allocd_since_gc = tmp9  /* pattern as ty=Integer */;
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  _allocd_bytes_before_gc = tmp11  /* pattern as ty=Integer */;
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  _non_gc_bytes = tmp13  /* pattern as ty=Integer */;
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  _gc_no = tmp15  /* pattern as ty=Integer */;
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  _markers_m1 = tmp17  /* pattern as ty=Integer */;
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  _bytes_reclaimed_since_gc = tmp19  /* pattern as ty=Integer */;
#line 172 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  _reclaimed_bytes_before_gc = tmp21  /* pattern as ty=Integer */;
#line 238 OMC_FILE

#line 173 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  tmpMeta22 = mmc_mk_box11(3, &GCExt_ProfStats_PROFSTATS__desc, mmc_mk_integer(_heapsize_full), mmc_mk_integer(_free_bytes_full), mmc_mk_integer(_unmapped_bytes), mmc_mk_integer(_bytes_allocd_since_gc), mmc_mk_integer(_allocd_bytes_before_gc), mmc_mk_integer(_non_gc_bytes), mmc_mk_integer(_gc_no), mmc_mk_integer(_markers_m1), mmc_mk_integer(_bytes_reclaimed_since_gc), mmc_mk_integer(_reclaimed_bytes_before_gc));
#line 173 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  _stats = tmpMeta22;
#line 244 OMC_FILE
  _return: OMC_LABEL_UNUSED
  return _stats;
}

DLLExport
modelica_string omc_GCExt_profStatsStr(threadData_t *threadData, modelica_metatype _stats, modelica_string _head, modelica_string _delimiter)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
#line 257 OMC_FILE
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _stats;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
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
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;

          /* Pattern matching succeeded */
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta6 = stringAppend(_head,_delimiter);
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT2);
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta8 = stringAppend(tmpMeta7,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stats), 2))))));
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta9 = stringAppend(tmpMeta8,_delimiter);
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT3);
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta11 = stringAppend(tmpMeta10,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stats), 3))))));
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta12 = stringAppend(tmpMeta11,_delimiter);
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT4);
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta14 = stringAppend(tmpMeta13,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stats), 4))))));
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta15 = stringAppend(tmpMeta14,_delimiter);
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT5);
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta17 = stringAppend(tmpMeta16,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stats), 5))))));
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta18 = stringAppend(tmpMeta17,_delimiter);
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT6);
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta20 = stringAppend(tmpMeta19,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stats), 6))))));
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta21 = stringAppend(tmpMeta20,_delimiter);
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta22 = stringAppend(tmpMeta21,_OMC_LIT7);
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta23 = stringAppend(tmpMeta22,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stats), 5)))) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stats), 6))))));
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta24 = stringAppend(tmpMeta23,_delimiter);
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta25 = stringAppend(tmpMeta24,_OMC_LIT8);
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta26 = stringAppend(tmpMeta25,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stats), 7))))));
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta27 = stringAppend(tmpMeta26,_delimiter);
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta28 = stringAppend(tmpMeta27,_OMC_LIT9);
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta29 = stringAppend(tmpMeta28,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stats), 8))))));
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta30 = stringAppend(tmpMeta29,_delimiter);
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta31 = stringAppend(tmpMeta30,_OMC_LIT10);
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta32 = stringAppend(tmpMeta31,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stats), 9))))));
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta33 = stringAppend(tmpMeta32,_delimiter);
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta34 = stringAppend(tmpMeta33,_OMC_LIT11);
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta35 = stringAppend(tmpMeta34,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stats), 10))))));
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta36 = stringAppend(tmpMeta35,_delimiter);
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta37 = stringAppend(tmpMeta36,_OMC_LIT12);
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmpMeta38 = stringAppend(tmpMeta37,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stats), 11))))));
#line 111 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
          tmp1 = tmpMeta38;
#line 371 OMC_FILE
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
  _str = tmp1;
  _return: OMC_LABEL_UNUSED
  return _str;
}

void omc_GCExt_setMaxHeapSize(threadData_t *threadData, modelica_real _sz)
{
  double _sz_ext;
#line 93 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  _sz_ext = (double)_sz;
#line 93 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  GC_set_max_heap_size_dbl(_sz_ext);
#line 93 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  return;
#line 93 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
}
#line 93 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
void boxptr_GCExt_setMaxHeapSize(threadData_t *threadData, modelica_metatype _sz)
#line 93 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
{
#line 93 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_real tmp1;
#line 93 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  tmp1 = mmc_unbox_real(_sz);
#line 93 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  omc_GCExt_setMaxHeapSize(threadData, tmp1);
#line 93 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  return;
#line 93 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
}
#line 93 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"

#line 93 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
void omc_GCExt_setForceUnmapOnGcollect(threadData_t *threadData, modelica_boolean _forceUnmap)
#line 93 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
{
#line 93 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  int _forceUnmap_ext;
#line 88 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  _forceUnmap_ext = (int)_forceUnmap;
#line 88 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  GC_set_force_unmap_on_gcollect(_forceUnmap_ext);
#line 88 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  return;
#line 88 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
}
#line 88 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
void boxptr_GCExt_setForceUnmapOnGcollect(threadData_t *threadData, modelica_metatype _forceUnmap)
#line 88 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
{
#line 88 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_integer tmp1;
#line 88 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  tmp1 = mmc_unbox_integer(_forceUnmap);
#line 88 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  omc_GCExt_setForceUnmapOnGcollect(threadData, tmp1);
#line 88 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  return;
#line 88 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
}
#line 88 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"

#line 88 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
modelica_boolean omc_GCExt_getForceUnmapOnGcollect(threadData_t *threadData)
#line 88 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
{
#line 88 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  int _res_ext;
#line 88 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_boolean _res;
#line 83 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  // _res has no default value.
#line 83 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  _res_ext = GC_get_force_unmap_on_gcollect();
#line 83 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  _res = (modelica_boolean)_res_ext;
#line 83 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  return _res;
#line 83 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
}
#line 83 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
modelica_metatype boxptr_GCExt_getForceUnmapOnGcollect(threadData_t *threadData)
#line 83 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
{
#line 83 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_boolean _res;
#line 83 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_metatype out_res;
#line 83 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  _res = omc_GCExt_getForceUnmapOnGcollect(threadData);
#line 83 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  out_res = mmc_mk_icon(_res);
#line 83 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  return out_res;
#line 83 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
}
#line 83 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"

#line 83 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
void omc_GCExt_setFreeSpaceDivisor(threadData_t *threadData, modelica_integer _divisor)
#line 83 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
{
#line 83 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  int _divisor_ext;
#line 76 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  _divisor_ext = (int)_divisor;
#line 76 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  GC_set_free_space_divisor(_divisor_ext);
#line 76 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  return;
#line 76 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
}
#line 76 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
void boxptr_GCExt_setFreeSpaceDivisor(threadData_t *threadData, modelica_metatype _divisor)
#line 76 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
{
#line 76 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_integer tmp1;
#line 76 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  tmp1 = mmc_unbox_integer(_divisor);
#line 76 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  omc_GCExt_setFreeSpaceDivisor(threadData, tmp1);
#line 76 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  return;
#line 76 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
}
#line 76 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"

#line 76 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
modelica_boolean omc_GCExt_expandHeap(threadData_t *threadData, modelica_real _sz)
#line 76 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
{
#line 76 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  double _sz_ext;
#line 76 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  int _success_ext;
#line 76 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_boolean _success;
#line 70 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  // _success has no default value.
#line 70 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  _sz_ext = (double)_sz;
#line 70 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  _success_ext = GC_expand_hp_dbl(_sz_ext);
#line 70 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  _success = (modelica_boolean)_success_ext;
#line 70 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  return _success;
#line 70 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
}
#line 70 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
modelica_metatype boxptr_GCExt_expandHeap(threadData_t *threadData, modelica_metatype _sz)
#line 70 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
{
#line 70 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_real tmp1;
#line 70 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_boolean _success;
#line 70 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_metatype out_success;
#line 70 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  tmp1 = mmc_unbox_real(_sz);
#line 70 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  _success = omc_GCExt_expandHeap(threadData, tmp1);
#line 70 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  out_success = mmc_mk_icon(_success);
#line 70 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  return out_success;
#line 70 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
}
#line 70 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"

#line 70 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
void omc_GCExt_free(threadData_t *threadData, modelica_metatype _data)
#line 70 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
{
#line 70 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  modelica_metatype _data_ext;
#line 50 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  _data_ext = (modelica_metatype)_data;
#line 50 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  omc_GC_free_ext(_data_ext);
#line 50 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  return;
#line 50 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
}
#line 50 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"

#line 50 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
void omc_GCExt_disable(threadData_t *threadData)
#line 50 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
{
#line 46 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  GC_disable();
#line 46 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  return;
#line 46 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
}
#line 46 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"

#line 46 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
void omc_GCExt_enable(threadData_t *threadData)
#line 46 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
{
#line 42 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  GC_enable();
#line 42 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  return;
#line 42 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
}
#line 42 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"

#line 42 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
void omc_GCExt_gcollectAndUnmap(threadData_t *threadData)
#line 42 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
{
#line 38 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  GC_gcollect_and_unmap();
#line 38 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  return;
#line 38 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
}
#line 38 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"

#line 38 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
void omc_GCExt_gcollect(threadData_t *threadData)
#line 38 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
{
#line 34 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  GC_gcollect();
#line 34 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
  return;
#line 34 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"
}
#line 34 "/home/kab/workspace/2_OM_Build/OMCompiler/Compiler/Util/GCExt.mo"

