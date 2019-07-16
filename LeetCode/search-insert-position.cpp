/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int high = nums.size() - 1;
        int low = 0;
        int mid = 0;
        while(low < high)
        {
            mid = (high + low) / 2;
            if(target > nums[mid])
                low = mid + 1;
            else if(target < nums[mid])
                high = mid - 1;
            else
                return mid;
        }
        if(target > nums[low])
            low++;
        return low; 
    }
};

