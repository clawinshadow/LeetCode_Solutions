#include "gtest/gtest.h"
#include "algorithm/easy/valid_parentheses.h"

#include <string>

using namespace algorithm::easy;

TEST(Algorithm_Easy, Check_Valid_Parentheses)
{
    EXPECT_TRUE(IsValidParentheses(""));
    EXPECT_TRUE(IsValidParentheses("[]"));
    EXPECT_FALSE(IsValidParentheses("(]"));
    EXPECT_FALSE(IsValidParentheses("([)]"));
    EXPECT_TRUE(IsValidParentheses("()[]{}"));
}
