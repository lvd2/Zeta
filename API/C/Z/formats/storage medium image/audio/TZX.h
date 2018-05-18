/* Z Kit - formats/storage medium image/audio/TZX.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) Tomaz Kac.
Copyright (C) Martijn v.d. Heide.
Copyright (C) Ramsoft.
Copyright (C) 2006-2018 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3.

.------------------------------------------------------------------------------.
| Extensions: tzx, cdt							       |
| Endianness: Little							       |
| Created by: Tomaz Kac							       |
|    Used by: Many programs						       |
|  Reference: http://www.worldofspectrum.org/TZXformat.html		       |
|									       |
| Format revision: v1.20 (2006-12-19)					       |
|									       |
| 1) Introduction							       |
| ---------------							       |
|									       |
| TZX is a file format designed to preserve all (hopefully) of the tapes with  |
| turbo or custom loading routines. Even though some of the newer and smarter  |
| emulators can find most of the information about the loader from the code    |
| itself, this isn't possible if you want to save the file to tape, or to a    |
| real ZX Spectrum. With all this information in the file, the emulators don't |
| have to bother with finding out the timings and other things.		       |
|									       |
| This file format is explicitly targeted to the ZX Spectrum compatible	       |
| computers only. Specialized versions of the TZX format have been defined for |
| other machines too, e.g. the Amstrad CPC and Commodore 64, but they are now  |
| available as distinct file formats with other filename extensions.	       |
|									       |
| If you're looking for TZX files, you can find an extensive collection at     |
| Martijn van der Heide's 'World of Spectrum': http://www.worldofspectrum.org  |
|									       |
| The format was first started off by Tomaz Kac who was maintainer until       |
| revision 1.13, and then passed to Martijn v.d. Heide. After that, Ramsoft    |
| were the maintainers for a brief period during which the v1.20 revision was  |
| put together. If you have any questions about the format, visit the forums   |
| at World of Spectrum and ask.						       |
|									       |
| The default format file extension is "TZX" and hopefully this won't have to  |
| change in the future. Amstrad CPC files should use the extension "CDT" to    |
| distinguish them from the ZX Spectrum files.				       |
|									       |
| 2) Rules and definitions						       |
| ------------------------						       |
|									       |
| - Any value requiring more than one byte is stored in little endian-format.  |
|									       |
| - All unused bits should be set to zero.				       |
|									       |
| - The timings are given in Z80 clock cycles unless otherwise stated.	       |
|   1 cycle = (1 / 3500000) s						       |
|									       |
| - All ASCII texts use the ISO 8859-1 (Latin 1) encoding; some of them can    |
|   have several lines, which should be separated by ASCII code 0Dh.	       |
|									       |
| - You might interpret 'wave' as --__ or __--, and 'pulse' as -- or __.       |
|									       |
| - The values in brackets are the default values that are used in the ROM     |
|   routines of the machine. Curly {} for the ZX Spectrum and square [] for    |
|   the Commodore 64.							       |
|									       |
| - If there is no pause between two data blocks then the second one should    |
|   follow immediately; not even so much as one CPU cycle between them.	       |
|									       |
| - This document refers to 'HIGH' and 'LOW' pulse levels. Whether this is     |
|   implemented as EAR=1 and EAR=0 respectively or the other way around is not |
|   important, as long as it is done consistently.			       |
|									       |
| - The 'current pulse level' after playing the blocks ID 10,11,12,13,14 or 19 |
|   is the opposite of the last pulse level played, so that a subsequent pulse |
|   will produce an edge.						       |
|									       |
| - A 'Pause' block consists of a LOW pulse level of some duration.	       |
|   To ensure that the last edge produced is properly finished there should be |
|   at least 1ms pause of the opposite level and only after that the pulse     |
|   should go to LOW. At the end of a 'Pause' block the 'current pulse level'  |
|   is low (note that the first pulse will therefore not immediately produce   |
|   an edge). A 'Pause' block of zero duration is completely ignored, so the   |
|   'current pulse level' will NOT change in this case. This also applies to   |
|   'Data' blocks that have some pause duration included in them.	       |
|									       |
| - An emulator should put the 'current pulse level' to LOW when starting to   |
|   play a TZX file, either from the start or from a certain position. The     |
|   writer of a TZX file should ensure that the 'current pulse level' is       |
|   well-defined in every sequence of blocks where this is important, i.e. in  |
|   any sequence that includes a 'Direct recording' block, or that depends on  |
|   edges generated by 'Pause' blocks. The recommended way of doing this is to |
|   include a Pause after each sequence of blocks.			       |
|									       |
| - General extension rule: ALL custom blocks that will be added after v1.10   |
|   will contain the size of the block in the first 4 bytes (this size does    |
|   not include these 4 bytes). This should enable programs that can only      |
|   handle older versions to skip that block.				       |
|									       |
| 3) Fields common to more than 1 type of block				       |
| ---------------------------------------------				       |
|									       |
| block_size								       |
|   The size (in bytes) of the whole block (without this field).	       |
|									       |
| data									       |
|   Data as in .TAP files.						       |
|									       |
| data_size								       |
|   The size in bytes of the data following this field.			       |
|									       |
| general_purpose.data_bit_order					       |
|   The order in which the bits of the data bytes must be played.	       |
|									       |
| last_byte_bit_count							       |
|   Bits used in the last byte of the data (the remaining ones should be 0).   |
|   e.g. if this is 6, then the bits used "X" in the last byte are: XXXXXX00,  |
|   where MSb is the leftmost bit and LSb is the rightmost bit.		       |
|									       |
| pause_duration_ms							       |
|   The duration of the period of silence after block playback in milliseconds |
|   (usually 1000).							       |
|									       |
| xor_checksum_bit							       |
|   The XOR checksum (if applicable, i.e. if different than 0xFF) is a XOR of  |
|   all bits in the data byte XORed with the value in this field as the start  |
|   value.								       |
'-----------------------------------------------------------------------------*/

