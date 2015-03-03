/* Q Kit API - formats/floating point/IEEE 754.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2015 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Q_formats_floating_point_IEEE_754_Ha__
#define __Q_formats_floating_point_IEEE_754_Ha__

/* MARK: - binary16 */

#define Q_IEEE_754_BINARY16_BITS			    16
#define Q_IEEE_754_BINARY16_BIAS			    0xF
#define Q_IEEE_754_BINARY16_EPSILON			    0.00097656
#define Q_IEEE_754_BINARY16_MINIMUM			    5.96046448e-08
#define Q_IEEE_754_BINARY16_MAXIMUM			    65504.0
#define Q_IEEE_754_BINARY16_NORMALIZED_MINIMUM		    6.10351562e-05
#define Q_IEEE_754_BINARY16_DECIMAL_DIGITS		    2
#define Q_IEEE_754_BINARY16_MANTISSA_OFFSET		    0
#define Q_IEEE_754_BINARY16_MANTISSA_BITS		    10
#define Q_IEEE_754_BINARY16_MANTISSA_DIGITS		    11
#define Q_IEEE_754_BINARY16_EXPONENT_OFFSET		    10
#define Q_IEEE_754_BINARY16_EXPONENT_BITS		    5
#define Q_IEEE_754_BINARY16_EXPONENT_RADIX		    2
#define Q_IEEE_754_BINARY16_EXPONENT_MINIMUM		    -13
#define Q_IEEE_754_BINARY16_EXPONENT_MAXIMUM		    16
#define Q_IEEE_754_BINARY16_EXPONENT_10_MINIMUM		    -4
#define Q_IEEE_754_BINARY16_EXPONENT_10_MAXIMUM		    4
#define Q_IEEE_754_BINARY16_SIGN_OFFSET			    15
#define Q_IEEE_754_BINARY16_SIGN_BITS			    1

/* MARK: - binary32 */

#define Q_IEEE_754_BINARY32_BITS			    32
#define Q_IEEE_754_BINARY32_BIAS			    127 /* Added to exponent. */
#define Q_IEEE_754_BINARY32_EPSILON			    1.19209290e-07
#define Q_IEEE_754_BINARY32_MINIMUM			    1.17549435e-38
#define Q_IEEE_754_BINARY32_MAXIMUM			    3.40282347e+38
#define Q_IEEE_754_BINARY32_DECIMAL_DIGITS		    6
#define Q_IEEE_754_BINARY32_MANTISSA_OFFSET		    0
#define Q_IEEE_754_BINARY32_MANTISSA_BITS		    23
#define Q_IEEE_754_BINARY32_MANTISSA_DIGITS		    24
#define Q_IEEE_754_BINARY32_EXPONENT_OFFSET		    23
#define Q_IEEE_754_BINARY32_EXPONENT_BITS		    8
#define Q_IEEE_754_BINARY32_EXPONENT_RADIX		    2
#define Q_IEEE_754_BINARY32_EXPONENT_MINIMUM		    -126
#define Q_IEEE_754_BINARY32_EXPONENT_MAXIMUM		    127
#define Q_IEEE_754_BINARY32_EXPONENT_10_MINIMUM		    -45
#define Q_IEEE_754_BINARY32_EXPONENT_10_MAXIMUM		    39
#define Q_IEEE_754_BINARY32_SIGN_OFFSET			    31
#define Q_IEEE_754_BINARY32_SIGN_BITS			    1

/* MARK: - binary64 */

#define Q_IEEE_754_BINARY64_BITS			    64
#define Q_IEEE_754_BINARY64_BIAS			    1023 /* Added to exponent. */
#define Q_IEEE_754_BINARY64_EPSILON			    2.2204460492503131e-16
#define Q_IEEE_754_BINARY64_MINIMUM			    2.2250738585072014e-308
#define Q_IEEE_754_BINARY64_MAXIMUM			    1.7976931348623157e+308
#define Q_IEEE_754_BINARY64_DECIMAL_DIGITS		    15
#define Q_IEEE_754_BINARY64_MANTISSA_OFFSET		    0
#define Q_IEEE_754_BINARY64_MANTISSA_BITS		    52
#define Q_IEEE_754_BINARY64_MANTISSA_DIGITS		    53
#define Q_IEEE_754_BINARY64_EXPONENT_OFFSET		    52
#define Q_IEEE_754_BINARY64_EXPONENT_BITS		    11
#define Q_IEEE_754_BINARY64_EXPONENT_RADIX		    2
#define Q_IEEE_754_BINARY64_EXPONENT_MINIMUM		    -1022
#define Q_IEEE_754_BINARY64_EXPONENT_MAXIMUM		    1023
#define Q_IEEE_754_BINARY64_EXPONENT_10_MINIMUM		    -323
#define Q_IEEE_754_BINARY64_EXPONENT_10_MAXIMUM		    309
#define Q_IEEE_754_BINARY64_SIGN_OFFSET			    63
#define Q_IEEE_754_BINARY64_SIGN_BITS			    1

/* MARK: - binary128 */

