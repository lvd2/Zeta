/* Z Kit C API - hardware/BUS/USB.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright © 2006-2017 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_hardware_BUS_USB_H__
#define __Z_hardware_BUS_USB_H__

/* MARK: - HID Device Usage Pages */

#define Z_USB_HID_USAGE_PAGE_UNDEFINED			0x00
#define Z_USB_HID_USAGE_PAGE_GENERIC_DESKTOP_CONTROLS	0x01
#define Z_USB_HID_USAGE_PAGE_SIMULATION_CONTROLS	0x02
#define Z_USB_HID_USAGE_PAGE_VR_CONTROLS		0x03
#define Z_USB_HID_USAGE_PAGE_SPORT_CONTROLS		0x04
#define Z_USB_HID_USAGE_PAGE_GAME_CONTROLS		0x05
#define Z_USB_HID_USAGE_PAGE_GENERIC_DEVICE_CONTROLS	0x06
#define Z_USB_HID_USAGE_PAGE_KEYBOARD_KEYPAD		0x07
#define Z_USB_HID_USAGE_PAGE_LEDS			0x08
#define Z_USB_HID_USAGE_PAGE_BUTTON			0x09
#define Z_USB_HID_USAGE_PAGE_ORDINAL			0x0A
#define Z_USB_HID_USAGE_PAGE_TELEPHONY			0x0B
#define Z_USB_HID_USAGE_PAGE_CONSUMER			0x0C
#define Z_USB_HID_USAGE_PAGE_DIGITIZER			0x0D
#define Z_USB_HID_USAGE_PAGE_RESERVED			0x0E
#define Z_USB_HID_USAGE_PAGE_PID			0x0F
#define Z_USB_HID_USAGE_PAGE_UNICODE			0x10
/* 11h-13h - Reserved */
#define Z_USB_HID_USAGE_PAGE_ALPHANUMERIC_DISPLAY	0x14
/* Reserved 0x15 - 0x3F */
#define Z_USB_HID_USAGE_PAGE_MEDICAL_INSTRUMENTS	0x40
/* 41h-7Fh - Reserved */
#define Z_USB_HID_USAGE_PAGE_MONITOR_0			0x80
#define Z_USB_HID_USAGE_PAGE_MONITOR_1			0x81
#define Z_USB_HID_USAGE_PAGE_MONITOR_2			0x82
#define Z_USB_HID_USAGE_PAGE_MONITOR_3			0x83
#define Z_USB_HID_USAGE_PAGE_POWER_0			0x84
#define Z_USB_HID_USAGE_PAGE_POWER_1			0x85
#define Z_USB_HID_USAGE_PAGE_POWER_2			0x86
#define Z_USB_HID_USAGE_PAGE_POWER_3			0x87
/* 88h-8Bh - Reserved */
#define Z_USB_HID_USAGE_PAGE_BAR_CODE_SCANNER		0x8C
#define Z_USB_HID_USAGE_PAGE_SCALE_PAGE			0x8D
#define Z_USB_HID_USAGE_PAGE_MSR_DEVICES		0x8E
#define Z_USB_HID_USAGE_PAGE_RESERVED_POINT_OF_SALE	0x8F
#define Z_USB_HID_USAGE_PAGE_CAMERA_CONTROL		0x90
#define Z_USB_HID_USAGE_PAGE_ARCADE			0x91
#define Z_USB_HID_USAGE_PAGE_VENDOR_DEFINED_START	0xFF00

/* MARK: - HID Usage Page 07h - Keyboard/Keypad */

