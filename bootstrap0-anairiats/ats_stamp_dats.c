/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2013-8-29: 22h:22m
**
*/

/* include some .h files */
#ifndef _ATS_HEADER_NONE
#include "ats_config.h"
#include "ats_basics.h"
#include "ats_types.h"
#include "ats_exception.h"
#include "ats_memory.h"
#endif /* _ATS_HEADER_NONE */

/* include some .cats files */
#ifndef _ATS_PRELUDE_NONE
#include "prelude/CATS/basics.cats"
#include "prelude/CATS/bool.cats"
#include "prelude/CATS/byte.cats"
#include "prelude/CATS/char.cats"
#include "prelude/CATS/float.cats"
#include "prelude/CATS/integer.cats"
#include "prelude/CATS/integer_fixed.cats"
#include "prelude/CATS/integer_ptr.cats"
#include "prelude/CATS/lazy.cats"
#include "prelude/CATS/lazy_vt.cats"
#include "prelude/CATS/pointer.cats"
#include "prelude/CATS/printf.cats"
#include "prelude/CATS/reference.cats"
#include "prelude/CATS/sizetype.cats"
#include "prelude/CATS/string.cats"
#include "prelude/CATS/array.cats"
#include "prelude/CATS/list.cats"
#include "prelude/CATS/matrix.cats"
#include "prelude/CATS/option.cats"
#endif /* _ATS_PRELUDE_NONE */
/* prologues from statically loaded files */

#include "ats_counter.cats"

#include "ats_counter.cats"
/* external codes at top */

#include "ats_counter.cats" /* only needed for [ATS/Geizella] */

