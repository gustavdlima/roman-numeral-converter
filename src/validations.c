#include "main.h"

int isValidRomanNumeral(char *input) {
	int i = 0;
	while (input[i] != '\n') {
		if (input[i] != 'I' && input[i] != 'V' && input[i] != 'X' && input[i] != 'L' && input[i] != 'C' && input[i] != 'D' && input[i] != 'M')
			return 1;
		i++;
	}
	return 0;
}

int verifyValidInterval(char *input) {
	int number = atoi(input);
	if (number < 1 || number > 3999)
		return 1;
	return 0;
}

int isValidNumber(char *input) {
	int i = 0;
	while (input[i] != '\0') {
		printf("%c\n", input[i]);
		if (input[i] == '\n')
			break;
		if (!isdigit(input[i])) {
			return 1;
		}
		i++;
	}
	return 0;
}

int validateMenuSelection(char *input, int read) {
	if (read == -1)
	{
		printf("Error reading input\n");
		exit(1);
	}

	if (input[read - 1] == '\n')
		input[read - 1] = '\0';

	if (strcmp(input, "1") != 0 && strcmp(input, "2") != 0 && strcmp(input, "3") != 0)
		return 1;

	return 0;
}

int validateRomanToInteger(char *input) {
	if (isValidRomanNumeral(input) != 0) {
		printf("Please enter a valid roman numeral\n");
		return 1;
	}

	return 0;
}

int validateIntegerToRoman(char *input) {

	// Check if the user has entered a number
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
