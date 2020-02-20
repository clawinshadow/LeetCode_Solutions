/*

Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

    Given nums = [2, 7, 11, 15], target = 9,

    Because nums[0] + nums[1] = 2 + 7 = 9,

    return [0, 1].

*/

#include <unordered_map>

#include "TwoSum.h"

using namespace std;

namespace algorithm {
namespace easy{

//brute force
vector<int> TwoSum_weak(vector<int>& nums, int target) {
    vector<int> result{-1, -1};
    if (nums.size() < 2)
        return result;
    
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result = {i, j};
                return result;
            }
        }
    }
    
    return result;
}

//use hashmap one-pass
vector<int> TwoSum(vector<int>& nums, int target) {
    vector<int> result{-1, -1};
    if (nums.size() < 2)
        return result;
    
    std::unordered_map<int, int> val_index_map;
    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        if (val_index_map.find(complement) != val_index_map.end())
        {
            return {i, val_index_map[complement]};
        }
        else
            val_index_map[nums[i]] = i;
    }
    
    return result;
}

}  //namespace easy
}  //namespace algorithm
