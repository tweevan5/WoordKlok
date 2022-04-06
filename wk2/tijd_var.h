#ifndef tijd_h
#define tijd_h

#define XMAS_MONTH                   12
#define XMAS_DAY_1                   25
#define XMAS_DAY_2                   26
#define NEWYEAR_MONTH                1
#define NEWYEAR_DAY                  1


bool hetis;
unsigned int uren, minuten, seconden, dag, maand, jaar;
unsigned int klok_uren;

void BuildScreenTime();
void ReadTime();

#endif