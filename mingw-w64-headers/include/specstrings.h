/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */
#define __specstrings

#ifdef __cplusplus
#ifndef __nothrow
#define __nothrow __declspec(nothrow)
#endif
extern "C" {
#else
#ifndef __nothrow
#define __nothrow
#endif
#endif

#define __deref_in
#define __deref_in_ecount(size)
#define __deref_in_bcount(size)

#define __deref_in_opt
#define __deref_in_ecount_opt(size)
#define __deref_in_bcount_opt(size)

#define __deref_opt_in
#define __deref_opt_in_ecount(size)
#define __deref_opt_in_bcount(size)

#define __deref_opt_in_opt
#define __deref_opt_in_ecount_opt(size)
#define __deref_opt_in_bcount_opt(size)

#define __out_awcount(expr,size)
#define __in_awcount(expr,size)

/* Renamed __null to __null_ms for avoiding private keyword conflicts between
   gcc and MS world.  */
#define __null_ms
#define __notnull
#define __maybenull
#define __readonly
#define __notreadonly
#define __maybereadonly
#define __valid
#define __notvalid
#define __maybevalid
#define __readableTo(extent)
#define __elem_readableTo(size)
#define __byte_readableTo(size)
#define __writableTo(size)
#define __elem_writableTo(size)
#define __byte_writableTo(size)
#define __deref
#define __pre
#define __post
#define __precond(expr)
#define __postcond(expr)
#define __exceptthat
#define __execeptthat
#define __inner_success(expr)
#define __inner_checkReturn
#define __inner_typefix(ctype)
#define __inner_override
#define __inner_callback
#define __inner_blocksOn(resource)
#define __inner_fallthrough_dec
#define __inner_fallthrough
#define __refparam
#define __inner_control_entrypoint(category)
#define __inner_data_entrypoint(category)

#define __ecount(size)
#define __bcount(size)

#define __in
#define __in_opt
#define __in_nz
#define __in_nz_opt
#define __in_z
#define __in_z_opt
#define __in_ecount(size)
#define __in_ecount_nz(size)
#define __in_ecount_z(size)
#define __in_bcount(size)
#define __in_bcount_z(size)
#define __in_bcount_nz(size)
#define __in_ecount_opt(size)
#define __in_bcount_opt(size)
#define __in_ecount_z_opt(size)
#define __in_bcount_z_opt(size)
#define __in_ecount_nz_opt(size)
#define __in_bcount_nz_opt(size)

#define __out
#define __out_ecount(size)
#define __out_z
#define __out_nz
#define __out_nz_opt
#define __out_z_opt
#define __out_ecount_part(size,length)
#define __out_ecount_full(size)
#define __out_ecount_nz(size)
#define __out_ecount_z(size)
#define __out_ecount_part_z(size,length)
#define __out_ecount_full_z(size)
#define __out_bcount(size)
#define __out_bcount_part(size,length)
#define __out_bcount_full(size)
#define __out_bcount_z(size)
#define __out_bcount_part_z(size,length)
#define __out_bcount_full_z(size)
#define __out_bcount_nz(size)

#define __inout
#define __inout_ecount(size)
#define __inout_bcount(size)
#define __inout_ecount_part(size,length)
#define __inout_bcount_part(size,length)
#define __inout_ecount_full(size)
#define __inout_bcount_full(size)
#define __inout_z
#define __inout_ecount_z(size)
#define __inout_bcount_z(size)
#define __inout_nz
#define __inout_ecount_nz(size)
#define __inout_bcount_nz(size)
#define __ecount_opt(size)
#define __bcount_opt(size)
#define __out_opt
#define __out_ecount_opt(size)
#define __out_bcount_opt(size)
#define __out_ecount_part_opt(size,length)
#define __out_bcount_part_opt(size,length)
#define __out_ecount_full_opt(size)
#define __out_bcount_full_opt(size)
#define __out_ecount_z_opt(size)
#define __out_bcount_z_opt(size)
#define __out_ecount_part_z_opt(size,length)
#define __out_bcount_part_z_opt(size,length)
#define __out_ecount_full_z_opt(size)
#define __out_bcount_full_z_opt(size)
#define __out_ecount_nz_opt(size)
#define __out_bcount_nz_opt(size)
#define __inout_opt
#define __inout_ecount_opt(size)
#define __inout_bcount_opt(size)
#define __inout_ecount_part_opt(size,length)
#define __inout_bcount_part_opt(size,length)
#define __inout_ecount_full_opt(size)
#define __inout_bcount_full_opt(size)
#define __inout_z_opt
#define __inout_ecount_z_opt(size)
#define __inout_bcount_z_opt(size)
#define __inout_nz_opt
#define __inout_ecount_nz_opt(size)
#define __inout_bcount_nz_opt(size)
#define __deref_ecount(size)
#define __deref_bcount(size)
#define __deref_out
#define __deref_out_ecount(size)
#define __deref_out_bcount(size)
#define __deref_out_ecount_part(size,length)
#define __deref_out_bcount_part(size,length)
#define __deref_out_ecount_full(size)
#define __deref_out_bcount_full(size)
#define __deref_out_z
#define __deref_out_ecount_z(size)
#define __deref_out_bcount_z(size)
#define __deref_out_nz
#define __deref_out_ecount_nz(size)
#define __deref_out_bcount_nz(size)
#define __deref_inout
#define __deref_inout_ecount(size)
#define __deref_inout_bcount(size)
#define __deref_inout_ecount_part(size,length)
#define __deref_inout_bcount_part(size,length)
#define __deref_inout_ecount_full(size)
#define __deref_inout_bcount_full(size)
#define __deref_inout_z
#define __deref_inout_ecount_z(size)
#define __deref_inout_bcount_z(size)
#define __deref_inout_nz
#define __deref_inout_ecount_nz(size)
#define __deref_inout_bcount_nz(size)
#define __deref_ecount_opt(size)
#define __deref_bcount_opt(size)
#define __deref_out_opt
#define __deref_out_ecount_opt(size)
#define __deref_out_bcount_opt(size)
#define __deref_out_ecount_part_opt(size,length)
#define __deref_out_bcount_part_opt(size,length)
#define __deref_out_ecount_full_opt(size)
#define __deref_out_bcount_full_opt(size)
#define __deref_out_z_opt
#define __deref_out_ecount_z_opt(size)
#define __deref_out_bcount_z_opt(size)
#define __deref_out_nz_opt
#define __deref_out_ecount_nz_opt(size)
#define __deref_out_bcount_nz_opt(size)
#define __deref_inout_opt
#define __deref_inout_ecount_opt(size)
#define __deref_inout_bcount_opt(size)
#define __deref_inout_ecount_part_opt(size,length)
#define __deref_inout_bcount_part_opt(size,length)
#define __deref_inout_ecount_full_opt(size)
#define __deref_inout_bcount_full_opt(size)
#define __deref_inout_z_opt
#define __deref_inout_ecount_z_opt(size)
#define __deref_inout_bcount_z_opt(size)
#define __deref_inout_nz_opt
#define __deref_inout_ecount_nz_opt(size)
#define __deref_inout_bcount_nz_opt(size)
#define __deref_opt_ecount(size)
#define __deref_opt_bcount(size)
#define __deref_opt_out
#define __deref_opt_out_z
#define __deref_opt_out_ecount(size)
#define __deref_opt_out_bcount(size)
#define __deref_opt_out_ecount_part(size,length)
#define __deref_opt_out_bcount_part(size,length)
#define __deref_opt_out_ecount_full(size)
#define __deref_opt_out_bcount_full(size)
#define __deref_opt_inout
#define __deref_opt_inout_ecount(size)
#define __deref_opt_inout_bcount(size)
#define __deref_opt_inout_ecount_part(size,length)
#define __deref_opt_inout_bcount_part(size,length)
#define __deref_opt_inout_ecount_full(size)
#define __deref_opt_inout_bcount_full(size)
#define __deref_opt_inout_z
#define __deref_opt_inout_ecount_z(size)
#define __deref_opt_inout_bcount_z(size)
#define __deref_opt_inout_nz
#define __deref_opt_inout_ecount_nz(size)
#define __deref_opt_inout_bcount_nz(size)
#define __deref_opt_ecount_opt(size)
#define __deref_opt_bcount_opt(size)
#define __deref_opt_out_opt
#define __deref_opt_out_ecount_opt(size)
#define __deref_opt_out_bcount_opt(size)
#define __deref_opt_out_ecount_part_opt(size,length)
#define __deref_opt_out_bcount_part_opt(size,length)
#define __deref_opt_out_ecount_full_opt(size)
#define __deref_opt_out_bcount_full_opt(size)
#define __deref_opt_out_z_opt
#define __deref_opt_out_ecount_z_opt(size)
#define __deref_opt_out_bcount_z_opt(size)
#define __deref_opt_out_nz_opt
#define __deref_opt_out_ecount_nz_opt(size)
#define __deref_opt_out_bcount_nz_opt(size)
#define __deref_opt_inout_opt
#define __deref_opt_inout_ecount_opt(size)
#define __deref_opt_inout_bcount_opt(size)
#define __deref_opt_inout_ecount_part_opt(size,length)
#define __deref_opt_inout_bcount_part_opt(size,length)
#define __deref_opt_inout_ecount_full_opt(size)
#define __deref_opt_inout_bcount_full_opt(size)
#define __deref_opt_inout_z_opt
#define __deref_opt_inout_ecount_z_opt(size)
#define __deref_opt_inout_bcount_z_opt(size)
#define __deref_opt_inout_nz_opt
#define __deref_opt_inout_ecount_nz_opt(size)
#define __deref_opt_inout_bcount_nz_opt(size)

#define __success(expr)
#define __nullterminated
#define __nullnullterminated
#define __reserved
#define __checkReturn
#define __typefix(ctype)
#define __override
#define __callback
#define __format_string
#define __blocksOn(resource)
#define __control_entrypoint(category)
#define __data_entrypoint(category)

#ifndef __fallthrough
#define __fallthrough
#endif

#ifndef __analysis_assume
#define __analysis_assume(expr)
#endif

#ifndef __CLR_OR_THIS_CALL
#define __CLR_OR_THIS_CALL
#endif

#ifndef __CLRCALL_OR_CDECL
#define __CLRCALL_OR_CDECL __cdecl
#endif

#ifndef __STDC_WANT_SECURE_LIB__
#define __STDC_WANT_SECURE_LIB__ 0
#endif

#ifndef _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_DEPRECATE
#endif

#ifndef RC_INVOKED
#ifndef _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 0
#endif
#ifndef _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT 0
#endif
#ifndef _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES
#define _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES 0
#endif
#endif

#ifndef DECLSPEC_ADDRSAFE
#define DECLSPEC_ADDRSAFE
#endif

#ifdef __cplusplus
}
#endif
