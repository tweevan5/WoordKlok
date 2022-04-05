#ifndef main_h
#define main_h

bool hetis;
unsigned int uren, minuten, seconden, dag, maand, jaar;
unsigned int klok_uren;

void SetAll(bool show, unsigned char rood, unsigned char groen, unsigned char blauw, unsigned char wit);
void Laatzien(unsigned char rood, unsigned char groen, unsigned char blauw, unsigned char wit);
void ShowWord(unsigned char length, unsigned char start, unsigned char rood, unsigned char groen, unsigned char blauw, unsigned char wit);

#endif