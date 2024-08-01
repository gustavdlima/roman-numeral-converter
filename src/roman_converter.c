#include "roman_converter.h"

int	main(int argc, char **argv)
{
	printf("%i\n", argc);
	printf("%s\n\n\n\n\n", argv[1]);
	printf("%d\n", TOTAL_ROMAN_NUMERALS);

	RomanNumeralMap romanNumerals[TOTAL_ROMAN_NUMERALS] = {
		{M, 1000, "M"},
		{CM, 900, "CM"},
		{D, 500, "D"},
		{CD, 400, "CD"},
		{C, 100, "C"},
		{XC, 90, "XC"},
		{L, 50, "L"},
		{XL, 40, "XL"},
		{X, 10, "X"},
		{IX, 9, "IX"},
		{V, 5, "V"},
		{IV, 4, "IV"},
		{I, 1, "I"},
	};

	printf("%s\n", romanNumerals[0].symbol);

}