#ifndef __Z_formats_storage_medium_image_audio_TZX_H__
#define __Z_formats_storage_medium_image_audio_TZX_H__

#include <Z/types/base.h>

/* MARK: - File Header
.------------------------------------------------------------------------------.
| The file is identified with the first 8 bytes being 'ZXTape!' plus the EOF   |
| byte 26 (1Ah). This is followed by two bytes containing the major and minor  |
| version numbers.							       |
|									       |
| To be able to use a TZX file, your program must be able to handle files of   |
| at least its major version number. If your program can handle (say) version  |
| 1.05 and you encounter a file with version number 1.06, your program must be |
| able to handle it, even if it cannot handle all the data in the file.	       |
|									       |
| Then the main body of the file follows. It consists of a mixture of blocks,  |
| each preceded and identified by an ID byte.				       |
'-----------------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint8 signature[7]; /* 'ZXTape!' */
	zuint8 eof_marker;   /* 1Ah	  */
	zuint8 major_version;
	zuint8 minor_version;
) ZTZXHeader;

/* MARK: - Block ID */

typedef zuint8 ZTZXBlockID;

#define Z_TZX_BLOCK_ID_STANDARD_SPEED_DATA   0x10
#define Z_TZX_BLOCK_ID_TURBO_SPEED_DATA	     0x11
#define Z_TZX_BLOCK_ID_PURE_TONE	     0x12
#define Z_TZX_BLOCK_ID_PULSE_SEQUENCE	     0x13
#define Z_TZX_BLOCK_ID_PURE_DATA	     0x14
#define Z_TZX_BLOCK_ID_DIRECT_RECORDING	     0x15
#define Z_TZX_BLOCK_ID_C64_ROM_TYPE_DATA     0x16 /* Added in v1.13, deprecated in v1.20 */
#define Z_TZX_BLOCK_ID_C64_TURBO_TAPE_DATA   0x17 /* Added in v1.13, deprecated in v1.20 */
#define Z_TZX_BLOCK_ID_CSW_RECORDING	     0x18 /* Added in v1.20 */
#define Z_TZX_BLOCK_ID_GENERALIZED_DATA	     0x19 /* Added in v1.20 */
#define Z_TZX_BLOCK_ID_PAUSE		     0x20
#define Z_TZX_BLOCK_ID_GROUP_START	     0x21
#define Z_TZX_BLOCK_ID_GROUP_END	     0x22
#define Z_TZX_BLOCK_ID_JUMP		     0x23
#define Z_TZX_BLOCK_ID_LOOP_START	     0x24 /* Added in v1.10 */
#define Z_TZX_BLOCK_ID_LOOP_END		     0x25 /* Added in v1.10 */
#define Z_TZX_BLOCK_ID_CALL_SEQUENCE	     0x26 /* Added in v1.10 */
#define Z_TZX_BLOCK_ID_RETURN_FROM_SEQUENCE  0x27 /* Added in v1.10 */
#define Z_TZX_BLOCK_ID_SELECT		     0x28 /* Added in v1.10 */
#define Z_TZX_BLOCK_ID_STOP_IF_48K	     0x2A
#define Z_TZX_BLOCK_ID_SET_SIGNAL_LEVEL	     0x2B /* Added in v1.20 */
#define Z_TZX_BLOCK_ID_DESCRIPTION_TEXT	     0x30
#define Z_TZX_BLOCK_ID_MESSAGE		     0x31
#define Z_TZX_BLOCK_ID_ARCHIVE_INFORMATION   0x32
#define Z_TZX_BLOCK_ID_HARDWARE_TYPE	     0x33
#define Z_TZX_BLOCK_ID_EMULATION_INFORMATION 0x34 /* Deprecated in v1.20 */
#define Z_TZX_BLOCK_ID_CUSTOM_INFORMATION    0x35 /* Added in v1.01, deprecated in v1.20 */
#define Z_TZX_BLOCK_ID_SNAPSHOT		     0x40 /* Added in v1.10, deprecated in v1.20 */
#define Z_TZX_BLOCK_ID_GLUE		     0x5A