/* type definitions */
/* external typedefs */
/* external dynamic constructor declarations */
/* external dynamic constant declarations */
ATSextern_fun(ats_ptr_type, atspre_stdout_get) () ;
ATSextern_fun(ats_void_type, atspre_stdout_view_set) () ;
ATSextern_fun(ats_ptr_type, atspre_stderr_get) () ;
ATSextern_fun(ats_void_type, atspre_stderr_view_set) () ;
ATSextern_fun(ats_bool_type, ATS_2d0_2e2_2e10_2src_2ats_counter_2esats__lt_count_count) (atsopt_count_type, atsopt_count_type) ;
ATSextern_fun(ats_bool_type, ATS_2d0_2e2_2e10_2src_2ats_counter_2esats__lte_count_count) (atsopt_count_type, atsopt_count_type) ;
ATSextern_fun(ats_bool_type, ATS_2d0_2e2_2e10_2src_2ats_counter_2esats__eq_count_count) (atsopt_count_type, atsopt_count_type) ;
ATSextern_fun(ats_bool_type, ATS_2d0_2e2_2e10_2src_2ats_counter_2esats__neq_count_count) (atsopt_count_type, atsopt_count_type) ;
ATSextern_fun(ats_int_type, atsopt_compare_count_count) (atsopt_count_type, atsopt_count_type) ;
ATSextern_fun(ats_void_type, atsopt_fprint_count) (ats_ref_type, atsopt_count_type) ;
ATSextern_fun(ats_ptr_type, atsopt_tostring_count) (atsopt_count_type) ;
ATSextern_fun(ats_ptr_type, atsopt_counter_make) () ;
ATSextern_fun(atsopt_count_type, atsopt_counter_getinc) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__fprint_stamp) (ats_ref_type, atsopt_count_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
extern
ats_void_type ATS_2d0_2e2_2e10_2prelude_2basics_dyn_2esats__file_mode_lte_w_w_prfck () ;
#endif /* _ATS_PROOFCHECK */

/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */

/* partial value template declarations */
/* static temporary variable declarations */
ATSstatic (ats_ptr_type, statmp15) ;
ATSstatic (ats_ptr_type, statmp17) ;
ATSstatic (ats_ptr_type, statmp19) ;
ATSstatic (ats_ptr_type, statmp21) ;
ATSstatic (ats_ptr_type, statmp23) ;
ATSstatic (ats_ptr_type, statmp25) ;
ATSstatic (ats_ptr_type, statmp27) ;
ATSstatic (ats_ptr_type, statmp29) ;
ATSstatic (ats_ptr_type, statmp31) ;
ATSstatic (ats_ptr_type, statmp33) ;
ATSstatic (ats_ptr_type, statmp35) ;
ATSstatic (ats_ptr_type, statmp37) ;
ATSstatic (ats_ptr_type, statmp39) ;

/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/research/Anairiats/src/ats_stamp.dats: 1801(line=56, offs=16) -- 1840(line=56, offs=55)
*/
ATSglobaldec()
ats_bool_type
ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__lt_stamp_stamp (atsopt_count_type arg0, atsopt_count_type arg1) {
/* local vardec */
ATSlocal (ats_bool_type, tmp0) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__lt_stamp_stamp:
tmp0 = ATS_2d0_2e2_2e10_2src_2ats_counter_2esats__lt_count_count (arg0, arg1) ;
return (tmp0) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__lt_stamp_stamp] */

/*
// /home/hwxi/research/Anairiats/src/ats_stamp.dats: 1867(line=58, offs=17) -- 1907(line=58, offs=57)
*/
ATSglobaldec()
ats_bool_type
ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__lte_stamp_stamp (atsopt_count_type arg0, atsopt_count_type arg1) {
/* local vardec */
ATSlocal (ats_bool_type, tmp1) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__lte_stamp_stamp:
tmp1 = ATS_2d0_2e2_2e10_2src_2ats_counter_2esats__lte_count_count (arg0, arg1) ;
return (tmp1) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__lte_stamp_stamp] */

/*
// /home/hwxi/research/Anairiats/src/ats_stamp.dats: 1934(line=61, offs=16) -- 1973(line=61, offs=55)
*/
ATSglobaldec()
ats_bool_type
ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__eq_stamp_stamp (atsopt_count_type arg0, atsopt_count_type arg1) {
/* local vardec */
ATSlocal (ats_bool_type, tmp2) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__eq_stamp_stamp:
tmp2 = ATS_2d0_2e2_2e10_2src_2ats_counter_2esats__eq_count_count (arg0, arg1) ;
return (tmp2) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__eq_stamp_stamp] */

/*
// /home/hwxi/research/Anairiats/src/ats_stamp.dats: 2000(line=63, offs=17) -- 2040(line=63, offs=57)
*/
ATSglobaldec()
ats_bool_type
ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__neq_stamp_stamp (atsopt_count_type arg0, atsopt_count_type arg1) {
/* local vardec */
ATSlocal (ats_bool_type, tmp3) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__neq_stamp_stamp:
tmp3 = ATS_2d0_2e2_2e10_2src_2ats_counter_2esats__neq_count_count (arg0, arg1) ;
return (tmp3) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__neq_stamp_stamp] */

/*
// /home/hwxi/research/Anairiats/src/ats_stamp.dats: 2072(line=66, offs=21) -- 2116(line=66, offs=65)
*/
ATSglobaldec()
ats_int_type
ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__compare_stamp_stamp (atsopt_count_type arg0, atsopt_count_type arg1) {
/* local vardec */
ATSlocal (ats_int_type, tmp4) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__compare_stamp_stamp:
tmp4 = atsopt_compare_count_count (arg0, arg1) ;
return (tmp4) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__compare_stamp_stamp] */

/*
// /home/hwxi/research/Anairiats/src/ats_stamp.dats: 2162(line=70, offs=24) -- 2209(line=70, offs=71)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__fprint_stamp (ats_ref_type arg0, atsopt_count_type arg1) {
/* local vardec */
// ATSlocal_void (tmp5) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__fprint_stamp:
/* tmp5 = */ atsopt_fprint_count (arg0, arg1) ;
return /* (tmp5) */ ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__fprint_stamp] */

/*
// /home/hwxi/research/Anairiats/src/ats_stamp.dats: 2232(line=71, offs=23) -- 2265(line=71, offs=56)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__print_stamp (atsopt_count_type arg0) {
/* local vardec */
// ATSlocal_void (tmp6) ;
ATSlocal (ats_ptr_type, tmp7) ;
ATSlocal (ats_ptr_type, tmp8) ;
// ATSlocal_void (tmp9) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__print_stamp:
tmp7 = atspre_stdout_get () ;
tmp8 = ats_selsin_mac(tmp7, atslab_1) ;
/* tmp9 = */ ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__fprint_stamp (tmp8, arg0) ;
/* tmp6 = */ atspre_stdout_view_set () ;
return /* (tmp6) */ ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__print_stamp] */

