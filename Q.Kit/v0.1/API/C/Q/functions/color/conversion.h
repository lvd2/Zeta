/* Q Kit API - functions/color.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2015 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Q_functions_color_H__
#define __Q_functions_color_H__

#include <Q/macros/value.h>

#define Q_R		Q_32BIT_0
#define Q_G		Q_32BIT_1
#define Q_B		Q_32BIT_2
#define Q_A		Q_32BIT_3
#define Q_R_MASK	Q_32BIT_0_MASK
#define Q_G_MASK	Q_32BIT_1_MASK
#define Q_B_MASK	Q_32BIT_2_MASK
#define Q_A_MASK	Q_32BIT_3_MASK

#if Q_INT32_ENDIANNESS == Q_ENDIANNESS_BIG
#	define Q_GREYSCALE_MULTIPLIER 0x01010100
#elif Q_INT32_ENDIANNESS == Q_ENDIANNESS_LITTLE
#	define Q_GREYSCALE_MULTIPLIER 0x00010101
#endif

#ifndef Q_COLOR_EXPORT
#	define Q_COLOR_EXPORT Q_INLINE
#endif

/* MARK: - RGBA 8 8 8 8 */


/*
	argb_8_8_8_8
	argb_4_4_4_4
	argb_1_5_5_5

	rgba_8_8_8_8
	rgba_4_4_4_4
	rgba_5_5_5_1

	rgb_5_6_5
	i_8


*/

#if Q_CPU_ENDIANNESS != Q_CPU_INTEGER_ENDIANNESS(16BIT) || Q_CPU_ENDIANNESS != Q_CPU_ENDIANNESS(32BIT)
#	error "There is no support for multi-endian CPU in color functions."
#endif

#if Q_CPU_ENDIANNESS == Q_ENDIANNESS_BIG

	Q_INLINE quint32 q_argb_8_8_8_8_to_rgba_8_8_8_8(quint32 color)
		{return (color << 8) | (color >> 24);}


	Q_INLINE quint32 q_rgba_8_8_8_8_to_argb_8_8_8_8(quint32 color)
		{return (color >> 8) | (color << 24);}


	Q_INLINE quint16 q_rgba_8_8_8_8_to_rgba_4_4_4_4(quint32 color)
		{
		return	((color >> 16) & 0xF000) | /* R */
			((color >> 12) & 0x0F00) | /* G */
			((color >>  8) & 0x00F0) | /* B */
			((color >>  4) & 0x000F);  /* A */
		}


	Q_INLINE quint16 q_rgba_8_8_8_8_to_rgba_5_5_5_1(quint32 color)
		{
		return	((color >> 16) & 0xF800) | /* R */
			((color >> 13) & 0x07C0) | /* G */
			((color >> 10) & 0x003E) | /* B */
			((color >>  7) & 0x0001);  /* A */
		}


	Q_INLINE quint16 q_rgba_8_8_8_8_to_rgb_5_6_5(quint32 color)
		{
		return	((color >> 16) & 0xF800) | /* R */
			((color >> 13) & 0x07E0) | /* G */
			((color >> 11) & 0x001F);  /* B */
		}


	Q_INLINE quint8 q_rgba_8_8_8_8_to_i8(quint32 color)
		{
		return	((color >> 24) + ((color >> 16) & 255) + ((color >> 8) & 255))
			/ 3;
		}




#elif Q_CPU_ENDIANNESS == Q_ENDIANNESS_LITTLE

#endif





Q_INLINE
quint16 q_rgba_8_8_8_8_to_rgba_5_5_5_1(quint32 color)
	{
	return	((((color >>  0) & 0xFF) >> 3) << 11) |	/* R */
		((((color >>  8) & 0xFF) >> 3) <<  6) |	/* G */
		((((color >> 16) & 0xFF) >> 3) <<  1) |	/* B */
		((((color >> 24) & 0xFF) >> 7) <<  0);	/* A */
	}


Q_INLINE
quint8 q_rgba_8_8_8_8_to_i_8(quint32 color)
	{return	(Q_R(color) + Q_G(color) + Q_B(color)) / 3;}


Q_INLINE
quint32 q_rgba_8_8_8_8_plus_rgb(quint32 color, quint32 rgb)
	{
	return	Q_MBA(color, rgb, Q_R_MASK) |
		Q_MBA(color, rgb, Q_G_MASK) |
		Q_MBA(color, rgb, Q_B_MASK) |
		(color &	  Q_A_MASK);
	}


Q_COLOR_EXPORT
quint32 q_rgba_8_8_8_8_minus_rgb(quint32 color, quint32 rgb)
	{
	return	Q_MBS(color, rgb, Q_R_MASK) |
		Q_MBS(color, rgb, Q_G_MASK) |
		Q_MBS(color, rgb, Q_B_MASK) |
		(color &	  Q_A_MASK);
	}


Q_COLOR_EXPORT
quint32 q_rgba_8_8_8_8_plus_a(quint32 color, quint32 a)
	{
	return	Q_MBA(color, a, Q_A_MASK) |
		(color & (Q_R_MASK | Q_G_MASK | Q_B_MASK));
	}


