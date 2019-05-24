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
ats_ptr_type atslab_d2exp_loc ;
ats_ptr_type atslab_d2exp_node ;
ats_ptr_type atslab_d2exp_typ ;
} anairiats_rec_1 ;

typedef struct {
int tag ;
ats_ptr_type atslab_0 ;
} anairiats_sum_2 ;

typedef struct {
ats_ptr_type atslab_0 ;
} anairiats_sum_3 ;

typedef struct {
int tag ;
ats_ptr_type atslab_0 ;
ats_ptr_type atslab_1 ;
} anairiats_sum_4 ;

typedef struct {
int tag ;
ats_int_type atslab_0 ;
ats_ptr_type atslab_1 ;
ats_int_type atslab_2 ;
ats_ptr_type atslab_3 ;
ats_ptr_type atslab_4 ;
} anairiats_sum_5 ;

typedef struct {
int tag ;
ats_ptr_type atslab_0 ;
ats_ptr_type atslab_1 ;
ats_ptr_type atslab_2 ;
ats_ptr_type atslab_3 ;
} anairiats_sum_6 ;

typedef struct {
int tag ;
ats_int_type atslab_0 ;
} anairiats_sum_7 ;

typedef struct {
ats_ptr_type atslab_c2lau_loc ;
ats_ptr_type atslab_c2lau_pat ;
ats_ptr_type atslab_c2lau_gua ;
ats_int_type atslab_c2lau_seq ;
ats_int_type atslab_c2lau_neg ;
ats_ptr_type atslab_c2lau_exp ;
} anairiats_rec_8 ;

/* external typedefs */
/* external dynamic constructor declarations */
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2prelude_2basics_sta_2esats__list_cons) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2prelude_2basics_sta_2esats__list_nil) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2prelude_2basics_sta_2esats__None) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2prelude_2basics_sta_2esats__Some) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__D2Eann_seff) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__D2Eann_type) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__D2Ecaseof) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__D2Echar) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__D2Ecst) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__D2Efloat) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__D2Eif) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__D2Eint) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__D2Elam_dyn) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__D2Elet) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__D2Eloopexn) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__D2Eraise) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__D2Eseq) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__D2Estring) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__D2Etop) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__D2Evar) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__D2Ewhere) ;

/* external dynamic constant declarations */
ATSextern_fun(ats_void_type, atspre_prerr_newline) () ;
ATSextern_fun(ats_bool_type, atspre_gt_int_int) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_int_type, atspre_iadd) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_int_type, atspre_isub) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_ilte) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_int_type, atspre_icompare) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_void_type, atspre_prerr_string) (ats_ptr_type) ;
ATSextern_fun(ats_varet_type, ATS_2d0_2e2_2e10_2src_2ats_error_2esats__abort) () ;
ATSextern_fun(ats_int_type, ATS_2d0_2e2_2e10_2src_2ats_symbol_2esats__compare_symbol_symbol) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e10_2src_2ats_symenv_2esats__symmap_make) () ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e10_2src_2ats_map_lin_2esats__map_make) (ats_ptr_type) ;
ATSextern_fun(ats_bool_type, atsopt_map_lin_dice) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_ptr_type, atspre_ref_make_elt_tsz) (ats_ref_type, ats_size_type) ;
ATSextern_fun(ats_ptr_type, atspre_ref_get_view_ptr) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e10_2src_2ats_location_2esats__prerr_location) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2expopt_readize) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2exp_whnf) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2cst_get_typ) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_set_lin) (ats_ptr_type, ats_int_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_get_typ) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_set_typ) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_get_mastyp) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_set_mastyp) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_readize) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2varlst_readize) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_bool_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2exp_is_raised) (ats_ptr_type) ;
ATSextern_fun(ats_bool_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__c2lau_is_raised) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__prerr_d2exp) (ats_ptr_type) ;
ATSextern_fun(ats_bool_type, ATS_2d0_2e2_2e10_2src_2ats_stadyncst2_2esats__s2cstref_equ_exp) (ats_ptr_type, ats_ptr_type) ;
ATSextern_val(ats_ptr_type, ATS_2d0_2e2_2e10_2src_2ats_stadyncst2_2esats__Ptr_addr_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */
static
ats_void_type prerr_loc_error2_0 (ats_ptr_type arg0) ;
static
ats_void_type prerr_interror_1 () ;
static
ats_bool_type loop_7 (ats_ptr_type arg0, ats_ptr_type arg1) ;
static
ats_bool_type d2exp_seq_is_raised_6 (ats_ptr_type arg0) ;
static
ats_bool_type c2laulst_is_raised_8 (ats_ptr_type arg0) ;

/* partial value template declarations */
/* static temporary variable declarations */
/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/research/Anairiats/src/ats_dynexp2_util.dats: 1897(line=56, offs=4) -- 1982(line=57, offs=48)
*/
ATSstaticdec()
ats_void_type
prerr_loc_error2_0 (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp0) ;
// ATSlocal_void (tmp1) ;

__ats_lab_prerr_loc_error2_0:
/* tmp1 = */ ATS_2d0_2e2_2e10_2src_2ats_location_2esats__prerr_location (arg0) ;
/* tmp0 = */ atspre_prerr_string (ATSstrcst(": error(2)")) ;
return /* (tmp0) */ ;
} /* end of [prerr_loc_error2_0] */

