/* Z Kit C API - formats/character set/DOS CP862.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright © 2006-2017 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_formats_character_set_DOS_CP862_H__
#define __Z_formats_character_set_DOS_CP862_H__

/* From 00h to 7Fh like ASCII */
#define Z_DOS_CP862_HEBREW_LETTER_ALEF					0x80
#define Z_DOS_CP862_HEBREW_LETTER_BET					0x81
#define Z_DOS_CP862_HEBREW_LETTER_GIMEL					0x82
#define Z_DOS_CP862_HEBREW_LETTER_DALET					0x83
#define Z_DOS_CP862_HEBREW_LETTER_HE					0x84
#define Z_DOS_CP862_HEBREW_LETTER_VAV					0x85
#define Z_DOS_CP862_HEBREW_LETTER_ZAYIN					0x86
#define Z_DOS_CP862_HEBREW_LETTER_HET					0x87
#define Z_DOS_CP862_HEBREW_LETTER_TET					0x88
#define Z_DOS_CP862_HEBREW_LETTER_YOD					0x89
#define Z_DOS_CP862_HEBREW_LETTER_FINAL_KAF				0x8A
#define Z_DOS_CP862_HEBREW_LETTER_KAF					0x8B
#define Z_DOS_CP862_HEBREW_LETTER_LAMED					0x8C
#define Z_DOS_CP862_HEBREW_LETTER_FINAL_MEM				0x8D
#define Z_DOS_CP862_HEBREW_LETTER_MEM					0x8E
#define Z_DOS_CP862_HEBREW_LETTER_FINAL_NUN				0x8F
#define Z_DOS_CP862_HEBREW_LETTER_NUN					0x90
#define Z_DOS_CP862_HEBREW_LETTER_SAMEKH				0x91
#define Z_DOS_CP862_HEBREW_LETTER_AYIN					0x92
#define Z_DOS_CP862_HEBREW_LETTER_FINAL_PE				0x93
#define Z_DOS_CP862_HEBREW_LETTER_PE					0x94
#define Z_DOS_CP862_HEBREW_LETTER_FINAL_TSADI				0x95
#define Z_DOS_CP862_HEBREW_LETTER_TSADI					0x96
#define Z_DOS_CP862_HEBREW_LETTER_QOF					0x97
#define Z_DOS_CP862_HEBREW_LETTER_RESH					0x98
#define Z_DOS_CP862_HEBREW_LETTER_SHIN					0x99
#define Z_DOS_CP862_HEBREW_LETTER_TAV					0x9A
#define Z_DOS_CP862_CENT_SIGN						0x9B
#define Z_DOS_CP862_POUND_SIGN						0x9C
#define Z_DOS_CP862_YEN_SIGN						0x9D
#define Z_DOS_CP862_PESETA_SIGN						0x9E
#define Z_DOS_CP862_LATIN_SMALL_LETTER_F_WITH_HOOK			0x9F
#define Z_DOS_CP862_LATIN_SMALL_LETTER_A_WITH_ACUTE			0xA0
#define Z_DOS_CP862_LATIN_SMALL_LETTER_I_WITH_ACUTE			0xA1
#define Z_DOS_CP862_LATIN_SMALL_LETTER_O_WITH_ACUTE			0xA2
#define Z_DOS_CP862_LATIN_SMALL_LETTER_U_WITH_ACUTE			0xA3
#define Z_DOS_CP862_LATIN_SMALL_LETTER_N_WITH_TILDE			0xA4
#define Z_DOS_CP862_LATIN_CAPITAL_LETTER_N_WITH_TILDE			0xA5
#define Z_DOS_CP862_FEMININE_ORDINAL_INDICATOR				0xA6
#define Z_DOS_CP862_MASCULINE_ORDINAL_INDICATOR				0xA7
#define Z_DOS_CP862_INVERTED_QUESTION_MARK				0xA8
#define Z_DOS_CP862_REVERSED_NOT_SIGN					0xA9
#define Z_DOS_CP862_NOT_SIGN						0xAA
#define Z_DOS_CP862_VULGAR_FRACTION_ONE_HALF				0xAB
#define Z_DOS_CP862_VULGAR_FRACTION_ONE_QUARTER				0xAC
#define Z_DOS_CP862_INVERTED_EXCLAMATION_MARK				0xAD
#define Z_DOS_CP862_LEFT_POINTING_DOUBLE_ANGLE_QUOTATION_MARK		0xAE
#define Z_DOS_CP862_RIGHT_POINTING_DOUBLE_ANGLE_QUOTATION_MARK		0xAF
#define Z_DOS_CP862_LIGHT_SHADE						0xB0
#define Z_DOS_CP862_MEDIUM_SHADE					0xB1
#define Z_DOS_CP862_DARK_SHADE						0xB2
#define Z_DOS_CP862_BOX_DRAWINGS_LIGHT_VERTICAL				0xB3
#define Z_DOS_CP862_BOX_DRAWINGS_LIGHT_VERTICAL_AND_LEFT		0xB4
#define Z_DOS_CP862_BOX_DRAWINGS_VERTICAL_SINGLE_AND_LEFT_DOUBLE	0xB5
#define Z_DOS_CP862_BOX_DRAWINGS_VERTICAL_DOUBLE_AND_LEFT_SINGLE	0xB6
#define Z_DOS_CP862_BOX_DRAWINGS_DOWN_DOUBLE_AND_LEFT_SINGLE		0xB7
#define Z_DOS_CP862_BOX_DRAWINGS_DOWN_SINGLE_AND_LEFT_DOUBLE		0xB8
#define Z_DOS_CP862_BOX_DRAWINGS_DOUBLE_VERTICAL_AND_LEFT		0xB9
#define Z_DOS_CP862_BOX_DRAWINGS_DOUBLE_VERTICAL			0xBA
#define Z_DOS_CP862_BOX_DRAWINGS_DOUBLE_DOWN_AND_LEFT			0xBB
#define Z_DOS_CP862_BOX_DRAWINGS_DOUBLE_UP_AND_LEFT			0xBC
#define Z_DOS_CP862_BOX_DRAWINGS_UP_DOUBLE_AND_LEFT_SINGLE		0xBD
#define Z_DOS_CP862_BOX_DRAWINGS_UP_SINGLE_AND_LEFT_DOUBLE		0xBE
#define Z_DOS_CP862_BOX_DRAWINGS_LIGHT_DOWN_AND_LEFT			0xBF
#define Z_DOS_CP862_BOX_DRAWINGS_LIGHT_UP_AND_RIGHT			0xC0
#define Z_DOS_CP862_BOX_DRAWINGS_LIGHT_UP_AND_HORIZONTAL		0xC1
#define Z_DOS_CP862_BOX_DRAWINGS_LIGHT_DOWN_AND_HORIZONTAL		0xC2
#define Z_DOS_CP862_BOX_DRAWINGS_LIGHT_VERTICAL_AND_RIGHT		0xC3
#define Z_DOS_CP862_BOX_DRAWINGS_LIGHT_HORIZONTAL			0xC4
#define Z_DOS_CP862_BOX_DRAWINGS_LIGHT_VERTICAL_AND_HORIZONTAL		0xC5
#define Z_DOS_CP862_BOX_DRAWINGS_VERTICAL_SINGLE_AND_RIGHT_DOUBLE	0xC6
#define Z_DOS_CP862_BOX_DRAWINGS_VERTICAL_DOUBLE_AND_RIGHT_SINGLE	0xC7
#define Z_DOS_CP862_BOX_DRAWINGS_DOUBLE_UP_AND_RIGHT			0xC8
#define Z_DOS_CP862_BOX_DRAWINGS_DOUBLE_DOWN_AND_RIGHT			0xC9
#define Z_DOS_CP862_BOX_DRAWINGS_DOUBLE_UP_AND_HORIZONTAL		0xCA
#define Z_DOS_CP862_BOX_DRAWINGS_DOUBLE_DOWN_AND_HORIZONTAL		0xCB
#define Z_DOS_CP862_BOX_DRAWINGS_DOUBLE_VERTICAL_AND_RIGHT		0xCC
#define Z_DOS_CP862_BOX_DRAWINGS_DOUBLE_HORIZONTAL			0xCD
#define Z_DOS_CP862_BOX_DRAWINGS_DOUBLE_VERTICAL_AND_HORIZONTAL		0xCE
#define Z_DOS_CP862_BOX_DRAWINGS_UP_SINGLE_AND_HORIZONTAL_DOUBLE	0xCF
#define Z_DOS_CP862_BOX_DRAWINGS_UP_DOUBLE_AND_HORIZONTAL_SINGLE	0xD0
#define Z_DOS_CP862_BOX_DRAWINGS_DOWN_SINGLE_AND_HORIZONTAL_DOUBLE	0xD1
#define Z_DOS_CP862_BOX_DRAWINGS_DOWN_DOUBLE_AND_HORIZONTAL_SINGLE	0xD2
#define Z_DOS_CP862_BOX_DRAWINGS_UP_DOUBLE_AND_RIGHT_SINGLE		0xD3
#define Z_DOS_CP862_BOX_DRAWINGS_UP_SINGLE_AND_RIGHT_DOUBLE		0xD4
#define Z_DOS_CP862_BOX_DRAWINGS_DOWN_SINGLE_AND_RIGHT_DOUBLE		0xD5
#define Z_DOS_CP862_BOX_DRAWINGS_DOWN_DOUBLE_AND_RIGHT_SINGLE		0xD6
#define Z_DOS_CP862_BOX_DRAWINGS_VERTICAL_DOUBLE_AND_HORIZONTAL_SINGLE	0xD7
#define Z_DOS_CP862_BOX_DRAWINGS_VERTICAL_SINGLE_AND_HORIZONTAL_DOUBLE	0xD8
#define Z_DOS_CP862_BOX_DRAWINGS_LIGHT_UP_AND_LEFT			0xD9
#define Z_DOS_CP862_BOX_DRAWINGS_LIGHT_DOWN_AND_RIGHT			0xDA
#define Z_DOS_CP862_FULL_BLOCK						0xDB
#define Z_DOS_CP862_LOWER_HALF_BLOCK					0xDC
#define Z_DOS_CP862_LEFT_HALF_BLOCK					0xDD
#define Z_DOS_CP862_RIGHT_HALF_BLOCK					0xDE
#define Z_DOS_CP862_UPPER_HALF_BLOCK					0xDF
#define Z_DOS_CP862_GREEK_SMALL_LETTER_ALPHA				0xE0
#define Z_DOS_CP862_LATIN_SMALL_LETTER_SHARP_S_GERMAN			0xE1
#define Z_DOS_CP862_GREEK_CAPITAL_LETTER_GAMMA				0xE2
#define Z_DOS_CP862_GREEK_SMALL_LETTER_PI				0xE3
#define Z_DOS_CP862_GREEK_CAPITAL_LETTER_SIGMA				0xE4
#define Z_DOS_CP862_GREEK_SMALL_LETTER_SIGMA				0xE5
#define Z_DOS_CP862_MICRO_SIGN						0xE6
#define Z_DOS_CP862_GREEK_SMALL_LETTER_TAU				0xE7
#define Z_DOS_CP862_GREEK_CAPITAL_LETTER_PHI				0xE8
#define Z_DOS_CP862_GREEK_CAPITAL_LETTER_THETA				0xE9
#define Z_DOS_CP862_GREEK_CAPITAL_LETTER_OMEGA				0xEA
#define Z_DOS_CP862_GREEK_SMALL_LETTER_DELTA				0xEB
#define Z_DOS_CP862_INFINITY						0xEC
#define Z_DOS_CP862_GREEK_SMALL_LETTER_PHI				0xED
#define Z_DOS_CP862_GREEK_SMALL_LETTER_EPSILON				0xEE
#define Z_DOS_CP862_INTERSECTION					0xEF
#define Z_DOS_CP862_IDENTICAL_TO					0xF0
#define Z_DOS_CP862_PLUS_MINUS_SIGN					0xF1
#define Z_DOS_CP862_GREATER_THAN_OR_EQUAL_TO				0xF2
#define Z_DOS_CP862_LESS_THAN_OR_EQUAL_TO				0xF3
#define Z_DOS_CP862_TOP_HALF_INTEGRAL					0xF4
#define Z_DOS_CP862_BOTTOM_HALF_INTEGRAL				0xF5
#define Z_DOS_CP862_DIVISION_SIGN					0xF6
#define Z_DOS_CP862_ALMOST_EQUAL_TO					0xF7
#define Z_DOS_CP862_DEGREE_SIGN						0xF8
#define Z_DOS_CP862_BULLET_OPERATOR					0xF9
#define Z_DOS_CP862_MIDDLE_DOT						0xFA
#define Z_DOS_CP862_SQUARE_ROOT						0xFB
#define Z_DOS_CP862_SUPERSCRIPT_LATIN_SMALL_LETTER_N			0xFC
#define Z_DOS_CP862_SUPERSCRIPT_TWO					0xFD
#define Z_DOS_CP862_BLACK_SQUARE					0xFE
#define Z_DOS_CP862_NO_BREAK_SPACE					0xFF

