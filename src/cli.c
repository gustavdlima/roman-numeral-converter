#include "main.h"


int handleMenuSelection(int choice)
{
	if (choice == 1)
	{
		printf("Enter an integer: ");

		char *input = getUserInput();

		if (validateIntegerToRoman(input) != 0)
		{
			printf("Invalid input handle menu\n");
			exit(1);
		}
		char *romanNumeral = convertIntegerToRomanNumerals(atoi(input), initRomanNumerals());
		printf("\n");
		printf("-----------------------------------\n");
		printf("Roman Numeral Converted:  %s\n", romanNumeral);
		printf("-----------------------------------\n");
		printf("\n");
		free(input);
		free(romanNumeral);
	}
	else if (choice == 2)
	{
		printf("Enter a Roman Numeral: ");
		char *input = NULL;
		size_t buffer = 0;
		ssize_t read;

		read = getline(&input, &buffer, stdin);
		(void)read;
		if (validateRomanToInteger(input) != 0)
		{
			printf("Invalid input handle menu\n");
			exit(1);
		}
		int number = convertRomanToInteger(input);
		printf("\n");
		printf("-----------------------------------\n");
		printf("Integer Converted:  %d\n", number);
		printf("-----------------------------------\n");
		printf("\n");
		free(input);
	}
	else if (choice == 3)
	{
		// Exit
		printf("Exiting...\n");
		exit(0);
	}

	return 0;
}

int printMenu(void)
{
	char *input = NULL;
	size_t buffer = 0;
	ssize_t read;

	printf("\n");
	printf("Choose an option: \n");
	printf("1 - Convert Integer to Roman Numeral\n");
	printf("2 - Convert Roman Numeral to Integer\n");
	printf("3 - Exit\n");
	printf("\n");
	printf("\n");
	printf("Enter your choice: ");
	read = getline(&input, &buffer, stdin);
	if (validateMenuSelection(input, read) != 0)
	{
		printf("Invalid input\n");
		exit(1);
	}
	printf("\n");
	int choice = atoi(input);
	free(input);
	return choice;
}
