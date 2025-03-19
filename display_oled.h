#ifndef DISPLAY_OLED_H
#define DISPLAY_OLED_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "pico/stdlib.h"
#include "pico/binary_info.h"
#include "inc/ssd1306.h"
#include "hardware/i2c.h"

int text_in_display_oled(char *text[], int num_lines);

#endif