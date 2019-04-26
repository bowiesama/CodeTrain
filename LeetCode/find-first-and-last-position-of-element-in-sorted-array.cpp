/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto itor = nums.begin();
        int i = 0;
        int count = 0;
        int temp = 0;
        vector<int> ret;
        for(itor;itor < nums.end(); itor++)
        {
            if(*itor == target)
            {
                ret.push_back(i);
                temp = i;
                count++;
            }
            i++;
        }
        if(count == 0)
            ret = {-1, -1};
        else if(count == 1)
            ret = {temp, temp};
        else if(count > 2)
            {
                int min = ret[0];
                int max = ret[ret.size() - 1];
                ret = {min, max};
            }
        return ret;
    }
};

