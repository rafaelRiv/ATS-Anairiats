/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2016-8-25: 20h:18m
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
/* external typedefs */
/* assuming abstract types */
/* sum constructor declarations */
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__OFFSETlab_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__OFFSETind_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VParg_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPargref_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPargtmpref_2) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPbool_3) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPcastfn_4) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPchar_5) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPclo_6) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPcst_7) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPcstsp_8) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPenv_9) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPext_10) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPfix_11) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPfloat_12) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPfloatsp_13) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPfun_14) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPint_15) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPintsp_16) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPptrof_17) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPptrof_ptr_offs_18) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPptrof_var_offs_19) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPsizeof_20) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPstring_21) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPtmp_22) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPtmpref_23) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPtop_24) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPvoid_25) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__LABVALPRIMLSTcons_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__LABVALPRIMLSTnil_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__PATCKbool_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__PATCKchar_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__PATCKcon_2) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__PATCKexn_3) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__PATCKfloat_4) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__PATCKint_5) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__PATCKstring_6) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__KONTnone_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__KONTtmplab_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__KONTtmplabint_2) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__KONTcaseof_fail_3) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__KONTfunarg_fail_4) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__KONTraise_5) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__KONTmatpnt_6) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRarr_heap_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRarr_stack_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRassgn_arr_2) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRassgn_clo_3) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRcall_4) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRcall_tail_5) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRcond_6) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRdefine_clo_7) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRdefine_fun_8) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRdefine_val_9) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRdefine_partval_10) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRextern_11) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRextval_12) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRfreeptr_13) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRfunction_14) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRfunlab_15) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRdynload_file_16) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRload_ptr_17) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRload_ptr_offs_18) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRload_var_19) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRload_var_offs_20) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRloop_21) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRloopexn_22) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRmove_arg_23) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRmove_con_24) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRmove_lazy_delay_25) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRmove_lazy_force_26) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRmove_rec_box_27) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRmove_rec_flt_28) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRmove_ref_29) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRmove_val_30) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRpatck_31) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRraise_32) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRselect_33) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRselcon_34) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRselcon_ptr_35) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRswitch_36) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRstore_ptr_37) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRstore_ptr_offs_38) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRstore_var_39) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRstore_var_offs_40) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRtmplabint_41) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRprfck_beg_42) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRprfck_end_43) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRprfck_tst_44) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRtrywith_45) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRvardec_46) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__TAILJOINLSTcons_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__TAILJOINLSTnil_1) ;

/* exn constructor declarations */
/* static load function */

extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_filename_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_location_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_hiexp_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__staload () {
static int ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__staload_flag) return ;
ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__staload_flag = 1 ;

ATS_2d0_2e2_2e12_2src_2ats_filename_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_location_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_hiexp_2esats__staload () ;

// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__OFFSETlab_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__OFFSETind_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VParg_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPargref_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPargtmpref_2.tag = 2 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPbool_3.tag = 3 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPcastfn_4.tag = 4 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPchar_5.tag = 5 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPclo_6.tag = 6 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPcst_7.tag = 7 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPcstsp_8.tag = 8 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPenv_9.tag = 9 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPext_10.tag = 10 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPfix_11.tag = 11 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPfloat_12.tag = 12 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPfloatsp_13.tag = 13 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPfun_14.tag = 14 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPint_15.tag = 15 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPintsp_16.tag = 16 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPptrof_17.tag = 17 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPptrof_ptr_offs_18.tag = 18 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPptrof_var_offs_19.tag = 19 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPsizeof_20.tag = 20 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPstring_21.tag = 21 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPtmp_22.tag = 22 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPtmpref_23.tag = 23 ;
ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPtop_24.tag = 24 ;
ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__VPvoid_25.tag = 25 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__LABVALPRIMLSTcons_0.tag = 0 ;
ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__LABVALPRIMLSTnil_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__PATCKbool_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__PATCKchar_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__PATCKcon_2.tag = 2 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__PATCKexn_3.tag = 3 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__PATCKfloat_4.tag = 4 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__PATCKint_5.tag = 5 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__PATCKstring_6.tag = 6 ;
ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__KONTnone_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__KONTtmplab_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__KONTtmplabint_2.tag = 2 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__KONTcaseof_fail_3.tag = 3 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__KONTfunarg_fail_4.tag = 4 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__KONTraise_5.tag = 5 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__KONTmatpnt_6.tag = 6 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRarr_heap_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRarr_stack_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRassgn_arr_2.tag = 2 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRassgn_clo_3.tag = 3 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRcall_4.tag = 4 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRcall_tail_5.tag = 5 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRcond_6.tag = 6 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRdefine_clo_7.tag = 7 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRdefine_fun_8.tag = 8 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRdefine_val_9.tag = 9 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRdefine_partval_10.tag = 10 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRextern_11.tag = 11 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRextval_12.tag = 12 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRfreeptr_13.tag = 13 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRfunction_14.tag = 14 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRfunlab_15.tag = 15 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRdynload_file_16.tag = 16 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRload_ptr_17.tag = 17 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRload_ptr_offs_18.tag = 18 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRload_var_19.tag = 19 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRload_var_offs_20.tag = 20 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRloop_21.tag = 21 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRloopexn_22.tag = 22 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRmove_arg_23.tag = 23 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRmove_con_24.tag = 24 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRmove_lazy_delay_25.tag = 25 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRmove_lazy_force_26.tag = 26 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRmove_rec_box_27.tag = 27 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRmove_rec_flt_28.tag = 28 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRmove_ref_29.tag = 29 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRmove_val_30.tag = 30 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRpatck_31.tag = 31 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRraise_32.tag = 32 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRselect_33.tag = 33 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRselcon_34.tag = 34 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRselcon_ptr_35.tag = 35 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRswitch_36.tag = 36 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRstore_ptr_37.tag = 37 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRstore_ptr_offs_38.tag = 38 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRstore_var_39.tag = 39 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRstore_var_offs_40.tag = 40 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRtmplabint_41.tag = 41 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRprfck_beg_42.tag = 42 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRprfck_end_43.tag = 43 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRprfck_tst_44.tag = 44 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRtrywith_45.tag = 45 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__INSTRvardec_46.tag = 46 ;
// ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__TAILJOINLSTcons_0.tag = 0 ;
ATS_2d0_2e2_2e12_2src_2ats_ccomp_2esats__TAILJOINLSTnil_1.tag = 1 ;
return ;
} /* staload function */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [/home/hwxi/Research/ATS-Anairiats/bootstrap1/ats_ccomp_sats.c] */
