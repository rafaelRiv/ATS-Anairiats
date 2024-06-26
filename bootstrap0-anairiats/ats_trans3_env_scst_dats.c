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

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"
/* external codes at top */
/* type definitions */
typedef struct {
ats_ptr_type atslab_0 ;
ats_ptr_type atslab_1 ;
} anairiats_sum_0 ;

typedef struct {
ats_ptr_type atslab_0 ;
} anairiats_sum_1 ;

/* external typedefs */
/* external dynamic constructor declarations */
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2prelude_2basics_sta_2esats__None) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2prelude_2basics_sta_2esats__Some) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2prelude_2basics_sta_2esats__list_vt_cons) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2prelude_2basics_sta_2esats__list_vt_nil) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__S2CSTLSTcons) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__S2CSTLSTnil) ;

/* external dynamic constant declarations */
ATSextern_fun(ats_void_type, atspre_prerr_newline) () ;
ATSextern_fun(ats_bool_type, atspre_neg_bool) (ats_bool_type) ;
ATSextern_fun(ats_bool_type, atspre_gt_int_int) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_void_type, atspre_prerr_string) (ats_ptr_type) ;
ATSextern_fun(ats_varet_type, ATS_2d0_2e2_2e10_2src_2ats_error_2esats__abort) () ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e10_2src_2ats_location_2esats__prerr_location) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2cstlst_append) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_bool_type, ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2cst_get_isasp) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2cst_set_isasp) (ats_ptr_type, ats_bool_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2cst_set_def) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__prerr_s2cst) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__the_s2cstlst_env_pop) () ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__the_s2cstlst_env_add) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, atspre_ref_make_elt_tsz) (ats_ref_type, ats_size_type) ;
ATSextern_fun(ats_ptr_type, atspre_ref_get_view_ptr) (ats_ptr_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */
static
ats_ptr_type ref_make_elt_03658_ats_ptr_type (ats_ptr_type arg0) ;
static
ats_void_type aux_6 (ats_ptr_type arg0) ;

/* partial value template declarations */
/* static temporary variable declarations */
ATSstatic (ats_ptr_type, statmp0) ;
ATSstatic (ats_ptr_type, statmp3) ;
ATSstatic (ats_ptr_type, statmp4) ;
ATSstatic (ats_ptr_type, statmp5) ;

/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/research/Anairiats/src/ats_reference.dats: 1888(line=57, offs=27) -- 1962(line=59, offs=4)
*/
ATSstaticdec()
ats_ptr_type
ref_make_elt_03658_ats_ptr_type (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp1) ;
ATSlocal (ats_ptr_type, tmp2) ;

__ats_lab_ref_make_elt_03658_ats_ptr_type:
/* ats_ptr_type tmp2 ; */
tmp2 = arg0 ;
tmp1 = atspre_ref_make_elt_tsz ((&tmp2), sizeof(ats_ptr_type)) ;
return (tmp1) ;
} /* end of [ref_make_elt_03658_ats_ptr_type] */

/*
// /home/hwxi/research/Anairiats/src/ats_trans3_env_scst.dats: 2096(line=66, offs=22) -- 2282(line=74, offs=4)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__the_s2cstlst_env_add (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp6) ;
ATSlocal (ats_ptr_type, tmp7) ;
ATSlocal (ats_ptr_type, tmp8) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__the_s2cstlst_env_add:
tmp8 = ats_ptrget_mac(ats_ptr_type, statmp0) ;
tmp7 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
ats_selptrset_mac(anairiats_sum_0, tmp7, atslab_0, arg0) ;
ats_selptrset_mac(anairiats_sum_0, tmp7, atslab_1, tmp8) ;
ats_ptrget_mac(ats_ptr_type, statmp0) = tmp7 ;
return /* (tmp6) */ ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__the_s2cstlst_env_add] */

/*
// /home/hwxi/research/Anairiats/src/ats_trans3_env_scst.dats: 2351(line=77, offs=25) -- 2547(line=85, offs=4)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__the_s2cstlst_env_addlst (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp9) ;
ATSlocal (ats_ptr_type, tmp10) ;
ATSlocal (ats_ptr_type, tmp11) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__the_s2cstlst_env_addlst:
tmp11 = ats_ptrget_mac(ats_ptr_type, statmp0) ;
tmp10 = ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2cstlst_append (arg0, tmp11) ;
ats_ptrget_mac(ats_ptr_type, statmp0) = tmp10 ;
return /* (tmp9) */ ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__the_s2cstlst_env_addlst] */

