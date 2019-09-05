/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */
class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> red, white, blue;
        for(auto num: nums)
        {
            switch (num)
            {
                case 0:
                    red.push_back(0);
                break;
                case 1:
                    white.push_back(1);
                break;
                case 2:
                    blue.push_back(2);
                break;
            default:
                break;
            }
        }
        nums.clear();
        int size_red = red.size();
        int size_white = white.size();
        int size_blue = blue.size();
        for(int i = 0; i < size_red; i++)
            nums.push_back(0);
        for(int i = 0; i < size_white; i++)
            nums.push_back(1);
        for(int i = 0; i < size_blue; i++)
            nums.push_back(2);
        return;
    }
};

