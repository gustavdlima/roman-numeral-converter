#ifndef UTILS_H
#define UTILS_H

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
int convertInputToInteger(char *input);

#endif //UTILS_H
