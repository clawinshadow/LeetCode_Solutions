#include "gtest/gtest.h"
#include "algorithm/easy/reverse_integer.h"

using namespace algorithm::easy;

TEST(Algorithm_Easy, ReverseInteger)
{
    EXPECT_EQ(ReverseInteger_Solution(1203), 3021);
    EXPECT_EQ(ReverseInteger_Solution(120), 21);
    EXPECT_EQ(ReverseInteger_Solution(-31), -13);
    EXPECT_EQ(ReverseInteger_Solution(1534236469), 0);
    EXPECT_EQ(ReverseInteger_Solution(2147483648), 0);
}