#define Q_IEEE_754_BINARY128_BITS			    128
#define Q_IEEE_754_BINARY128_BIAS			    16383
#define Q_IEEE_754_BINARY128_EPSILON			    1.92592994438723585305597794258492732e-34
#define Q_IEEE_754_BINARY128_MINIMUM			    3.36210314311209350626267781732175260e-4932
#define Q_IEEE_754_BINARY128_MAXIMUM			    1.18973149535723176508575932662800702e+4932
#define Q_IEEE_754_BINARY128_DECIMAL_DIGITS		    33
#define Q_IEEE_754_BINARY128_MANTISSA_OFFSET		    0
#define Q_IEEE_754_BINARY128_MANTISSA_BITS		    112
#define Q_IEEE_754_BINARY128_MANTISSA_DIGITS		    113
#define Q_IEEE_754_BINARY128_EXPONENT_OFFSET		    112
#define Q_IEEE_754_BINARY128_EXPONENT_BITS		    15
#define Q_IEEE_754_BINARY128_EXPONENT_RADIX		    2
#define Q_IEEE_754_BINARY128_EXPONENT_MINIMUM		    -16382
#define Q_IEEE_754_BINARY128_EXPONENT_MAXIMUM		    16383
#define Q_IEEE_754_BINARY128_EXPONENT_10_MINIMUM	    -4965
#define Q_IEEE_754_BINARY128_EXPONENT_10_MAXIMUM	    4933
#define Q_IEEE_754_BINARY128_SIGN_OFFSET		    127
#define Q_IEEE_754_BINARY128_SIGN_BITS			    1

/* MARK: - decimal32 */

#define Q_IEEE_754_DECIMAL32_BITS			    32
#define Q_IEEE_754_DECIMAL32_EPSILON			    1e-6
#define Q_IEEE_754_DECIMAL32_MINIMUM_POSITIVE		    1e-95
#define Q_IEEE_754_DECIMAL32_MINIMUM_POSITIVE_DENORMALIZED  0.000001e-95
#define Q_IEEE_754_DECIMAL32_MAXIMUM			    9.999999e+96
#define Q_IEEE_754_DECIMAL32_MANTISSA_DIGITS		    7
#define Q_IEEE_754_DECIMAL32_EXPONENT_MINIMUM		    -95
#define Q_IEEE_754_DECIMAL32_EXPONENT_MAXIMUM		    96

/* MARK: - decimal64 */

#define Q_IEEE_754_DECIMAL64_BITS			    64
#define Q_IEEE_754_DECIMAL64_EPSILON			    1e-15
#define Q_IEEE_754_DECIMAL64_MINIMUM_POSITIVE		    1e-383
#define Q_IEEE_754_DECIMAL64_MINIMUM_POSITIVE_DENORMALIZED  0.000000000000001e-383
#define Q_IEEE_754_DECIMAL64_MAXIMUM			    9.999999999999999e+384
#define Q_IEEE_754_DECIMAL64_MANTISSA_DIGITS		    16
#define Q_IEEE_754_DECIMAL64_EXPONENT_MINIMUM		    -383
#define Q_IEEE_754_DECIMAL64_EXPONENT_MAXIMUM		    384

/* MARK: - decimal128 */

#define Q_IEEE_754_DECIMAL128_BITS			    128
#define Q_IEEE_754_DECIMAL128_EPSILON			    1e-33
#define Q_IEEE_754_DECIMAL128_MINIMUM_POSITIVE		    1e-6143
#define Q_IEEE_754_DECIMAL128_MINIMUM_POSITIVE_DENORMALIZED 0.000000000000000000000000000000001e-6143
#define Q_IEEE_754_DECIMAL128_MAXIMUM			    9.999999999999999999999999999999999e+6144
#define Q_IEEE_754_DECIMAL128_MANTISSA_DIGITS		    34
#define Q_IEEE_754_DECIMAL128_EXPONENT_MINIMUM		    -6143
#define Q_IEEE_754_DECIMAL128_EXPONENT_MAXIMUM		    6144

#endif /* __Q_formats_floating_point_IEEE_754_Ha__ */

#ifndef Q_INSPECTING

#	ifndef __Q_formats_floating_point_IEEE_754_Hb__
#	define __Q_formats_floating_point_IEEE_754_Hb__

#	include <Q/types/base.h>
#	include <Q/macros/bit field.h>

	/*typedef Q_STRICT_STRUCTURE (
	) QIEEE754Binary16;*/

	Q_DEFINE_STRICT_STRUCTURE (Q_BIT_FIELD(3) (
		quint32 sign	 : 1,
		quint32 exponent : 8,
		quint32 mantissa :23
	)) QIEEE754Binary32;

	Q_DEFINE_STRICT_STRUCTURE (Q_BIT_FIELD(4) (
		quint32 sign	  : 1,
		quint32 exponent  : 8,
		quint32 quiet_nan : 1,
		quint32 mantissa  :22
	)) QIEEE754Binary32NaN;

	Q_DEFINE_STRICT_STRUCTURE (
		/* To Do */
	) QIEEE754Decimal32;

	Q_DEFINE_STRICT_STRUCTURE (Q_BIT_FIELD(3) (
		quint64 negative : 1,
		quint64 exponent :11,
		quint64 mantissa :52
	)) QIEEE754Binary64;

	Q_DEFINE_STRICT_STRUCTURE (Q_BIT_FIELD(4) (
		quint64 negative  : 1,
		quint64 exponent  :11,
		quint64 quiet_nan : 1,
		quint64 mantissa  :51
	)) QIEEE754Binary64NaN;

	/*Q_DEFINE_STRICT_STRUCTURE (
	) QIEEE754Decimal64;*/

#	endif /* __Q_formats_floating_point_IEEE_754_Hb__ */

#endif