/*
// /home/hwxi/research/Anairiats/src/ats_dynexp2_util.dats: 2016(line=60, offs=4) -- 2081(line=61, offs=46)
*/
ATSstaticdec()
ats_void_type
prerr_interror_1 () {
/* local vardec */
// ATSlocal_void (tmp2) ;

__ats_lab_prerr_interror_1:
/* tmp2 = */ atspre_prerr_string (ATSstrcst(": INTERNAL ERROR (ats_dynexp2_util)")) ;
return /* (tmp2) */ ;
} /* end of [prerr_interror_1] */

/*
// /home/hwxi/research/Anairiats/src/ats_dynexp2_util.dats: 2155(line=67, offs=15) -- 2454(line=77, offs=4)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_readize (ats_ptr_type arg0, ats_ptr_type arg1) {
/* local vardec */
// ATSlocal_void (tmp3) ;
// ATSlocal_void (tmp4) ;
// ATSlocal_void (tmp5) ;
ATSlocal (ats_ptr_type, tmp6) ;
ATSlocal (ats_ptr_type, tmp7) ;
ATSlocal (ats_ptr_type, tmp8) ;
ATSlocal (ats_ptr_type, tmp9) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_readize:
/* tmp4 = */ ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_set_lin (arg1, -1) ;
tmp7 = ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_get_mastyp (arg1) ;
tmp6 = ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2expopt_readize (arg0, tmp7) ;
/* tmp5 = */ ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_set_mastyp (arg1, tmp6) ;
tmp9 = ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_get_typ (arg1) ;
tmp8 = ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2expopt_readize (arg0, tmp9) ;
/* tmp3 = */ ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_set_typ (arg1, tmp8) ;
return /* (tmp3) */ ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_readize] */

/*
// /home/hwxi/research/Anairiats/src/ats_dynexp2_util.dats: 2511(line=81, offs=3) -- 2707(line=87, offs=4)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2varlst_readize (ats_ptr_type arg0, ats_ptr_type arg1) {
/* local vardec */
// ATSlocal_void (tmp10) ;
ATSlocal (ats_ptr_type, tmp11) ;
ATSlocal (ats_ptr_type, tmp12) ;
// ATSlocal_void (tmp13) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2varlst_readize:
do {
/* branch: __ats_lab_0 */
__ats_lab_0_0:
if (arg1 == (ats_sum_ptr_type)0) { goto __ats_lab_1_0 ; }
__ats_lab_0_1:
tmp11 = ats_caselptrlab_mac(anairiats_sum_0, arg1, atslab_0) ;
tmp12 = ats_caselptrlab_mac(anairiats_sum_0, arg1, atslab_1) ;
/* tmp13 = */ ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_readize (arg0, tmp11) ;
arg0 = arg0 ;
arg1 = tmp12 ;
goto __ats_lab_ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2varlst_readize ; // tail call
break ;

/* branch: __ats_lab_1 */
__ats_lab_1_0:
// if (arg1 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_1_1:
break ;
} while (0) ;
return /* (tmp10) */ ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2varlst_readize] */

