//
// Created by fhuang on 2020/2/27.
//

#ifndef LEETCODE_SOLUTIONS_LONGEST_COMMON_PREFIX_H
#define LEETCODE_SOLUTIONS_LONGEST_COMMON_PREFIX_H

#include <vector>
#include <string>

namespace algorithm {
namespace easy {

std::string LongestCommonPrefix_Horizontal(std::vector<std::string> &strs);
std::string LongestCommonPrefix_Vertical(std::vector<std::string> &strs);
std::string LongestCommonPrefix_DivideAndConque(std::vector<std::string> &strs);

}
}


#endif //LEETCODE_SOLUTIONS_LONGEST_COMMON_PREFIX_H
