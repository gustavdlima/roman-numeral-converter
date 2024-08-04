#include "roman_converter.h"

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
