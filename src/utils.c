#include "main.h"

int returnRomanNumeralIntegerValue(char romanNumeral, RomanNumeralMap *romanNumerals)
{
	for (int i = 0; i < TOTAL_ROMAN_NUMERALS; i++)
	{
		if (romanNumeral == *romanNumerals[i].symbol)
		{
			return romanNumerals[i].value;
		}
	}
	return 0;
}

RomanNumeralMap* initRomanNumerals(void)
{
	RomanNumeralMap *romanNumerals = (RomanNumeralMap*)malloc(sizeof(RomanNumeralMap) * TOTAL_ROMAN_NUMERALS);
	if (romanNumerals == NULL)
	{
		printf("Failed to allocate memory for romanNumerals\n");
		exit(1);
	}

	romanNumerals[0].symbol = (char *)"M";
	romanNumerals[0].value = 1000;
	romanNumerals[1].symbol = (char *)"CM";
	romanNumerals[1].value = 900;
	romanNumerals[2].symbol = (char *)"D";
	romanNumerals[2].value = 500;
	romanNumerals[3].symbol = (char *)"CD";
	romanNumerals[3].value = 400;
	romanNumerals[4].symbol = (char *)"C";
	romanNumerals[4].value = 100;
	romanNumerals[5].symbol = (char *)"XC";
	romanNumerals[5].value = 90;
	romanNumerals[6].symbol = (char *)"L";
	romanNumerals[6].value = 50;
	romanNumerals[7].symbol = (char *)"XL";
	romanNumerals[7].value = 40;
	romanNumerals[8].symbol = (char *)"X";
	romanNumerals[8].value = 10;
	romanNumerals[9].symbol = (char *)"IX";
	romanNumerals[9].value = 9;
	romanNumerals[10].symbol = (char *)"V";
	romanNumerals[10].value = 5;
	romanNumerals[11].symbol = (char *)"IV";
	romanNumerals[11].value = 4;
	romanNumerals[12].symbol = (char *)"I";
	romanNumerals[12].value = 1;

	return romanNumerals;
}

int convertInputToInteger(char *input)
{
	return atoi(input);
}
