#ifndef EMAIL
#define EMAIL
#include "stm32l1xx.h"
const int16_t email_width = 36;
const int16_t email_height = 36;
const uint8_t email[] = {
0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xF0, 0x0, 0x0, 0x0, 0xFF,
0xE0, 0x0, 0x0, 0x0, 0x7F,
0xE0, 0x0, 0x0, 0x0, 0x7F,
0xE2, 0x0, 0x0, 0x4, 0x7F,
0xE3, 0x0, 0x0, 0xC, 0x7F,
0xE3, 0xC0, 0x0, 0x3C, 0x7F,
0xE1, 0xF0, 0x0, 0xF8, 0x7F,
0xE0, 0xF8, 0x1, 0xF0, 0x7F,
0xE0, 0x3E, 0x7, 0xC0, 0x7F,
0xE0, 0xF, 0xF, 0x0, 0x7F,
0xE0, 0x7, 0xFE, 0x0, 0x7F,
0xE0, 0x1, 0xF8, 0x0, 0x7F,
0xE0, 0x0, 0xF0, 0x0, 0x7F,
0xE0, 0x0, 0x0, 0x0, 0x7F,
0xE0, 0x0, 0x0, 0x0, 0x7F,
0xE0, 0x0, 0x0, 0x0, 0x7F,
0xE0, 0x0, 0x0, 0x0, 0x7F,
0xE0, 0x0, 0x0, 0x0, 0x7F,
0xE0, 0x0, 0x0, 0x0, 0x7F,
0xE0, 0x0, 0x0, 0x0, 0x7F,
0xE0, 0x0, 0x0, 0x0, 0x7F,
0xE0, 0x0, 0x0, 0x0, 0x7F,
0xE0, 0x0, 0x0, 0x0, 0x7F,
0xF0, 0x0, 0x0, 0x0, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};
#endif
