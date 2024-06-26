/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2018-1-26: 17h: 4m
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
#include "prelude/CATS/integer.cats"
#include "prelude/CATS/sizetype.cats"
#include "prelude/CATS/integer_ptr.cats"
#include "prelude/CATS/integer_fixed.cats"
#include "prelude/CATS/pointer.cats"
#include "prelude/CATS/bool.cats"
#include "prelude/CATS/char.cats"
#include "prelude/CATS/byte.cats"
#include "prelude/CATS/float.cats"
#include "prelude/CATS/string.cats"
#include "prelude/CATS/reference.cats"
#include "prelude/CATS/lazy.cats"
#include "prelude/CATS/lazy_vt.cats"
#include "prelude/CATS/printf.cats"
#include "prelude/CATS/list.cats"
#include "prelude/CATS/option.cats"
#include "prelude/CATS/array.cats"
#include "prelude/CATS/matrix.cats"
#endif /* _ATS_PRELUDE_NONE */
/* prologues from statically loaded files */
/* external codes at top */
/* type definitions */
typedef struct {
int tag ;
ats_ptr_type atslab_0 ;
ats_ptr_type atslab_1 ;
} anairiats_sum_0 ;

/* external typedefs */
/* external dynamic constructor declarations */
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__K_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__S_1) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__App_2) ;

/* external dynamic constant declarations */
ATSextern_fun(ats_void_type, atspre_print_newline) () ;
ATSextern_fun(ats_void_type, atspre_print_string) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__reduction) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__reduction_cmplt) (ats_ptr_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* assuming abstract types */
/* sum constructor declarations */
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__K_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__S_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__App_2) ;

/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */
static
ats_ptr_type eval_0 (ats_ptr_type arg0) ;
static
ats_ptr_type eval_cmplt_2 (ats_ptr_type arg0) ;
static
ats_void_type print_term_4 (ats_ptr_type arg0) ;

/* partial value template declarations */
/* static temporary variable declarations */
/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/Research/ATS-Anairiats/doc/EXAMPLE/VSTTE2012/problem2/problem2.dats: 17430(line=624, offs=5) -- 18643(line=657, offs=8)
*/
ATSstaticdec()
ats_ptr_type
eval_0 (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp0) ;
ATSlocal (ats_ptr_type, tmp1) ;
ATSlocal (ats_ptr_type, tmp2) ;
ATSlocal (ats_ptr_type, tmp3) ;
ATSlocal (ats_ptr_type, tmp4) ;
ATSlocal (ats_ptr_type, tmp5) ;
ATSlocal (ats_ptr_type, tmp6) ;
ATSlocal (ats_ptr_type, tmp7) ;
ATSlocal (ats_ptr_type, tmp8) ;
ATSlocal (ats_ptr_type, tmp9) ;
ATSlocal (ats_ptr_type, tmp10) ;
ATSlocal (ats_ptr_type, tmp11) ;
ATSlocal (ats_ptr_type, tmp12) ;
ATSlocal (ats_ptr_type, tmp13) ;
ATSlocal (ats_ptr_type, tmp14) ;
ATSlocal (ats_ptr_type, tmp15) ;
ATSlocal (ats_ptr_type, tmp16) ;

