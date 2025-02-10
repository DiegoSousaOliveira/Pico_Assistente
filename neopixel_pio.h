#ifndef NEOPIXEL_PIO_H
#define NEOPIXEL_PIO_H

#define LED_COUNT 25
#define LED_PIN_RGB 7


struct pixel_t {
  uint8_t G, R, B;
};
typedef struct pixel_t pixel_t;
typedef pixel_t npLED_t;

void npInit(uint pin);

void npSetLED(const uint index, const uint8_t r, const uint8_t g, const uint8_t b);

void npClear();

void npWrite();

int getIndex(int x, int y);

int start_animation();
#endif
