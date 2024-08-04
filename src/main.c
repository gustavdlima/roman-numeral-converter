#include "main.h"

int	main(int argc, char **argv)
{
	if (validate(argv[1], argc) != 0)
		exit(1);

	RomanNumeralMap *romanNumerals = initRomanNumerals();

	int number = convertInputToInteger(argv[1]);
	char *romanString =	convertIntegerToRomanNumerals(number, romanNumerals);

	printf("%s\n", romanString);
	free(romanString);
	free(romanNumerals);
	return 0;
}
