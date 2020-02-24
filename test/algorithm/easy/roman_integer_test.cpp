//
// Created by fhuang on 2020/2/24.
//

#include "gtest/gtest.h"
#include "algorithm/easy/roman_integer.h"

using namespace algorithm::easy;

TEST(Algorithm_Easy, RomanInteger)
{
    EXPECT_EQ(RomanToInt("III"), 3);
    EXPECT_EQ(RomanToInt("MMMCMXCIX"), 3999);
    EXPECT_EQ(RomanToInt("IV"), 4);
    EXPECT_EQ(RomanToInt("IX"), 9);
    EXPECT_EQ(RomanToInt("LVIII"), 58);
    EXPECT_EQ(RomanToInt("MCMXCIV"), 1994);
}