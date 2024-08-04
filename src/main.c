#include "roman_converter.h"

int	main(int argc, char **argv)
{
	if (validate(argv[1], argc) != 0)
		exit(1);

	RomanNumeralMap *romanNumerals = initRomanNumerals();

	printf("%s\n", romanNumerals[11].symbol);
	printf("%d\n", romanNumerals[11].value);

	free(romanNumerals);

	return 0;
}