/* MARK: - ID 10h - Standard Speed Data
.------------------------------------------------------------------------------.
| This block must be played using the standard Spectrum ROM timings (see the   |
| values in curly brackets in block ID 11). The initial pilot tone consists in |
| 8063 pulses if the first data byte (flag byte) is < 128, 3223 otherwise.     |
| This block can be used for the ROM loading routines and for custom loading   |
| routines that use the same timings as ROM ones do.			       |
'-----------------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint16 pause_duration_ms;
	zuint16 data_size;
	Z_FLEXIBLE_ARRAY_MEMBER(zuint8 data[];)
) ZTZXStandardSpeedData;

/* MARK: - ID 11h - Turbo Speed Data
.------------------------------------------------------------------------------.
| This block is very similar to the normal TAP block but with some additional  |
| information on the timings and other important differences. The same tape    |
| encoding is used as for the standard speed data block. If a block should use |
| some non-standard sync or pilot tones (i.e. all sorts of protection schemes) |
| then use the next three blocks to describe it.			       |
'-----------------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint16 cycles_per_pilot_pulse;	    /* {2168} */
	zuint16 cycles_per_sync_high_pulse; /* {667}  */
	zuint16 cycles_per_sync_low_pulse;  /* {735}  */
	zuint16 cycles_per_bit_0_pulse;	    /* {855}  */
	zuint16 cycles_per_bit_1_pulse;	    /* {1710} */
	zuint16 pilot_tone_pulse_count;	    /* {8063 header (flag < 128), 3223 data (flag >= 128)} */
	zuint8	last_byte_bit_count;
	zuint16 pause_duration_ms;
	zuint8	data_size[3];
	Z_FLEXIBLE_ARRAY_MEMBER(zuint8 data[];)
) ZTZXTurboSpeedData;

/* MARK: - ID 12h - Pure Tone
.----------------------------------------------------------------------------.
| This will produce a tone which is basically the same as the pilot tone in  |
| the ID 10, ID 11 blocks. You can define how long the pulse is and how many |
| pulses are in the tone.						     |
'---------------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint16 cycles_per_pulse;
	zuint16 pulse_count;
) ZTZXPureTone;

/* MARK: - ID 13h - Pulse Sequence
.------------------------------------------------------------------------------.
| This will produce N pulses, each having its own timing. Up to 255 pulses can |
| be stored in this block; this is useful for non-standard sync tones used by  |
| some protection schemes.						       |
'-----------------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint8 pulse_count;
	Z_FLEXIBLE_ARRAY_MEMBER(zuint16 pulse_cycles[];)
) ZTZXPulseSequence;

/* MARK: - ID 14h - Pure Data
.------------------------------------------------------------------------------.
| This is the same as in the turbo loading data block (ID 11h), except that it |
| has no pilot or sync pulses.						       |
'-----------------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint16 cycles_per_bit_0_pulse;
	zuint16 cycles_per_bit_1_pulse;
	zuint8	last_byte_bit_count;
	zuint16 pause_duration_ms;
	zuint8	data_size[3];
	Z_FLEXIBLE_ARRAY_MEMBER(zuint8 data[];)
) ZTZXPureData;

/* MARK: - ID 15h - Direct Recording
.------------------------------------------------------------------------------.
| This block is used for tapes which have some parts in a format such that the |
| turbo loader block cannot be used. This is not like a VOC file, since the    |
| information is much more compact. Each sample value is represented by one    |
| bit only (0 for LOW, 1 for HIGH) which means that the block will be at most  |
| 1/8 the size of the equivalent VOC.					       |
|									       |
| The 'current pulse level' after playing this type of block is the last level |
| played.								       |
|									       |
| When creating a block of this type please stick to the standard sampling     |
| frequencies of 22050 or 44100 Hz (158 or 79 cycles per pulse). This will     |
| ensure correct playback when using modern soundcards.			       |
|									       |
| If you can, don't use other sampling frequencies and only use this block if  |
| you can not use any other one.					       |
'-----------------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint16 cycles_per_pulse;
	zuint16 pause_duration_ms;
	zuint8	last_byte_bit_count;
	zuint8	data_size[3];
	Z_FLEXIBLE_ARRAY_MEMBER(zuint8 data[];)
) ZTZXDirectRecording;

/* MARK: - ID 16h - C64 ROM Type Data (Added in v1.13, deprecated in v1.20)
.------------------------------------------------------------------------------.
| This block was created to support the Commodore 64 standard ROM and similar  |
| tape blocks. It is made so basically anything that uses two or four pulses   |
| (which are the same in pairs) per bit can be written with it.		       |
|									       |
| The replay procedure looks like this:					       |
|									       |
| 1) Pilot Tone								       |
| 2) x1 sync wave							       |
| 3) For each byte in data:						       |
|    1) x8 bit waves (1 wave for each bit of the byte)			       |
|    2) x1 XOR wave (optional)						       |
|    3) x1 finish byte wave (except in the last byte)			       |
| 4) x1 finish data wave						       |
| 5) Trailing tone (optional)						       |
| 6) Pause								       |
|									       |
| Some explanation:							       |
|									       |
| - A wave consists of 2 pulses: first LOW then HIGH.			       |
|									       |
| - If the cycles of any pulse are 0 then the wave must be skipped.	       |
|   This applies to DATA too.						       |
|									       |
| - Finish byte wave should be played after each byte EXCEPT last one.	       |
|									       |
| - Finish data wave should be ONLY played after last byte of data.	       |
|									       |
| - When all the data has finished there is an optional trailing tone, which   |
|   is standard for the repeated blocks in the Commodore 64 ROM Loader.	       |
'-----------------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint32 block_size;
	zuint16 cycles_per_pilot_pulse;		   /*  [616] */
	zuint16 pilot_wave_count;
	zuint16 cycles_per_sync_low_pulse;	   /* [1176] */
	zuint16 cycles_per_sync_high_pulse;	   /*  [896] */
	zuint16 cycles_per_bit_0_low_pulse;	   /*  [616] */
	zuint16 cycles_per_bit_0_high_pulse;	   /*  [896] */
	zuint16 cycles_per_bit_1_low_pulse;	   /*  [896] */
	zuint16 cycles_per_bit_1_high_pulse;	   /*  [616] */
	zuint8	xor_checksum_bit;
	zuint16 cycles_per_finish_byte_low_pulse;  /* [1176] */
	zuint16 cycles_per_finish_byte_high_pulse; /*  [896] */
	zuint16 cycles_per_finish_data_low_pulse;  /* [1176] */
	zuint16 cycles_per_finish_data_high_pulse; /*  [616] */
	zuint16 cycles_per_trailing_tone_pulse;	   /*  [616] */
	zuint16 trailing_tone_wave_count;
	zuint8	last_byte_bit_count;

	struct {Z_BIT_FIELD(8, 2) (
		zuint8 unused	      :7,
		zuint8 data_bit_order :1
	)} general_purpose;

	zuint16 pause_duration_ms;
	zuint8	data_size[3];
	Z_FLEXIBLE_ARRAY_MEMBER(zuint8 data[];)
) ZTZXC64ROMTypeData;

