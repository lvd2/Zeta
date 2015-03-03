/* Q Kit API - hardware/BUS/USB.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2015 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Q_hardware_BUS_USB_H__
#define __Q_hardware_BUS_USB_H__

/* MARK: - HID Device Usage Pages */

#define Q_USB_HID_USAGE_PAGE_UNDEFINED			0x00
#define Q_USB_HID_USAGE_PAGE_GENERIC_DESKTOP_CONTROLS	0x01
#define Q_USB_HID_USAGE_PAGE_SIMULATION_CONTROLS	0x02
#define Q_USB_HID_USAGE_PAGE_VR_CONTROLS		0x03
#define Q_USB_HID_USAGE_PAGE_SPORT_CONTROLS		0x04
#define Q_USB_HID_USAGE_PAGE_GAME_CONTROLS		0x05
#define Q_USB_HID_USAGE_PAGE_GENERIC_DEVICE_CONTROLS	0x06
#define Q_USB_HID_USAGE_PAGE_KEYBOARD_KEYPAD		0x07
#define Q_USB_HID_USAGE_PAGE_LEDS			0x08
#define Q_USB_HID_USAGE_PAGE_BUTTON			0x09
#define Q_USB_HID_USAGE_PAGE_ORDINAL			0x0A
#define Q_USB_HID_USAGE_PAGE_TELEPHONY			0x0B
#define Q_USB_HID_USAGE_PAGE_CONSUMER			0x0C
#define Q_USB_HID_USAGE_PAGE_DIGITIZER			0x0D
#define Q_USB_HID_USAGE_PAGE_RESERVED			0x0E
#define Q_USB_HID_USAGE_PAGE_PID			0x0F
#define Q_USB_HID_USAGE_PAGE_UNICODE			0x10
/* Reserved 0x11 - 0x13 */
#define Q_USB_HID_USAGE_PAGE_ALPHANUMERIC_DISPLAY	0x14
/* Reserved 0x15 - 0x3F */
#define Q_USB_HID_USAGE_PAGE_MEDICAL_INSTRUMENTS	0x40
/* Reserved 0x41 - 0x7F */
#define Q_USB_HID_USAGE_PAGE_MONITOR_0			0x80
#define Q_USB_HID_USAGE_PAGE_MONITOR_1			0x81
#define Q_USB_HID_USAGE_PAGE_MONITOR_2			0x82
#define Q_USB_HID_USAGE_PAGE_MONITOR_3			0x83
#define Q_USB_HID_USAGE_PAGE_POWER_0			0x84
#define Q_USB_HID_USAGE_PAGE_POWER_1			0x85
#define Q_USB_HID_USAGE_PAGE_POWER_2			0x86
#define Q_USB_HID_USAGE_PAGE_POWER_3			0x87
/* Reserved 0x88 - 0x8B */
#define Q_USB_HID_USAGE_PAGE_BAR_CODE_SCANNER		0x8C
#define Q_USB_HID_USAGE_PAGE_SCALE_PAGE			0x8D
#define Q_USB_HID_USAGE_PAGE_MSR_DEVICES		0x8E
#define Q_USB_HID_USAGE_PAGE_RESERVED_POINT_OF_SALE	0x8F
#define Q_USB_HID_USAGE_PAGE_CAMERA_CONTROL		0x90
#define Q_USB_HID_USAGE_PAGE_ARCADE			0x91
#define Q_USB_HID_USAGE_PAGE_VENDOR_DEFINED_START	0xFF00

#endif /* __Q_hardware_BUS_USB_H__ */