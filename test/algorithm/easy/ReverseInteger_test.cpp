#include "gtest/gtest.h"
#include "algorithm/easy/ReverseInteger.h"

using namespace algorithm::easy;

TEST(Algorithm_Easy, ReverseInteger)
{
    EXPECT_EQ(ReverseInteger_solution(1203), 3021);
    EXPECT_EQ(ReverseInteger_solution(120), 21);
    EXPECT_EQ(ReverseInteger_solution(-31), -13);
    EXPECT_EQ(ReverseInteger_solution(1534236469), 0);
    EXPECT_EQ(ReverseInteger_solution(2147483648), 0);
}