#define Z_TZX_C64_XOR_CHECKSUM_BIT_START_WITH_0 0x00
#define Z_TZX_C64_XOR_CHECKSUM_BIT_START_WITH_1 0x01
#define Z_TZX_C64_XOR_CHECKSUM_BIT_NONE		0xFF

#define Z_TZX_C64_DATA_BIT_ORDER_LSB 0 /* LSB first */
#define Z_TZX_C64_DATA_BIT_ORDER_MSB 1 /* MSB first */

/* MARK: - ID 17h - C64 Turbo Tape Data (Added in v1.13, deprecated in v1.20)
.------------------------------------------------------------------------------.
| This block is made to support another type of encoding that is commonly used |
| by the Commodore 64. Most of the commercial software uses this encoding,     |
| i.e. the pilot tone is not made from one type of wave only, but it is made   |
| from actual data byte which is repeated many times. As the sync value	       |
| another, different, data byte is sent to signal the start of the data. The   |
| data bits are made from ONE wave only and there is NO XOR checksum either.   |
| The trailing byte is played one or more times AFTER the DATA has ended.      |
|									       |
| The replay procedure looks like this:					       |
|									       |
| 1) Pilot bytes							       |
| 2) For each byte in data:						       |
|    1) Padding bits (only if padding position is BEFORE)		       |
|    2) x8 bit waves (1 wave for each bit of the byte)			       |
|    3) Padding bits (only if padding position is AFTER)		       |
| 3) Trailing bytes							       |
| 4) Pause								       |
'-----------------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint32 block_size;
	zuint16 cycles_per_bit_0_pulse;
	zuint16 cycles_per_bit_1_pulse;

	struct {Z_BIT_FIELD(8, 4) (
		zuint8 unused	:3,
		zuint8 position	:1,
		zuint8 value	:1,
		zuint8 count	:3
	)} padding_bits;

	zuint16 pilot_byte_count;
	zuint8	pilot_byte;
	zuint8	last_byte_bit_count;

	struct {Z_BIT_FIELD(8, 2) (
		zuint8 unused	      :7,
		zuint8 data_bit_order :1
	)} general_purpose;

	zuint16 trailing_byte_count;
	zuint8	trailing_byte;
	zuint16 pause_duration_ms;
	zuint8	data_size[3];
	Z_FLEXIBLE_ARRAY_MEMBER(zuint8 data[];)
) ZTZXC64TurboTapeData;

#define Z_TZX_C64_PADDING_BITS_POSITION_BEFORE 0
#define Z_TZX_C64_PADDING_BITS_POSITION_AFTER  1

/* MARK: - ID 18h - CSW Recording (Added in v1.20)
.------------------------------------------------------------------------------.
| This block contains a sequence of raw pulses encoded in CSW format v2. See   |
| details of this format in <Z/formats/audio/CSW.h>			       |
|									       |
| The 'current pulse level' after playing this type of block is the last level |
| played.								       |
'-----------------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint32 block_size;
	zuint16 pause_duration_ms;
	zuint8	sampling_rate[3];
	zuint8	compression_type;
	zuint32 pulse_count; /* after decompression, for validation purposes */
	Z_FLEXIBLE_ARRAY_MEMBER(zuint8 csw_data[];)
) ZTZXCSWRecording;

