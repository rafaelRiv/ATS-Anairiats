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

#include "ats_intinf.cats"
/* external codes at top */

#include "ats_intinf.cats"  /* only needed for [ATS/Geizella] */


ats_void_type
atslib_mpz_out_str_exn (
  ats_ptr_type file
, ats_int_type base // 2 <= base <= 36
, const ats_mpz_ptr_type x
) {
#ifdef HAVE_GMP_H
  size_t n ;
  n = mpz_out_str((FILE*)file, base, (mpz_ptr)x) ;
  if (n == 0) {
    ats_exit_errmsg (1, "exit(ATS): [mpz_out_str] failed.\n") ;
  } // end of [if]
#else // HAVE_GMP_H
  ats_llint_type i ; int r ; char c ;
  i = *(mpz_ptr)x ;
  if (i == 0) fputc ('0', (FILE*)file) ;
  if (i < 0) { fputc ('-', (FILE*)file) ;  i = -i ; }
  while (i > 0) {
    r = i % base ; i = i / base ;
    c = (r < 10 ? '0' + r : 'a' + (r - 10)) ; fputc (c, (FILE*)file) ;
  } // end of [while]
#endif // HAVE_GMP_H
  return ;
} // end of [atslib_mpz_out_str_exn]


/* type definitions */
/* external typedefs */
/* external dynamic constructor declarations */
/* external dynamic constant declarations */
ATSextern_fun(ats_ptr_type, atspre_stdout_get) () ;
ATSextern_fun(ats_void_type, atspre_stdout_view_set) () ;
ATSextern_fun(ats_ptr_type, atspre_stderr_get) () ;
ATSextern_fun(ats_void_type, atspre_stderr_view_set) () ;
ATSextern_fun(ats_ptr_type, atspre_ptr_alloc_tsz) (ats_size_type) ;
ATSextern_fun(ats_ptr_type, atspre_ref_make_view_ptr) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, atslib_fprint_mpz) (ats_ref_type, ats_ref_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e10_2src_2ats_intinf_2esats__fprint_intinf) (ats_ref_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, atsopt_intinf_set_string) (ats_ref_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, atsopt_intinf_set_stringsp) (ats_ref_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, atsopt_intinf_initialize) () ;

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
// ATSstatic_void (statmp22) ;

/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/research/Anairiats/src/ats_intinf.dats: 2543(line=87, offs=17) -- 2744(line=93, offs=4)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e10_2src_2ats_intinf_2esats__intinf_make_int (ats_int_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp0) ;
ATSlocal (ats_ptr_type, tmp1) ;
ATSlocal (ats_ptr_type, tmp2) ;
// ATSlocal_void (tmp3) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_intinf_2esats__intinf_make_int:
tmp1 = atspre_ptr_alloc_tsz (sizeof(ats_mpz_viewt0ype)) ;
tmp2 = ats_selsin_mac(tmp1, atslab_2) ;
/* tmp3 = */ atslib_mpz_init_set_int (tmp2, arg0) ;
tmp0 = atspre_ref_make_view_ptr (tmp2) ;
return (tmp0) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_intinf_2esats__intinf_make_int] */

/*
// /home/hwxi/research/Anairiats/src/ats_intinf.dats: 2907(line=100, offs=20) -- 3111(line=106, offs=4)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e10_2src_2ats_intinf_2esats__intinf_make_string (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp4) ;
ATSlocal (ats_ptr_type, tmp5) ;
ATSlocal (ats_ptr_type, tmp6) ;
// ATSlocal_void (tmp7) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_intinf_2esats__intinf_make_string:
tmp5 = atspre_ptr_alloc_tsz (sizeof(ats_mpz_viewt0ype)) ;
tmp6 = ats_selsin_mac(tmp5, atslab_2) ;
/* tmp7 = */ atsopt_intinf_set_string (tmp6, arg0) ;
tmp4 = atspre_ref_make_view_ptr (tmp6) ;
return (tmp4) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_intinf_2esats__intinf_make_string] */

