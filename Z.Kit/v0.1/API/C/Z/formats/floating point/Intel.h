/* Z Kit C API - formats/floating point/Intel.h
 _____ 	_______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_|
Copyright © 2006-2016 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_formats_floating_point_Intel_H__
#define __Z_formats_floating_point_Intel_H__

/* MARK: - Intel Float80 */

#define Z_INTEL_FLOAT80_BITS			80
#define Z_INTEL_FLOAT80_BIAS			16383				/* OK */
#define Z_INTEL_FLOAT80_EPSILON			1.0842021724855044340075e-19	/* OK */
#define Z_INTEL_FLOAT80_MINIMUM			3.3621031431120935062627e-4932	/* OK */
#define Z_INTEL_FLOAT80_MAXIMUM			1.1897314953572317650213e+4932	/* OK */
#define Z_INTEL_FLOAT80_DECIMAL_DIGITS		18		/* OK */
#define Z_INTEL_FLOAT80_SIGNIFICAND_OFFSET	0		/* OK */
#define Z_INTEL_FLOAT80_SIGNIFICAND_BITS	64		/* OK */
#define Z_INTEL_FLOAT80_SIGNIFICAND_DIGITS	64		/* OK */
#define Z_INTEL_FLOAT80_EXPONENT_OFFSET		64		/* OK */
#define Z_INTEL_FLOAT80_EXPONENT_BITS		15
#define Z_INTEL_FLOAT80_EXPONENT_RADIX		2		/* OK */
#define Z_INTEL_FLOAT80_EXPONENT_MINIMUM	-16381		/* OK */
#define Z_INTEL_FLOAT80_EXPONENT_MAXIMUM	16384		/* OK */
#define Z_INTEL_FLOAT80_EXPONENT_10_MINIMUM	-4931		/* OK */
#define Z_INTEL_FLOAT80_EXPONENT_10_MAXIMUM	4932		/* OK */
#define Z_INTEL_FLOAT80_SIGN_OFFSET		79		/* OK */
#define Z_INTEL_FLOAT80_SIGN_BITS		1		/* OK */

#define Z_INTEL_FLOAT96_BITS			96
#define Z_INTEL_FLOAT96_BIAS			Z_INTEL_FLOAT96_BIAS
#define Z_INTEL_FLOAT96_EPSILON			Z_INTEL_FLOAT96_EPSILON
#define Z_INTEL_FLOAT96_MINIMUM			Z_INTEL_FLOAT96_MINIMUM
#define Z_INTEL_FLOAT96_MAXIMUM			Z_INTEL_FLOAT96_MAXIMUM
#define Z_INTEL_FLOAT96_DECIMAL_DIGITS		Z_INTEL_FLOAT96_DECIMAL_DIGITS
#define Z_INTEL_FLOAT96_SIGNIFICAND_OFFSET	
#define Z_INTEL_FLOAT96_SIGNIFICAND_BITS	Z_INTEL_FLOAT96_SIGNIFICAND_BITS
#define Z_INTEL_FLOAT96_SIGNIFICAND_DIGITS	Z_INTEL_FLOAT96_SIGNIFICAND_DIGITS
#define Z_INTEL_FLOAT96_EXPONENT_OFFSET		
#define Z_INTEL_FLOAT96_EXPONENT_BITS		Z_INTEL_FLOAT96_EXPONENT_BITS
#define Z_INTEL_FLOAT96_EXPONENT_RADIX		Z_INTEL_FLOAT96_EXPONENT_RADIX
#define Z_INTEL_FLOAT96_EXPONENT_MINIMUM	Z_INTEL_FLOAT96_EXPONENT_MINIMUM
#define Z_INTEL_FLOAT96_EXPONENT_MAXIMUM	Z_INTEL_FLOAT96_EXPONENT_MAXIMUM
#define Z_INTEL_FLOAT96_EXPONENT_10_MINIMUM	Z_INTEL_FLOAT96_EXPONENT_10_MINIMUM
#define Z_INTEL_FLOAT96_EXPONENT_10_MAXIMUM	Z_INTEL_FLOAT96_EXPONENT_10_MAXIMUM
#define Z_INTEL_FLOAT96_SIGN_OFFSET		
#define Z_INTEL_FLOAT96_SIGN_BITS		Z_INTEL_FLOAT96_SIGN_BITS

#define Z_INTEL_FLOAT128_BITS			128
#define Z_INTEL_FLOAT128_BIAS			Z_INTEL_FLOAT128_BIAS
#define Z_INTEL_FLOAT128_EPSILON		Z_INTEL_FLOAT128_EPSILON
#define Z_INTEL_FLOAT128_MINIMUM		Z_INTEL_FLOAT128_MINIMUM
#define Z_INTEL_FLOAT128_MAXIMUM		Z_INTEL_FLOAT128_MAXIMUM
#define Z_INTEL_FLOAT128_DECIMAL_DIGITS		Z_INTEL_FLOAT128_DECIMAL_DIGITS
#define Z_INTEL_FLOAT128_SIGNIFICAND_OFFSET	
#define Z_INTEL_FLOAT128_SIGNIFICAND_BITS	Z_INTEL_FLOAT128_SIGNIFICAND_BITS
#define Z_INTEL_FLOAT128_SIGNIFICAND_DIGITS	Z_INTEL_FLOAT128_SIGNIFICAND_DIGITS
#define Z_INTEL_FLOAT128_EXPONENT_OFFSET	
#define Z_INTEL_FLOAT128_EXPONENT_BITS		Z_INTEL_FLOAT128_EXPONENT_BITS
#define Z_INTEL_FLOAT128_EXPONENT_RADIX		Z_INTEL_FLOAT128_EXPONENT_RADIX
#define Z_INTEL_FLOAT128_EXPONENT_MINIMUM	Z_INTEL_FLOAT128_EXPONENT_MINIMUM
#define Z_INTEL_FLOAT128_EXPONENT_MAXIMUM	Z_INTEL_FLOAT128_EXPONENT_MAXIMUM
#define Z_INTEL_FLOAT128_EXPONENT_10_MINIMUM	Z_INTEL_FLOAT128_EXPONENT_10_MINIMUM
#define Z_INTEL_FLOAT128_EXPONENT_10_MAXIMUM	Z_INTEL_FLOAT128_EXPONENT_10_MAXIMUM
#define Z_INTEL_FLOAT128_SIGN_OFFSET		
#define Z_INTEL_FLOAT128_SIGN_BITS		Z_INTEL_FLOAT128_SIGN_BITS

#endif /* __Z_formats_floating_point_Intel_H__ */
