/* Copyright (C) 2023 Svyatoslav Pushkerav
This file is part of PushedDisplayFonts.
This particular file is provided to you for any use you see fit.
If used as part of the project within which it is published, see the project license.
However, this particular file may be used independently by you in full freedom of action without restrictions.
The only condition is that you will credit me in modified or copied version of this file.
If this file is modified, please also add a note that the file has been modified.
If you include the contents of this file in another project, please credit me to your new file.
*/

#ifndef PUFONT5x8_h
#define PUFONT5x8_h

#include <stdint.h>

const uint8_t pu_font_w5h8_const[][1][5] = {
  {{0x00,0x00,0x00,0x00,0x00}},     //32= ' '
  {{0x00,0x00,0x5F,0x00,0x00}},     //33= '!'
  {{0x00,0x07,0x00,0x07,0x00}},     //34= '"'
  {{0x14,0x7F,0x14,0x7F,0x14}},     //35= '#'
  {{0x24,0x2E,0x7B,0x2A,0x12}},     //36= '$'
  {{0x23,0x13,0x08,0x64,0x62}},     //37= '%'
  {{0x36,0x49,0x56,0x20,0x50}},     //38= '&'
  {{0x00,0x04,0x03,0x01,0x00}},     //39= '''
  {{0x00,0x1C,0x22,0x41,0x00}},     //40= '('
  {{0x00,0x41,0x22,0x1C,0x00}},     //41= ')'
  {{0x22,0x14,0x7F,0x14,0x22}},     //42= '*'
  {{0x08,0x08,0x7F,0x08,0x08}},     //43= '+'
  {{0x40,0x30,0x10,0x00,0x00}},     //44= ','
  {{0x08,0x08,0x08,0x08,0x08}},     //45= '-'
  {{0x00,0x60,0x60,0x00,0x00}},     //46= '.'
  {{0x20,0x10,0x08,0x04,0x02}},     //47= '/'
  {{0x3E,0x51,0x49,0x45,0x3E}},     //48= '0'
  {{0x00,0x42,0x7F,0x40,0x00}},     //49= '1'
  {{0x62,0x51,0x49,0x49,0x46}},     //50= '2'
  {{0x21,0x41,0x49,0x4D,0x33}},     //51= '3'
  {{0x18,0x14,0x12,0x7F,0x10}},     //52= '4'
  {{0x27,0x45,0x45,0x45,0x39}},     //53= '5'
  {{0x3C,0x4A,0x49,0x49,0x31}},     //54= '6'
  {{0x01,0x71,0x09,0x05,0x03}},     //55= '7'
  {{0x36,0x49,0x49,0x49,0x36}},     //56= '8'
  {{0x46,0x49,0x49,0x29,0x1E}},     //57= '9'
  {{0x00,0x36,0x36,0x00,0x00}},     //58= ':'
  {{0x40,0x36,0x36,0x00,0x00}},     //59= ';'
  {{0x08,0x14,0x22,0x41,0x00}},     //60= '<'
  {{0x14,0x14,0x14,0x14,0x14}},     //61= '='
  {{0x00,0x41,0x22,0x14,0x08}},     //62= '>'
  {{0x02,0x01,0x59,0x05,0x02}},     //63= '?'
  {{0x3E,0x41,0x5D,0x55,0x5E}},     //64= '@'
  {{0x7C,0x12,0x11,0x12,0x7C}},     //36= 'A'
  {{0x7F,0x49,0x49,0x49,0x36}},     //37= 'B'
  {{0x3E,0x41,0x41,0x41,0x22}},     //38= 'C'
  {{0x7F,0x41,0x41,0x41,0x3E}},     //39= 'D'
  {{0x7F,0x49,0x49,0x49,0x41}},     //40= 'E'
  {{0x7F,0x09,0x09,0x09,0x01}},     //41= 'F'
  {{0x3E,0x41,0x51,0x51,0x72}},     //42= 'G'
  {{0x7F,0x08,0x08,0x08,0x7F}},     //43= 'H'
  {{0x00,0x41,0x7F,0x41,0x00}},     //44= 'I'
  {{0x20,0x40,0x41,0x3F,0x01}},     //45= 'J'
  {{0x7F,0x08,0x14,0x22,0x41}},     //46= 'K'
  {{0x7F,0x40,0x40,0x40,0x40}},     //47= 'L'
  {{0x7F,0x02,0x0C,0x02,0x7F}},     //48= 'M'
  {{0x7F,0x04,0x08,0x10,0x7F}},     //49= 'N'
  {{0x3E,0x41,0x41,0x41,0x3E}},     //50= 'O'
  {{0x7F,0x09,0x09,0x09,0x06}},     //51= 'P'
  {{0x3E,0x41,0x51,0x21,0x5E}},     //52= 'Q'
  {{0x7F,0x09,0x19,0x29,0x46}},     //53= 'R'
  {{0x26,0x49,0x49,0x49,0x32}},     //54= 'S'
  {{0x01,0x01,0x7F,0x01,0x01}},     //55= 'T'
  {{0x3F,0x40,0x40,0x40,0x3F}},     //56= 'U'
  {{0x1F,0x20,0x40,0x20,0x1F}},     //57= 'V'
  {{0x7F,0x20,0x18,0x20,0x7F}},     //58= 'W'
  {{0x63,0x14,0x08,0x14,0x63}},     //59= 'X'
  {{0x03,0x04,0x78,0x04,0x03}},     //60= 'Y'
  {{0x61,0x51,0x49,0x45,0x43}},     //61= 'Z'
  {{0x7F,0x7F,0x41,0x41,0x00}},     //92= '['
  {{0x02,0x04,0x08,0x10,0x20}},     //93= '\'
  {{0x00,0x41,0x41,0x7F,0x7F}},     //94= ']'
  {{0x04,0x02,0x7F,0x02,0x04}},     //89= '^'
  {{0x08,0x1C,0x2A,0x08,0x08}},     //90= '_'
  {{0x00,0x00,0x01,0x02,0x04}},     //91= '`'
  {{0x24,0x54,0x54,0x38,0x40}},     //10= 'a'
  {{0x7F,0x28,0x44,0x44,0x38}},     //11= 'b'
  {{0x38,0x44,0x44,0x44,0x08}},     //12= 'c'
  {{0x38,0x44,0x44,0x28,0x7F}},     //13= 'd'
  {{0x38,0x54,0x54,0x54,0x08}},     //14= 'e'
  {{0x08,0x7E,0x09,0x09,0x02}},     //15= 'f'
  {{0x98,0xA4,0xA4,0xA4,0x78}},     //16= 'g'
  {{0x7F,0x08,0x04,0x04,0x78}},     //17= 'h'
  {{0x00,0x00,0x79,0x00,0x00}},     //18= 'i'
  {{0x00,0x80,0x88,0x79,0x00}},     //19= 'j'
  {{0x7F,0x10,0x28,0x44,0x40}},     //20= 'k'
  {{0x00,0x41,0x7F,0x40,0x00}},     //21= 'l'
  {{0x78,0x04,0x78,0x04,0x78}},     //22= 'm'
  {{0x04,0x78,0x04,0x04,0x78}},     //23= 'n'
  {{0x38,0x44,0x44,0x44,0x38}},     //24= 'o'
  {{0xFC,0x24,0x24,0x24,0x18}},     //25= 'p'
  {{0x18,0x24,0x24,0x24,0xFC}},     //26= 'q'
  {{0x04,0x78,0x04,0x04,0x08}},     //27= 'r'
  {{0x48,0x54,0x54,0x54,0x24}},     //28= 's'
  {{0x04,0x3F,0x44,0x44,0x24}},     //29= 't'
  {{0x3C,0x40,0x40,0x3C,0x40}},     //30= 'u'
  {{0x1C,0x20,0x40,0x20,0x1C}},     //31= 'v'
  {{0x3C,0x40,0x3C,0x40,0x3C}},     //32= 'w'
  {{0x44,0x28,0x10,0x28,0x44}},     //33= 'x'
  {{0x9C,0xA0,0xA0,0x90,0x7C}},     //34= 'y'
  {{0x44,0x64,0x54,0x4C,0x44}},     //35= 'z'
  {{0x08,0x36,0x41,0x00,0x00}},     //83= ''
  {{0x00,0x00,0x77,0x00,0x00}},     //84= '|'
  {{0x00,0x00,0x41,0x36,0x08}},     //85= '}'
  {{0x08,0x04,0x08,0x10,0x08}},     //86= '~'
};

#endif