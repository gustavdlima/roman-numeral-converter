#include "roman_converter.h"

RomanNumeralMap* initRomanNumerals(void)
{
	RomanNumeralMap *romanNumerals = (RomanNumeralMap*)malloc(sizeof(RomanNumeralMap) * TOTAL_ROMAN_NUMERALS);
	if (romanNumerals == NULL)
	{
		printf("Failed to allocate memory for romanNumerals\n");
		exit(1);
	}

	romanNumerals[0].symbol = (char *)"I";
	romanNumerals[0].value = 1;
	romanNumerals[1].symbol = (char *)"IV";
	romanNumerals[1].value = 4;
	romanNumerals[2].symbol = (char *)"V";
	romanNumerals[2].value = 5;
	romanNumerals[3].symbol = (char *)"IX";
	romanNumerals[3].value = 9;
	romanNumerals[4].symbol = (char *)"X";
	romanNumerals[4].value = 10;
	romanNumerals[5].symbol = (char *)"XL";
	romanNumerals[5].value = 40;
	romanNumerals[6].symbol = (char *)"L";
	romanNumerals[6].value = 50;
	romanNumerals[7].symbol = (char *)"XC";
	romanNumerals[7].value = 90;
	romanNumerals[8].symbol = (char *)"C";
	romanNumerals[8].value = 100;
	romanNumerals[9].symbol = (char *)"CD";
	romanNumerals[9].value = 400;
	romanNumerals[10].symbol = (char *)"D";
	romanNumerals[10].value = 500;
	romanNumerals[11].symbol = (char *)"CM";
	romanNumerals[11].value = 900;
	romanNumerals[12].symbol = (char *)"M";
	romanNumerals[12].value = 1000;

	return romanNumerals;
}
