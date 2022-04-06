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
#include <TimeLib.h>

#include "main_var.h"


void SetAll(bool show, unsigned char rood, unsigned char groen, unsigned char blauw, unsigned char wit)
{
  for (unsigned char cnt = 0; cnt < NUMPIXELS; cnt++) pixels.setPixelColor(cnt, rood, groen, blauw, wit);
  if (show) pixels.show();  
}

void Laatzien(unsigned char rood, unsigned char groen, unsigned char blauw, unsigned char wit)
{
  for (unsigned char cnt = 0; cnt < NUMPIXELS; cnt++)
  {
    pixels.setPixelColor(cnt, rood, groen, blauw, wit);
    pixels.show();
    delay(50);
  }
}

void ShowWord(unsigned char length, unsigned char start, unsigned char rood, unsigned char groen, unsigned char blauw, unsigned char wit)
{
  for (unsigned char cnt = start; cnt < (start + length); cnt++) pixels.setPixelColor(cnt, rood, groen, blauw, wit);
}

void setup()
{
  cr = 10;
  cg = 0;
  cb = 0;
  cw = 0;
  hetis = 0;
  Serial.begin(115200);
  ReadTime();
  Serial.printf("%02dh:%02dm:%02ds - %02d-%02d-%04d\n", uren, minuten, seconden, dag, maand, jaar);
  pixels.begin();                                // This initializes the NeoPixel library.  
}

void loop()
{
  SetAll(0, 0, 0, 0, 0);
  ReadTime();
  Serial.printf("%02dh:%02dm:%02ds - %02d-%02d-%04d\n", uren, minuten, seconden, dag, maand, jaar);
  M2bAbout();
  BuildScreenTime();
  pixels.show();
  delay(30000);
  
  /*ShowWord(LT_MINUTE_1, 10, 0, 0, 0);  
  pixels.show();
  delay(500);
  ShowWord(LT_MINUTE_2, 0, 10, 0, 0);  
  pixels.show();
  delay(500);
  ShowWord(LT_MINUTE_3, 0, 0, 10, 0);  
  pixels.show();
  delay(500);  
  ShowWord(LT_MINUTE_4, 0, 0, 0, 10);  
  pixels.show();
  delay(500);
  
  SetAll(0, 0, 0, 0, 0);
  
  ShowWord(LW_HET, 10, 0, 0, 0);  
  pixels.show();
  delay(500);  
  ShowWord(LW_IS, 0, 10, 0, 0);  
  pixels.show();
  delay(500);  
  ShowWord(LW_KWART, 0, 0, 10, 0);  
  pixels.show();
  delay(500);  
  ShowWord(LW_VIJF, 10, 0, 0, 10);  
  pixels.show();
  delay(500);
  
  SetAll(0, 0, 0, 0, 0);
  
  ShowWord(LW_TIEN, 10, 0, 0, 0);  
  pixels.show();
  delay(500);  
  ShowWord(LW_OVER, 0, 10, 0, 0);  
  pixels.show();
  delay(500);  
  ShowWord(LW_VOOR, 0, 0, 10, 0);  
  pixels.show();
  delay(500);  
  ShowWord(LW_HALF, 10, 0, 0, 10);  
  pixels.show();
  delay(500);  

  
  SetAll(0, 0, 0, 0, 0);
  
  ShowWord(LW_FIJNE, 10, 0, 0, 0);  
  pixels.show();
  delay(500);  
  ShowWord(LW_KERST, 0, 10, 0, 0);  
  pixels.show();
  delay(500);  
  ShowWord(LW_GELUK, 0, 0, 10, 0);  
  pixels.show();
  delay(500);  
  ShowWord(LW_KIG, 10, 0, 0, 10);  
  pixels.show();
  delay(500);  
    
  SetAll(0, 0, 0, 0, 0);
  
  ShowWord(LW_VER, 10, 0, 0, 0);  
  pixels.show();
  delay(500);  
  ShowWord(LW_NIEUW, 0, 10, 0, 0);  
  pixels.show();
  delay(500);  
  ShowWord(LW_JAAR, 0, 0, 10, 0);  
  pixels.show();
  delay(500);  
  ShowWord(LW_DAG, 10, 0, 0, 10);  
  pixels.show();
  delay(500);  
    
  SetAll(0, 0, 0, 0, 0);
  
  ShowWord(LW_SEC, 10, 0, 0, 0);  
  pixels.show();
  delay(500);  
  ShowWord(LW_UUR, 0, 10, 0, 0);  
  pixels.show();
  delay(500);  
  ShowWord(LW_GRADEN, 0, 0, 10, 0);  
  pixels.show();
  delay(500);  
  ShowWord(LW_MMB, 10, 0, 0, 10);  
  pixels.show();
  delay(500);  
    
  SetAll(0, 0, 0, 0, 0);
  
  ShowWord(LC_EEN, 10, 0, 0, 0);  
  pixels.show();
  delay(500);  
  ShowWord(LC_TWEE, 0, 10, 0, 0);  
  pixels.show();
  delay(500);  
  ShowWord(LC_DRIE, 0, 0, 10, 0);  
  pixels.show();
  delay(500);  
  ShowWord(LC_VIER, 10, 0, 0, 10);  
  pixels.show();
  delay(500);  
     
  SetAll(0, 0, 0, 0, 0);
  
  ShowWord(LC_VIJF, 10, 0, 0, 0);  
  pixels.show();
  delay(500);  
  ShowWord(LC_ZES, 0, 10, 0, 0);  
  pixels.show();
  delay(500);  
  ShowWord(LC_ZEVEN, 0, 0, 10, 0);  
  pixels.show();
  delay(500);  
  ShowWord(LC_ACHT, 10, 0, 0, 10);  
  pixels.show();
  delay(500);  
    
  SetAll(0, 0, 0, 0, 0);
  
  ShowWord(LC_NEGEN, 10, 0, 0, 0);  
  pixels.show();
  delay(500);  
  ShowWord(LC_TIEN, 0, 10, 0, 0);  
  pixels.show();
  delay(500);  
  ShowWord(LC_ELF, 0, 0, 10, 0);  
  pixels.show();
  delay(500);  
  ShowWord(LC_TWAALF, 10, 0, 0, 10);  
  pixels.show();
  delay(500);  */

  //Laatzien(10, 0, 0, 0);
  //Laatzien(0, 10, 0, 0);
  //Laatzien(0, 0, 10, 0);
  //Laatzien(0, 0, 0, 10);
  //SetAll(0, 0, 0, 0, 0);
  
}