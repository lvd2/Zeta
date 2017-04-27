/* Z Kit C API - inspection/language.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright © 2006-2017 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_inspection_language_H__
#define __Z_inspection_language_H__

#include <Z/keys/language.h>
#include <Z/inspection/compiler.h>
#include <Z/inspection/C.h>

#if defined(__cplusplus) && (defined(__OBJC__) || defined(__OBJC2__))

#	include <Z/inspection/C++.h>
#	include <Z/inspection/Objective-C.h>

#	define Z_LANGUAGE Z_LANGUAGE_OBJECTIVE_CPP

#elif defined(__OBJC__) || defined(__OBJC2__)

#	include <Z/inspection/Objective-C.h>

#	define Z_LANGUAGE Z_LANGUAGE_OBJECTIVE_C

#elif defined(__cplusplus)

#	include <Z/inspection/C++.h>

#	define Z_LANGUAGE Z_LANGUAGE_CPP

#else
#	define Z_LANGUAGE Z_LANGUAGE_C
#endif

#if defined(Z_USE_LANGUAGE_STANDARD)

#	define Z_LANGUAGE_HAS(LANGUAGE, WHAT) \
		Z_##LANGUAGE##_HAS_##WHAT

#	define Z_LANGUAGE_HAS_TYPE(LANGUAGE, TYPE) \
		Z_##LANGUAGE##_HAS_TYPE_##TYPE

#	define Z_LANGUAGE_HAS_TYPE_QUALIFIER(LANGUAGE, TYPE_QUALIFIER) \
		Z_##LANGUAGE##_HAS_TYPE_QUALIFIER_##TYPE_QUALIFIER

#	define Z_LANGUAGE_HAS_STORAGE_CLASS(LANGUAGE, STORAGE_CLASS) \
		Z_##LANGUAGE##_HAS_STORAGE_CLASS_##STORAGE_CLASS

#	define Z_LANGUAGE_HAS_SPECIFIER(LANGUAGE, SPECIFIER) \
		Z_##LANGUAGE##_HAS_SPECIFIER_##SPECIFIER

#	define Z_LANGUAGE_HAS_OPERATOR(LANGUAGE, OPERATOR) \
		Z_##LANGUAGE##_HAS_OPERATOR_##OPERATOR

#	define Z_LANGUAGE_HAS_LITERAL(LANGUAGE, LITERAL) \
		Z_##LANGUAGE##_HAS_LITERAL_##LITERAL

#elif defined(Z_USE_SUPPORTED_LANGUAGE_STANDARD)

#	define Z_LANGUAGE_HAS(LANGUAGE, WHAT) \
		(Z_COMPILER_##LANGUAGE##_HAS_##WHAT && Z_##LANGUAGE##_HAS_##WHAT)

#	define Z_LANGUAGE_HAS_TYPE(LANGUAGE, TYPE) \
		(Z_COMPILER_##LANGUAGE##_HAS_TYPE_##TYPE && Z_##LANGUAGE##_HAS_TYPE_##TYPE)

#	define Z_LANGUAGE_HAS_TYPE_QUALIFIER(LANGUAGE, TYPE_QUALIFIER)		\
		(Z_COMPILER_##LANGUAGE##_HAS_TYPE_QUALIFIER_##TYPE_QUALIFIER && \
		 Z_##LANGUAGE##_HAS_TYPE_QUALIFIER_##TYPE_QUALIFIER)

#	define Z_LANGUAGE_HAS_STORAGE_CLASS(LANGUAGE, STORAGE_CLASS)	      \
		(Z_COMPILER_##LANGUAGE##_HAS_STORAGE_CLASS_##STORAGE_CLASS && \
		 Z_##LANGUAGE##_HAS_STORAGE_CLASS_##STORAGE_CLASS)

#	define Z_LANGUAGE_HAS_SPECIFIER(LANGUAGE, SPECIFIER)	      \
		(Z_COMPILER_##LANGUAGE##_HAS_SPECIFIER_##SPECIFIER && \
		 Z_##LANGUAGE##_HAS_SPECIFIER_##SPECIFIER)

#	define Z_LANGUAGE_HAS_OPERATOR(LANGUAGE, OPERATOR)	    \
		(Z_COMPILER_##LANGUAGE##_HAS_OPERATOR_##OPERATOR && \
		 Z_##LANGUAGE##_HAS_OPERATOR_##OPERATOR)

#	define Z_LANGUAGE_HAS_LITERAL(LANGUAGE, LITERAL)	    \
		(Z_COMPILER_##LANGUAGE##_HAS_LITERAL_##LITERAL && \
		 Z_##LANGUAGE##_HAS_LITERAL_##LITERAL)

#else

#	define Z_LANGUAGE_HAS(LANGUAGE, WHAT) \
		Z_COMPILER_##LANGUAGE##_HAS_##WHAT

#	define Z_LANGUAGE_HAS_TYPE(LANGUAGE, TYPE) \
		Z_COMPILER_##LANGUAGE##_HAS_TYPE_##TYPE

#	define Z_LANGUAGE_HAS_TYPE_QUALIFIER(LANGUAGE, TYPE_QUALIFIER) \
		Z_COMPILER_##LANGUAGE##_HAS_TYPE_QUALIFIER_##TYPE_QUALIFIER

#	define Z_LANGUAGE_HAS_STORAGE_CLASS(LANGUAGE, STORAGE_CLASS) \
		Z_COMPILER_##LANGUAGE##_HAS_STORAGE_CLASS_##STORAGE_CLASS

#	define Z_LANGUAGE_HAS_SPECIFIER(LANGUAGE, SPECIFIER) \
		Z_COMPILER_##LANGUAGE##_HAS_SPECIFIER_##SPECIFIER

#	define Z_LANGUAGE_HAS_OPERATOR(LANGUAGE, OPERATOR) \
		Z_COMPILER_##LANGUAGE##_HAS_OPERATOR_##OPERATOR

#	define Z_LANGUAGE_HAS_LITERAL(LANGUAGE, LITERAL) \
		Z_COMPILER_##LANGUAGE##_HAS_LITERAL_##LITERAL

#endif

#endif /* __Z_inspection_language_H__ */