#define Z_ARRAY_CONTENT_DOS_CP862_TO_UNICODE(_)					\
	_(05D0), _(05D1), _(05D2), _(05D3), _(05D4), _(05D5), _(05D6), _(05D7), \
	_(05D8), _(05D9), _(05DA), _(05DB), _(05DC), _(05DD), _(05DE), _(05DF), \
	_(05E0), _(05E1), _(05E2), _(05E3), _(05E4), _(05E5), _(05E6), _(05E7), \
	_(05E8), _(05E9), _(05EA), _(00A2), _(00A3), _(00A5), _(20A7), _(0192), \
	_(00E1), _(00ED), _(00F3), _(00FA), _(00F1), _(00D1), _(00AA), _(00BA), \
	_(00BF), _(2310), _(00AC), _(00BD), _(00BC), _(00A1), _(00AB), _(00BB), \
	_(2591), _(2592), _(2593), _(2502), _(2524), _(2561), _(2562), _(2556), \
	_(2555), _(2563), _(2551), _(2557), _(255D), _(255C), _(255B), _(2510), \
	_(2514), _(2534), _(252C), _(251C), _(2500), _(253C), _(255E), _(255F), \
	_(255A), _(2554), _(2569), _(2566), _(2560), _(2550), _(256C), _(2567), \
	_(2568), _(2564), _(2565), _(2559), _(2558), _(2552), _(2553), _(256B), \
	_(256A), _(2518), _(250C), _(2588), _(2584), _(258C), _(2590), _(2580), \
	_(03B1), _(00DF), _(0393), _(03C0), _(03A3), _(03C3), _(00B5), _(03C4), \
	_(03A6), _(0398), _(03A9), _(03B4), _(221E), _(03C6), _(03B5), _(2229), \
	_(2261), _(00B1), _(2265), _(2264), _(2320), _(2321), _(00F7), _(2248), \
	_(00B0), _(2219), _(00B7), _(221A), _(207F), _(00B2), _(25A0), _(00A0)

#endif /* __Z_formats_character_set_DOS_CP862_H__ */
