#ifndef UTILS_H
#define UTILS_H

#include "main.h"

RomanNumeralMap* initRomanNumerals(void);
int convertInputToInteger(char *input);
int returnRomanNumeralIntegerValue(char romanNumeral, RomanNumeralMap *romanNumerals);

#endif //UTILS_H
