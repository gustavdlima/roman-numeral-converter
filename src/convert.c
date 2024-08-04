#include "main.h"

int convertRomanNumeralsToInteger(char *romanNumeralString, RomanNumeralMap *romanNumerals) {
	int result = 0;
	int lastValue = 0;

	for (int i = strlen(romanNumeralString) - 1; i >= 0; i--) {
		int actualValue = returnRomanNumeralIntegerValue(romanNumeralString[i], romanNumerals);

		if (actualValue <= lastValue)
			result -= actualValue;
		else
			result += actualValue;

		lastValue = actualValue;
	}

	return result;
}

char *convertIntegerToRomanNumerals(int number, RomanNumeralMap *romanNumerals)
{
	char *romanNumeralString = (char *)malloc(sizeof(char) * 1);

	for (int i = 0; i < TOTAL_ROMAN_NUMERALS; i++)
	{
		while (number >= romanNumerals[i].value)
		{
			// dynamic allocation of memory for romanNumeralString
			size_t newSize = strlen(romanNumeralString) + strlen(romanNumerals[i].symbol) + 1;
			romanNumeralString = (char *)realloc(romanNumeralString, newSize);
			if (romanNumeralString == NULL)
			{
				printf("Memory allocation failed\n");
				exit(1);
			}
			strcat(romanNumeralString, romanNumerals[i].symbol);
			number -= romanNumerals[i].value;
		}
	}
	return romanNumeralString;
}