/*
// /home/hwxi/research/Anairiats/src/ats_stamp.dats: 2288(line=72, offs=23) -- 2321(line=72, offs=56)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__prerr_stamp (atsopt_count_type arg0) {
/* local vardec */
// ATSlocal_void (tmp10) ;
ATSlocal (ats_ptr_type, tmp11) ;
ATSlocal (ats_ptr_type, tmp12) ;
// ATSlocal_void (tmp13) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__prerr_stamp:
tmp11 = atspre_stderr_get () ;
tmp12 = ats_selsin_mac(tmp11, atslab_1) ;
/* tmp13 = */ ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__fprint_stamp (tmp12, arg0) ;
/* tmp10 = */ atspre_stderr_view_set () ;
return /* (tmp10) */ ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__prerr_stamp] */

/*
// /home/hwxi/research/Anairiats/src/ats_stamp.dats: 2369(line=76, offs=26) -- 2397(line=76, offs=54)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__tostring_stamp (atsopt_count_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp14) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__tostring_stamp:
tmp14 = atsopt_tostring_count (arg0) ;
return (tmp14) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__tostring_stamp] */

/*
// /home/hwxi/research/Anairiats/src/ats_stamp.dats: 2494(line=81, offs=30) -- 2526(line=81, offs=62)
*/
ATSglobaldec()
atsopt_count_type
ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__s2rtdat_stamp_make () {
/* local vardec */
ATSlocal (atsopt_count_type, tmp16) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__s2rtdat_stamp_make:
tmp16 = atsopt_counter_getinc (statmp15) ;
return (tmp16) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__s2rtdat_stamp_make] */

/*
// /home/hwxi/research/Anairiats/src/ats_stamp.dats: 2621(line=85, offs=28) -- 2653(line=85, offs=60)
*/
ATSglobaldec()
atsopt_count_type
ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__s2cst_stamp_make () {
/* local vardec */
ATSlocal (atsopt_count_type, tmp18) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__s2cst_stamp_make:
tmp18 = atsopt_counter_getinc (statmp17) ;
return (tmp18) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__s2cst_stamp_make] */

/*
// /home/hwxi/research/Anairiats/src/ats_stamp.dats: 2748(line=89, offs=28) -- 2780(line=89, offs=60)
*/
ATSglobaldec()
atsopt_count_type
ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__s2var_stamp_make () {
/* local vardec */
ATSlocal (atsopt_count_type, tmp20) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__s2var_stamp_make:
tmp20 = atsopt_counter_getinc (statmp19) ;
return (tmp20) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__s2var_stamp_make] */

/*
// /home/hwxi/research/Anairiats/src/ats_stamp.dats: 2875(line=93, offs=28) -- 2907(line=93, offs=60)
*/
ATSglobaldec()
atsopt_count_type
ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__s2Var_stamp_make () {
/* local vardec */
ATSlocal (atsopt_count_type, tmp22) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__s2Var_stamp_make:
tmp22 = atsopt_counter_getinc (statmp21) ;
return (tmp22) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__s2Var_stamp_make] */

/*
// /home/hwxi/research/Anairiats/src/ats_stamp.dats: 3009(line=97, offs=35) -- 3041(line=97, offs=67)
*/
ATSglobaldec()
atsopt_count_type
ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__s2exp_struct_stamp_make () {
/* local vardec */
ATSlocal (atsopt_count_type, tmp24) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__s2exp_struct_stamp_make:
tmp24 = atsopt_counter_getinc (statmp23) ;
return (tmp24) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__s2exp_struct_stamp_make] */

/*
// /home/hwxi/research/Anairiats/src/ats_stamp.dats: 3142(line=101, offs=34) -- 3174(line=101, offs=66)
*/
ATSglobaldec()
atsopt_count_type
ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__s2exp_union_stamp_make () {
/* local vardec */
ATSlocal (atsopt_count_type, tmp26) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__s2exp_union_stamp_make:
tmp26 = atsopt_counter_getinc (statmp25) ;
return (tmp26) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__s2exp_union_stamp_make] */

/*
// /home/hwxi/research/Anairiats/src/ats_stamp.dats: 3269(line=105, offs=28) -- 3301(line=105, offs=60)
*/
ATSglobaldec()
atsopt_count_type
ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__d2con_stamp_make () {
/* local vardec */
ATSlocal (atsopt_count_type, tmp28) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__d2con_stamp_make:
tmp28 = atsopt_counter_getinc (statmp27) ;
return (tmp28) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__d2con_stamp_make] */

/*
// /home/hwxi/research/Anairiats/src/ats_stamp.dats: 3396(line=109, offs=28) -- 3428(line=109, offs=60)
*/
ATSglobaldec()
atsopt_count_type
ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__d2cst_stamp_make () {
/* local vardec */
ATSlocal (atsopt_count_type, tmp30) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__d2cst_stamp_make:
tmp30 = atsopt_counter_getinc (statmp29) ;
return (tmp30) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__d2cst_stamp_make] */

