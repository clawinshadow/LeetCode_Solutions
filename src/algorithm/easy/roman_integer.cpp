//
// Created by fhuang on 2020/2/24.
//

#include "roman_integer.h"

#include <iostream>
#include <unordered_map>

namespace algorithm {
namespace easy {

int RomanToInt(std::string s) {
    if (s.size() < 0)
        return -1;
    std::unordered_map<char, int> roman_int_map =
    {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
    };

    int result = 0;
    for (int i = 0; i < s.size(); )
    {
        char symbol = s[i];
        if (roman_int_map.find(symbol) == roman_int_map.end())
        {
            std::cout << "Invalid Roman Numeral" << std::endl;
            return -1;
        }
        if (i < (s.size() - 1))
        {
            char next_symbol = s[i + 1];
            if (symbol == 'I' && next_symbol == 'V')
            {
                result += 4;
                i += 2;
                continue;
            }
            if (symbol == 'I' && next_symbol == 'X')
            {
                result += 9;
                i += 2;
                continue;
            }
            if (symbol == 'X' && next_symbol == 'L')
            {
                result += 40;
                i += 2;
                continue;
            }
            if (symbol == 'X' && next_symbol == 'C')
            {
                result += 90;
                i += 2;
                continue;
            }
            if (symbol == 'C' && next_symbol == 'D')
            {
                result += 400;
                i += 2;
                continue;
            }
            if (symbol == 'C' && next_symbol == 'M')
            {
                result += 900;
                i += 2;
                continue;
            }
        }

        result += roman_int_map[symbol];
        i += 1;
    }

    return result;
}

}
}