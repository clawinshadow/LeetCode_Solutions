#include <iostream>
#include <vector>
#include "algorithm/easy/two_sum.h"

using namespace std;
using namespace algorithm::easy;

int main(int argc,char **argv)
{
    std::cout << "------- LeetCode Solutions of Huang Fan -------" << std::endl;

    vector<int> numbers{2, 7, 5, 11};
    vector<int> result = TwoSum_Solution(numbers, 16);
    printf("result: [%d, %d]\n", result[0], result[1]);
}