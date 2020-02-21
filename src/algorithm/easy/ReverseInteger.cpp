/*
Given a 32-bit signed integer, reverse digits of an integer.

Examples:
    123 -> 321 
    -1506 -> -6051
    
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−2**31,  2**31 − 1].
For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
即：整个过程中我们只能用int类型，并且要检查overflow
*/

#include <iostream>
#include <limits>
#include <vector>
#include <cmath>
#include "ReverseInteger.h"

#define INT_MAX std::numeric_limits<int>::max()
#define INT_MIN std::numeric_limits<int>::min()

using namespace std;

namespace algorithm {
namespace easy {

bool valid_int(long x)
{
    return x <= std::numeric_limits<int>::max() &&
           x >= std::numeric_limits<int>::min();
}

//这个虽然完成了功能，但实际上是不符合要求的
//使用了long类型, vector 等
int ReverseInteger_weak(int x)
{
    int abs_x = std::abs((long)x);
    if (!valid_int(abs_x))
        return 0;
    int base_x = (int)abs_x;
    
    int i = 1;
    int mod = -1;
    vector<int> digits;
    while (mod != 0)
    {
        int digit = base_x % static_cast<int>(pow(10, i));
        if (i > 1)
            digit = digit / static_cast<int>(pow(10, i - 1));
        
        //std::cout << "digit: " << digit << std::endl;
        digits.push_back(digit);
        
        mod = base_x / static_cast<int>(pow(10, i));
        i++;
    }

    long reverse_x = 0;
    for (int j = 0; j < digits.size(); j++)
    {
        int digit = digits[j];
        //std::cout << "multiplier: " << std::pow(10, (digits.size()- j - 1)) << std::endl;
        reverse_x += digit * static_cast<long>(pow(10, (digits.size()- j - 1)));
    }
    
    reverse_x = x < 0 ? -reverse_x : reverse_x;
    if (!valid_int(reverse_x))
        return 0;
    return (int)reverse_x;
}

//elegant
int ReverseInteger_solution(int x)
{
    int rev = 0;
    while (x != 0)
    {
        int pop = x % 10; //the remainder
        x = x / 10;
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7)) 
            return 0;
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8))
            return 0;
        
        rev = rev * 10 + pop;
    }
}

}
}