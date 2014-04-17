/* Q API - formats/floating point/Microsoft Visual C++.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2014 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU General Public License v3. */

#ifndef __Q_formats_floating_point_Microsoft_Visual_CPP_Ha__
#define __Q_formats_floating_point_Microsoft_Visual_CPP_Ha__

#include <Q/formats/floating point/IEEE 754.h>

/* MARK: - float */

#define Q_MICROSOFT_VISUAL_CPP_FLOAT_BITS			Q_IEEE_754_BINARY32_BITS
#define Q_MICROSOFT_VISUAL_CPP_FLOAT_BIAS			Q_IEEE_754_BINARY32_BIAS
#define Q_MICROSOFT_VISUAL_CPP_FLOAT_EPSILON			1.192092896e-07
#define Q_MICROSOFT_VISUAL_CPP_FLOAT_MINIMUM			1.175494351e-38
#define Q_MICROSOFT_VISUAL_CPP_FLOAT_MAXIMUM			3.402823466e+38
#define Q_MICROSOFT_VISUAL_CPP_FLOAT_NORMALIZED_MINIMUM		Q_IEEE_754_BINARY32_NORMALIZED_MINIMUM
#define Q_MICROSOFT_VISUAL_CPP_FLOAT_DECIMAL_DIGITS		Q_IEEE_754_BINARY32_DECIMAL_DIGITS
#define Q_MICROSOFT_VISUAL_CPP_FLOAT_MANTISSA_OFFSET		Q_IEEE_754_BINARY32_MANTISSA_OFFSET
#define Q_MICROSOFT_VISUAL_CPP_FLOAT_BITS			Q_IEEE_754_BINARY32_MANTISSA_BITS
#define Q_MICROSOFT_VISUAL_CPP_FLOAT_MANTISSA_DIGITS		Q_IEEE_754_BINARY32_MANTISSA_DIGITS
#define Q_MICROSOFT_VISUAL_CPP_FLOAT_EXPONENT_OFFSET		Q_IEEE_754_BINARY32_EXPONENT_OFFSET
#define Q_MICROSOFT_VISUAL_CPP_FLOAT_EXPONENT_BITS		Q_IEEE_754_BINARY32_EXPONENT_BITS
#define Q_MICROSOFT_VISUAL_CPP_FLOAT_EXPONENT_RADIX		Q_IEEE_754_BINARY32_EXPONENT_RADIX
#define Q_MICROSOFT_VISUAL_CPP_FLOAT_EXPONENT_MINIMUM		-125
#define Q_MICROSOFT_VISUAL_CPP_FLOAT_EXPONENT_MAXIMUM		128
#define Q_MICROSOFT_VISUAL_CPP_FLOAT_EXPONENT_10_MINIMUM	-37
#define Q_MICROSOFT_VISUAL_CPP_FLOAT_EXPONENT_10_MAXIMUM	38
#define Q_MICROSOFT_VISUAL_CPP_FLOAT_SIGN_OFFSET		Q_IEEE_754_BINARY32_SIGN_OFFSET
#define Q_MICROSOFT_VISUAL_CPP_FLOAT_SIGN_BITS			Q_IEEE_754_BINARY32_SIGN_BITS

/* MARK: - double */

#define MICROSOFT_VISUAL_CPP_DOUBLE_BITS			Q_IEEE_754_BINARY64_BITS
#define MICROSOFT_VISUAL_CPP_DOUBLE_BIAS			Q_IEEE_754_BINARY64_BIAS
#define MICROSOFT_VISUAL_CPP_DOUBLE_EPSILON			Q_IEEE_754_BINARY64_EPSILON
#define MICROSOFT_VISUAL_CPP_DOUBLE_MINIMUM			Q_IEEE_754_BINARY64_MINIMUM
#define MICROSOFT_VISUAL_CPP_DOUBLE_MAXIMUM			1.7976931348623158e+308
#define MICROSOFT_VISUAL_CPP_DOUBLE_DECIMAL_DIGITS		Q_IEEE_754_BINARY64_DECIMAL_DIGITS
#define MICROSOFT_VISUAL_CPP_DOUBLE_MANTISSA_OFFSET		Q_IEEE_754_BINARY64_MANTISSA_OFFSET
#define MICROSOFT_VISUAL_CPP_DOUBLE_MANTISSA_BITS		Q_IEEE_754_BINARY64_MANTISSA_BITS
#define MICROSOFT_VISUAL_CPP_DOUBLE_MANTISSA_DIGITS		Q_IEEE_754_BINARY64_MANTISSA_DIGITS
#define MICROSOFT_VISUAL_CPP_DOUBLE_EXPONENT_OFFSET		Q_IEEE_754_BINARY64_EXPONENT_OFFSET
#define MICROSOFT_VISUAL_CPP_DOUBLE_EXPONENT_BITS		Q_IEEE_754_BINARY64_EXPONENT_BITS
#define MICROSOFT_VISUAL_CPP_DOUBLE_EXPONENT_RADIX		Q_IEEE_754_BINARY64_EXPONENT_RADIX
#define MICROSOFT_VISUAL_CPP_DOUBLE_EXPONENT_MINIMUM		-1021
#define MICROSOFT_VISUAL_CPP_DOUBLE_EXPONENT_MAXIMUM		1024
#define MICROSOFT_VISUAL_CPP_DOUBLE_EXPONENT_10_MINIMUM		-307
#define MICROSOFT_VISUAL_CPP_DOUBLE_EXPONENT_10_MAXIMUM		308
#define MICROSOFT_VISUAL_CPP_DOUBLE_SIGN_OFFSET			Q_IEEE_754_BINARY64_SIGN_OFFSET
#define MICROSOFT_VISUAL_CPP_DOUBLE_SIGN_BITS			Q_IEEE_754_BINARY64_SIGN_BITS

#endif /* __Q_formats_floating_point_Microsoft_Visual_CPP_Ha__ */

#ifndef Q_INSPECTING

#	ifndef __Q_formats_floating_point_Microsoft_Visual_CPP_Hb__
#	define __Q_formats_floating_point_Microsoft_Visual_CPP_Hb__

	typedef QIEEE754Binary32 QMicrosoftVisualCPPFloat;
	typedef QIEEE754Binary64 QMicrosoftVisualCPPDouble;

#	endif /* __Q_formats_floating_point_Microsoft_Visual_CPP_Hb__ */

#endif
