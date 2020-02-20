#include "gtest/gtest.h"
#include "algorithm/easy/TwoSum.h"

using namespace algorithm::easy;

TEST(Algorithm_Easy, TwoSum)
{
    vector<int> numbers{2, 7, 5, 11};
    EXPECT_EQ(TwoSum(numbers, 16)[0], 3);
}