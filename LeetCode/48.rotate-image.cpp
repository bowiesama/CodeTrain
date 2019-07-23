/*
 * @lc app=leetcode id=48 lang=cpp
 *
 * [48] Rotate Image
 */
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> res(matrix);
        int row = matrix.size();
        for(int j = 0; j < row; j++)
        {
             for(int i = 0; i < row; i++)
                res[i][j] = matrix[row - 1 - j][i];
        }
        matrix.swap(res);
    }
};

