#include "gtest/gtest.h"
#include "algorithm/easy/two_sum.h"

using namespace algorithm::easy;

TEST(Algorithm_Easy, TwoSum)
{
    vector<int> numbers;
    for (int i = 0; i <= 10000; i++)
        numbers.push_back(i);
    
    EXPECT_EQ(TwoSum_Solution(numbers, 19999)[0], 10000);
}

TEST(Algorithm_Easy, TwoSum_weak)
{
    vector<int> numbers;
    for (int i = 0; i <= 10000; i++)
        numbers.push_back(i);
    
    EXPECT_EQ(TwoSum_Weak(numbers, 19999)[0], 9999);
}