#define Z_TZX_CSW_COMPRESSION_TYPE_RLE	 1
#define Z_TZX_CSW_COMPRESSION_TYPE_Z_RLE 2

/* MARK: - ID 19h - Generalized Data (Added in v1.20)
.------------------------------------------------------------------------------.
| This block has been specifically developed to represent an extremely wide    |
| range of data encoding techniques. The basic idea is that each loading       |
| component (pilot tone, sync, data) is associated to a specific sequence of   |
| pulses, where each sequence (wave) can contain a different number of pulses  |
| from the others. e.g. we can represent bit 0 with 4 pulses and bit 1 with 8  |
| pulses.								       |
|									       |
| The symbols definitions are stored using a table where each symbol is a row  |
| of pulses. The number of columns (i.e. pulses) of the table is the maximum   |
| number of pulses per symbol (amongst pilot/sync and data symbols); shorter   |
| waves are terminated by a zero-length pulse in the sequence.		       |
|									       |
| Any number of data symbols is allowed, so we can have more than two distinct |
| waves; for example, imagine a loader which writes two bits at a time by      |
| encoding them with four distinct pulse lengths: this loader would have a     |
| symbols definition table of four symbols, each associated to a specific      |
| sequence of pulses (wave).						       |
'-----------------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint32 block_size;
	zuint16 pause_duration_ms;
	zuint32 pilot_sync_symbol_count;
	zuint8	pulses_per_pilot_sync_symbol_maximum;
	zuint8	pilot_sync_symbol_definition_count;
	zuint32 data_symbol_count;
	zuint8	pulses_per_data_symbol_maximum;
	zuint8	data_symbol_definition_count;
	/* Pilot/sync symbols definition table */
	/* Pilot/sync stream		       */
	/* Data symbols definition table       */
	/* Data stream			       */
) ZTZXGeneralizedData;

Z_DEFINE_STRICT_STRUCTURE (
	zuint8 polarity;
	Z_FLEXIBLE_ARRAY_MEMBER(zuint16 pulse_durations[];)
) ZTZXSymbolDefinition;

#define Z_TZX_SYMBOL_DEFINITION_FLAG_POLARITY_OPPOSITE 0
#define Z_TZX_SYMBOL_DEFINITION_FLAG_POLARITY_CURRENT  1
#define Z_TZX_SYMBOL_DEFINITION_FLAG_POLARITY_LOW      2
#define Z_TZX_SYMBOL_DEFINITION_FLAG_POLARITY_HIGH     3

/*----------------------------------------------------------------------------.
| Most commonly, pilot and sync are repetitions of the same pulse, thus they  |
| are represented using a very simple RLE encoding structure which stores the |
| symbol and the number of times it must be repeated.			      |
|									      |
| Each symbol in the data stream is represented by a string of NB bits of the |
| block data, where NB = ceil(log2(ASD)). Thus the length of the whole data   |
| stream in bits is NB * TOTD, or in bytes DS = ceil(NB * TOTD / 8).	      |
'----------------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint8	symbol;
	zuint16 repetitions;
) ZTZXPulseRLE;

/* MARK: EXAMPLE
A typical Spectrum's standard loading header can be represented like this:

Offset	   Value			Description
.----+-----------------+----------------------------------------------.
| 00 | 59 (3Bh)	       | Total block length			      |
|----+-----------------+----------------------------------------------|
| 04 | 1000 (03E8h)    | Pause after this block (ms.)		      |
|----+-----------------+----------------------------------------------|
| 06 | 2	       | Total number of symbols in pilot/sync block  |
|----+-----------------+----------------------------------------------|
| 0A | 2	       | Maximum pulses per symbol		      |
|----+-----------------+----------------------------------------------|
| 0B | 2	       | Number of symbols in pilot/sync alphabet     |
|----+-----------------+----------------------------------------------|
| 0C | 152 (98h)       | Total number of symbols (bits, in this case) |
|    |		       | in data stream				      |
|----+-----------------+----------------------------------------------|
| 10 | 2	       | Max pulses per data symbol		      |
|----+-----------------+----------------------------------------------|
| 11 | 2	       | Number of symbols in data alphabet	      |
|----+-----------------+----------------------------------------------|
| 12 | (0, 2168, 0)    | Pilot/sync symbol definitions		      |
|    | (0, 667, 735)   |					      |
|----+-----------------+----------------------------------------------|
| 1C | (0, 8063)       | Pilot/sync data block			      |
|    | (1, 1)	       |					      |
|----+-----------------+----------------------------------------------|
| 22 | (0, 855, 855)   | Data symbol definitions		      |
|    | (0, 1710, 1710) |					      |
|----+-----------------+----------------------------------------------|
| 2C | 00000000b (00h) |- Loading flag (00h = header)		      |
|    | 00000011b (03h) |- Data type (03h = "Bytes:")		      |
|    | 01001010b (4Ah) |\					      |
|    | 01010000b (50h) | |					      |
|    | 01010011b (53h) | |					      |
|    | 01010000b (50h) | |					      |
|    | 00100000b (20h) | | File name ("JPSP")			      |
|    | 00100000b (20h) | |					      |
|    | 00100000b (20h) | |					      |
|    | 00100000b (20h) | |					      |
|    | 00100000b (20h) | |					      |
|    | 00100000b (20h) |/					      |
|    | 00000000b (00h) |\ Data length				      |
|    | 00011011b (1Bh) |/					      |
|    | 00000000b (00h) |\ Start address				      |
|    | 01000000b (40h) |/					      |
|    | 00000000b (00h) |\ Autostart (no meaning here)		      |
|    | 10000000b (80h) |/					      |
|    | 11000001b (C1h) |- Checksum				      |
'--------------------------------------------------------------------*/