/*
// /home/hwxi/research/Anairiats/src/ats_intinf.dats: 3283(line=113, offs=22) -- 3489(line=119, offs=4)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e10_2src_2ats_intinf_2esats__intinf_make_stringsp (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp8) ;
ATSlocal (ats_ptr_type, tmp9) ;
ATSlocal (ats_ptr_type, tmp10) ;
// ATSlocal_void (tmp11) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_intinf_2esats__intinf_make_stringsp:
tmp9 = atspre_ptr_alloc_tsz (sizeof(ats_mpz_viewt0ype)) ;
tmp10 = ats_selsin_mac(tmp9, atslab_2) ;
/* tmp11 = */ atsopt_intinf_set_stringsp (tmp10, arg0) ;
tmp8 = atspre_ref_make_view_ptr (tmp10) ;
return (tmp8) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_intinf_2esats__intinf_make_stringsp] */

/*
// /home/hwxi/research/Anairiats/src/ats_intinf.dats: 3569(line=124, offs=15) -- 3683(line=128, offs=4)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_intinf_2esats__fprint_intinf (ats_ref_type arg0, ats_ptr_type arg1) {
/* local vardec */
// ATSlocal_void (tmp12) ;
ATSlocal (ats_ptr_type, tmp13) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_intinf_2esats__fprint_intinf:
tmp13 = ats_selsin_mac(ats_castfn_mac(ats_ptr_type, arg1), atslab_1) ;
/* tmp12 = */ atslib_fprint_mpz (arg0, tmp13) ;
return /* (tmp12) */ ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_intinf_2esats__fprint_intinf] */

/*
// /home/hwxi/research/Anairiats/src/ats_intinf.dats: 3734(line=130, offs=24) -- 3768(line=130, offs=58)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_intinf_2esats__print_intinf (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp14) ;
ATSlocal (ats_ptr_type, tmp15) ;
ATSlocal (ats_ptr_type, tmp16) ;
// ATSlocal_void (tmp17) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_intinf_2esats__print_intinf:
tmp15 = atspre_stdout_get () ;
tmp16 = ats_selsin_mac(tmp15, atslab_1) ;
/* tmp17 = */ ATS_2d0_2e2_2e10_2src_2ats_intinf_2esats__fprint_intinf (tmp16, arg0) ;
/* tmp14 = */ atspre_stdout_view_set () ;
return /* (tmp14) */ ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_intinf_2esats__print_intinf] */

/*
// /home/hwxi/research/Anairiats/src/ats_intinf.dats: 3792(line=131, offs=24) -- 3826(line=131, offs=58)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_intinf_2esats__prerr_intinf (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp18) ;
ATSlocal (ats_ptr_type, tmp19) ;
ATSlocal (ats_ptr_type, tmp20) ;
// ATSlocal_void (tmp21) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_intinf_2esats__prerr_intinf:
tmp19 = atspre_stderr_get () ;
tmp20 = ats_selsin_mac(tmp19, atslab_1) ;
/* tmp21 = */ ATS_2d0_2e2_2e10_2src_2ats_intinf_2esats__fprint_intinf (tmp20, arg0) ;
/* tmp18 = */ atspre_stderr_view_set () ;
return /* (tmp18) */ ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_intinf_2esats__prerr_intinf] */

/* static load function */

extern ats_void_type ATS_2d0_2e2_2e10_2src_2libc_sats_gmp_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_intinf_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_intinf_2edats__staload () {
static int ATS_2d0_2e2_2e10_2src_2ats_intinf_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e10_2src_2ats_intinf_2edats__staload_flag) return ;
ATS_2d0_2e2_2e10_2src_2ats_intinf_2edats__staload_flag = 1 ;

