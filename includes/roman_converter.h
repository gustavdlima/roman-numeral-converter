#ifndef ROMAN_CONVERTER_H
#define ROMAN_CONVERTER_H

#include <stdio.h>
#include <stdlib.h>
#include "validations.h"

#define TOTAL_ROMAN_NUMERALS 13

typedef enum {
	M,
	CM,
	D,
	CD,
	C,
	XC,
	L,
	XL,
	X,
	IX,
	V,
	IV,
	I,
} RomanNumeral;

typedef struct {
	RomanNumeral roman_numeral;
	int value;
	char *symbol;
} RomanNumeralMap;

RomanNumeralMap* initRomanNumerals(void);

#endif