/*
// /home/hwxi/research/Anairiats/src/ats_stamp.dats: 3523(line=113, offs=28) -- 3555(line=113, offs=60)
*/
ATSglobaldec()
atsopt_count_type
ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__d2mac_stamp_make () {
/* local vardec */
ATSlocal (atsopt_count_type, tmp32) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__d2mac_stamp_make:
tmp32 = atsopt_counter_getinc (statmp31) ;
return (tmp32) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__d2mac_stamp_make] */

/*
// /home/hwxi/research/Anairiats/src/ats_stamp.dats: 3650(line=117, offs=28) -- 3682(line=117, offs=60)
*/
ATSglobaldec()
atsopt_count_type
ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__d2var_stamp_make () {
/* local vardec */
ATSlocal (atsopt_count_type, tmp34) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__d2var_stamp_make:
tmp34 = atsopt_counter_getinc (statmp33) ;
return (tmp34) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__d2var_stamp_make] */

/*
// /home/hwxi/research/Anairiats/src/ats_stamp.dats: 3799(line=123, offs=29) -- 3831(line=123, offs=61)
*/
ATSglobaldec()
atsopt_count_type
ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__funlab_stamp_make () {
/* local vardec */
ATSlocal (atsopt_count_type, tmp36) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__funlab_stamp_make:
tmp36 = atsopt_counter_getinc (statmp35) ;
return (tmp36) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__funlab_stamp_make] */

/*
// /home/hwxi/research/Anairiats/src/ats_stamp.dats: 3927(line=127, offs=29) -- 3959(line=127, offs=61)
*/
ATSglobaldec()
atsopt_count_type
ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__tmplab_stamp_make () {
/* local vardec */
ATSlocal (atsopt_count_type, tmp38) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__tmplab_stamp_make:
tmp38 = atsopt_counter_getinc (statmp37) ;
return (tmp38) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__tmplab_stamp_make] */

/*
// /home/hwxi/research/Anairiats/src/ats_stamp.dats: 4055(line=131, offs=29) -- 4087(line=131, offs=61)
*/
ATSglobaldec()
atsopt_count_type
ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__tmpvar_stamp_make () {
/* local vardec */
ATSlocal (atsopt_count_type, tmp40) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__tmpvar_stamp_make:
tmp40 = atsopt_counter_getinc (statmp39) ;
return (tmp40) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__tmpvar_stamp_make] */

/* static load function */

extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_counter_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_stamp_2edats__staload () {
static int ATS_2d0_2e2_2e10_2src_2ats_stamp_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e10_2src_2ats_stamp_2edats__staload_flag) return ;
ATS_2d0_2e2_2e10_2src_2ats_stamp_2edats__staload_flag = 1 ;

ATS_2d0_2e2_2e10_2src_2ats_counter_2esats__staload () ;
ATS_2d0_2e2_2e10_2src_2ats_stamp_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type ATS_2d0_2e2_2e10_2src_2ats_stamp_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_stamp_2edats__dynload () {
ATS_2d0_2e2_2e10_2src_2ats_stamp_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e10_2src_2ats_stamp_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
ATS_2d0_2e2_2e10_2prelude_2basics_dyn_2esats__file_mode_lte_w_w_prfck () ;
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */
ATS_GC_MARKROOT(&statmp15, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp17, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp19, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp21, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp23, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp25, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp27, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp29, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp31, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp33, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp35, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp37, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp39, sizeof(ats_ptr_type)) ;

/* marking external values for GC */

/* code for dynamic loading */
statmp15 = atsopt_counter_make () ;
statmp17 = atsopt_counter_make () ;
statmp19 = atsopt_counter_make () ;
statmp21 = atsopt_counter_make () ;
statmp23 = atsopt_counter_make () ;
statmp25 = atsopt_counter_make () ;
statmp27 = atsopt_counter_make () ;
statmp29 = atsopt_counter_make () ;
statmp31 = atsopt_counter_make () ;
statmp33 = atsopt_counter_make () ;
statmp35 = atsopt_counter_make () ;
statmp37 = atsopt_counter_make () ;
statmp39 = atsopt_counter_make () ;
return ;
} /* end of [dynload function] */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [/home/hwxi/research/Anairiats/bootstrap1/ats_stamp_dats.c] */
