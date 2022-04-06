#ifndef main_h
#define main_h

// **********************************************// Software release
#define SOFTWARE_MAJOR_VERSION       3
#define SOFTWARE_MINOR_VERSION       1
// **********************************************
                                                 // I/O Pinning
#define LED_OUT                      6           // output D6, pin on the Arduino is connected to the NeoPixels
#define NUMPIXELS                    136

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, LED_OUT, NEO_GRBW + NEO_KHZ800);

unsigned int cr, cg, cb, cw;

void SetAll(bool show, unsigned char rood, unsigned char groen, unsigned char blauw, unsigned char wit);
void Laatzien(unsigned char rood, unsigned char groen, unsigned char blauw, unsigned char wit);
void ShowWord(unsigned char length, unsigned char start, unsigned char rood, unsigned char groen, unsigned char blauw, unsigned char wit);

#include "tijd_var.h"
#include "special_var.h"

#include "woorden.h"
#include "tijd.h"
#include "special.h"

#endif