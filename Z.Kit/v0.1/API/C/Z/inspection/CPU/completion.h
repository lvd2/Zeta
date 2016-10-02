/* Z Kit C API - inspection/CPU/completion.h
 _____ 	_______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_|
Copyright © 2006-2016 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef Z_CPU_HAS_MMU
#	define Z_CPU_HAS_MMU FALSE
#endif

#ifndef Z_CPU_HAS_FPU
#	define Z_CPU_HAS_FPU FALSE
#endif

#ifndef Z_CPU_HAS_INTEGER_8BIT
#	define Z_CPU_HAS_INTEGER_8BIT FALSE
#endif

#ifndef Z_CPU_HAS_INTEGER_16BIT
#	define Z_CPU_HAS_INTEGER_16BIT FALSE
#endif

#ifndef Z_CPU_HAS_INTEGER_32BIT
#	define Z_CPU_HAS_INTEGER_32BIT FALSE
#endif

#ifndef Z_CPU_HAS_INTEGER_64BIT
#	define Z_CPU_HAS_INTEGER_64BIT FALSE
#endif

#ifndef Z_CPU_HAS_INTEGER_128BIT
#	define Z_CPU_HAS_INTEGER_128BIT FALSE
#endif

#if Z_CPU_INTEGER_ENDIANNESS != Z_ENDIANNESS_MIXED

#	define Z_CPU_INTEGER_ENDIANNESS_16BIT  Z_CPU_INTEGER_ENDIANNESS
#	define Z_CPU_INTEGER_ENDIANNESS_32BIT  Z_CPU_INTEGER_ENDIANNESS
#	define Z_CPU_INTEGER_ENDIANNESS_64BIT  Z_CPU_INTEGER_ENDIANNESS
#	define Z_CPU_INTEGER_ENDIANNESS_128BIT Z_CPU_INTEGER_ENDIANNESS

#endif

#if defined(Z_CPU_INTEGER_ENDIANNESS_16BIT) && Z_CPU_INTEGER_ENDIANNESS_16BIT == Z_ENDIANNESS_MIXED
#	undef Z_CPU_INTEGER_ENDIANNESS_16BIT
#endif

#if !defined(Z_CPU_INTEGER_ENDIANNESS_16BIT) && defined(Z_COMPILER_INTEGER_ENDIANNESS_16BIT)
#	define Z_CPU_INTEGER_ENDIANNESS_16BIT Z_COMPILER_INTEGER_ENDIANNESS_16BIT
#endif

#if defined(Z_CPU_INTEGER_ENDIANNESS_32BIT) && Z_CPU_INTEGER_ENDIANNESS_32BIT == Z_ENDIANNESS_MIXED
#	undef Z_CPU_INTEGER_ENDIANNESS_32BIT
#endif

#if !defined(Z_CPU_INTEGER_ENDIANNESS_32BIT) && defined(Z_COMPILER_INTEGER_ENDIANNESS_32BIT)
#	define Z_CPU_INTEGER_ENDIANNESS_32BIT Z_COMPILER_INTEGER_ENDIANNESS_32BIT
#endif

#if defined(Z_CPU_INTEGER_ENDIANNESS_64BIT) && Z_CPU_INTEGER_ENDIANNESS_64BIT == Z_ENDIANNESS_MIXED
#	undef Z_CPU_INTEGER_ENDIANNESS_64BIT
#endif

#if !defined(Z_CPU_INTEGER_ENDIANNESS_64BIT) && defined(Z_COMPILER_INTEGER_ENDIANNESS_64BIT)
#	define Z_CPU_INTEGER_ENDIANNESS_64BIT Z_COMPILER_INTEGER_ENDIANNESS_64BIT
#endif

#if defined(Z_CPU_INTEGER_ENDIANNESS_128BIT) && Z_CPU_INTEGER_ENDIANNESS_128BIT == Z_ENDIANNESS_MIXED
#	undef Z_CPU_INTEGER_ENDIANNESS_128BIT
#endif

#if !defined(Z_CPU_INTEGER_ENDIANNESS_128BIT) && defined(Z_COMPILER_INTEGER_ENDIANNESS_128BIT)
#	define Z_CPU_INTEGER_ENDIANNESS_128BIT Z_COMPILER_INTEGER_ENDIANNESS_128BIT
#endif

#ifdef Z_CPU_INTEGER_FORMAT

#	if Z_CPU_INTEGER_FORMAT == Z_INTEGER_FORMAT_2S_COMPLEMENT

#		define Z_CPU_INTEGER_FORMAT_8BIT   Z_VALUE_FORMAT_8BIT_2S_COMPLEMENT_INTEGER
#		define Z_CPU_INTEGER_FORMAT_16BIT  Z_VALUE_FORMAT_16BIT_2S_COMPLEMENT_INTEGER
#		define Z_CPU_INTEGER_FORMAT_32BIT  Z_VALUE_FORMAT_32BIT_2S_COMPLEMENT_INTEGER
#		define Z_CPU_INTEGER_FORMAT_64BIT  Z_VALUE_FORMAT_64BIT_2S_COMPLEMENT_INTEGER
#		define Z_CPU_INTEGER_FORMAT_128BIT Z_VALUE_FORMAT_128BIT_2S_COMPLEMENT_INTEGER

#	elif Z_CPU_INTEGER_FORMAT == Z_INTEGER_FORMAT_1S_COMPLEMENT

#		define Z_CPU_INTEGER_FORMAT_8BIT   Z_VALUE_FORMAT_8BIT_1S_COMPLEMENT_INTEGER
#		define Z_CPU_INTEGER_FORMAT_16BIT  Z_VALUE_FORMAT_16BIT_1S_COMPLEMENT_INTEGER
#		define Z_CPU_INTEGER_FORMAT_32BIT  Z_VALUE_FORMAT_32BIT_1S_COMPLEMENT_INTEGER
#		define Z_CPU_INTEGER_FORMAT_64BIT  Z_VALUE_FORMAT_64BIT_1S_COMPLEMENT_INTEGER
#		define Z_CPU_INTEGER_FORMAT_128BIT Z_VALUE_FORMAT_128BIT_1S_COMPLEMENT_INTEGER

#	endif

#endif

/* inspection/CPU/completion.h EOF */