/*
// /home/hwxi/research/Anairiats/src/ats_dynexp2_util.dats: 2790(line=93, offs=3) -- 3007(line=103, offs=4)
*/
ATSglobaldec()
ats_bool_type
ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2exp_is_varlamcst (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_bool_type, tmp14) ;
ATSlocal (ats_ptr_type, tmp15) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2exp_is_varlamcst:
tmp15 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_1, arg0), atslab_d2exp_node) ;
do {
/* branch: __ats_lab_2 */
__ats_lab_2_0:
if (((ats_sum_ptr_type)tmp15)->tag != 56) { goto __ats_lab_3_0 ; }
__ats_lab_2_1:
tmp14 = ats_true_bool ;
break ;

/* branch: __ats_lab_3 */
__ats_lab_3_0:
if (((ats_sum_ptr_type)tmp15)->tag != 30) { goto __ats_lab_4_0 ; }
__ats_lab_3_1:
tmp14 = ats_true_bool ;
break ;

/* branch: __ats_lab_4 */
__ats_lab_4_0:
if (((ats_sum_ptr_type)tmp15)->tag != 10) { goto __ats_lab_5_0 ; }
__ats_lab_4_1:
tmp14 = ats_true_bool ;
break ;

/* branch: __ats_lab_5 */
__ats_lab_5_0:
if (((ats_sum_ptr_type)tmp15)->tag != 28) { goto __ats_lab_6_0 ; }
__ats_lab_5_1:
tmp14 = ats_true_bool ;
break ;

/* branch: __ats_lab_6 */
__ats_lab_6_0:
if (((ats_sum_ptr_type)tmp15)->tag != 22) { goto __ats_lab_7_0 ; }
__ats_lab_6_1:
tmp14 = ats_true_bool ;
break ;

/* branch: __ats_lab_7 */
__ats_lab_7_0:
if (((ats_sum_ptr_type)tmp15)->tag != 51) { goto __ats_lab_8_0 ; }
__ats_lab_7_1:
tmp14 = ats_true_bool ;
break ;

/* branch: __ats_lab_8 */
__ats_lab_8_0:
if (((ats_sum_ptr_type)tmp15)->tag != 54) { goto __ats_lab_9_0 ; }
__ats_lab_8_1:
tmp14 = ats_true_bool ;
break ;

/* branch: __ats_lab_9 */
__ats_lab_9_0:
__ats_lab_9_1:
tmp14 = ats_false_bool ;
break ;
} while (0) ;
return (tmp14) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2exp_is_varlamcst] */

/*
// /home/hwxi/research/Anairiats/src/ats_dynexp2_util.dats: 3092(line=108, offs=22) -- 3721(line=127, offs=4)
*/
ATSglobaldec()
ats_bool_type
ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2exp_var_cst_is_ptr (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_bool_type, tmp16) ;
ATSlocal (ats_ptr_type, tmp17) ;
ATSlocal (ats_ptr_type, tmp18) ;
ATSlocal (ats_ptr_type, tmp19) ;
ATSlocal (ats_ptr_type, tmp20) ;
ATSlocal (ats_ptr_type, tmp21) ;
ATSlocal (ats_ptr_type, tmp22) ;
ATSlocal (ats_ptr_type, tmp23) ;
ATSlocal (ats_ptr_type, tmp24) ;
// ATSlocal_void (tmp25) ;
ATSlocal (ats_ptr_type, tmp26) ;
// ATSlocal_void (tmp27) ;
// ATSlocal_void (tmp28) ;
// ATSlocal_void (tmp29) ;
// ATSlocal_void (tmp30) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2exp_var_cst_is_ptr:
tmp17 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_1, arg0), atslab_d2exp_node) ;
do {
/* branch: __ats_lab_10 */
__ats_lab_10_0:
if (((ats_sum_ptr_type)tmp17)->tag != 56) { goto __ats_lab_13_0 ; }
__ats_lab_10_1:
tmp18 = ats_caselptrlab_mac(anairiats_sum_2, tmp17, atslab_0) ;
tmp19 = ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_get_typ (tmp18) ;
do {
/* branch: __ats_lab_11 */
__ats_lab_11_0:
if (tmp19 == (ats_sum_ptr_type)0) { goto __ats_lab_12_0 ; }
__ats_lab_11_1:
tmp20 = ats_caselptrlab_mac(anairiats_sum_3, tmp19, atslab_0) ;
tmp21 = ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2exp_whnf (tmp20) ;
tmp16 = ATS_2d0_2e2_2e10_2src_2ats_stadyncst2_2esats__s2cstref_equ_exp (ATS_2d0_2e2_2e10_2src_2ats_stadyncst2_2esats__Ptr_addr_type, tmp21) ;
break ;

/* branch: __ats_lab_12 */
__ats_lab_12_0:
// if (tmp19 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_12_1:
tmp16 = ats_false_bool ;
break ;
} while (0) ;
break ;

/* branch: __ats_lab_13 */
__ats_lab_13_0:
if (((ats_sum_ptr_type)tmp17)->tag != 12) { goto __ats_lab_14_0 ; }
__ats_lab_13_1:
tmp22 = ats_caselptrlab_mac(anairiats_sum_2, tmp17, atslab_0) ;
tmp23 = ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2cst_get_typ (tmp22) ;
tmp24 = ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2exp_whnf (tmp23) ;
tmp16 = ATS_2d0_2e2_2e10_2src_2ats_stadyncst2_2esats__s2cstref_equ_exp (ATS_2d0_2e2_2e10_2src_2ats_stadyncst2_2esats__Ptr_addr_type, tmp24) ;
break ;

/* branch: __ats_lab_14 */
__ats_lab_14_0:
__ats_lab_14_1:
tmp26 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_1, arg0), atslab_d2exp_loc) ;
/* tmp25 = */ ATS_2d0_2e2_2e10_2src_2ats_location_2esats__prerr_location (tmp26) ;
/* tmp27 = */ prerr_interror_1 () ;
/* tmp28 = */ atspre_prerr_string (ATSstrcst(": d2exp_var_cst_is_ptr: d2e = ")) ;
/* tmp29 = */ ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__prerr_d2exp (arg0) ;
/* tmp30 = */ atspre_prerr_newline () ;
/* tmp16 = */ ATS_2d0_2e2_2e10_2src_2ats_error_2esats__abort () ;
break ;
} while (0) ;
return (tmp16) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2exp_var_cst_is_ptr] */