Q_COLOR_EXPORT
quint32 q_rgba_8_8_8_8_minus_a(quint32 color, quint32 a)
	{
	return	Q_MBS(color, a, Q_A_MASK) |
		(color & (Q_R_MASK | Q_G_MASK | Q_B_MASK));
	}


Q_COLOR_EXPORT
quint32 q_rgba_8_8_8_8_plus_rgba(quint32 color, quint32 rgba)
	{
	return	Q_MBA(color, rgba, Q_R_MASK) |
		Q_MBA(color, rgba, Q_G_MASK) |
		Q_MBA(color, rgba, Q_B_MASK) |
		Q_MBA(color, rgba, Q_A_MASK);
	}


Q_COLOR_EXPORT
quint32 q_rgba_8_8_8_8_minus_rgba(quint32 color, quint32 rgba)
	{
	return	Q_MBS(color, rgba, Q_R_MASK) |
		Q_MBS(color, rgba, Q_G_MASK) |
		Q_MBS(color, rgba, Q_B_MASK) |
		Q_MBS(color, rgba, Q_A_MASK);
	}


Q_COLOR_EXPORT
quint32 q_rgba_8_8_8_8_negative(quint32 color)
	{return (color & Q_A_MASK) | (~color & (Q_R_MASK | Q_G_MASK | Q_B_MASK));}


Q_COLOR_EXPORT
quint32 q_rgba_8_8_8_8_grayscale(quint32 color)
	{return q_rgba_8_8_8_8_to_i_8(color) * Q_GREYSCALE_MULTIPLIER;}


Q_COLOR_EXPORT
quint32 q_rgba_8_8_8_8_monochrome(
	quint32 color,
	quint32 base_color
)
	{
	quint32 i = 0xFF - q_rgba_8_8_8_8_to_i_8(color);

	return	Q_MBS(color, i, Q_R_MASK) |
		Q_MBS(color, i, Q_G_MASK) |
		Q_MBS(color, i, Q_B_MASK) |
		(color &	Q_A_MASK);
	}


#define Q_A		Q_32BIT_0
#define Q_R		Q_32BIT_1
#define Q_G		Q_32BIT_2
#define Q_B		Q_32BIT_3
#define Q_A_MASK	Q_32BIT_0_MASK
#define Q_R_MASK	Q_32BIT_1_MASK
#define Q_G_MASK	Q_32BIT_2_MASK
#define Q_B_MASK	Q_32BIT_3_MASK

#if Q_INT32_ENDIANNESS == Q_ENDIANNESS_BIG
#	define Q_GREYSCALE_MIRROR_MASK 0x00010101
#elif Q_INT32_ENDIANNESS == Q_ENDIANNESS_LITTLE
#	define Q_GREYSCALE_MIRROR_MASK 0x01010100
#endif



/* MARK: - ARGB 8 8 8 8 */



/*
typedef struct {
	qdouble red;
	qdouble green;
	qdouble blue;
	qdouble alpha;
} QColor;




Q_INLINE QColor q__color_monochrome(QColor object, QColor base_color)
	{
	qdouble shadow = Q_BIGGER_OF_3(color.red, color.green, color.blue);

	object.red   = (object.red   > shadow) ? object.red   - shadow : 0;
	object.green = (object.green > shadow) ? object.green - shadow : 0;
	object.blue  = (object.blue  > shadow) ? object.blue  - shadow : 0;

	return object;
	}


Q_INLINE QColor q__color_grayscale(QColor object)
	{
	qdouble light = (object.red + object.green + object.blue) / 3;

	return (QColor){light, light, light, object.alpha};
	}




#define Q_COLOR_APPLY_MONOCROME(color, base_color, shadow)					\
	shadow	    = Q_BIGGER_OF_3(color.red, color.green, color.blue);			\
	color.red   = (color.red   > shadow) ? color.red   - shadow : 0;			\
	color.green = (color.green > shadow) ? color.green - shadow : 0;			\
	color.blue  = (color.blue  > shadow) ? color.blue  - shadow : 0;

#define Q_COLOR_APPLY_BLENDING(color, blending, shadow)
	shadow = 255 - blending.alpha;
	color.red = (float)(blending.red / 255) * (float)blending.alpha + 

	(((ARGB32)((((float)(*block & 0xFF0000	)) / 0xFF0000) * (float)blending.alpha)) & 0xFF0000) + (((ARGB32)((((float)(*block2 & 0xFF0000	)) / 0xFF0000) * (float)(shadow >> 8)))  & 0xFF0000) |
	(((ARGB32)((((float)(*block & 0xFF00	)) /   0xFF00) * (float)blending.alpha)) &   0xFF00) + (((ARGB32)((((float)(*block2 & 0xFF00	)) /   0xFF00) * (float)(shadow >> 16))) &   0xFF00) |
	(((ARGB32)((((float)(*block & 0xFF	)) /	 0xFF) * (float)blending.alpha)) &     0xFF) + (((ARGB32)((((float)(*block2 & 0xFF	)) /	 0xFF) * (float)(shadow >> 24))) &     0xFF);

*/

#endif /* __Q_functions_color_H__ */