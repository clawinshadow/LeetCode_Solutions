#include "gtest/gtest.h"
#include "algorithm/easy/TwoSum.h"

using namespace algorithm::easy;

TEST(Algorithm_Easy, TwoSum)
{
    vector<int> numbers;
    for (int i = 0; i <= 10000; i++)
        numbers.push_back(i);
    
    EXPECT_EQ(TwoSum(numbers, 19999)[0], 10000);
}

TEST(Algorithm_Easy, TwoSum_weak)
{
    vector<int> numbers;
    for (int i = 0; i <= 10000; i++)
        numbers.push_back(i);
    
    EXPECT_EQ(TwoSum_weak(numbers, 19999)[0], 9999);
}