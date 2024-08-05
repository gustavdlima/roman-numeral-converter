#include <gtest/gtest.h>
#include "roman_converter.h"

// Roman Numeral to Integer TESTS
TEST(Convert, convertRomanToInteger)
{
	RomanNumeralMap *romanNumerals = initRomanNumerals();
	int integer = convertRomanToInteger("I", romanNumerals);
	EXPECT_EQ(integer, 1);
}

TEST(Convert, convertRomanToInteger)
{
	RomanNumeralMap *romanNumerals = initRomanNumerals();
	int integer = convertRomanToInteger("LV", romanNumerals);
	EXPECT_EQ(integer, 55);
}

TEST(Convert, convertRomanToInteger)
{
	RomanNumeralMap *romanNumerals = initRomanNumerals();
	int integer = convertRomanToInteger("M", romanNumerals);
	EXPECT_EQ(integer, 1000);
}

TEST(Convert, convertRomanToInteger)
{
	RomanNumeralMap *romanNumerals = initRomanNumerals();
	int integer = convertRomanToInteger("MCMXC", romanNumerals);
	EXPECT_EQ(integer, 1990);
}

TEST(Convert, convertRomanToInteger)
{
	RomanNumeralMap *romanNumerals = initRomanNumerals();
	int integer = convertRomanToInteger("MMVIII", romanNumerals);
	EXPECT_EQ(integer, 2008);
}


// Integer to Roman Numeral TESTS
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
100 - 10 + 1000 - 100 + 1000
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