#define Z_USB_KEY_CODE_KEYBOARD_ERROR_ROLL_OVER		0x01
#define Z_USB_KEY_CODE_KEYBOARD_POST_FAIL		0x02
#define Z_USB_KEY_CODE_KEYBOARD_ERROR_UNDEFINED		0x03
#define Z_USB_KEY_CODE_KEYBOARD_A			0x04
#define Z_USB_KEY_CODE_KEYBOARD_B			0x05
#define Z_USB_KEY_CODE_KEYBOARD_C			0x06
#define Z_USB_KEY_CODE_KEYBOARD_D			0x07
#define Z_USB_KEY_CODE_KEYBOARD_E			0x08
#define Z_USB_KEY_CODE_KEYBOARD_F			0x09
#define Z_USB_KEY_CODE_KEYBOARD_G			0x0A
#define Z_USB_KEY_CODE_KEYBOARD_H			0x0B
#define Z_USB_KEY_CODE_KEYBOARD_I			0x0C
#define Z_USB_KEY_CODE_KEYBOARD_J			0x0D
#define Z_USB_KEY_CODE_KEYBOARD_K			0x0E
#define Z_USB_KEY_CODE_KEYBOARD_L			0x0F
#define Z_USB_KEY_CODE_KEYBOARD_M			0x10
#define Z_USB_KEY_CODE_KEYBOARD_N			0x11
#define Z_USB_KEY_CODE_KEYBOARD_O			0x12
#define Z_USB_KEY_CODE_KEYBOARD_P			0x13
#define Z_USB_KEY_CODE_KEYBOARD_Q			0x14
#define Z_USB_KEY_CODE_KEYBOARD_R			0x15
#define Z_USB_KEY_CODE_KEYBOARD_S			0x16
#define Z_USB_KEY_CODE_KEYBOARD_T			0x17
#define Z_USB_KEY_CODE_KEYBOARD_U			0x18
#define Z_USB_KEY_CODE_KEYBOARD_V			0x19
#define Z_USB_KEY_CODE_KEYBOARD_W			0x1A
#define Z_USB_KEY_CODE_KEYBOARD_X			0x1B
#define Z_USB_KEY_CODE_KEYBOARD_Y			0x1C
#define Z_USB_KEY_CODE_KEYBOARD_Z			0x1D
#define Z_USB_KEY_CODE_KEYBOARD_1			0x1E
#define Z_USB_KEY_CODE_KEYBOARD_2			0x1F
#define Z_USB_KEY_CODE_KEYBOARD_3			0x20
#define Z_USB_KEY_CODE_KEYBOARD_4			0x21
#define Z_USB_KEY_CODE_KEYBOARD_5			0x22
#define Z_USB_KEY_CODE_KEYBOARD_6			0x23
#define Z_USB_KEY_CODE_KEYBOARD_7			0x24
#define Z_USB_KEY_CODE_KEYBOARD_8			0x25
#define Z_USB_KEY_CODE_KEYBOARD_9			0x26
#define Z_USB_KEY_CODE_KEYBOARD_0			0x27
#define Z_USB_KEY_CODE_KEYBOARD_RETURN			0x28
#define Z_USB_KEY_CODE_KEYBOARD_ESCAPE			0x29
#define Z_USB_KEY_CODE_KEYBOARD_BACKSPACE		0x2A
#define Z_USB_KEY_CODE_KEYBOARD_TAB			0x2B
#define Z_USB_KEY_CODE_KEYBOARD_SPACE			0x2C
#define Z_USB_KEY_CODE_KEYBOARD_HYPHEN_MINUS		0x2D
#define Z_USB_KEY_CODE_KEYBOARD_EQUALS_SIGN		0x2E
#define Z_USB_KEY_CODE_KEYBOARD_LEFT_SQUARE_BRACKET	0x2F
#define Z_USB_KEY_CODE_KEYBOARD_RIGHT_SQUARE_BRACKET	0x30
#define Z_USB_KEY_CODE_KEYBOARD_REVERSE_SOLIDUS		0x31
#define Z_USB_KEY_CODE_KEYBOARD_NON_US_NUMBER_SIGN	0x32
#define Z_USB_KEY_CODE_KEYBOARD_SEMICOLON		0x33
#define Z_USB_KEY_CODE_KEYBOARD_APOSTROPHE		0x34
#define Z_USB_KEY_CODE_KEYBOARD_GRAVE_ACCENT		0x35
#define Z_USB_KEY_CODE_KEYBOARD_COMMA			0x36
#define Z_USB_KEY_CODE_KEYBOARD_FULL_STOP		0x37
#define Z_USB_KEY_CODE_KEYBOARD_SOLIDUS			0x38
#define Z_USB_KEY_CODE_KEYBOARD_CAPS_LOCK		0x39
#define Z_USB_KEY_CODE_KEYBOARD_F1			0x3A
#define Z_USB_KEY_CODE_KEYBOARD_F2			0x3B
#define Z_USB_KEY_CODE_KEYBOARD_F3			0x3C
#define Z_USB_KEY_CODE_KEYBOARD_F4			0x3D
#define Z_USB_KEY_CODE_KEYBOARD_F5			0x3E
#define Z_USB_KEY_CODE_KEYBOARD_F6			0x3F
#define Z_USB_KEY_CODE_KEYBOARD_F7			0x40
#define Z_USB_KEY_CODE_KEYBOARD_F8			0x41
#define Z_USB_KEY_CODE_KEYBOARD_F9			0x42
#define Z_USB_KEY_CODE_KEYBOARD_F10			0x43
#define Z_USB_KEY_CODE_KEYBOARD_F11			0x44
#define Z_USB_KEY_CODE_KEYBOARD_F12			0x45
#define Z_USB_KEY_CODE_KEYBOARD_PRINT_SCREEN		0x46
#define Z_USB_KEY_CODE_KEYBOARD_SCROLL_LOCK		0x47
#define Z_USB_KEY_CODE_KEYBOARD_PAUSE			0x48
#define Z_USB_KEY_CODE_KEYBOARD_INSERT			0x49
#define Z_USB_KEY_CODE_KEYBOARD_HOME			0x4A
#define Z_USB_KEY_CODE_KEYBOARD_PAGE_UP			0x4B
#define Z_USB_KEY_CODE_KEYBOARD_DELETE			0x4C
#define Z_USB_KEY_CODE_KEYBOARD_END			0x4D
#define Z_USB_KEY_CODE_KEYBOARD_PAGE_DOWN		0x4E
#define Z_USB_KEY_CODE_KEYBOARD_RIGHT_ARROW		0x4F
#define Z_USB_KEY_CODE_KEYBOARD_LEFT_ARROW		0x50
#define Z_USB_KEY_CODE_KEYBOARD_DOWN_ARROW		0x51
#define Z_USB_KEY_CODE_KEYBOARD_UP_ARROW		0x52
#define Z_USB_KEY_CODE_KEYPAD_NUM_LOCK			0x53
#define Z_USB_KEY_CODE_KEYPAD_SOLIDUS			0x54
#define Z_USB_KEY_CODE_KEYPAD_ASTERISK			0x55
#define Z_USB_KEY_CODE_KEYPAD_HYPHEN_MINUS		0x56
#define Z_USB_KEY_CODE_KEYPAD_PLUS_SIGN			0x57
#define Z_USB_KEY_CODE_KEYPAD_ENTER			0x58
#define Z_USB_KEY_CODE_KEYPAD_1				0x59
#define Z_USB_KEY_CODE_KEYPAD_2				0x5A
#define Z_USB_KEY_CODE_KEYPAD_3				0x5B
#define Z_USB_KEY_CODE_KEYPAD_4				0x5C
#define Z_USB_KEY_CODE_KEYPAD_5				0x5D
#define Z_USB_KEY_CODE_KEYPAD_6				0x5E
#define Z_USB_KEY_CODE_KEYPAD_7				0x5F
#define Z_USB_KEY_CODE_KEYPAD_8				0x60
#define Z_USB_KEY_CODE_KEYPAD_9				0x61
#define Z_USB_KEY_CODE_KEYPAD_0				0x62
#define Z_USB_KEY_CODE_KEYPAD_DECIMAL_SEPARATOR		0x63
#define Z_USB_KEY_CODE_KEYBOARD_NON_US_REVERSE_SOLIDUS	0x64
#define Z_USB_KEY_CODE_KEYBOARD_APPLICATION		0x65
#define Z_USB_KEY_CODE_KEYBOARD_POWER			0x66
#define Z_USB_KEY_CODE_KEYPAD_EQUALS_SIGN		0x67
#define Z_USB_KEY_CODE_KEYBOARD_F13			0x68
#define Z_USB_KEY_CODE_KEYBOARD_F14			0x69
#define Z_USB_KEY_CODE_KEYBOARD_F15			0x6A
#define Z_USB_KEY_CODE_KEYBOARD_F16			0x6B
#define Z_USB_KEY_CODE_KEYBOARD_F17			0x6C
#define Z_USB_KEY_CODE_KEYBOARD_F18			0x6D
#define Z_USB_KEY_CODE_KEYBOARD_F19			0x6E
#define Z_USB_KEY_CODE_KEYBOARD_F20			0x6F
#define Z_USB_KEY_CODE_KEYBOARD_F21			0x70
#define Z_USB_KEY_CODE_KEYBOARD_F22			0x71
#define Z_USB_KEY_CODE_KEYBOARD_F23			0x72
#define Z_USB_KEY_CODE_KEYBOARD_F24			0x73
#define Z_USB_KEY_CODE_KEYBOARD_EXECUTE			0x74
#define Z_USB_KEY_CODE_KEYBOARD_HELP			0x75
#define Z_USB_KEY_CODE_KEYBOARD_MENU			0x76
#define Z_USB_KEY_CODE_KEYBOARD_SELECT			0x77
#define Z_USB_KEY_CODE_KEYBOARD_STOP			0x78
#define Z_USB_KEY_CODE_KEYBOARD_AGAIN			0x79
#define Z_USB_KEY_CODE_KEYBOARD_UNDO			0x7A
#define Z_USB_KEY_CODE_KEYBOARD_CUT			0x7B
#define Z_USB_KEY_CODE_KEYBOARD_COPY			0x7C
#define Z_USB_KEY_CODE_KEYBOARD_PASTE			0x7D
#define Z_USB_KEY_CODE_KEYBOARD_FIND			0x7E
#define Z_USB_KEY_CODE_KEYBOARD_MUTE			0x7F
#define Z_USB_KEY_CODE_KEYBOARD_VOLUME_UP		0x80
#define Z_USB_KEY_CODE_KEYBOARD_VOLUME_DOWN		0x81
#define Z_USB_KEY_CODE_KEYBOARD_LOCKING_CAPS_LOCK	0x82
#define Z_USB_KEY_CODE_KEYBOARD_LOCKING_NUM_LOCK	0x83
#define Z_USB_KEY_CODE_KEYBOARD_LOCKING_SCROLL_LOCK	0x84
#define Z_USB_KEY_CODE_KEYPAD_COMMA			0x85
#define Z_USB_KEY_CODE_AS_400_KEYPAD_EQUALS_SIGN	0x86 /* Used on AS/400 keyboards */
#define Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_1		0x87
#define Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_2		0x88
#define Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_3		0x89
#define Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_4		0x8A
#define Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_5		0x8B
#define Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_6		0x8C
#define Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_7		0x8D
#define Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_8		0x8E
#define Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_9		0x8F
#define Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_1		0x90
#define Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_2		0x91
#define Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_3		0x92
#define Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_4		0x93
#define Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_5		0x94
#define Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_6		0x95
#define Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_7		0x96
#define Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_8		0x97
#define Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_9		0x98
#define Z_USB_KEY_CODE_KEYBOARD_ALTERNATE_ERASE		0x99
#define Z_USB_KEY_CODE_KEYBOARD_SYS_REQ_ATTENTION	0x9A
#define Z_USB_KEY_CODE_KEYBOARD_CANCEL			0x9B
#define Z_USB_KEY_CODE_KEYBOARD_CLEAR			0x9C
#define Z_USB_KEY_CODE_KEYBOARD_PRIOR			0x9D
#define Z_USB_KEY_CODE_KEYBOARD_RETURN_2		0x9E /* Duplicated? */
#define Z_USB_KEY_CODE_KEYBOARD_SEPARATOR		0x9F
#define Z_USB_KEY_CODE_KEYBOARD_OUT			0xA0
#define Z_USB_KEY_CODE_KEYBOARD_OPER			0xA1
#define Z_USB_KEY_CODE_KEYBOARD_CLEAR_AGAIN		0xA2
#define Z_USB_KEY_CODE_KEYBOARD_CR_SEL_PROPS		0xA3
#define Z_USB_KEY_CODE_KEYBOARD_EX_SEL			0xA4
/* A5h-AFh - Reserved */
#define Z_USB_KEY_CODE_KEYPAD_00			0xB0
#define Z_USB_KEY_CODE_KEYPAD_000			0xB1
#define Z_USB_KEY_CODE_THOUSANDS_SEPARATOR		0xB2
#define Z_USB_KEY_CODE_DECIMAL_SEPARATOR		0xB3
#define Z_USB_KEY_CODE_CURRENCY_UNIT			0xB4
#define Z_USB_KEY_CODE_CURRENCY_SUBUNIT			0xB5
#define Z_USB_KEY_CODE_KEYPAD_LEFT_PARENTHESIS		0xB6
#define Z_USB_KEY_CODE_KEYPAD_RIGHT_PARENTHESIS		0xB7
#define Z_USB_KEY_CODE_KEYPAD_LEFT_CURLY_BRACKET	0xB8
#define Z_USB_KEY_CODE_KEYPAD_RIGHT_CURLY_BRACKET	0xB9
#define Z_USB_KEY_CODE_KEYPAD_TAB			0xBA
#define Z_USB_KEY_CODE_KEYPAD_BACKSPACE			0xBB
#define Z_USB_KEY_CODE_KEYPAD_A				0xBC
#define Z_USB_KEY_CODE_KEYPAD_B				0xBD
#define Z_USB_KEY_CODE_KEYPAD_C				0xBE
#define Z_USB_KEY_CODE_KEYPAD_D				0xBF
#define Z_USB_KEY_CODE_KEYPAD_E				0xC0
#define Z_USB_KEY_CODE_KEYPAD_F				0xC1
#define Z_USB_KEY_CODE_KEYPAD_XOR			0xC2
#define Z_USB_KEY_CODE_KEYPAD_CIRCUMFLEX_ACCENT		0xC3
#define Z_USB_KEY_CODE_KEYPAD_PERCENT_SIGN		0xC4
#define Z_USB_KEY_CODE_KEYPAD_LESS_THAN_SIGN		0xC5
#define Z_USB_KEY_CODE_KEYPAD_GREATER_THAN_SIGN		0xC6
#define Z_USB_KEY_CODE_KEYPAD_AMPERSAND			0xC7
#define Z_USB_KEY_CODE_KEYPAD_DOUBLE_AMPERSAND		0xC8
#define Z_USB_KEY_CODE_KEYPAD_VERTICAL_LINE		0xC9
#define Z_USB_KEY_CODE_KEYPAD_DOUBLE_VERTICAL_LINE	0xCA
#define Z_USB_KEY_CODE_KEYPAD_COLON			0xCB
#define Z_USB_KEY_CODE_KEYPAD_NUMBER_SIGN		0xCC
#define Z_USB_KEY_CODE_KEYPAD_SPACE			0xCD
#define Z_USB_KEY_CODE_KEYPAD_COMMERCIAL_AT		0xCE
#define Z_USB_KEY_CODE_KEYPAD_EXCLAMATION_MARK		0xCF
#define Z_USB_KEY_CODE_KEYPAD_MEMORY_STORE		0xD0
#define Z_USB_KEY_CODE_KEYPAD_MEMORY_RECALL		0xD1
#define Z_USB_KEY_CODE_KEYPAD_MEMORY_CLEAR		0xD2
#define Z_USB_KEY_CODE_KEYPAD_MEMORY_ADD		0xD3
#define Z_USB_KEY_CODE_KEYPAD_MEMORY_SUBTRACT		0xD4
#define Z_USB_KEY_CODE_KEYPAD_MEMORY_MULTIPLY		0xD5
#define Z_USB_KEY_CODE_KEYPAD_MEMORY_DIVIDE		0xD6
#define Z_USB_KEY_CODE_KEYPAD_PLUS_MINUS_SIGN		0xD7
#define Z_USB_KEY_CODE_KEYPAD_CLEAR			0xD8
#define Z_USB_KEY_CODE_KEYPAD_CLEAR_ENTRY		0xD9
#define Z_USB_KEY_CODE_KEYPAD_BINARY			0xDA
#define Z_USB_KEY_CODE_KEYPAD_OCTAL			0xDB
#define Z_USB_KEY_CODE_KEYPAD_DECIMAL			0xDC
#define Z_USB_KEY_CODE_KEYPAD_HEXADECIMAL		0xDD
/* DEh-DFh - Reserved */
#define Z_USB_KEY_CODE_KEYBOARD_LEFT_CONTROL		0xE0
#define Z_USB_KEY_CODE_KEYBOARD_LEFT_SHIFT		0xE1
#define Z_USB_KEY_CODE_KEYBOARD_LEFT_ALT		0xE2
#define Z_USB_KEY_CODE_KEYBOARD_LEFT_GUI		0xE3
#define Z_USB_KEY_CODE_KEYBOARD_RIGHT_CONTROL		0xE4
#define Z_USB_KEY_CODE_KEYBOARD_RIGHT_SHIFT		0xE5
#define Z_USB_KEY_CODE_KEYBOARD_RIGHT_ALT		0xE6
#define Z_USB_KEY_CODE_KEYBOARD_RIGHT_GUI		0xE7
/* E8h-FFFFh - Reserved */

#endif /* __Z_hardware_BUS_USB_H__ */
