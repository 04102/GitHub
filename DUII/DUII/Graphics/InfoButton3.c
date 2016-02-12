/*********************************************************************
*                SEGGER MICROCONTROLLER SYSTEME GmbH                 *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*
* C-file generated by
*
*        Bitmap converter for emWin V5.04.
*        Compiled Jan  8 2010, 16:37:17
*        (C) 1998 - 2005 Segger Microcontroller Systeme GmbH
*
**********************************************************************
*
* Source file: InfoButton3
* Dimensions:  34 * 35
* NumColors:   256
*
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

/*   Palette
The following are the entries of the palette table.
Every entry is a 32-bit value (of which 24 bits are actually used)
the lower   8 bits represent the Red component,
the middle  8 bits represent the Green component,
the highest 8 bits (of the 24 bits used) represent the Blue component
as follows:   0xBBGGRR
*/

static GUI_CONST_STORAGE GUI_COLOR ColorsInfoButton3[] = {
     0x000000,0x222222,0xFDFDFD,0xAB6330
    ,0x2D2D2D,0x7B3C24,0xB36932,0x111111
    ,0xA25C2E,0x824226,0x8C4A29,0x595D5E
    ,0x723522,0x9A552B,0x414141,0x0B0B0B
    ,0x393939,0xCC7D38,0xD28239,0x9D582D
    ,0x1B1B1B,0x323333,0x6D3121,0x753823
    ,0x6C7175,0xCA7A34,0x95512B,0xBD7134
    ,0xC27534,0x3E3E3E,0x934C24,0xAC612D
    ,0x8C4926,0x864528,0x914E2A,0xB96E33
    ,0x8A431D,0x4A4C4D,0x6B7074,0xA95E2B
    ,0xCE803A,0x292929,0x6B2D1D,0x515355
    ,0x7B5A49,0x7C726C,0x884728,0xBA6C2C
    ,0x807670,0x252525,0x454545,0x6A4D45
    ,0x745548,0x626364,0x746964,0xA05523
    ,0xB36A2D,0xB06731,0x847A73,0x8C827A
    ,0x9D9389,0xE9EEF3,0x363839,0x3A3C3D
    ,0x72321E,0x7C391C,0x7F4025,0x7C4D36
    ,0x424445,0x6E5147,0x766C68,0x8E512B
    ,0x9A5224,0xA65F30,0xB1652C,0xBA723A
    ,0xC67836,0xC57A3C,0xD48234,0xB99170
    ,0xDB8C41,0xC29973,0x938B83,0xECF0F4
    ,0x2A2B2C,0x6B2F21,0x464849,0x4E5052
    ,0x555758,0x56595A,0x65615F,0x5E6061
    ,0x796F6B,0x813E22,0x934B1F,0x894323
    ,0xB46D39,0xC2722E,0xC97731,0xD07E35
    ,0xA46D4B,0x947561,0xD98536,0xAC876E
    ,0xB2856D,0xB28C6F,0xBE9572,0xD38540
    ,0xD68840,0xC49972,0xBBA29A,0xBAABA4
    ,0xCBD0D4,0xD6DADE,0xE2E7ED,0xE7EAEE
    ,0xE9EAEC,0xF1EDEC,0xF5FAFD,0x070808
    ,0x1D1F21,0x212324,0x232527,0x252829
    ,0x2C2F30,0x343638,0x672B1D,0x59352E
    ,0x5C3D36,0x642E21,0x793720,0x7E5038
    ,0x3E3F40,0x3F4143,0x404345,0x444749
    ,0x4A4E50,0x525558,0x53585A,0x664943
    ,0x60514E,0x715347,0x775849,0x7F604D
    ,0x7A6150,0x6D6461,0x61666B,0x666869
    ,0x65696C,0x686A6B,0x716765,0x7F6F65
    ,0x686E73,0x717376,0x7A7D7E,0x7D7F7F
    ,0x883F17,0x833E1E,0x905126,0x8B5737
    ,0x87543A,0x945631,0x905A3A,0x9A5D3C
    ,0xA55924,0xAB5C23,0x9F6432,0x9F663B
    ,0xAE6026,0xB26327,0xBF702F,0xA76030
    ,0xA5653C,0xA66E3E,0xC0773C,0x875C45
    ,0x875D48,0x8A5F48,0x8E694B,0x9C6041
    ,0x906D55,0x977357,0x967559,0x9F775E
    ,0xAD7547,0xAD7249,0xB07F5E,0x8C7561
    ,0x87766A,0x927864,0x967F6D,0x997E69
    ,0xDE8837,0x86817D,0x91857A,0x92887F
    ,0xB08B6F,0xA38B7A,0xAB887C,0xB58E70
    ,0xBB8F74,0xB48D7A,0xB79070,0xBC9371
    ,0xBB917A,0xDE9753,0xC08F6D,0xC09773
    ,0xC29A76,0xC89F79,0xD09F71,0x7D7F81
    ,0x8B8580,0x8A8887,0x888888,0x9C8B81
    ,0x988E85,0x9A9086,0xA0958B,0xB09C88
    ,0xA19992,0xB29A92,0xB2ACA6,0xB7B5B5
    ,0xB6B7BA,0xD7AD8E,0xCCAB97,0xCDAD9B
    ,0xD5AD90,0xC8AEA1,0xC8B7AC,0xC4B7B3
    ,0xCEBFBB,0xDFC0AA,0xCDC0BE,0xE5CFBF
    ,0xBAC0C5,0xD9CCC2,0xDBCDC8,0xDBD2CE
    ,0xCBCCD0,0xD5D5D7,0xD1D6DA,0xEAD6C7
    ,0xE2D8D3,0xEFDFD4,0xE5DDDB,0xF0DFD2
    ,0xEFE1D7,0xD4DBE1,0xDBDFE4,0xDDE1E3
    ,0xECE4E0,0xE8E7EA,0xF7F5F6,0xF4F7F9
};

