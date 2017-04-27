/* Z Kit C API - formats/character set/DOS CP864.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright © 2006-2017 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_formats_character_set_DOS_CP864_H__
#define __Z_formats_character_set_DOS_CP864_H__

/* From 00h to 7Fh like ASCII */
#define Z_DOS_CP864_DEGREE_SIGN							 0x80
#define Z_DOS_CP864_MIDDLE_DOT							 0x81
#define Z_DOS_CP864_BULLET_OPERATOR						 0x82
#define Z_DOS_CP864_SQUARE_ROOT							 0x83
#define Z_DOS_CP864_MEDIUM_SHADE						 0x84
#define Z_DOS_CP864_FORMS_LIGHT_HORIZONTAL					 0x85
#define Z_DOS_CP864_FORMS_LIGHT_VERTICAL					 0x86
#define Z_DOS_CP864_FORMS_LIGHT_VERTICAL_AND_HORIZONTAL				 0x87
#define Z_DOS_CP864_FORMS_LIGHT_VERTICAL_AND_LEFT				 0x88
#define Z_DOS_CP864_FORMS_LIGHT_DOWN_AND_HORIZONTAL				 0x89
#define Z_DOS_CP864_FORMS_LIGHT_VERTICAL_AND_RIGHT				 0x8A
#define Z_DOS_CP864_FORMS_LIGHT_UP_AND_HORIZONTAL				 0x8B
#define Z_DOS_CP864_FORMS_LIGHT_DOWN_AND_LEFT					 0x8C
#define Z_DOS_CP864_FORMS_LIGHT_DOWN_AND_RIGHT					 0x8D
#define Z_DOS_CP864_FORMS_LIGHT_UP_AND_RIGHT					 0x8E
#define Z_DOS_CP864_FORMS_LIGHT_UP_AND_LEFT					 0x8F
#define Z_DOS_CP864_GREEK_SMALL_BETA						 0x90
#define Z_DOS_CP864_INFINITY							 0x91
#define Z_DOS_CP864_GREEK_SMALL_PHI						 0x92
#define Z_DOS_CP864_PLUS_OR_MINUS_SIGN						 0x93
#define Z_DOS_CP864_FRACTION_ONE_HALF						 0x94
#define Z_DOS_CP864_FRACTION_ONE_QUARTER					 0x95
#define Z_DOS_CP864_ALMOST_EQUAL_TO						 0x96
#define Z_DOS_CP864_LEFT_POINTING_GUILLEMET					 0x97
#define Z_DOS_CP864_RIGHT_POINTING_GUILLEMET					 0x98
#define Z_DOS_CP864_ARABIC_LIGATURE_LAM_WITH_ALEF_WITH_HAMZA_ABOVE_ISOLATED_FORM 0x99
#define Z_DOS_CP864_ARABIC_LIGATURE_LAM_WITH_ALEF_WITH_HAMZA_ABOVE_FINAL_FORM	 0x9A
/* 9Bh undefined */
/* 9Ch undefined */
#define Z_DOS_CP864_ARABIC_LIGATURE_LAM_WITH_ALEF_ISOLATED_FORM			 0x9D
#define Z_DOS_CP864_ARABIC_LIGATURE_LAM_WITH_ALEF_FINAL_FORM			 0x9E
/* 9Fh undefined */
#define Z_DOS_CP864_NON_BREAKING_SPACE						 0xA0
#define Z_DOS_CP864_SOFT_HYPHEN							 0xA1
#define Z_DOS_CP864_ARABIC_LETTER_ALEF_WITH_MADDA_ABOVE_FINAL_FORM		 0xA2
#define Z_DOS_CP864_POUND_SIGN							 0xA3
#define Z_DOS_CP864_CURRENCY_SIGN						 0xA4
#define Z_DOS_CP864_ARABIC_LETTER_ALEF_WITH_HAMZA_ABOVE_FINAL_FORM		 0xA5
/* A6h undefined */
/* A7h undefined */
#define Z_DOS_CP864_ARABIC_LETTER_ALEF_FINAL_FORM				 0xA8
#define Z_DOS_CP864_ARABIC_LETTER_BEH_ISOLATED_FORM				 0xA9
#define Z_DOS_CP864_ARABIC_LETTER_TEH_ISOLATED_FORM				 0xAA
#define Z_DOS_CP864_ARABIC_LETTER_THEH_ISOLATED_FORM				 0xAB
#define Z_DOS_CP864_ARABIC_COMMA						 0xAC
#define Z_DOS_CP864_ARABIC_LETTER_JEEM_ISOLATED_FORM				 0xAD
#define Z_DOS_CP864_ARABIC_LETTER_HAH_ISOLATED_FORM				 0xAE
#define Z_DOS_CP864_ARABIC_LETTER_KHAH_ISOLATED_FORM				 0xAF
#define Z_DOS_CP864_ARABIC_INDIC_DIGIT_ZERO					 0xB0
#define Z_DOS_CP864_ARABIC_INDIC_DIGIT_ONE					 0xB1
#define Z_DOS_CP864_ARABIC_INDIC_DIGIT_TWO					 0xB2
#define Z_DOS_CP864_ARABIC_INDIC_DIGIT_THREE					 0xB3
#define Z_DOS_CP864_ARABIC_INDIC_DIGIT_FOUR					 0xB4
#define Z_DOS_CP864_ARABIC_INDIC_DIGIT_FIVE					 0xB5
#define Z_DOS_CP864_ARABIC_INDIC_DIGIT_SIX					 0xB6
#define Z_DOS_CP864_ARABIC_INDIC_DIGIT_SEVEN					 0xB7
#define Z_DOS_CP864_ARABIC_INDIC_DIGIT_EIGHT					 0xB8
#define Z_DOS_CP864_ARABIC_INDIC_DIGIT_NINE					 0xB9
#define Z_DOS_CP864_ARABIC_LETTER_FEH_ISOLATED_FORM				 0xBA
#define Z_DOS_CP864_ARABIC_SEMICOLON						 0xBB
#define Z_DOS_CP864_ARABIC_LETTER_SEEN_ISOLATED_FORM				 0xBC
#define Z_DOS_CP864_ARABIC_LETTER_SHEEN_ISOLATED_FORM				 0xBD
#define Z_DOS_CP864_ARABIC_LETTER_SAD_ISOLATED_FORM				 0xBE
#define Z_DOS_CP864_ARABIC_QUESTION_MARK					 0xBF
#define Z_DOS_CP864_CENT_SIGN							 0xC0
#define Z_DOS_CP864_ARABIC_LETTER_HAMZA_ISOLATED_FORM				 0xC1
#define Z_DOS_CP864_ARABIC_LETTER_ALEF_WITH_MADDA_ABOVE_ISOLATED_FORM		 0xC2
#define Z_DOS_CP864_ARABIC_LETTER_ALEF_WITH_HAMZA_ABOVE_ISOLATED_FORM		 0xC3
#define Z_DOS_CP864_ARABIC_LETTER_WAW_WITH_HAMZA_ABOVE_ISOLATED_FORM		 0xC4
#define Z_DOS_CP864_ARABIC_LETTER_AIN_FINAL_FORM				 0xC5
#define Z_DOS_CP864_ARABIC_LETTER_YEH_WITH_HAMZA_ABOVE_INITIAL_FORM		 0xC6
#define Z_DOS_CP864_ARABIC_LETTER_ALEF_ISOLATED_FORM				 0xC7
#define Z_DOS_CP864_ARABIC_LETTER_BEH_INITIAL_FORM				 0xC8
#define Z_DOS_CP864_ARABIC_LETTER_TEH_MARBUTA_ISOLATED_FORM			 0xC9
#define Z_DOS_CP864_ARABIC_LETTER_TEH_INITIAL_FORM				 0xCA
#define Z_DOS_CP864_ARABIC_LETTER_THEH_INITIAL_FORM				 0xCB
#define Z_DOS_CP864_ARABIC_LETTER_JEEM_INITIAL_FORM				 0xCC
#define Z_DOS_CP864_ARABIC_LETTER_HAH_INITIAL_FORM				 0xCD
#define Z_DOS_CP864_ARABIC_LETTER_KHAH_INITIAL_FORM				 0xCE
#define Z_DOS_CP864_ARABIC_LETTER_DAL_ISOLATED_FORM				 0xCF
#define Z_DOS_CP864_ARABIC_LETTER_THAL_ISOLATED_FORM				 0xD0
#define Z_DOS_CP864_ARABIC_LETTER_REH_ISOLATED_FORM				 0xD1
#define Z_DOS_CP864_ARABIC_LETTER_ZAIN_ISOLATED_FORM				 0xD2
#define Z_DOS_CP864_ARABIC_LETTER_SEEN_INITIAL_FORM				 0xD3
#define Z_DOS_CP864_ARABIC_LETTER_SHEEN_INITIAL_FORM				 0xD4
#define Z_DOS_CP864_ARABIC_LETTER_SAD_INITIAL_FORM				 0xD5
#define Z_DOS_CP864_ARABIC_LETTER_DAD_INITIAL_FORM				 0xD6
#define Z_DOS_CP864_ARABIC_LETTER_TAH_ISOLATED_FORM				 0xD7
#define Z_DOS_CP864_ARABIC_LETTER_ZAH_ISOLATED_FORM				 0xD8
#define Z_DOS_CP864_ARABIC_LETTER_AIN_INITIAL_FORM				 0xD9
#define Z_DOS_CP864_ARABIC_LETTER_GHAIN_INITIAL_FORM				 0xDA
#define Z_DOS_CP864_BROKEN_VERTICAL_BAR						 0xDB
#define Z_DOS_CP864_NOT_SIGN							 0xDC
#define Z_DOS_CP864_DIVISION_SIGN						 0xDD
#define Z_DOS_CP864_MULTIPLICATION_SIGN						 0xDE
#define Z_DOS_CP864_ARABIC_LETTER_AIN_ISOLATED_FORM				 0xDF
#define Z_DOS_CP864_ARABIC_TATWEEL						 0xE0
#define Z_DOS_CP864_ARABIC_LETTER_FEH_INITIAL_FORM				 0xE1
#define Z_DOS_CP864_ARABIC_LETTER_QAF_INITIAL_FORM				 0xE2
#define Z_DOS_CP864_ARABIC_LETTER_KAF_INITIAL_FORM				 0xE3
#define Z_DOS_CP864_ARABIC_LETTER_LAM_INITIAL_FORM				 0xE4
#define Z_DOS_CP864_ARABIC_LETTER_MEEM_INITIAL_FORM				 0xE5
#define Z_DOS_CP864_ARABIC_LETTER_NOON_INITIAL_FORM				 0xE6
#define Z_DOS_CP864_ARABIC_LETTER_HEH_INITIAL_FORM				 0xE7
#define Z_DOS_CP864_ARABIC_LETTER_WAW_ISOLATED_FORM				 0xE8
#define Z_DOS_CP864_ARABIC_LETTER_ALEF_MAKSURA_ISOLATED_FORM			 0xE9
#define Z_DOS_CP864_ARABIC_LETTER_YEH_INITIAL_FORM				 0xEA
#define Z_DOS_CP864_ARABIC_LETTER_DAD_ISOLATED_FORM				 0xEB
#define Z_DOS_CP864_ARABIC_LETTER_AIN_MEDIAL_FORM				 0xEC
#define Z_DOS_CP864_ARABIC_LETTER_GHAIN_FINAL_FORM				 0xED
#define Z_DOS_CP864_ARABIC_LETTER_GHAIN_ISOLATED_FORM				 0xEE
#define Z_DOS_CP864_ARABIC_LETTER_MEEM_ISOLATED_FORM				 0xEF
#define Z_DOS_CP864_ARABIC_SHADDA_MEDIAL_FORM					 0xF0
#define Z_DOS_CP864_ARABIC_SHADDAH						 0xF1
#define Z_DOS_CP864_ARABIC_LETTER_NOON_ISOLATED_FORM				 0xF2
#define Z_DOS_CP864_ARABIC_LETTER_HEH_ISOLATED_FORM				 0xF3
#define Z_DOS_CP864_ARABIC_LETTER_HEH_MEDIAL_FORM				 0xF4
#define Z_DOS_CP864_ARABIC_LETTER_ALEF_MAKSURA_FINAL_FORM			 0xF5
#define Z_DOS_CP864_ARABIC_LETTER_YEH_FINAL_FORM				 0xF6
#define Z_DOS_CP864_ARABIC_LETTER_GHAIN_MEDIAL_FORM				 0xF7
#define Z_DOS_CP864_ARABIC_LETTER_QAF_ISOLATED_FORM				 0xF8
#define Z_DOS_CP864_ARABIC_LIGATURE_LAM_WITH_ALEF_WITH_MADDA_ABOVE_ISOLATED_FORM 0xF9
#define Z_DOS_CP864_ARABIC_LIGATURE_LAM_WITH_ALEF_WITH_MADDA_ABOVE_FINAL_FORM	 0xFA
#define Z_DOS_CP864_ARABIC_LETTER_LAM_ISOLATED_FORM				 0xFB
#define Z_DOS_CP864_ARABIC_LETTER_KAF_ISOLATED_FORM				 0xFC
#define Z_DOS_CP864_ARABIC_LETTER_YEH_ISOLATED_FORM				 0xFD
#define Z_DOS_CP864_BLACK_SQUARE						 0xFE
/* FFh undefined */

