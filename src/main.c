#include "main.h"

int	main(void)
{
	int choice;

	choice = printMenu();

	while(1) {
		handleMenuSelection(choice);
		choice = printMenu();
	}

	return 0;
}