/*
// /home/hwxi/research/Anairiats/src/ats_trans3_env_scst.dats: 2648(line=91, offs=3) -- 3366(line=115, offs=4)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__the_s2cstlst_env_bind_and_add (ats_ptr_type arg0, ats_ptr_type arg1, ats_ptr_type arg2) {
/* local vardec */
// ATSlocal_void (tmp12) ;
ATSlocal (ats_bool_type, tmp13) ;
ATSlocal (ats_bool_type, tmp14) ;
// ATSlocal_void (tmp15) ;
ATSlocal (ats_ptr_type, tmp16) ;
// ATSlocal_void (tmp17) ;
// ATSlocal_void (tmp18) ;
// ATSlocal_void (tmp19) ;
// ATSlocal_void (tmp20) ;
// ATSlocal_void (tmp21) ;
// ATSlocal_void (tmp22) ;
// ATSlocal_void (tmp23) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__the_s2cstlst_env_bind_and_add:
tmp13 = ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2cst_get_isasp (arg1) ;
tmp14 = atspre_neg_bool (tmp13) ;
if (tmp14) {
tmp16 = ATS_MALLOC(sizeof(anairiats_sum_1)) ;
ats_selptrset_mac(anairiats_sum_1, tmp16, atslab_0, arg2) ;
/* tmp15 = */ ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2cst_set_def (arg1, tmp16) ;
/* tmp17 = */ ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2cst_set_isasp (arg1, ats_true_bool) ;
/* tmp12 = */ ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__the_s2cstlst_env_add (arg1) ;
} else {
/* tmp18 = */ ATS_2d0_2e2_2e10_2src_2ats_location_2esats__prerr_location (arg0) ;
/* tmp19 = */ atspre_prerr_string (ATSstrcst(": error(3)")) ;
/* tmp20 = */ atspre_prerr_string (ATSstrcst(": the static constant [")) ;
/* tmp21 = */ ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__prerr_s2cst (arg1) ;
/* tmp22 = */ atspre_prerr_string (ATSstrcst("] has already been assumed elsewhere.")) ;
/* tmp23 = */ atspre_prerr_newline () ;
/* tmp12 = */ ATS_2d0_2e2_2e10_2src_2ats_error_2esats__abort () ;
} /* end of [if] */
return /* (tmp12) */ ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__the_s2cstlst_env_bind_and_add] */

/*
// /home/hwxi/research/Anairiats/src/ats_trans3_env_scst.dats: 3464(line=121, offs=3) -- 4187(line=142, offs=4)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__the_s2cstlst_env_pop () {
/* local vardec */
ATSlocal (ats_ptr_type, tmp24) ;
ATSlocal (ats_int_type, tmp25) ;
ATSlocal (ats_ptr_type, tmp26) ;
ATSlocal (ats_ptr_type, tmp27) ;
ATSlocal (ats_ptr_type, tmp28) ;
ATSlocal (ats_ptr_type, tmp30) ;
ATSlocal (ats_ptr_type, tmp31) ;
ATSlocal (ats_ptr_type, tmp32) ;
ATSlocal (ats_ptr_type, tmp33) ;
// ATSlocal_void (tmp34) ;
ATSlocal (ats_bool_type, tmp35) ;
// ATSlocal_void (tmp36) ;
// ATSlocal_void (tmp37) ;
// ATSlocal_void (tmp38) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__the_s2cstlst_env_pop:
/* ats_int_type tmp25 ; */
tmp25 = 0 ;
tmp26 = ats_ptrget_mac(ats_ptr_type, statmp0) ;
tmp27 = atspre_ref_get_view_ptr (statmp4) ;
tmp28 = ats_selsin_mac(tmp27, atslab_1) ;
tmp30 = ats_ptrget_mac(ats_ptr_type, tmp28) ;
do {
/* branch: __ats_lab_0 */
__ats_lab_0_0:
if (tmp30 == (ats_sum_ptr_type)0) { goto __ats_lab_1_0 ; }
__ats_lab_0_1:
tmp31 = ats_caselptrlab_mac(anairiats_sum_0, tmp30, atslab_0) ;
tmp32 = ats_caselptrlab_mac(anairiats_sum_0, tmp30, atslab_1) ;
ATS_FREE(tmp30) ;
ats_ptrget_mac(ats_ptr_type, statmp0) = tmp31 ;
ats_ptrget_mac(ats_ptr_type, tmp28) = tmp32 ;
break ;

/* branch: __ats_lab_1 */
__ats_lab_1_0:
// if (tmp30 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_1_1:
tmp25 = 1 ;
tmp33 = (ats_sum_ptr_type)0 ;
ats_ptrget_mac(ats_ptr_type, tmp28) = tmp33 ;
break ;
} while (0) ;
tmp35 = atspre_gt_int_int (tmp25, 0) ;
if (tmp35) {
/* tmp36 = */ atspre_prerr_string (ATSstrcst("INTERNAL ERROR (ats_trans3_env_scst)")) ;
/* tmp37 = */ atspre_prerr_string (ATSstrcst(": the_s2cstlst_env_pop: [the_s2cstlstlst] is empty.")) ;
/* tmp38 = */ atspre_prerr_newline () ;
/* tmp34 = */ ATS_2d0_2e2_2e10_2src_2ats_error_2esats__abort () ;
} else {
/* empty */
} /* end of [if] */
tmp24 = tmp26 ;
return (tmp24) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__the_s2cstlst_env_pop] */