#define Z_ARRAY_CONTENT_DOS_CP864_TO_UNICODE(_, undefined)				\
	_(00B0), _(00B7), _(2219), _(221A),   _(2592),	 _(2500), _(2502),   _(253C),	\
	_(2524), _(252C), _(251C), _(2534),   _(2510),	 _(250C), _(2514),   _(2518),	\
	_(03B2), _(221E), _(03C6), _(00B1),   _(00BD),	 _(00BC), _(2248),   _(00AB),	\
	_(00BB), _(FEF7), _(FEF8), undefined, undefined, _(FEFB), _(FEFC),   undefined, \
	_(00A0), _(00AD), _(FE82), _(00A3),   _(00A4),	 _(FE84), undefined, undefined, \
	_(FE8E), _(FE8F), _(FE95), _(FE99),   _(060C),	 _(FE9D), _(FEA1),   _(FEA5),	\
	_(0660), _(0661), _(0662), _(0663),   _(0664),	 _(0665), _(0666),   _(0667),	\
	_(0668), _(0669), _(FED1), _(061B),   _(FEB1),	 _(FEB5), _(FEB9),   _(061F),	\
	_(00A2), _(FE80), _(FE81), _(FE83),   _(FE85),	 _(FECA), _(FE8B),   _(FE8D),	\
	_(FE91), _(FE93), _(FE97), _(FE9B),   _(FE9F),	 _(FEA3), _(FEA7),   _(FEA9),	\
	_(FEAB), _(FEAD), _(FEAF), _(FEB3),   _(FEB7),	 _(FEBB), _(FEBF),   _(FEC1),	\
	_(FEC5), _(FECB), _(FECF), _(00A6),   _(00AC),	 _(00F7), _(00D7),   _(FEC9),	\
	_(0640), _(FED3), _(FED7), _(FEDB),   _(FEDF),	 _(FEE3), _(FEE7),   _(FEEB),	\
	_(FEED), _(FEEF), _(FEF3), _(FEBD),   _(FECC),	 _(FECE), _(FECD),   _(FEE1),	\
	_(FE7D), _(0651), _(FEE5), _(FEE9),   _(FEEC),	 _(FEF0), _(FEF2),   _(FED0),	\
	_(FED5), _(FEF5), _(FEF6), _(FEDD),   _(FED9),	 _(FEF1), _(25A0),   undefined

#endif /* __Z_formats_character_set_DOS_CP864_H__ */