/*
// /home/hwxi/research/Anairiats/src/ats_dynexp2_util.dats: 3837(line=133, offs=7) -- 3990(line=137, offs=41)
*/
ATSstaticdec()
ats_bool_type
loop_7 (ats_ptr_type arg0, ats_ptr_type arg1) {
/* local vardec */
ATSlocal (ats_bool_type, tmp32) ;
ATSlocal (ats_ptr_type, tmp33) ;
ATSlocal (ats_ptr_type, tmp34) ;

__ats_lab_loop_7:
do {
/* branch: __ats_lab_15 */
__ats_lab_15_0:
if (arg1 == (ats_sum_ptr_type)0) { goto __ats_lab_16_0 ; }
__ats_lab_15_1:
tmp33 = ats_caselptrlab_mac(anairiats_sum_0, arg1, atslab_0) ;
tmp34 = ats_caselptrlab_mac(anairiats_sum_0, arg1, atslab_1) ;
arg0 = tmp33 ;
arg1 = tmp34 ;
goto __ats_lab_loop_7 ; // tail call
break ;

/* branch: __ats_lab_16 */
__ats_lab_16_0:
// if (arg1 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_16_1:
tmp32 = ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2exp_is_raised (arg0) ;
break ;
} while (0) ;
return (tmp32) ;
} /* end of [loop_7] */

/*
// /home/hwxi/research/Anairiats/src/ats_dynexp2_util.dats: 3780(line=131, offs=4) -- 4103(line=143, offs=4)
*/
ATSstaticdec()
ats_bool_type
d2exp_seq_is_raised_6 (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_bool_type, tmp31) ;
ATSlocal (ats_ptr_type, tmp35) ;
ATSlocal (ats_ptr_type, tmp36) ;

__ats_lab_d2exp_seq_is_raised_6:
do {
/* branch: __ats_lab_17 */
__ats_lab_17_0:
if (arg0 == (ats_sum_ptr_type)0) { goto __ats_lab_18_0 ; }
__ats_lab_17_1:
tmp35 = ats_caselptrlab_mac(anairiats_sum_0, arg0, atslab_0) ;
tmp36 = ats_caselptrlab_mac(anairiats_sum_0, arg0, atslab_1) ;
tmp31 = loop_7 (tmp35, tmp36) ;
break ;

/* branch: __ats_lab_18 */
__ats_lab_18_0:
// if (arg0 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_18_1:
tmp31 = ats_false_bool ;
break ;
} while (0) ;
return (tmp31) ;
} /* end of [d2exp_seq_is_raised_6] */

/*
// /home/hwxi/research/Anairiats/src/ats_dynexp2_util.dats: 4141(line=145, offs=5) -- 4391(line=152, offs=4)
*/
ATSstaticdec()
ats_bool_type
c2laulst_is_raised_8 (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_bool_type, tmp37) ;
ATSlocal (ats_ptr_type, tmp38) ;
ATSlocal (ats_ptr_type, tmp39) ;
ATSlocal (ats_bool_type, tmp40) ;

