#include "main.h"

int convertRomanToInteger(char *romanNumeralString) {
	int result = 0;
	int lastValue = 0;

	for (int i = strlen(romanNumeralString) - 1; i >= 0; i--) {
		int actualValue = returnRomanNumeralIntegerValue(romanNumeralString[i]);

		if (actualValue < lastValue)
			result -= actualValue;
		else
			result += actualValue;

		lastValue = actualValue;
	}
	return result;
}

char *convertIntegerToRomanNumerals(int number, RomanNumeralMap *romanNumerals)
{
	char *romanNumeralString = (char *)malloc(1);

	if (romanNumeralString == NULL) {
		printf("Memory allocation failed\n");
		exit(1);
	}

	romanNumeralString[0] = '\0';

	for (int i = 0; i < TOTAL_ROMAN_NUMERALS; i++) {
		while (number >= romanNumerals[i].value) {
			size_t newSize = strlen(romanNumeralString) + strlen(romanNumerals[i].symbol) + 1;
			char *temp = (char *)realloc(romanNumeralString, newSize);

			if (temp == NULL) {
				printf("Memory allocation failed\n");
				free(romanNumeralString);
				exit(1);
			}

			romanNumeralString = temp;
			strcat(romanNumeralString, romanNumerals[i].symbol);
			number -= romanNumerals[i].value;
		}
	}
	free(romanNumerals);
	return romanNumeralString;
}