/*
// /home/hwxi/research/Anairiats/src/ats_trans3_env_scst.dats: 4294(line=147, offs=7) -- 4683(line=161, offs=6)
*/
ATSstaticdec()
ats_void_type
aux_6 (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp40) ;
ATSlocal (ats_ptr_type, tmp41) ;
ATSlocal (ats_ptr_type, tmp42) ;
// ATSlocal_void (tmp43) ;
ATSlocal (ats_ptr_type, tmp44) ;

__ats_lab_aux_6:
do {
/* branch: __ats_lab_2 */
__ats_lab_2_0:
if (arg0 == (ats_sum_ptr_type)0) { goto __ats_lab_3_0 ; }
__ats_lab_2_1:
tmp41 = ats_caselptrlab_mac(anairiats_sum_0, arg0, atslab_0) ;
tmp42 = ats_caselptrlab_mac(anairiats_sum_0, arg0, atslab_1) ;
tmp44 = (ats_sum_ptr_type)0 ;
/* tmp43 = */ ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2cst_set_def (tmp41, tmp44) ;
arg0 = tmp42 ;
goto __ats_lab_aux_6 ; // tail call
break ;

/* branch: __ats_lab_3 */
__ats_lab_3_0:
// if (arg0 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_3_1:
break ;
} while (0) ;
return /* (tmp40) */ ;
} /* end of [aux_6] */

/*
// /home/hwxi/research/Anairiats/src/ats_trans3_env_scst.dats: 4266(line=146, offs=3) -- 4751(line=164, offs=4)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__the_s2cstlst_env_pop_and_unbind () {
/* local vardec */
// ATSlocal_void (tmp39) ;
ATSlocal (ats_ptr_type, tmp45) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__the_s2cstlst_env_pop_and_unbind:
tmp45 = ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__the_s2cstlst_env_pop () ;
/* tmp39 = */ aux_6 (tmp45) ;
return /* (tmp39) */ ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__the_s2cstlst_env_pop_and_unbind] */

/*
// /home/hwxi/research/Anairiats/src/ats_trans3_env_scst.dats: 4850(line=169, offs=23) -- 5072(line=175, offs=4)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__the_s2cstlst_env_push () {
/* local vardec */
// ATSlocal_void (tmp46) ;
ATSlocal (ats_ptr_type, tmp47) ;
ATSlocal (ats_ptr_type, tmp48) ;
ATSlocal (ats_ptr_type, tmp49) ;
ATSlocal (ats_ptr_type, tmp50) ;
ATSlocal (ats_ptr_type, tmp51) ;
ATSlocal (ats_ptr_type, tmp52) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__the_s2cstlst_env_push:
tmp47 = atspre_ref_get_view_ptr (statmp4) ;
tmp48 = ats_selsin_mac(tmp47, atslab_1) ;
tmp49 = ats_ptrget_mac(ats_ptr_type, statmp0) ;
tmp50 = (ats_sum_ptr_type)0 ;
ats_ptrget_mac(ats_ptr_type, statmp0) = tmp50 ;
tmp52 = ats_ptrget_mac(ats_ptr_type, tmp48) ;
tmp51 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
ats_selptrset_mac(anairiats_sum_0, tmp51, atslab_0, tmp49) ;
ats_selptrset_mac(anairiats_sum_0, tmp51, atslab_1, tmp52) ;
ats_ptrget_mac(ats_ptr_type, tmp48) = tmp51 ;
return /* (tmp46) */ ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__the_s2cstlst_env_push] */

/* static load function */

extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_error_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_reference_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_reference_2edats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_trans3_env_scst_2edats__staload () {
static int ATS_2d0_2e2_2e10_2src_2ats_trans3_env_scst_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e10_2src_2ats_trans3_env_scst_2edats__staload_flag) return ;
ATS_2d0_2e2_2e10_2src_2ats_trans3_env_scst_2edats__staload_flag = 1 ;

ATS_2d0_2e2_2e10_2src_2ats_error_2esats__staload () ;
ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__staload () ;
ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__staload () ;
ATS_2d0_2e2_2e10_2src_2ats_reference_2esats__staload () ;
ATS_2d0_2e2_2e10_2src_2ats_reference_2edats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type ATS_2d0_2e2_2e10_2src_2ats_trans3_env_scst_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_trans3_env_scst_2edats__dynload () {
ATS_2d0_2e2_2e10_2src_2ats_trans3_env_scst_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e10_2src_2ats_trans3_env_scst_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */
ATS_GC_MARKROOT(&statmp0, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp3, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp4, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp5, sizeof(ats_ptr_type)) ;

/* marking external values for GC */

/* code for dynamic loading */
statmp3 = (ats_sum_ptr_type)0 ;
statmp0 = ref_make_elt_03658_ats_ptr_type (statmp3) ;
statmp5 = (ats_sum_ptr_type)0 ;
statmp4 = ref_make_elt_03658_ats_ptr_type (statmp5) ;
return ;
} /* end of [dynload function] */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [/home/hwxi/research/Anairiats/bootstrap1/ats_trans3_env_scst_dats.c] */
