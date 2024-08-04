#include <gtest/gtest.h>
#include "main.h"

TEST(ValidateInputTest, InvalidNumber) {
	// Test when the user enters an invalid number
	char *input = (char *)"4.2";
	ASSERT_EQ(isValidNumber(input), 1);

}

TEST(ValidateInputTest, InvalidNumber2) {
	// Test when the user enters an invalid number
	char *input = (char *)"ABC";
	ASSERT_EQ(isValidNumber(input), 1);
}

TEST(ValidateInputTest, InvalidNumber3) {
	// Test when the user enters an invalid number
	char *input = (char *)"3/3";
	ASSERT_EQ(isValidNumber(input), 1);
}

TEST(ValidateInputTest, ValidNumber) {
	// Test when the user enters a valid number
	char *input = (char *)"42";
	ASSERT_EQ(isValidNumber(input), 0);
}

TEST(ValidateInputTest, EmptyInput) {
	// Test when the user enters an empty input
	int argc = 1;
	ASSERT_EQ(isEmpty(argc), 1);
}

TEST(ValidateInputTest, MoreThanOneInput) {
	// Test when the user enters more than one input
	int argc = 3;
	ASSERT_EQ(hasMoreThanOneInput(argc), 1);
}

TEST(ValidateInputTest, ValidInterval) {
	// Test when the user enters a number within the valid interval
	char *number = (char *)"42";
	ASSERT_EQ(verifyValidInterval(number), 0);
}

TEST(ValidateInputTest, InvalidInterval) {
	// Test when the user enters a number outside the valid interval
	char *input = (char *)"4000";
	ASSERT_EQ(verifyValidInterval(input), 1);
}

TEST(ValidateInputTest, InvalidInterval2) {
	// Test when the user enters a number outside the valid interval
	char *input = (char *)"0";
	ASSERT_EQ(verifyValidInterval(input), 1);
}

