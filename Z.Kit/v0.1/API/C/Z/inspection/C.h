/* Z Kit C API - inspection/C.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2016 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_inspection_C_H__
#define __Z_inspection_C_H__

#include <Z/macros/inspection.h>

#if Z_MUST_USE(C11)
#	include <Z/inspection/private/C/C11.h>

#elif Z_MUST_USE(C99)
#	include <Z/inspection/private/C/C99.h>

#elif Z_MUST_USE(C94)
#	include <Z/inspection/private/C/C94.h>

#elif Z_MUST_USE(C90)
#	include <Z/inspection/private/C/C90.h>

#elif Z_MUST_USE(C89)
#	include <Z/inspection/private/C/C89.h>

#elif defined(__STDC__)
#	if defined(__STDC_VERSION__)

#		if __STDC_VERSION__ >= 201112L
#			include <Z/inspection/private/C/C11.h>

#		elif __STDC_VERSION__ >= 199901L
#			include <Z/inspection/private/C/C99.h>

#		elif __STDC_VERSION__ >= 199409L
#			include <Z/inspection/private/C/C94.h>
#		else
#			include <Z/inspection/private/C/C90.h>
#		endif
#	else
#		include <Z/inspection/private/C/C89.h>
#	endif
#else
#	include <Z/inspection/private/C/C89.h>
#endif

#define Z_C_HAS(	       WHAT ) (defined Z_C_HAS_##WHAT		     )
#define Z_C_HAS_TYPE(	       WHICH) (defined Z_C_HAS_TYPE_##WHICH	     )
#define Z_C_HAS_TYPE_QUALIFIER(WHICH) (defined Z_C_HAS_TYPE_QUALIFIER_##WHICH)
#define Z_C_HAS_STORAGE_CLASS( WHICH) (defined Z_C_HAS_STORAGE_CLASS_##WHICH )
#define Z_C_HAS_SPECIFIER(     WHICH) (defined Z_C_HAS_SPECIFIER_##WHICH     )
#define Z_C_HAS_OPERATOR(      WHICH) (defined Z_C_HAS_OPERATOR_##WHICH	     )
#define Z_C_HAS_LITERAL(       WHICH) (defined Z_C_HAS_LITERAL_##WHICH	     )

#endif /* __Z_inspection_C_H__ */