__ats_lab_eval_0:
do {
/* branch: __ats_lab_0 */
__ats_lab_0_0:
if (((ats_sum_ptr_type)arg0)->tag != 0) { goto __ats_lab_1_0 ; }
__ats_lab_0_1:
tmp0 = arg0 ;
break ;

/* branch: __ats_lab_1 */
__ats_lab_1_0:
if (((ats_sum_ptr_type)arg0)->tag != 1) { goto __ats_lab_2_0 ; }
__ats_lab_1_1:
tmp0 = arg0 ;
break ;

/* branch: __ats_lab_2 */
__ats_lab_2_0:
// if (((ats_sum_ptr_type)arg0)->tag != 2) { ats_deadcode_failure_handle () ; }
__ats_lab_2_1:
tmp1 = ats_caselptrlab_mac(anairiats_sum_0, arg0, atslab_0) ;
tmp2 = ats_caselptrlab_mac(anairiats_sum_0, arg0, atslab_1) ;
tmp3 = eval_0 (tmp1) ;
tmp4 = ats_selsin_mac(tmp3, atslab_1) ;
tmp5 = eval_0 (tmp2) ;
tmp6 = ats_selsin_mac(tmp5, atslab_1) ;
do {
/* branch: __ats_lab_3 */
__ats_lab_3_0:
if (((ats_sum_ptr_type)tmp4)->tag != 2) { goto __ats_lab_4_0 ; }
tmp7 = ats_caselptrlab_mac(anairiats_sum_0, tmp4, atslab_0) ;
if (((ats_sum_ptr_type)tmp7)->tag != 0) { goto __ats_lab_4_0 ; }
__ats_lab_3_1:
tmp8 = ats_caselptrlab_mac(anairiats_sum_0, tmp4, atslab_1) ;
tmp0 = tmp8 ;
break ;

/* branch: __ats_lab_4 */
__ats_lab_4_0:
if (((ats_sum_ptr_type)tmp4)->tag != 2) { goto __ats_lab_5_0 ; }
tmp9 = ats_caselptrlab_mac(anairiats_sum_0, tmp4, atslab_0) ;
if (((ats_sum_ptr_type)tmp9)->tag != 2) { goto __ats_lab_5_0 ; }
tmp10 = ats_caselptrlab_mac(anairiats_sum_0, tmp9, atslab_0) ;
if (((ats_sum_ptr_type)tmp10)->tag != 1) { goto __ats_lab_5_0 ; }
__ats_lab_4_1:
tmp11 = ats_caselptrlab_mac(anairiats_sum_0, tmp9, atslab_1) ;
tmp12 = ats_caselptrlab_mac(anairiats_sum_0, tmp4, atslab_1) ;
tmp14 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
((ats_sum_ptr_type)tmp14)->tag = 2 ;
ats_selptrset_mac(anairiats_sum_0, tmp14, atslab_0, tmp11) ;
ats_selptrset_mac(anairiats_sum_0, tmp14, atslab_1, tmp6) ;
tmp15 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
((ats_sum_ptr_type)tmp15)->tag = 2 ;
ats_selptrset_mac(anairiats_sum_0, tmp15, atslab_0, tmp12) ;
ats_selptrset_mac(anairiats_sum_0, tmp15, atslab_1, tmp6) ;
tmp13 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
((ats_sum_ptr_type)tmp13)->tag = 2 ;
ats_selptrset_mac(anairiats_sum_0, tmp13, atslab_0, tmp14) ;
ats_selptrset_mac(anairiats_sum_0, tmp13, atslab_1, tmp15) ;
arg0 = tmp13 ;
goto __ats_lab_eval_0 ; // tail call
break ;

/* branch: __ats_lab_5 */
__ats_lab_5_0:
if (((ats_sum_ptr_type)tmp4)->tag != 0) { goto __ats_lab_6_0 ; }
__ats_lab_5_1:
tmp0 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
((ats_sum_ptr_type)tmp0)->tag = 2 ;
ats_selptrset_mac(anairiats_sum_0, tmp0, atslab_0, tmp4) ;
ats_selptrset_mac(anairiats_sum_0, tmp0, atslab_1, tmp6) ;
break ;

/* branch: __ats_lab_6 */
__ats_lab_6_0:
if (((ats_sum_ptr_type)tmp4)->tag != 1) { goto __ats_lab_7_0 ; }
__ats_lab_6_1:
tmp0 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
((ats_sum_ptr_type)tmp0)->tag = 2 ;
ats_selptrset_mac(anairiats_sum_0, tmp0, atslab_0, tmp4) ;
ats_selptrset_mac(anairiats_sum_0, tmp0, atslab_1, tmp6) ;
break ;

/* branch: __ats_lab_7 */
__ats_lab_7_0:
if (((ats_sum_ptr_type)tmp4)->tag != 2) { ats_caseof_failure_handle ("/home/hwxi/Research/ATS-Anairiats/doc/EXAMPLE/VSTTE2012/problem2/problem2.dats: 17790(line=636, offs=7) -- 18635(line=656, offs=74)") ; }
tmp16 = ats_caselptrlab_mac(anairiats_sum_0, tmp4, atslab_0) ;
if (((ats_sum_ptr_type)tmp16)->tag != 1) { ats_caseof_failure_handle ("/home/hwxi/Research/ATS-Anairiats/doc/EXAMPLE/VSTTE2012/problem2/problem2.dats: 17790(line=636, offs=7) -- 18635(line=656, offs=74)") ; }
__ats_lab_7_1:
tmp0 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
((ats_sum_ptr_type)tmp0)->tag = 2 ;
ats_selptrset_mac(anairiats_sum_0, tmp0, atslab_0, tmp4) ;
ats_selptrset_mac(anairiats_sum_0, tmp0, atslab_1, tmp6) ;
break ;
} while (0) ;
break ;
} while (0) ;
return (tmp0) ;
} /* end of [eval_0] */

