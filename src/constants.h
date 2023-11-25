#include <cstdint>
#include <string>
#include <Adafruit_SH110X.h>

#ifndef CONSTANTS_H
#define CONSTANTS_H

#define BLACK 0
#define WHITE 1
#define INVERSE 2

#define DISPLAY_WIDTH 128
#define DISPLAY_HEIGHT 64

#define OLED_MOSI 22
#define OLED_CLK 18
#define OLED_DC 16
#define OLED_CS 5
#define OLED_RESET 17

#define MIN_SLEEP_AMOUNT 5
#define MAX_SLEEP_AMOUNT 15

#define TOTAL_ANIMATIONS 2

using FunctionPtr = void (*)();

extern const FunctionPtr animationArray[TOTAL_ANIMATIONS][3];
extern const uint8_t sleeping_z_bitmap[];
extern Adafruit_SH1106G display;

#endif