__ats_lab_c2laulst_is_raised_8:
do {
/* branch: __ats_lab_19 */
__ats_lab_19_0:
if (arg0 == (ats_sum_ptr_type)0) { goto __ats_lab_20_0 ; }
__ats_lab_19_1:
tmp38 = ats_caselptrlab_mac(anairiats_sum_0, arg0, atslab_0) ;
tmp39 = ats_caselptrlab_mac(anairiats_sum_0, arg0, atslab_1) ;
tmp40 = ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__c2lau_is_raised (tmp38) ;
if (tmp40) {
arg0 = tmp39 ;
goto __ats_lab_c2laulst_is_raised_8 ; // tail call
} else {
tmp37 = ats_false_bool ;
} /* end of [if] */
break ;

/* branch: __ats_lab_20 */
__ats_lab_20_0:
// if (arg0 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_20_1:
tmp37 = ats_true_bool ;
break ;
} while (0) ;
return (tmp37) ;
} /* end of [c2laulst_is_raised_8] */

/*
// /home/hwxi/research/Anairiats/src/ats_dynexp2_util.dats: 4450(line=155, offs=17) -- 5105(line=172, offs=4)
*/
ATSglobaldec()
ats_bool_type
ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2exp_is_raised (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_bool_type, tmp41) ;
ATSlocal (ats_ptr_type, tmp42) ;
ATSlocal (ats_ptr_type, tmp43) ;
ATSlocal (ats_ptr_type, tmp44) ;
ATSlocal (ats_ptr_type, tmp45) ;
ATSlocal (ats_ptr_type, tmp46) ;
ATSlocal (ats_ptr_type, tmp47) ;
ATSlocal (ats_ptr_type, tmp48) ;
ATSlocal (ats_bool_type, tmp49) ;
ATSlocal (ats_ptr_type, tmp50) ;
ATSlocal (ats_ptr_type, tmp51) ;
ATSlocal (ats_ptr_type, tmp52) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2exp_is_raised:
tmp42 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_1, arg0), atslab_d2exp_node) ;
do {
/* branch: __ats_lab_21 */
__ats_lab_21_0:
if (((ats_sum_ptr_type)tmp42)->tag != 2) { goto __ats_lab_22_0 ; }
__ats_lab_21_1:
tmp43 = ats_caselptrlab_mac(anairiats_sum_4, tmp42, atslab_0) ;
arg0 = tmp43 ;
goto __ats_lab_ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2exp_is_raised ; // tail call
break ;

/* branch: __ats_lab_22 */
__ats_lab_22_0:
if (((ats_sum_ptr_type)tmp42)->tag != 1) { goto __ats_lab_23_0 ; }
__ats_lab_22_1:
tmp44 = ats_caselptrlab_mac(anairiats_sum_4, tmp42, atslab_0) ;
arg0 = tmp44 ;
goto __ats_lab_ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2exp_is_raised ; // tail call
break ;

/* branch: __ats_lab_23 */
__ats_lab_23_0:
if (((ats_sum_ptr_type)tmp42)->tag != 9) { goto __ats_lab_24_0 ; }
__ats_lab_23_1:
tmp45 = ats_caselptrlab_mac(anairiats_sum_5, tmp42, atslab_4) ;
tmp41 = c2laulst_is_raised_8 (tmp45) ;
break ;

/* branch: __ats_lab_24 */
__ats_lab_24_0:
if (((ats_sum_ptr_type)tmp42)->tag != 27) { goto __ats_lab_27_0 ; }
__ats_lab_24_1:
tmp46 = ats_caselptrlab_mac(anairiats_sum_6, tmp42, atslab_2) ;
tmp47 = ats_caselptrlab_mac(anairiats_sum_6, tmp42, atslab_3) ;
do {
/* branch: __ats_lab_25 */
__ats_lab_25_0:
if (tmp47 == (ats_sum_ptr_type)0) { goto __ats_lab_26_0 ; }
__ats_lab_25_1:
tmp48 = ats_caselptrlab_mac(anairiats_sum_3, tmp47, atslab_0) ;
tmp49 = ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2exp_is_raised (tmp46) ;
if (tmp49) {
arg0 = tmp48 ;
goto __ats_lab_ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2exp_is_raised ; // tail call
} else {
tmp41 = ats_false_bool ;
} /* end of [if] */
break ;

/* branch: __ats_lab_26 */
__ats_lab_26_0:
// if (tmp47 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_26_1:
tmp41 = ats_false_bool ;
break ;
} while (0) ;
break ;

/* branch: __ats_lab_27 */
__ats_lab_27_0:
if (((ats_sum_ptr_type)tmp42)->tag != 36) { goto __ats_lab_28_0 ; }
__ats_lab_27_1:
tmp50 = ats_caselptrlab_mac(anairiats_sum_4, tmp42, atslab_1) ;
arg0 = tmp50 ;
goto __ats_lab_ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2exp_is_raised ; // tail call
break ;

/* branch: __ats_lab_28 */
__ats_lab_28_0:
if (((ats_sum_ptr_type)tmp42)->tag != 38) { goto __ats_lab_29_0 ; }
__ats_lab_28_1:
tmp41 = ats_true_bool ;
break ;

/* branch: __ats_lab_29 */
__ats_lab_29_0:
if (((ats_sum_ptr_type)tmp42)->tag != 43) { goto __ats_lab_30_0 ; }
__ats_lab_29_1:
tmp41 = ats_true_bool ;
break ;

/* branch: __ats_lab_30 */
__ats_lab_30_0:
if (((ats_sum_ptr_type)tmp42)->tag != 47) { goto __ats_lab_31_0 ; }
__ats_lab_30_1:
tmp51 = ats_caselptrlab_mac(anairiats_sum_2, tmp42, atslab_0) ;
tmp41 = d2exp_seq_is_raised_6 (tmp51) ;
break ;

/* branch: __ats_lab_31 */
__ats_lab_31_0:
if (((ats_sum_ptr_type)tmp42)->tag != 58) { goto __ats_lab_32_0 ; }
__ats_lab_31_1:
tmp52 = ats_caselptrlab_mac(anairiats_sum_4, tmp42, atslab_0) ;
arg0 = tmp52 ;
goto __ats_lab_ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2exp_is_raised ; // tail call
break ;

/* branch: __ats_lab_32 */
__ats_lab_32_0:
__ats_lab_32_1:
tmp41 = ats_false_bool ;
break ;
} while (0) ;
return (tmp41) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2exp_is_raised] */

