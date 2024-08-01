#ifndef ROMAN_CONVERTER_H
#define ROMAN_CONVERTER_H

#include <stdio.h>

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
	TOTAL_ROMAN_NUMERALS
} RomanNumeral;

typedef struct {
	RomanNumeral roman_numeral;
	int value;
	char *symbol;
} RomanNumeralMap;



#endif
