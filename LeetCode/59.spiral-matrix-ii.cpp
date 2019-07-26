/*
 * @lc app=leetcode id=59 lang=cpp
 *
 * [59] Spiral Matrix II
 */
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int direction = 0;
        vector<int> row(n, 0);
        vector<vector<int>> res(n, row);
        int matrix = 1;
        for(int i = 0; i < (2*n - 1);i++)
        {
            switch (direction)
            {
                case 0: // right
                {

                    break;
                }
                case 1: //down
                {
                    
                    break;
                }
                case 2: //left
                {
                    
                    break;
                }
                case 3: //up
                {
                    
                    break;
                } 
                default:
                    break;
            }
        }
        return res;
    }
};