/*
// /home/hwxi/Research/ATS-Anairiats/doc/EXAMPLE/VSTTE2012/problem2/problem2.dats: 19000(line=671, offs=11) -- 19120(line=676, offs=4)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__reduction (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp17) ;

__ats_lab_ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__reduction:
tmp17 = eval_0 (arg0) ;
return (tmp17) ;
} /* end of [ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__reduction] */

/*
// /home/hwxi/Research/ATS-Anairiats/doc/EXAMPLE/VSTTE2012/problem2/problem2.dats: 20838(line=741, offs=5) -- 22084(line=782, offs=8)
*/
ATSstaticdec()
ats_ptr_type
eval_cmplt_2 (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp18) ;
ATSlocal (ats_ptr_type, tmp19) ;
ATSlocal (ats_ptr_type, tmp20) ;
ATSlocal (ats_ptr_type, tmp21) ;
ATSlocal (ats_ptr_type, tmp22) ;
ATSlocal (ats_ptr_type, tmp23) ;
ATSlocal (ats_ptr_type, tmp24) ;
ATSlocal (ats_ptr_type, tmp25) ;
ATSlocal (ats_ptr_type, tmp26) ;
ATSlocal (ats_ptr_type, tmp27) ;
ATSlocal (ats_ptr_type, tmp28) ;
ATSlocal (ats_ptr_type, tmp29) ;
ATSlocal (ats_ptr_type, tmp30) ;
ATSlocal (ats_ptr_type, tmp31) ;
ATSlocal (ats_ptr_type, tmp32) ;

