#include "roman_converter.h"

int	main(int argc, char **argv)
{
	printf("%i\n", argc);
	printf("%s\n\n\n\n\n", argv[1]);

	RomanNumeralMap *romanNumerals = initRomanNumerals();

	printf("%s\n", romanNumerals[11].symbol);
	printf("%d\n", romanNumerals[11].value);

	free(romanNumerals);

	return 0;
}