/* MARK: - ID 20h - Pause (Silence) or 'Stop the Tape' Command
.------------------------------------------------------------------------------.
| This will make a silence (LOW pulses) for a given time. If the duration is 0 |
| then the emulator or utility should (in effect) STOP THE TAPE, i.e. should   |
| not continue loading until the user or emulator requests it.		       |
'-----------------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint16 duration_ms;
) ZTZXPause;

/* MARK: - ID 21h - Group Start
.----------------------------------------------------------------------------.
| This block marks the start of a group of blocks which are to be treated as |
| one single (composite) block. This is very handy for tapes that use lots   |
| of subblocks like Bleepload (which may well have over 160 custom loading   |
| blocks). You can also give the group a name (example 'Bleepload Block 1'). |
|									     |
| For each group start block, there must be a group end block. Nesting of    |
| groups is not allowed.						     |
'---------------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint8 name_size;
	Z_FLEXIBLE_ARRAY_MEMBER(zuint8 name_ascii[];)
) ZTZXGroupStart;

/* MARK: - ID 22h - Group End
.------------------------------------------------------------.
| This indicates the end of a group. This block has no body. |
'-----------------------------------------------------------*/

/* MARK: - ID 23h - Jump
.---------------------------------------------------------------------.
| This block will enable you to jump from one block to another within |
| the file. Some examples:					      |
|								      |
| Jump  0 = 'Loop Forever' - this should never happen		      |
| Jump  1 = 'Go to the next block' - it is like NOP in assembler ;)   |
| Jump  2 = 'Skip one block'					      |
| Jump -1 = 'Go to the previous block'				      |
|								      |
|All blocks are included in the block count!			      |
'--------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint16 relative_offset;
) ZTZXJump;

/* MARK: - ID 24h - Loop Start (Added in v1.10)
.-----------------------------------------------------------------------.
| If you have a sequence of identical blocks, or of identical groups of |
| blocks, you can use this block to tell how many times they should be	|
| repeated. This block is the same as the FOR statement in BASIC.	|
|									|
| For simplicity reasons don't nest loop blocks!			|
'----------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint16 count;
) ZTZXLoopStart;

/* MARK: - ID 25h - Loop End (Added in v1.10)
.-----------------------------------------------------------------------.
| This is the same as BASIC's NEXT statement. It means that the utility |
| should jump back to the start of the loop if it hasn't been run for	|
| the specified number of times.					|
|									|
| This block has no body.						|
'----------------------------------------------------------------------*/

/* MARK: - ID 26h - Call Sequence (Added in v1.10)
.----------------------------------------------------------------------------.
| This block is an analogue of the CALL Subroutine statement. It basically   |
| executes a sequence of blocks that are somewhere else and then goes back   |
| to the next block. Because more than one call can be normally used you can |
| include a list of sequences to be called. The 'nesting' of call blocks is  |
| also not allowed for the simplicity reasons. You can, of course, use the   |
| CALL blocks in the LOOP sequences and vice versa. The value is relative    |
| for the obvious reasons - so that you can add some blocks in the beginning |
| of the file without disturbing the call values. Please take a look at	     |
| 'Jump To Block' for reference on the values.				     |
'---------------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint16 count;
	Z_FLEXIBLE_ARRAY_MEMBER(zuint16 relative_offsets[];)
) ZTZXCallSequence;

/* MARK: - ID 27h - Return from Sequence (Added in v1.10)
.----------------------------------------------------------------------------.
| This block indicates the end of the Called Sequence. The next block played |
| will be the block after the last CALL block (or the next Call, if the Call |
| block had multiple calls).						     |
|									     |
| This block has no body.						     |
'---------------------------------------------------------------------------*/