__ats_lab_eval_cmplt_2:
do {
/* branch: __ats_lab_8 */
__ats_lab_8_0:
if (((ats_sum_ptr_type)arg0)->tag != 0) { goto __ats_lab_9_0 ; }
__ats_lab_8_1:
tmp18 = (ats_sum_ptr_type)(&ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__K_0) ;
break ;

/* branch: __ats_lab_9 */
__ats_lab_9_0:
if (((ats_sum_ptr_type)arg0)->tag != 1) { goto __ats_lab_10_0 ; }
__ats_lab_9_1:
tmp18 = (ats_sum_ptr_type)(&ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__S_1) ;
break ;

/* branch: __ats_lab_10 */
__ats_lab_10_0:
// if (((ats_sum_ptr_type)arg0)->tag != 2) { ats_deadcode_failure_handle () ; }
__ats_lab_10_1:
tmp19 = ats_caselptrlab_mac(anairiats_sum_0, arg0, atslab_0) ;
tmp20 = ats_caselptrlab_mac(anairiats_sum_0, arg0, atslab_1) ;
tmp21 = eval_cmplt_2 (tmp19) ;
tmp22 = eval_cmplt_2 (tmp20) ;
do {
/* branch: __ats_lab_11 */
__ats_lab_11_0:
if (((ats_sum_ptr_type)tmp21)->tag != 2) { goto __ats_lab_12_0 ; }
tmp23 = ats_caselptrlab_mac(anairiats_sum_0, tmp21, atslab_0) ;
if (((ats_sum_ptr_type)tmp23)->tag != 0) { goto __ats_lab_12_0 ; }
__ats_lab_11_1:
tmp24 = ats_caselptrlab_mac(anairiats_sum_0, tmp21, atslab_1) ;
tmp18 = tmp24 ;
break ;

/* branch: __ats_lab_12 */
__ats_lab_12_0:
if (((ats_sum_ptr_type)tmp21)->tag != 2) { goto __ats_lab_13_0 ; }
tmp25 = ats_caselptrlab_mac(anairiats_sum_0, tmp21, atslab_0) ;
if (((ats_sum_ptr_type)tmp25)->tag != 2) { goto __ats_lab_13_0 ; }
tmp26 = ats_caselptrlab_mac(anairiats_sum_0, tmp25, atslab_0) ;
if (((ats_sum_ptr_type)tmp26)->tag != 1) { goto __ats_lab_13_0 ; }
__ats_lab_12_1:
tmp27 = ats_caselptrlab_mac(anairiats_sum_0, tmp25, atslab_1) ;
tmp28 = ats_caselptrlab_mac(anairiats_sum_0, tmp21, atslab_1) ;
tmp30 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
((ats_sum_ptr_type)tmp30)->tag = 2 ;
ats_selptrset_mac(anairiats_sum_0, tmp30, atslab_0, tmp27) ;
ats_selptrset_mac(anairiats_sum_0, tmp30, atslab_1, tmp22) ;
tmp31 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
((ats_sum_ptr_type)tmp31)->tag = 2 ;
ats_selptrset_mac(anairiats_sum_0, tmp31, atslab_0, tmp28) ;
ats_selptrset_mac(anairiats_sum_0, tmp31, atslab_1, tmp22) ;
tmp29 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
((ats_sum_ptr_type)tmp29)->tag = 2 ;
ats_selptrset_mac(anairiats_sum_0, tmp29, atslab_0, tmp30) ;
ats_selptrset_mac(anairiats_sum_0, tmp29, atslab_1, tmp31) ;
arg0 = tmp29 ;
goto __ats_lab_eval_cmplt_2 ; // tail call
break ;

/* branch: __ats_lab_13 */
__ats_lab_13_0:
if (((ats_sum_ptr_type)tmp21)->tag != 0) { goto __ats_lab_14_0 ; }
__ats_lab_13_1:
tmp18 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
((ats_sum_ptr_type)tmp18)->tag = 2 ;
ats_selptrset_mac(anairiats_sum_0, tmp18, atslab_0, tmp21) ;
ats_selptrset_mac(anairiats_sum_0, tmp18, atslab_1, tmp22) ;
break ;

/* branch: __ats_lab_14 */
__ats_lab_14_0:
if (((ats_sum_ptr_type)tmp21)->tag != 1) { goto __ats_lab_15_0 ; }
__ats_lab_14_1:
tmp18 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
((ats_sum_ptr_type)tmp18)->tag = 2 ;
ats_selptrset_mac(anairiats_sum_0, tmp18, atslab_0, tmp21) ;
ats_selptrset_mac(anairiats_sum_0, tmp18, atslab_1, tmp22) ;
break ;

/* branch: __ats_lab_15 */
__ats_lab_15_0:
// if (((ats_sum_ptr_type)tmp21)->tag != 2) { ats_deadcode_failure_handle () ; }
tmp32 = ats_caselptrlab_mac(anairiats_sum_0, tmp21, atslab_0) ;
// if (((ats_sum_ptr_type)tmp32)->tag != 1) { ats_deadcode_failure_handle () ; }
__ats_lab_15_1:
tmp18 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
((ats_sum_ptr_type)tmp18)->tag = 2 ;
ats_selptrset_mac(anairiats_sum_0, tmp18, atslab_0, tmp21) ;
ats_selptrset_mac(anairiats_sum_0, tmp18, atslab_1, tmp22) ;
break ;
} while (0) ;
break ;
} while (0) ;
return (tmp18) ;
} /* end of [eval_cmplt_2] */

/*
// /home/hwxi/Research/ATS-Anairiats/doc/EXAMPLE/VSTTE2012/problem2/problem2.dats: 22543(line=806, offs=17) -- 22633(line=808, offs=4)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__reduction_cmplt (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp33) ;

__ats_lab_ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__reduction_cmplt:
tmp33 = eval_cmplt_2 (arg0) ;
return (tmp33) ;
} /* end of [ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__reduction_cmplt] */

/*
// /home/hwxi/Research/ATS-Anairiats/doc/EXAMPLE/VSTTE2012/problem2/problem2.dats: 22950(line=821, offs=5) -- 23135(line=828, offs=6)
*/
ATSstaticdec()
ats_void_type
print_term_4 (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp34) ;
ATSlocal (ats_ptr_type, tmp35) ;
ATSlocal (ats_ptr_type, tmp36) ;
// ATSlocal_void (tmp37) ;
// ATSlocal_void (tmp38) ;
// ATSlocal_void (tmp39) ;

