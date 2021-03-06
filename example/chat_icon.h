#ifndef CHAT
#define CHAT
#include "stm32l1xx.h"
const int16_t chat_width = 36;
const int16_t chat_height = 36;
const uint8_t chat[] = {
0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xF0, 0x0, 0x0, 0x0, 0xFF,
0xE0, 0x0, 0x0, 0x0, 0x7F,
0xE0, 0x0, 0x0, 0x0, 0x7F,
0xE0, 0x0, 0x0, 0x0, 0x7F,
0xE0, 0x0, 0x0, 0x0, 0x7F,
0xE0, 0x0, 0x0, 0x0, 0x7F,
0xE0, 0x7F, 0xFF, 0xE0, 0x7F,
0xE0, 0x7F, 0xFF, 0xE0, 0x7F,
0xE0, 0x7F, 0xFF, 0xE0, 0x7F,
0xE0, 0x0, 0x0, 0x0, 0x7F,
0xE0, 0x0, 0x0, 0x0, 0x7F,
0xE0, 0x7F, 0xFF, 0xE0, 0x7F,
0xE0, 0x7F, 0xFF, 0xE0, 0x7F,
0xE0, 0x0, 0x0, 0x0, 0x7F,
0xE0, 0x0, 0x0, 0x0, 0x7F,
0xE0, 0x7F, 0xF8, 0x0, 0x7F,
0xE0, 0x7F, 0xF8, 0x0, 0x7F,
0xE0, 0x7F, 0xF8, 0x0, 0x7F,
0xE0, 0x0, 0x0, 0x0, 0x7F,
0xE0, 0x0, 0x0, 0x0, 0x7F,
0xE0, 0x0, 0x0, 0x0, 0x7F,
0xE0, 0x0, 0x0, 0x0, 0x7F,
0xE0, 0x0, 0x0, 0x0, 0x7F,
0xE0, 0x0, 0x0, 0x0, 0xFF,
0xE0, 0x7F, 0xFF, 0xFF, 0xFF,
0xE0, 0xFF, 0xFF, 0xFF, 0xFF,
0xE1, 0xFF, 0xFF, 0xFF, 0xFF,
0xE3, 0xFF, 0xFF, 0xFF, 0xFF,
0xE7, 0xFF, 0xFF, 0xFF, 0xFF,
0xEF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};
#endif
