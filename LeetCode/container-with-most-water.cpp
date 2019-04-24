/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */
class Solution {
public:
    /*int maxArea(vector<int>& height) {
        int maxArea = 0;
        for(int i = 0; i < height.size(); i++)
        {
            for(int j = i + 1; j < height.size(); j++)
            {
                if(height[i] >= height[j])
                {
                    int tempArea = height[j] * (j - i);
                    if(tempArea > maxArea)
                        maxArea = tempArea;
                }
                else
                {
                    int tempArea = height[i] * (j - i);
                    if(tempArea > maxArea)
                        maxArea = tempArea; 
                }
                
            }
        }
        return maxArea;
    }*/

    int maxArea(vector<int>& height) {
    int water = 0;
    int i = 0, j = height.size() - 1;
    while (i < j) {
        int h = min(height[i], height[j]);
        water = max(water, (j - i) * h);
        while (height[i] <= h && i < j) i++;
        while (height[j] <= h && i < j) j--;
    }
    return water;
}
};

