/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int distacne = 0;
        for(int i = 0; i <= distacne; i++)
        {
            distacne = std::max(distacne, i + nums[i]);
            if(distacne >= nums.size() - 1)
                return true;
        }
        return false;
    }
};

