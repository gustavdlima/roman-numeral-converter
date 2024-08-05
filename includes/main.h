#ifndef main_H
#define main_H

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
	char symbol;
} UniqueRomanNumeralMap;

typedef struct {
	RomanNumeral roman_numeral;
	int value;
	char *symbol;
} RomanNumeralMap;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "validations.h"
#include "utils.h"
#include "convert.h"
#include "cli.h"

#define TOTAL_ROMAN_NUMERALS 13
#define MAX_ROMAN_NUMERAL_LENGTH 3999



#endif
