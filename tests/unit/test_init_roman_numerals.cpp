#include <gtest/gtest.h>
#include "main.h"

TEST(RomanNumeralsTest, Initialization) {
	RomanNumeralMap* romanNumerals = initRomanNumerals();

	// Allocate TEST
	ASSERT_NE(romanNumerals, nullptr);

	ASSERT_EQ(TOTAL_ROMAN_NUMERALS, 13);

	EXPECT_EQ(romanNumerals[12].value, 1);
	EXPECT_STREQ(romanNumerals[12].symbol, "I");
	EXPECT_EQ(romanNumerals[11].value, 4);
	EXPECT_STREQ(romanNumerals[11].symbol, "IV");
	EXPECT_EQ(romanNumerals[10].value, 5);
	EXPECT_STREQ(romanNumerals[10].symbol, "V");
	EXPECT_EQ(romanNumerals[9].value, 9);
	EXPECT_STREQ(romanNumerals[9].symbol, "IX");
	EXPECT_EQ(romanNumerals[8].value, 10);
	EXPECT_STREQ(romanNumerals[8].symbol, "X");
	EXPECT_EQ(romanNumerals[7].value, 40);
	EXPECT_STREQ(romanNumerals[7].symbol, "XL");
	EXPECT_EQ(romanNumerals[6].value, 50);
	EXPECT_STREQ(romanNumerals[6].symbol, "L");
	EXPECT_EQ(romanNumerals[5].value, 90);
	EXPECT_STREQ(romanNumerals[5].symbol, "XC");
	EXPECT_EQ(romanNumerals[4].value, 100);
	EXPECT_STREQ(romanNumerals[4].symbol, "C");
	EXPECT_EQ(romanNumerals[3].value, 400);
	EXPECT_STREQ(romanNumerals[3].symbol, "CD");
	EXPECT_EQ(romanNumerals[2].value, 500);
	EXPECT_STREQ(romanNumerals[2].symbol, "D");
	EXPECT_EQ(romanNumerals[1].value, 900);
	EXPECT_STREQ(romanNumerals[1].symbol, "CM");
	EXPECT_EQ(romanNumerals[0].value, 1000);
	EXPECT_STREQ(romanNumerals[0].symbol, "M");

	free(romanNumerals);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
