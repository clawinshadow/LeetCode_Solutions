//
// Created by fhuang on 2020/3/2.
//

#include "valid_parentheses.h"

#include <string>
#include <iostream>
#include <unordered_map>

using namespace std;

namespace algorithm {
namespace easy {

bool IsValidParentheses(string s) {
    if (s.empty())
        return true;

    std::unordered_map<char, char> brackets = {
            {'(', ')'},
            {'[', ']'},
            {'{', '}'}
    };
    std::unordered_map<char, char> brackets_reverse = {
            {')', '('},
            {'}', '{'},
            {']', '['}
    };

    std::string open;
    for(int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if (brackets.find(c) != brackets.end())
            open.push_back(c);
        else
        {
            if (brackets_reverse.find(c) == brackets_reverse.end())
            {
                std::cout << "invalid closed bracket" << std::endl;
                return false;
            }
            if (open.back() != brackets_reverse[c])
                return false;
            open.pop_back();
        }
    }

    return open.empty();
}

}
}