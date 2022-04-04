/*
 * File:   woord_klok.c
 * Auteur: M. Beij
 * V3
 * 03-2022
 */

/*
 * Woord klok welke de tijd aangeeft in woorden met 5 minuten resolutie en per minuut in aanduiding
 * 2016-09-21  SW 00.1 - MaBe - start van het project
 * 2022-03-13  SW 03.1 - MaBe - start van het project V3
 */

#include <Adafruit_NeoPixel.h>
#include <Wire.h>
#include <EEPROM.h>

// **********************************************// Software release
#define SOFTWARE_MAJOR_VERSION       3
#define SOFTWARE_MINOR_VERSION       1
// **********************************************
                                                 // I/O Pinning
#define LED_OUT                      6           // output D6, pin on the Arduino is connected to the NeoPixels
#define NUMPIXELS                    136
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, LED_OUT, NEO_GRBW + NEO_KHZ800);