//
// Created by fhuang on 2020/2/27.
//

#include "longest_common_prefix.h"

using namespace std;

namespace algorithm {
namespace easy {

//时间复杂度 O(S), S 表示所有的字符数之和
string LongestCommonPrefix_Horizontal(vector<string>& strs) {
    if (strs.size() == 0)
        return "";
    string prefix = strs.front();
    for (string &str: strs)
    {
        while (str.find(prefix) != 0)
        {
            prefix = prefix.substr(0, prefix.length() - 1);
            if (prefix.empty())
                return "";
        }
    }
    return prefix;
}

//时间复杂度 O(S), S 表示所有的字符数之和
string LongestCommonPrefix_Vertical(vector<string>& strs) {
    if (strs.size() == 0)
        return "";
    int index = 1;
    while (index <= strs[0].size())
    {
        std::string prefix = strs[0].substr(0, index);
        for (auto &str: strs)
        {
            if (str.find(prefix) != 0)
            {
                return prefix.substr(0, prefix.length() - 1);
            }
        }

        index++;
    }

    return strs[0];
}

string common_prefix(const string& left, const string& right)
{
    if (left.size() == 0 || right.size() == 0)
        return "";

    int min_length = std::min(left.size(), right.size());
    for (int i = 0; i < min_length; i++)
    {
        if (left[i] != right[i])
            return left.substr(0, i);
    }

    return left.substr(0, min_length);
}

string lcp(vector<string>& strs, int start, int end)
{
    if (start == end)
        return strs[start];

    int mid = (start + end) / 2;
    string left = lcp(strs, start, mid);
    string right = lcp(strs, mid + 1, end);
    return  common_prefix(left, right);
}

//时间复杂度 O(S), S 表示所有的字符数之和
string LongestCommonPrefix_DivideAndConque(vector<string>& strs)
{
    if (strs.size() == 0)
        return "";
    if (strs.size() == 1)
        return strs.front();

    int mid = (strs.size() - 1) / 2;
    string left_prefix = lcp(strs, 0, mid);
    string right_prefix = lcp(strs, mid + 1, strs.size() - 1);
    return common_prefix(left_prefix, right_prefix);
}

}
}