/* MARK: - ID 28h - Select (Added in v1.10)
.------------------------------------------------------------------------------.
| This block is useful when the tape consists of two or more separately	       |
| loadable parts. With this block, you are able to select one of the parts and |
| the utility/emulator will start loading from that block. For example you can |
| use it when the game has a separate Trainer or when it is a multiload.       |
| Of course, to make some use of it the emulator/utility has to show a menu    |
| with the selections when it encounters such a block.			       |
| All offsets are relative signed words.				       |
'-----------------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint16 relative_offset;
	zuint8	description_size;
	Z_FLEXIBLE_ARRAY_MEMBER(zuint8 description_ascii[];)
) ZTZXSelectItem;

Z_DEFINE_STRICT_STRUCTURE (
	zuint32	block_size;
	zuint8	selection_count;
	Z_FLEXIBLE_ARRAY_MEMBER(zuint8 selection[];) /* ZTZXSelectItem */
) ZTZXSelect;

/* MARK: - ID 2Ah - Stop Tape if in 48K Mode
.----------------------------------------------------------------------------.
| When this block is encountered, the tape will stop ONLY if the machine is  |
| an 48K Spectrum. This block is to be used for multiloading games that load |
| one level at a time in 48K mode, but load the entire tape at once if in    |
| 128K mode.								     |
| This block has no body of its own, but follows the extension rule.	     |
'---------------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint32 block_size; /* without this field */
) ZTZXStopIf48K;

/* MARK: - ID 2Bh - Set Signal Level (Added in v1.20)
.----------------------------------------------------------------------.
| This block sets the current signal level to the specified value      |
| (high or low). It should be used whenever it is necessary to avoid   |
| any ambiguities, e.g. with custom loaders which are level-sensitive. |
'---------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint32 block_size; /* without this field */
	zuint8	level;
) ZTZXSetSignalLevel;

#define Z_TZX_SIGNAL_LEVEL_LOW	0
#define Z_TZX_SIGNAL_LEVEL_HIGH	1

/* MARK: - ID 30h - Description Text
.------------------------------------------------------------------------------.
| This is meant to identify parts of the tape, so you know where level 1       |
| starts, where to rewind to when the game ends, etc. This description is not  |
| guaranteed to be shown while the tape is playing, but can be read while      |
| browsing the tape or changing the tape pointer.			       |
|									       |
| The description can be up to 255 characters long but please keep it down to  |
| about 30 so the program can show it in one line (where this is appropriate). |
|									       |
| Please use 'Archive Information' block for title, authors, publisher, etc.   |
'-----------------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint8 ascii_size;
	Z_FLEXIBLE_ARRAY_MEMBER(zuint8 ascii[];)
) ZTZXDescriptionText;

/* MARK: - ID 31h - Message
.----------------------------------------------------------------------------.
| This will enable the emulators to display a message for a given time. This |
| should not stop the tape and it should not make silence. If the time is 0  |
| then the emulator should wait for the user to press a key.		     |
|									     |
| The text message should:						     |
| - stick to a maximum of 30 chars per line;				     |
| - use single 0x0D (13 decimal) to separate lines;			     |
| - stick to a maximum of 8 lines.					     |
|									     |
| If you do not obey these rules, emulators may display your message in any  |
| way they like.							     |
'---------------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint8 display_seconds;
	zuint8 ascii_size;
	Z_FLEXIBLE_ARRAY_MEMBER(zuint8 ascii[];)
) ZTZXMessage;

/* MARK: - ID 32h - Archive Information
.------------------------------------------------------------------------------.
| Use this block at the beginning of the tape to identify the title of the     |
| game, author, publisher, year of publication, price (including the	       |
| currency), type of software (arcade adventure, puzzle, word processor, ...), |
| protection scheme it uses (Speedlock 1, Alkatraz, ...) and its origin	       |
| (Original, Budget re-release, ...), etc. This block is built in a way that   |
| allows easy future expansion. The block consists of a series of text	       |
| strings. Each text has its identification number (which tells us what the    |
| text means) and then the ASCII text. To make it possible to skip this block, |
| if needed, the length of the whole block is at the beginning of it.	       |
|									       |
| If all texts on the tape are in English language then you don't have to      |
| supply the 'Language' field.						       |
|									       |
| The information about what hardware the tape uses is in the 'Hardware Type'  |
| block, so no need for it here.					       |
'-----------------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint8 id;
	zuint8 ascii_size;
	Z_FLEXIBLE_ARRAY_MEMBER(zuint8 ascii[];)
) ZTZXText;

Z_DEFINE_STRICT_STRUCTURE (
	zuint32 block_size;
	zuint8	text_count;
	Z_FLEXIBLE_ARRAY_MEMBER(zuint8 text[];) /* ZTZXText */
) ZTZXArchiveInformation;

