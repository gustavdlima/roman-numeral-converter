#ifndef UTILS_H
#define UTILS_H

#include "main.h"

RomanNumeralMap* initRomanNumerals(void);
UniqueRomanNumeralMap* initUniqueRomanNumerals(void);
int convertInputToInteger(char *input);
int returnRomanNumeralIntegerValue(char romanNumeral);
char *getUserInput(void);

#endif //UTILS_H
