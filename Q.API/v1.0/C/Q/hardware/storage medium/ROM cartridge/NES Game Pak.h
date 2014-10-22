/* Q API - hardware/storage medium/ROM cartridge/NES Game Pak.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2014 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU General Public License v3. */

#ifndef __Q_hardware_storage_medium_ROM_cartridge_NES_Game_Pak_H__
#define __Q_hardware_storage_medium_ROM_cartridge_NES_Game_Pak_H__

#include <Q/types/base.h>

Q_DEFINE_STRICT_STRUCTURE (

) QNESGamePakHeader;

#define Q_NES_GAME_PAK_HEADER(p) ((QNESGamePakHeader *)(p))



#endif /* __Q_hardware_storage_medium_ROM_cartridge_NES_Game_Pak_H__ */


/*    .-------------------------------------------------.
     /							 \
    /							  \
   /		       Cartridge Pinouts		   \
  /							    \
 /		 CHA			    PROG	     \
.--------------------------------------------------------------.
| .----------------------------------------------------------. |
| |		 .-.			     .-.	     | |
| |     GND -01A-|=|-01B- GND        GND-01A-|=|-01B-GND     | |
| |     GND -02A-|=|-02B- GND        GND-02A-|=|-02B-GND     | |
| |      P0 -03A-|=|-03B- P1         GND-03A-|=|-03B-GND     | |
| |      P2 -04A-|=|-04B- P3         GND-04A-|=|-04B-GND     | |
| |      P4 -05A-|=|-05B- P5          D0-05A-|=|-05B-A1      | |
| |      P6 -06A-|=|-06B- P7          D1-06A-|=|-06B-A2      | |
| |      P8 -07A-|=|-07B- P9          D2-07A-|=|-07B-A3      | |
| |     P10 -08A-|=|-08B- P11         D3-08A-|=|-08B-A4      | |
| |     P12 -09A-|=|-09B- P13         D4-09A-|=|-09B-A5      | |
| |     P14 -10A-|=|-10B- P15         D5-10A-|=|-10B-A6      | |
| |     P16 -11A-|=|-11B- P17         D6-11A-|=|-11B-A7      | |
| |     P18 -12A-|=|-12B- P19         D7-12A-|=|-12B-A8      | |
| |     P20 -13A-|=|-13B- P21         D8-13A-|=|-13B-A9      | |
| |     P22 -14A-|=|-14B- P23         D9-14A-|=|-14B-A10     | |
| |   PCK1B -15A-|=|-15B- 24M        D10-15A-|=|-15B-A11     | |
| |   PCK2B -16A-|=|-16B- 12M        D11-16A-|=|-16B-A12     | |
| |     2H1 -17A-|=|-17B- 8M         D12-17A-|=|-17B-A13     | |
| |     CA4 -18A-|=|-18B- RESET      D13-18A-|=|-18B-A14     | |
| |     CR0 -19A-|=|-19B- CR1        D14-19A-|=|-19B-A15     | |
| |     CR2 -20A-|=|-20B- CR3        D15-20A-|=|-20B-A16     | |
| |     CR4 -21A-|=|-21B- CR5        R/W-21A-|=|-21B-A17     | |
| |     CR6 -22A-|=|-22B- CR7         AS-22A-|=|-22B-A18     | |
| |     CR8 -23A-|=|-23B- CR9     ROMOEU-23A-|=|-23B-A19     | |
| |    CR10 -24A-|=|-24B- CR11    ROMOEL-24A-|=|-24B-68KCLKB | |
| |    CR12 -25A-|=|-25B- CR13   PORTOEU-25A-|=|-25B-ROMWAIT | |
| |    CR14 -26A-|=|-26B- CR15   PORTOEL-26A-|=|-26B-PWAIT0  | |
| |    CR16 -27A-|=|-27B- CR17   PORTWEU-27A-|=|-27B-PWAIT1  | |
| |    CR18 -28A-|=|-28B- CR19   PORTWEL-28A-|=|-28B-PDTACT  | |
| |     VCC -29A-|=|-29B- VCC        VCC-29A-|=|-29B-VCC     | |
| |     VCC -30A-|=|-30B- VCC        VCC-30A-|=|-30B-VCC     | |
| |     VCC -31A-|=|-31B- VCC        VCC-31A-|=|-31B-VCC     | |
| |     VCC -32A-|=|-32B- VCC        VCC-32A-|=|-32B-VCC     | |
| |    CR20 -33A-|=|-33B- CR21  PORTADRS-33A-|=|-33B-4MB     | |
| |    CR22 -34A-|=|-34B- CR23        NC-34A-|=|-34B-ROMOE   | |
| |    CR24 -35A-|=|-35B- CR25        NC-35A-|=|-35B-RESET   | |
| |    CR26 -36A-|=|-36B- CR27        NC-36A-|=|-36B-NC      | |
| |    CR28 -37A-|=|-37B- CR29        NC-37A-|=|-37B-NC      | |
| |    CR30 -38A-|=|-38B- CR31        NC-38A-|=|-38B-NC      | |
| |      NC -39A-|=|-39B- FIX00       NC-39A-|=|-39B-NC      | |
| |      NC -40A-|=|-40B- FIX01       NC-40A-|=|-40B-NC      | |
| |      NC -41A-|=|-41B- FIX02       NC-41A-|=|-41B-SDPAD0  | |
| | SYSTEMB -42A-|=|-42B- FIX03  SYSTEMB-42A-|=|-42B-SDPAD1  | |
| |    SDA0 -43A-|=|-43B- FIX04    SDPA8-43A-|=|-43B-SDPAD2  | |
| |    SDA1 -44A-|=|-44B- FIX05    SDPA9-44A-|=|-44B-SDPAD3  | |
| |    SDA2 -45A-|=|-45B- FIX06   SDPA10-45A-|=|-45B-SDPAD4  | |
| |    SDA3 -46A-|=|-46B- FIX07   SDPA11-46A-|=|-46B-SDPAD5  | |
| |    SDA4 -47A-|=|-47B- SDRD0   SDPMPX-47A-|=|-47B-SDPAD6  | |
| |    SDA5 -48A-|=|-48B- SDRD1    SDPOE-48A-|=|-48B-SDPAD7  | |
| |    SDA6 -49A-|=|-49B- SDROM    SDRA8-49A-|=|-49B-SDRA00  | |
| |    SDA7 -50A-|=|-50B- SDMRD    SDRA9-50A-|=|-50B-SDRA01  | |
| |    SDA8 -51A-|=|-51B- SDDO    SDRA20-51A-|=|-51B-SDRA02  | |
| |    SDA9 -52A-|=|-52B- SDD1    SDRA21-52A-|=|-52B-SDRA03  | |
| |   SDA10 -53A-|=|-53B- SDD2    SDRA22-53A-|=|-53B-SDRA04  | |
| |   SDA11 -54A-|=|-54B- SDD3    SDRA23-54A-|=|-54B-SDRA05  | |
| |   SDA12 -55A-|=|-55B- SDD4    SDRMPX-55A-|=|-55B-SDRA06  | |
| |   SDA13 -56A-|=|-56B- SDD5     SDROE-56A-|=|-56B-SDRA07  | |
| |   SDA14 -57A-|=|-57B- SDD6       GND-57A-|=|-57B-GND     | |
| |   SDA15 -58A-|=|-58B- SDD7       GND-58A-|=|-58B-GND     | |
| |     GND -59A-|=|-59B- GND        GND-59A-|=|-59B-GND     | |
| |     GND -60A-|=|-60B- GND        GND-60A-|=|-60B-GND     | |
| |		 '-'			     '-'	     | |
| '----------------------------------------------------------' |
'-------------------------------------------------------------*/