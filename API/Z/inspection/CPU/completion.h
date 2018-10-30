/* Z Kit - inspection/CPU/completion.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2018 Manuel Sainz de Baranda y Goñi.

This library is free software: you can redistribute it and/or modify it
under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with this library.  If not, see <http://www.gnu.org/licenses/>. */

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

#ifndef Z_CPU_HAS_REAL_IEEE_754_BINARY16
#	define Z_CPU_HAS_REAL_IEEE_754_BINARY16 FALSE
#endif

#ifndef Z_CPU_HAS_REAL_IEEE_754_BINARY32
#	define Z_CPU_HAS_REAL_IEEE_754_BINARY32 FALSE
#endif

#ifndef Z_CPU_HAS_REAL_IEEE_754_BINARY64
#	define Z_CPU_HAS_REAL_IEEE_754_BINARY64 FALSE
#endif

#ifndef Z_CPU_HAS_REAL_IEEE_754_BINARY128
#	define Z_CPU_HAS_REAL_IEEE_754_BINARY128 FALSE
#endif

#ifndef Z_CPU_INTEGER_FORMAT
#	define Z_CPU_INTEGER_FORMAT Z_INTEGER_FORMAT_2S_COMPLEMENT
#endif

/* inspection/CPU/completion.h EOF */