/* MARK: - ID 33h - Hardware Type
.----------------------------------------------------------------------------.
| This blocks contains information about the hardware that the programs on   |
| this tape use. Please include only machines and hardware for which you are |
| 100% sure that it either runs (or doesn't run) on or with, or you know it  |
| uses (or doesn't use) the hardware or special features of that machine.    |
|									     |
| If the tape runs only on the ZX81 (and TS1000, etc.) then it clearly won't |
| work on any Spectrum or Spectrum variant, so there's no need to list this  |
| information.								     |
|									     |
| If you are not sure or you haven't tested a tape on some particular	     |
| machine/hardware combination then do not include it in the list.	     |
|									     |
| The list of hardware types and IDs is somewhat large, and may be found at  |
| the end of the format description.					     |
'---------------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint8 type;
	zuint8 id;
	zuint8 compatibility;
) ZTZXHardware;

#define Z_TZX_HARDWARE_COMPATIBILITY_COMPATIBLE	  0
#define Z_TZX_HARDWARE_COMPATIBILITY_NEEDED	  1
#define Z_TZX_HARDWARE_COMPATIBILITY_UNNEEDED	  2
#define Z_TZX_HARDWARE_COMPATIBILITY_INCOMPATIBLE 3

Z_DEFINE_STRICT_STRUCTURE (
	zuint8 hardware_count;
	Z_FLEXIBLE_ARRAY_MEMBER(ZTZXHardware hardware[];)
) ZTZXHardwareType;

/* MARK: - ID 34h - Emulation Information (Deprecated in v1.20)
.------------------------------------------------------------------------------.
| This is a special block that would normally be generated only by emulators.  |
| For now it contains information on everything the authors could find that    |
| other formats support. Please inform them of any additions/corrections since |
| this is a very important part for emulators.				       |
| Those bits that are not used by the emulator that stored the info, should be |
| left at their DEFAULT values.						       |
'------------------------------------------------------------------------------'

Flags field (16-bit little-endian):
.---------------------------------.
| F E D C B A 9 8 7 6 5 4 3 2 1 0 |
'-\_________/-|-|-|-|-|-\_/-|-|-|-'
       |      | | | | |  |  | | '-> R register emulation
       |      | | | | |  |  | '---> LDIR emulation
       |      | | | | |	 |  '-----> high resolution colour emulation with
       |      | | | | |  |          true interrupt frequency
       |      | | | | |  '--------> video synchronisation
       |      | | | | |		    (1 = high, 3 = low, 0 or 2 = normal)
       |      | | | | '-----------> fast loading when ROM load routine is used
       |      | | | '-------------> border emulation
       |      | | '---------------> screen refresh mode (1 = ON, 0 = OFF)
       |      | '-----------------> start playing the tape immediately
       |      '-------------------> auto type LOAD"" or press ENTER when in 128K mode
       '--------------------------> unused */

Z_DEFINE_STRICT_STRUCTURE (
	zuint16 flags;
	zuint8	screen_refresh_delay;	/* 1 - 255 */
	zuint16 interrupt_hz;		/* 0 - 999 */
	zuint8	reserved[3];
) ZTZXEmulationInformation;

/* MARK: - ID 35h - Custom Information (Added in v1.01, deprecated in v1.20)
.------------------------------------------------------------------------.
| This block can be used to save any information you want. For example,	 |
| it might contain some information written by a utility, extra settings |
| required by a particular emulator, or even poke data.			 |
'-----------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint8	ascii_id;
	zuint32	data_size;
	Z_FLEXIBLE_ARRAY_MEMBER(zuint8 data[];)
) ZTZXCustomInformation;

/* MARK: - ID 40h - Snapshot (Added in v1.10, deprecated in v1.20)
.------------------------------------------------------------------------------.
| This would enable one to snapshot the prgram at the start and still have all |
| the tape blocks in the same file. Only .Z80 and .SNA snapshots are supported |
| for compatibility reasons!.						       |
| The emulator should take care of that the snapshot is not taken while the    |
| actual tape loading is taking place (which doesn't do much sense). When an   |
| emulator encounters the snapshot block it should load it and then continue   |
| with the next block.							       |
'-----------------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint8 format;
	zuint8 size[3];
	Z_FLEXIBLE_ARRAY_MEMBER(zuint8 data[];)
) ZTZXSnapshot;

#define Z_TZX_SNAPSHOT_FORMAT_Z80 0
#define Z_TZX_SNAPSHOT_FORMAT_SNA 1

/* MARK: - ID 5Ah - "Glue"
.------------------------------------------------------------------------------.
| This block is generated when you merge two ZX Tape files together. It is     |
| here so that you can easily copy the files together and use them. Of course, |
| this means that resulting file would be 10 bytes longer than if this block   |
| was not used. All you have to do if you encounter this block ID is to skip   |
| next 9 bytes.								       |
| If you can avoid using this block for this purpose, then do so; it is	       |
| preferable to use a utility to join the two files and ensure that they are   |
| both of the higher version number.					       |
'-----------------------------------------------------------------------------*/

Z_DEFINE_STRICT_STRUCTURE (
	zuint8 data[9];
) ZTZXGlue;

#endif /* __Z_formats_storage_medium_image_audio_TZX_H__ */
