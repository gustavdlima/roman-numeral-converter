#include <gtest/gtest.h>
#include "roman_converter.h"

TEST(Convert, convertIntegerToRomanNumerals)
{
	RomanNumeralMap *romanNumerals = initRomanNumerals();
	char *roman = convertIntegerToRomanNumerals(1, romanNumerals);
	EXPECT_STREQ(roman, "I");
}

TEST(Convert, convertIntegerToRomanNumerals)
{
	RomanNumeralMap *romanNumerals = initRomanNumerals();
	char *roman = convertIntegerToRomanNumerals(55, romanNumerals);
	EXPECT_STREQ(roman, "LV");
}

TEST(Convert, convertIntegerToRomanNumerals)
{
	RomanNumeralMap *romanNumerals = initRomanNumerals();
	char *roman = convertIntegerToRomanNumerals(1000, romanNumerals);
	EXPECT_STREQ(roman, "M");
}

TEST(Convert, convertIntegerToRomanNumerals)
{
	RomanNumeralMap *romanNumerals = initRomanNumerals();
	char *roman = convertIntegerToRomanNumerals(1990, romanNumerals);
	EXPECT_STREQ(roman, "MCMXC");
}

TEST(Convert, convertIntegerToRomanNumerals)
{
	RomanNumeralMap *romanNumerals = initRomanNumerals();
	char *roman = convertIntegerToRomanNumerals(2008, romanNumerals);
	EXPECT_STREQ(roman, "MMVIII");
}

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