/*
// /home/hwxi/research/Anairiats/src/ats_dynexp2_util.dats: 5160(line=174, offs=27) -- 5245(line=176, offs=4)
*/
ATSglobaldec()
ats_bool_type
ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__c2lau_is_raised (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_bool_type, tmp53) ;
ATSlocal (ats_bool_type, tmp54) ;
ATSlocal (ats_int_type, tmp55) ;
ATSlocal (ats_ptr_type, tmp56) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__c2lau_is_raised:
tmp55 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_8, arg0), atslab_c2lau_neg) ;
tmp54 = atspre_gt_int_int (tmp55, 0) ;
if (tmp54) {
tmp53 = ats_true_bool ;
} else {
tmp56 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_8, arg0), atslab_c2lau_exp) ;
tmp53 = ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2exp_is_raised (tmp56) ;
} /* end of [if] */
return (tmp53) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__c2lau_is_raised] */

/* static load function */

extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_error_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_label_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_symbol_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_symenv_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_map_lin_2edats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_symenv_2edats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_stadyncst2_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_dynexp2_util_2edats__staload () {
static int ATS_2d0_2e2_2e10_2src_2ats_dynexp2_util_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e10_2src_2ats_dynexp2_util_2edats__staload_flag) return ;
ATS_2d0_2e2_2e10_2src_2ats_dynexp2_util_2edats__staload_flag = 1 ;

ATS_2d0_2e2_2e10_2src_2ats_error_2esats__staload () ;
ATS_2d0_2e2_2e10_2src_2ats_label_2esats__staload () ;
ATS_2d0_2e2_2e10_2src_2ats_symbol_2esats__staload () ;
ATS_2d0_2e2_2e10_2src_2ats_symenv_2esats__staload () ;
ATS_2d0_2e2_2e10_2src_2ats_map_lin_2edats__staload () ;
ATS_2d0_2e2_2e10_2src_2ats_symenv_2edats__staload () ;
ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__staload () ;
ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__staload () ;
ATS_2d0_2e2_2e10_2src_2ats_stadyncst2_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type ATS_2d0_2e2_2e10_2src_2ats_dynexp2_util_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_dynexp2_util_2edats__dynload () {
ATS_2d0_2e2_2e10_2src_2ats_dynexp2_util_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e10_2src_2ats_dynexp2_util_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */

/* marking external values for GC */

/* code for dynamic loading */
return ;
} /* end of [dynload function] */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [/home/hwxi/research/Anairiats/bootstrap1/ats_dynexp2_util_dats.c] */