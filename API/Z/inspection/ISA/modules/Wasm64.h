/* Zeta API - Z/inspection/ISA/modules/Wasm64.h
 ______ ____________  ___
|__   /|  ___|__  __|/   \
  /  /_|  __|  |  | /  *  \
 /_____|_____| |__|/__/ \__\
Copyright (C) 2006-2022 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef Z_inspection_ISA_modules_Wasm64_H
#define Z_inspection_ISA_modules_Wasm64_H

#define Z_ISA_IS_WASM64			 TRUE
#define Z_ISA_NAME			 Z_ISA_NAME_WASM64
#define Z_ISA_HAS_INTEGRAL_8BIT		 TRUE
#define Z_ISA_HAS_INTEGRAL_16BIT	 TRUE
#define Z_ISA_HAS_INTEGRAL_32BIT	 TRUE
#define Z_ISA_HAS_INTEGRAL_64BIT	 TRUE
#define Z_ISA_HAS_REAL_IEEE_754_BINARY32 TRUE
#define Z_ISA_HAS_REAL_IEEE_754_BINARY64 TRUE
#define Z_ISA_INTEGRAL_ENDIANNESS	 Z_ENDIANNESS_LITTLE
#define Z_ISA_INTEGER_FORMAT		 Z_INTEGER_FORMAT_2S_COMPLEMENT
#define Z_ISA_BITS_TOP_INTEGRAL		 64
#define Z_ISA_BITS_ADDRESSING		 64

#endif /* Z_inspection_ISA_modules_Wasm64_H */
