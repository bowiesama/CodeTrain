/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int i = 0;
        int n = nums.size();
        int left = 0;
        int right = 0;
        int ret = 0;
        int sum = 0;
        int diff = 0;
        int minDiff = INT_MAX;
    
        sort(nums.begin(), nums.end());
        
        ret = nums[0] + nums[1] + nums[2];
        minDiff = abs(ret - target);
        
        for (i = 0; i < n-2; i++)
        {
            left = i + 1;
            right = n - 1;
            
            while (left < right)
            {
                sum = nums[i] + nums[left] + nums[right];
                diff = abs(sum - target);

                if (diff == 0)
                    return sum;

                if (diff < minDiff)
                {
                    minDiff = diff;
                    ret = sum;
                }
                
                if (sum - target > 0)
                    right--;
                else
                    left++;
            }
        }
        
        return ret;
    }
};

