#include <gtest/gtest.h>
#include "main.h"

// Roman Numeral to Integer TESTS
TEST(Convert1, convertRomanToInteger)
{
	int integer = convertRomanToInteger((char *)"I");
	EXPECT_EQ(integer, 1);
}

TEST(Convert2, convertRomanToInteger)
{
	int integer = convertRomanToInteger((char *)"LV");
	EXPECT_EQ(integer, 55);
}

TEST(Convert3, convertRomanToInteger)
{
	int integer = convertRomanToInteger((char *)"M");
	EXPECT_EQ(integer, 1000);
}

TEST(Convert4, convertRomanToInteger)
{
	int integer = convertRomanToInteger((char *)"MCMXC");
	EXPECT_EQ(integer, 1990);
}

TEST(Convert5, convertRomanToInteger)
{
	int integer = convertRomanToInteger((char *)"MMVIII");
	EXPECT_EQ(integer, 2008);
}


// Integer to Roman Numeral TESTS
TEST(Convert6, convertIntegerToRomanNumerals)
{
	RomanNumeralMap *romanNumerals = initRomanNumerals();
	char *roman = convertIntegerToRomanNumerals(1, romanNumerals);
	EXPECT_STREQ(roman, "I");
}

TEST(Convert7, convertIntegerToRomanNumerals)
{
	RomanNumeralMap *romanNumerals = initRomanNumerals();
	char *roman = convertIntegerToRomanNumerals(55, romanNumerals);
	EXPECT_STREQ(roman, "LV");
}

TEST(Convert8, convertIntegerToRomanNumerals)
{
	RomanNumeralMap *romanNumerals = initRomanNumerals();
	char *roman = convertIntegerToRomanNumerals(1000, romanNumerals);
	EXPECT_STREQ(roman, "M");
}

TEST(Convert9, convertIntegerToRomanNumerals)
{
	RomanNumeralMap *romanNumerals = initRomanNumerals();
	char *roman = convertIntegerToRomanNumerals(1990, romanNumerals);
	EXPECT_STREQ(roman, "MCMXC");
}

TEST(Convert10, convertIntegerToRomanNumerals)
{
	RomanNumeralMap *romanNumerals = initRomanNumerals();
	char *roman = convertIntegerToRomanNumerals(2008, romanNumerals);
	EXPECT_STREQ(roman, "MMVIII");
}