ATS_2d0_2e2_2e10_2src_2libc_sats_gmp_2esats__staload () ;
ATS_2d0_2e2_2e10_2src_2ats_intinf_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type ATS_2d0_2e2_2e10_2src_2ats_intinf_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_intinf_2edats__dynload () {
ATS_2d0_2e2_2e10_2src_2ats_intinf_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e10_2src_2ats_intinf_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
ATS_2d0_2e2_2e10_2prelude_2basics_dyn_2esats__file_mode_lte_w_w_prfck () ;
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */

/* marking external values for GC */

/* code for dynamic loading */
/* statmp22 = */ atsopt_intinf_initialize () ;
return ;
} /* end of [dynload function] */

/* external codes at mid */
/* external codes at bot */


ats_void_type
atsopt_intinf_set_string (
  ats_mpz_ptr_type x, ats_ptr_type s0
) {
  char *s, *si, c0, c1 ;
  int i, base, err ;

  s = s0 ; c0 = s[0] ;

  if (c0 == '\000') {
    atspre_exit_prerrf(1, "exit(ATS): atsopt_intinf_set_str(%s)\n", s) ;
  } // end of [if]

  i = 0 ; base = 10 ;
  if (c0 == '~') { i = 1 ; c1 = s[1] ; } else { c1 = c0 ; }
  if (c1 == '0') {
    base = 8 ; i += 1 ; c1 = s[i] ;

    if (c1 == '\000') {
      mpz_init_set_si ((mpz_ptr)x, 0); return ;
    }

    if (c1 == 'x' || c1 == 'X') { base = 16 ; i += 1 ; }
  }

  if (c0 == '~') {
    i -= 1 ; si = s + i ; c1 = *si ; *si = '-' ;
    err = mpz_init_set_str((mpz_ptr)x, si, base) ;
    *si = c1 ;
  } else {
    si = s + i ;
    err = mpz_init_set_str((mpz_ptr)x, si, base) ;
  } // end of [if]

  if (err < 0) {
    atspre_exit_prerrf(1, "exit(ATS): mpz_init_set_str(%s)\n", s) ;
  } // end of [if]

  // mpz_out_str(stdout, 10, (mpz_ptr)x) ; fprintf (stdout, "\n") ;

  return ;
} /* end of [atsopt_intinf_set_string] */

/* ****** ****** */

ats_void_type
atsopt_intinf_set_stringsp
(
  ats_mpz_ptr_type x, ats_ptr_type s0
) {
  char c ;
  char *s = s0 ;
  while ((c = *s)) {
    if (strchr ("lLuU", c)) break ; else ++s ;
  } // end of [while]

  if (c) {
    *s = '\000' ;
    atsopt_intinf_set_string (x, s0) ;
    *s = c ;
  } else {
    atsopt_intinf_set_string (x, s0) ;
  } // end of [if]

  return ;
} /* end of [atsopt_intinf_set_stringsp] */

/* ****** ****** */
//
// This is necessary to prevent memory leak
//
static
void* atsopt_intinf_malloc
  (size_t sz) { return ATS_MALLOC (sz) ; }
// end of [atsopt_intinf_malloc]

static
void atsopt_intinf_free
  (void* ptr, size_t sz) { ATS_FREE (ptr) ; return ; }
// end of [atsopt_intinf_free]

static
void* atsopt_intinf_realloc (
  void* ptr, size_t sz_old, size_t sz_new
) {
  return ATS_REALLOC (ptr, sz_new) ;
} // end of [atsopt_intinf_realloc]

ats_void_type
atsopt_intinf_initialize
  (/*argumentless*/) {
  mp_set_memory_functions (
    &atsopt_intinf_malloc, &atsopt_intinf_realloc, &atsopt_intinf_free
  ) ; // end of [mp_set_memory_functions]
  return ;
} // end of [atsopt_intinf_initialize]



/* ****** ****** */

/* end of [/home/hwxi/research/Anairiats/bootstrap1/ats_intinf_dats.c] */