__ats_lab_print_term_4:
do {
/* branch: __ats_lab_16 */
__ats_lab_16_0:
if (((ats_sum_ptr_type)arg0)->tag != 0) { goto __ats_lab_17_0 ; }
__ats_lab_16_1:
/* tmp34 = */ atspre_print_string (ATSstrcst("K")) ;
break ;

/* branch: __ats_lab_17 */
__ats_lab_17_0:
if (((ats_sum_ptr_type)arg0)->tag != 1) { goto __ats_lab_18_0 ; }
__ats_lab_17_1:
/* tmp34 = */ atspre_print_string (ATSstrcst("S")) ;
break ;

/* branch: __ats_lab_18 */
__ats_lab_18_0:
// if (((ats_sum_ptr_type)arg0)->tag != 2) { ats_deadcode_failure_handle () ; }
__ats_lab_18_1:
tmp35 = ats_caselptrlab_mac(anairiats_sum_0, arg0, atslab_0) ;
tmp36 = ats_caselptrlab_mac(anairiats_sum_0, arg0, atslab_1) ;
/* tmp37 = */ atspre_print_string (ATSstrcst("(")) ;
/* tmp38 = */ print_term_4 (tmp35) ;
/* tmp39 = */ atspre_print_string (ATSstrcst(")")) ;
arg0 = tmp36 ;
goto __ats_lab_print_term_4 ; // tail call
break ;
} while (0) ;
return /* (tmp34) */ ;
} /* end of [print_term_4] */

/*
// /home/hwxi/Research/ATS-Anairiats/doc/EXAMPLE/VSTTE2012/problem2/problem2.dats: 23212(line=834, offs=6) -- 23378(line=838, offs=2)
*/
ATSglobaldec()
ats_void_type
mainats () {
/* local vardec */
// ATSlocal_void (tmp40) ;
ATSlocal (ats_ptr_type, tmp41) ;
ATSlocal (ats_ptr_type, tmp42) ;
ATSlocal (ats_ptr_type, tmp43) ;
ATSlocal (ats_ptr_type, tmp44) ;
ATSlocal (ats_ptr_type, tmp45) ;
ATSlocal (ats_ptr_type, tmp46) ;
ATSlocal (ats_ptr_type, tmp47) ;
ATSlocal (ats_ptr_type, tmp48) ;
ATSlocal (ats_ptr_type, tmp49) ;
ATSlocal (ats_ptr_type, tmp50) ;
// ATSlocal_void (tmp51) ;
// ATSlocal_void (tmp52) ;

__ats_lab_mainats:
tmp43 = (ats_sum_ptr_type)(&ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__S_1) ;
tmp44 = (ats_sum_ptr_type)(&ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__K_0) ;
tmp42 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
((ats_sum_ptr_type)tmp42)->tag = 2 ;
ats_selptrset_mac(anairiats_sum_0, tmp42, atslab_0, tmp43) ;
ats_selptrset_mac(anairiats_sum_0, tmp42, atslab_1, tmp44) ;
tmp45 = (ats_sum_ptr_type)(&ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__K_0) ;
tmp41 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
((ats_sum_ptr_type)tmp41)->tag = 2 ;
ats_selptrset_mac(anairiats_sum_0, tmp41, atslab_0, tmp42) ;
ats_selptrset_mac(anairiats_sum_0, tmp41, atslab_1, tmp45) ;
tmp48 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
((ats_sum_ptr_type)tmp48)->tag = 2 ;
ats_selptrset_mac(anairiats_sum_0, tmp48, atslab_0, tmp41) ;
ats_selptrset_mac(anairiats_sum_0, tmp48, atslab_1, tmp41) ;
tmp49 = (ats_sum_ptr_type)(&ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__K_0) ;
tmp47 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
((ats_sum_ptr_type)tmp47)->tag = 2 ;
ats_selptrset_mac(anairiats_sum_0, tmp47, atslab_0, tmp48) ;
ats_selptrset_mac(anairiats_sum_0, tmp47, atslab_1, tmp49) ;
tmp46 = ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__reduction (tmp47) ;
tmp50 = ats_selsin_mac(tmp46, atslab_1) ;
/* tmp51 = */ atspre_print_string (ATSstrcst("((I)I)K --> ")) ;
/* tmp52 = */ print_term_4 (tmp50) ;
/* tmp40 = */ atspre_print_newline () ;
return /* (tmp40) */ ;
} /* end of [mainats] */

/* static load function */

ats_void_type
ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__staload () {
static int ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__staload_flag) return ;
ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__staload_flag = 1 ;

ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__K_0.tag = 0 ;
ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__S_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__App_2.tag = 2 ;
return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
// extern ats_int_type ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__dynload () {
// ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */

/* marking external values for GC */

/* code for dynamic loading */
return ;
} /* end of [dynload function] */

int main (int argc, char *argv[]) {
ATS_GC_INIT() ;
mainats_prelude() ;
ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem2_2problem2_2edats__dynload() ;
mainats((ats_int_type)argc, (ats_ptr_type)argv) ;
return (0) ;
} /* end of main */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [problem2_dats.c] */
