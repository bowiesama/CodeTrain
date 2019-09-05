/*
 * @lc app=leetcode id=73 lang=cpp
 *
 * [73] Set Matrix Zeroes
 */
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> res;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n;j++)
            {
                if(matrix[i][j] == 0)
                {
                    vector<int> temp = {i, j};
                    res.push_back(temp);
                }
            }
        }
        int res_size = res.size();
        for(int option = 0; option < res_size; option++)
        {
            int row = res[option][0];
            int col = res[option][1];
            for(int i = 0; i < m; i++)
                matrix[i][col] = 0;
            for(int j = 0; j < n;j++)
                matrix[row][j] = 0;
        }
    }
};

