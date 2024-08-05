#include "main.h"

char *getUserInput(void) {
	char *input = NULL;
	size_t len = 0;
	ssize_t read;

	read = getline(&input, &len, stdin);
	(void)read;

	return input;
}

int returnRomanNumeralIntegerValue(char romanNumeral)
{
	UniqueRomanNumeralMap *romanNumeralMap = initUniqueRomanNumerals();
	for (int i = 0; i < TOTAL_UNIQUE_ROMAN_NUMERALS; i++) {
		if (romanNumeral == romanNumeralMap[i].symbol) {
			int value = romanNumeralMap[i].value;
			free(romanNumeralMap);
			return value;
		}
	}

	free(romanNumeralMap);
	return 0;
}

UniqueRomanNumeralMap* initUniqueRomanNumerals(void)
{
	UniqueRomanNumeralMap *uniqueRomanNumerals = (UniqueRomanNumeralMap*)malloc(sizeof(UniqueRomanNumeralMap) * TOTAL_UNIQUE_ROMAN_NUMERALS);
	if (uniqueRomanNumerals == NULL)
	{
		printf("Failed to allocate memory for uniqueRomanNumerals\n");
		exit(1);
	}

	uniqueRomanNumerals[0].symbol = 'M';
	uniqueRomanNumerals[0].value = 1000;
	uniqueRomanNumerals[1].symbol = 'D';
	uniqueRomanNumerals[1].value = 500;
	uniqueRomanNumerals[2].symbol = 'C';
	uniqueRomanNumerals[2].value = 100;
	uniqueRomanNumerals[3].symbol = 'L';
	uniqueRomanNumerals[3].value = 50;
	uniqueRomanNumerals[4].symbol = 'X';
	uniqueRomanNumerals[4].value = 10;
	uniqueRomanNumerals[5].symbol = 'V';
	uniqueRomanNumerals[5].value = 5;
	uniqueRomanNumerals[6].symbol = 'I';
	uniqueRomanNumerals[6].value = 1;

	return uniqueRomanNumerals;
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
