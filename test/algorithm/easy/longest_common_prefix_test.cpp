//
// Created by fhuang on 2020/2/27.
//

#include "gtest/gtest.h"
#include "algorithm/easy/longest_common_prefix.h"

#include <string>
#include <vector>

using namespace algorithm::easy;

TEST(Algorithm_Easy, Longest_Common_Prefix)
{
    std::vector<std::string> strs_1 {""};
    std::vector<std::string> strs_2 {"flower","flow","flight"};
    std::vector<std::string> strs_3 {"dog","racecar","car"};
    std::vector<std::string> strs_4 {"dog","dog_dd","d"};
    std::vector<std::string> strs_5 {"c","acc","ccc"};
    EXPECT_EQ(LongestCommonPrefix_Horizontal(strs_1), "");
    EXPECT_EQ(LongestCommonPrefix_Horizontal(strs_2), "fl");
    EXPECT_EQ(LongestCommonPrefix_Horizontal(strs_3), "");
    EXPECT_EQ(LongestCommonPrefix_Horizontal(strs_4), "d");
    EXPECT_EQ(LongestCommonPrefix_Horizontal(strs_5), "");

    EXPECT_EQ(LongestCommonPrefix_Vertical(strs_1), "");
    EXPECT_EQ(LongestCommonPrefix_Vertical(strs_2), "fl");
    EXPECT_EQ(LongestCommonPrefix_Vertical(strs_3), "");
    EXPECT_EQ(LongestCommonPrefix_Vertical(strs_4), "d");
    EXPECT_EQ(LongestCommonPrefix_Vertical(strs_5), "");

    EXPECT_EQ(LongestCommonPrefix_DivideAndConque(strs_1), "");
    EXPECT_EQ(LongestCommonPrefix_DivideAndConque(strs_2), "fl");
    EXPECT_EQ(LongestCommonPrefix_DivideAndConque(strs_3), "");
    EXPECT_EQ(LongestCommonPrefix_DivideAndConque(strs_4), "d");
    EXPECT_EQ(LongestCommonPrefix_DivideAndConque(strs_5), "");
}