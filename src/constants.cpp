#include "constants.h"
#include "animations.h"

const FunctionPtr animationArray[TOTAL_ANIMATIONS][3] = {
    {preSleep, sleep, postSleep},
    {nullptr, blink, nullptr}};

const uint8_t sleeping_z_bitmap[] = {0x00, 0x00, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0xe0, 0x01, 0x80, 0x07, 0x00, 0x0c, 0x00,
                                     0x38, 0x00, 0x70, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00};

Adafruit_SH1106G display = Adafruit_SH1106G(DISPLAY_WIDTH, DISPLAY_HEIGHT,
                                            OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);