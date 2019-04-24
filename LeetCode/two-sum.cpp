/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */
class Solution {
public:
    /*vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i = 0;i < nums.size();i++) {
            for(int j = i + 1; j < nums.size();j++) {
                if(nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result;
    }*/
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> myMap;
        vector<int> ret;
        for(int i = 0; i < nums.size(); i++)
        {
            auto find = myMap.find(target - nums[i]);
            if(find == myMap.end())
            {
                myMap.emplace(nums[i], i);
            }
            else
            {
                ret.push_back(i);
                ret.push_back(find->second);
            }
            
        }
        return ret;
    }
};

