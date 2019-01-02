/* Z Kit - formats/snapshot/machine/computer/ZX Spectrum/ZX82.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2019 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3.

.-----------------------------------------------------------------------------.
| Extensions: zx82							      |
| Endianness: Big							      |
|   Supports: 48K							      |
|    Used by: Speculator '97 (AmigaOS)					      |
|     Author: James, William						      |
|  Reference: <http://rk.nvg.ntnu.no/sinclair/faq/fileform.html>	      |
|									      |
| IMPORTANT NOTICE: This format is not well known at all, so the types and    |
| constants declared here may be useless.				      |
|									      |
| From comp.sys.sinclair Sinclair ZX Spectrum FAQ:			      |
|									      |
| -- Amiga Speculator has its own file format which I have called ZX82 format |
| because it contains a file identifier in the first four bytes consisting of |
| the ASCII characters 'ZX82'. The format has a 12 byte header which contains |
| the normal Spectrum type file information like length, type, start etc. as  |
| well as a compression flag which is set if the file is byte run compressed. |
| Snapshot files have a further 32 bytes of register values and border colour |
| information.								      |
|									      |
| The data_type field is derived from the MGT disciple directory MGT_Type-1,  |
| so further file types may be supported in this way in the future.	      |
|									      |
| The compression used is the standard byte run compression as used by ILBM   |
| IFF files. The whole 48k data block is compressed as if it were one long    |
| row. --								      |
|									      |
| See: Amiga ROM Kernel Reference Manual: Devices (Third Edition)	      |
|   - Appendix A - IFF Specification (Page 347)				      |
|   - Appendix C - Example Packer C code (Page 538)			      |
'----------------------------------------------------------------------------*/

#ifndef _Z_formats_snapshot_machine_computer_ZX_Spectrum_ZX82_H_
#define _Z_formats_snapshot_machine_computer_ZX_Spectrum_ZX82_H_

#include <Z/types/fundamental.h>

Z_DEFINE_STRICT_STRUCTURE ({
	zuint8	signature[4];	 /* {'Z', 'X', '8', '2'} */
	zuint8	data_type;
	zuint8	data_compressed; /* boolean */
	zuint16 data_size;	 /* file length up to 64k (ELINE-PROG for BASIC) */
	zuint16 start_address;	 /* start address for code (AUTOSTART for BASIC) */
	zuint16 program_size;
}, ZZX82Header);

#define Z_ZX82_DATA_TYPE_BASIC	  0
#define Z_ZX82_DATA_TYPE_NUMERIC  1
#define Z_ZX82_DATA_TYPE_STRINC	  2
#define Z_ZX82_DATA_TYPE_CODE	  3
#define Z_ZX82_DATA_TYPE_SNAPSHOT 4

Z_DEFINE_STRICT_STRUCTURE_BEGIN {
	zuint8	border_color;
	zuint8	im; /* (0 = use I register, 1 = IM 1 and 2 = IM 2) (?) */
	Z16Bit	iy,  ix;
	Z16Bit	de,  bc,  hl,  af;
	Z16Bit	de_, bc_, hl_, af_;
	zuint16 sp;
	zuint8	zero_0, i;
	zuint8	zero_1, r;
	zuint16 pc;
	Z_FAM(zuint8 memory[];)
} Z_DEFINE_STRICT_STRUCTURE_END (ZZX82Snapshot);

#endif /* _Z_formats_snapshot_machine_computer_ZX_Spectrum_ZX82_H_ */