static GUI_CONST_STORAGE GUI_LOGPALETTE PalInfoButton3 = {
  256,	/* number of entries */
  0, 	/* No transparency */
  &ColorsInfoButton3[0]
};

static GUI_CONST_STORAGE unsigned char acInfoButton3[] = {
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x54, 0x04, 0x04, 0x04, 0x04, 0x04,
  0x10, 0x10, 0x10, 0x10, 0x3F, 0x44, 0x89, 0x92, 0x98, 0x26, 0x26, 0x26, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x26, 0x94, 0x59, 0x32, 0x3F, 0x10, 0x10, 0x10, 0x10,
  0x0E, 0x0E, 0x0E, 0x32, 0x58, 0x9B, 0xDB, 0xD0, 0x6D, 0x6D, 0x51, 0x51, 0x51, 0xCF, 0x6A, 0x6A, 0xCB, 0xCB, 0x4F, 0xCA, 0xCA, 0xC7, 0x69, 0x69, 0xC4, 0x67, 0x67, 0xD7, 0xD3, 0x0B, 0x32, 0x0E, 0x0E, 0x0E,
  0x0E, 0x0E, 0x44, 0x2B, 0xD5, 0xD2, 0x50, 0x66, 0x66, 0x4E, 0x4E, 0x63, 0x63, 0x19, 0x62, 0x62, 0x62, 0x61, 0xAA, 0x2F, 0x2F, 0x38, 0x4A, 0x4A, 0x1F, 0x27, 0x27, 0x03, 0xB7, 0xD6, 0x0B, 0x44, 0x0E, 0x0E,
  0x0E, 0x0E, 0x32, 0x99, 0xD1, 0xC0, 0x66, 0x12, 0x12, 0x12, 0x28, 0x11, 0x11, 0x11, 0x62, 0xAA, 0x2F, 0x2F, 0x2F, 0x23, 0x06, 0x06, 0x39, 0x03, 0x03, 0x49, 0x08, 0x13, 0x37, 0x65, 0x9A, 0x25, 0x0E, 0x0E,
  0x84, 0x1D, 0x25, 0x52, 0xCD, 0x66, 0x12, 0x12, 0x12, 0x28, 0x11, 0x28, 0x61, 0xA6, 0xB2, 0xBD, 0xBE, 0xBF, 0xB5, 0xA7, 0x27, 0x1F, 0x03, 0x03, 0x49, 0x08, 0x08, 0x13, 0x0D, 0xA1, 0xC1, 0x0B, 0x84, 0x84,
  0x1D, 0x3F, 0x2B, 0x3C, 0x50, 0x12, 0x12, 0x12, 0x28, 0x11, 0x63, 0x38, 0xBB, 0xE0, 0xFA, 0x3D, 0x53, 0x53, 0x72, 0xF1, 0x6F, 0x64, 0xA4, 0xAB, 0x08, 0x08, 0x13, 0x0D, 0x0D, 0x22, 0x30, 0x93, 0x1D, 0x1D,
  0x3F, 0x10, 0x2B, 0xDA, 0x50, 0x12, 0x12, 0x28, 0x11, 0x11, 0x38, 0xC2, 0x3D, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x74, 0xBA, 0x37, 0x08, 0x13, 0x0D, 0x0D, 0x1A, 0x0A, 0x30, 0x95, 0x1D, 0x10,
  0x10, 0x3E, 0x57, 0xDA, 0x6C, 0x12, 0x28, 0x11, 0x11, 0x62, 0xB6, 0x72, 0x02, 0x02, 0x02, 0xF3, 0xE9, 0xEB, 0xFE, 0x02, 0x02, 0x02, 0xFC, 0xAC, 0x0D, 0x0D, 0x0D, 0x1A, 0x22, 0x20, 0x30, 0x93, 0x10, 0x10,
  0x7D, 0x15, 0x88, 0x3C, 0x6C, 0x28, 0x28, 0x11, 0x11, 0x38, 0xDE, 0x02, 0x02, 0x02, 0xE1, 0xA9, 0xA8, 0xA5, 0xCE, 0xFE, 0x02, 0x02, 0x02, 0xC8, 0x5E, 0x0D, 0x1A, 0x22, 0x22, 0x2E, 0x30, 0x93, 0x3E, 0x15,
  0x15, 0x7C, 0x25, 0x3C, 0x6B, 0x11, 0x11, 0x4C, 0x62, 0xAD, 0xF2, 0x02, 0x02, 0xF5, 0x06, 0x4A, 0x39, 0x03, 0x37, 0xE6, 0x02, 0x02, 0x02, 0xE2, 0x5E, 0x1A, 0x22, 0x22, 0x0A, 0x21, 0x30, 0x35, 0x15, 0x15,
  0x04, 0x04, 0x87, 0xD9, 0x6B, 0x11, 0x19, 0x4C, 0x1C, 0xB8, 0xED, 0xF7, 0xF8, 0xE4, 0xA9, 0x39, 0x03, 0x03, 0x37, 0xC5, 0x02, 0x02, 0x02, 0xE3, 0x5E, 0x22, 0x22, 0x0A, 0x0A, 0x09, 0x30, 0x5B, 0x7C, 0x04,
  0x54, 0x29, 0x44, 0xD8, 0x6B, 0x19, 0x4C, 0x4C, 0x1C, 0x1B, 0x23, 0x23, 0x06, 0x39, 0x39, 0x03, 0x03, 0x1F, 0x5E, 0xDC, 0x02, 0x02, 0x02, 0xCC, 0x24, 0x22, 0x0A, 0x0A, 0x2E, 0x09, 0x2D, 0x0B, 0x04, 0x29,
  0x7B, 0x31, 0x85, 0x52, 0x28, 0x4C, 0x4C, 0x1C, 0x1B, 0x1B, 0x23, 0x06, 0x06, 0x39, 0x03, 0x03, 0x03, 0x48, 0x90, 0xFB, 0x02, 0x02, 0x75, 0xB3, 0x20, 0x0A, 0x0A, 0x2E, 0x21, 0x42, 0x2D, 0x0B, 0x29, 0x31,
  0x01, 0x01, 0x3F, 0x52, 0x28, 0x1C, 0x1C, 0x1B, 0x1B, 0x23, 0x23, 0x06, 0x39, 0x39, 0x03, 0x1F, 0x9E, 0x97, 0x71, 0x02, 0x76, 0x76, 0x68, 0x24, 0x0A, 0x0A, 0x21, 0x21, 0x09, 0x05, 0x2D, 0x58, 0x31, 0x01,
  0x78, 0x14, 0x3E, 0xC3, 0x4D, 0x1C, 0x1B, 0x1B, 0x23, 0x23, 0x06, 0x39, 0x39, 0x03, 0x03, 0x47, 0xD4, 0x73, 0x02, 0x76, 0x75, 0x68, 0x24, 0x0A, 0x0A, 0x2E, 0x21, 0x09, 0x42, 0x05, 0x5C, 0x2B, 0x01, 0x78,
  0x14, 0x14, 0x7D, 0xC2, 0x4D, 0x1B, 0x1B, 0x23, 0x23, 0x06, 0x39, 0x39, 0x03, 0x03, 0x37, 0xBC, 0x3D, 0xFE, 0xFF, 0xF4, 0x64, 0x24, 0x0A, 0x0A, 0x2E, 0x21, 0x09, 0x42, 0x42, 0x17, 0x5C, 0x57, 0x14, 0x14,
  0x14, 0x07, 0x15, 0x3B, 0x4D, 0x1B, 0x23, 0x23, 0x06, 0x39, 0x39, 0x03, 0xAB, 0xAB, 0x47, 0xDF, 0x76, 0x53, 0xF6, 0xA3, 0x24, 0x0A, 0x0A, 0x2E, 0x21, 0x09, 0x42, 0x42, 0x05, 0x17, 0x46, 0x25, 0x14, 0x07,
  0x07, 0x07, 0x7C, 0x3B, 0x4D, 0x23, 0x23, 0x06, 0x39, 0x39, 0x03, 0xAB, 0x49, 0x08, 0x9F, 0x70, 0xFF, 0x76, 0xE5, 0x9C, 0x0A, 0x0A, 0x2E, 0x21, 0x09, 0x42, 0x42, 0x05, 0x05, 0x0C, 0x46, 0x25, 0x07, 0x07,
  0x07, 0x0F, 0x54, 0x3B, 0xAE, 0x23, 0x06, 0x39, 0x39, 0x03, 0x03, 0x49, 0x08, 0x13, 0xA2, 0xE7, 0xEE, 0xEF, 0xC9, 0x24, 0x0A, 0x2E, 0x21, 0x09, 0x42, 0x42, 0x05, 0x05, 0x17, 0x0C, 0x46, 0x56, 0x07, 0x07,
  0x0F, 0x77, 0x7B, 0x3A, 0x4B, 0x06, 0x39, 0x39, 0x03, 0xAB, 0x49, 0x08, 0x13, 0x13, 0x0D, 0x48, 0x1E, 0x1E, 0x20, 0x0A, 0x2E, 0x21, 0x09, 0x42, 0x42, 0x05, 0x05, 0x17, 0x17, 0x16, 0x46, 0x44, 0x0F, 0x0F,
  0x77, 0x77, 0x7A, 0x3A, 0x4B, 0x06, 0x39, 0x03, 0xAB, 0x49, 0x08, 0x13, 0x13, 0x0D, 0x47, 0x83, 0x83, 0x43, 0x43, 0x2E, 0x21, 0x09, 0x42, 0x42, 0x05, 0x05, 0x17, 0x17, 0x0C, 0x16, 0x36, 0x0E, 0x0F, 0x77,
  0x77, 0x00, 0x79, 0x3A, 0x4B, 0x39, 0x03, 0x03, 0x49, 0x08, 0x08, 0x13, 0x0D, 0x48, 0xAF, 0xEC, 0xF0, 0x70, 0x6F, 0x09, 0x09, 0x09, 0x42, 0x05, 0x05, 0x17, 0x17, 0x0C, 0x0C, 0x16, 0x96, 0x84, 0x77, 0x77,
  0x00, 0x00, 0x78, 0x30, 0x60, 0x03, 0x03, 0x49, 0x08, 0x08, 0x13, 0x0D, 0x1A, 0x1E, 0xB1, 0x71, 0xFD, 0x73, 0xE8, 0x5D, 0x42, 0x42, 0x05, 0x05, 0x17, 0x17, 0x0C, 0x0C, 0x16, 0x55, 0x96, 0x3F, 0x77, 0x00,
  0x00, 0x00, 0x14, 0x5C, 0x60, 0xAB, 0x49, 0x08, 0x08, 0x13, 0x0D, 0x1A, 0x1A, 0x1E, 0xB0, 0xF9, 0x73, 0x3D, 0xEA, 0x5D, 0x42, 0x05, 0x05, 0x17, 0x17, 0x0C, 0x0C, 0x16, 0x16, 0x2A, 0x91, 0x3E, 0x00, 0x00,
  0x00, 0x00, 0x07, 0x5A, 0xB9, 0x27, 0x08, 0x08, 0x13, 0x0D, 0x0D, 0x1A, 0x22, 0x20, 0xA0, 0xDD, 0x6E, 0x6E, 0xC6, 0x05, 0x05, 0x05, 0x17, 0x17, 0x0C, 0x0C, 0x16, 0x16, 0x16, 0x81, 0x5A, 0x04, 0x00, 0x00,
  0x00, 0x00, 0x77, 0x86, 0x65, 0x27, 0x08, 0x13, 0x0D, 0x0D, 0x1A, 0x22, 0x22, 0x0A, 0x20, 0x9D, 0x41, 0x41, 0x41, 0x05, 0x05, 0x17, 0x17, 0x0C, 0x0C, 0x16, 0x16, 0x55, 0x2A, 0x80, 0x0B, 0x14, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x14, 0x0B, 0xB4, 0x08, 0x0D, 0x48, 0x1A, 0x1E, 0x1E, 0x20, 0x5F, 0x5F, 0x5D, 0x5D, 0x05, 0x41, 0x82, 0x82, 0x40, 0x40, 0x40, 0x2A, 0x2A, 0x2A, 0x7E, 0x7F, 0x5B, 0x3F, 0x77, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x77, 0x01, 0x59, 0x36, 0x8F, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x8E, 0x8E, 0x34, 0x34, 0x8D, 0x8D, 0x45, 0x45, 0x45, 0x33, 0x33, 0x33, 0x33, 0x8B, 0x8C, 0x5B, 0x44, 0x07, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x77, 0x14, 0x3E, 0x88, 0x8A, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x58, 0x56, 0x29, 0x0F, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 0x0F, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x0F, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

GUI_CONST_STORAGE GUI_BITMAP bmInfoButton3 = {
  34, /* XSize */
  35, /* YSize */
  34, /* BytesPerLine */
  8, /* BitsPerPixel */
  acInfoButton3,  /* Pointer to picture data (indices) */
  &PalInfoButton3  /* Pointer to palette */
};

/* *** End of file *** */