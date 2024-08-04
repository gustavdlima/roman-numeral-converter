#include "roman_converter.h"

int verifyValidInterval(char *input) {
	int number = atoi(input);
	if (number < 1 || number > 3999)
		return 1;
	return 0;
}

int isValidNumber(char *input) {
	char *endptr;
	strtol(input, &endptr, 10);

	if (*endptr != '\0')
		return 1;
	return 0;
}

int hasMoreThanOneInput(int argc) {
	if (argc > 2)
		return 1;
	return 0;
}

int isEmpty(int argc) {
	if (argc < 2)
		return 1;
	return 0;
}

int validate(char *input, int argc) {

	// Check if the user has entered an input
	if (isEmpty(argc) != 0) {
		printf("Please enter an integer\n");
		return 1;
	}

	// Check if the user has entered more than one input
	if (hasMoreThanOneInput(argc) != 0) {
		printf("Please enter only one integer\n");
		return 1;
	}

	// Check if the user has entered a valid number
	if (isValidNumber(input) != 0) {
		printf("Please enter a integer\n");
		return 1;
	}

	// Check if the user has entered a number between 1 and 3999
	if (verifyValidInterval(input) != 0) {
		printf("Please enter a number between 1 and 3999\n");
		return 1;
	}

	return 0;
}
