/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        if(row == 0)
            return false;
        int col = matrix[0].size();
        if(row == 1)
        {
            for(int j = 0; j < col; j++)
            {
                if(target == matrix[0][j])
                    return true;
            }
        }
        for(int i = 0; i < row - 1; i++)
        {
            if(target >= matrix[i][0] && target <= matrix[i+1][0])
            {
                if(target == matrix[i+1][0])
                    return true;
                for(int j = 0; j < col; j++)
                {
                    if(target == matrix[i][j])
                        return true;
                }
            }
        }
        for(int j = 0; j < col; j++)
        {
            if(target == matrix[row - 1][j])
                return true;
        }
        return false;
    }
};

