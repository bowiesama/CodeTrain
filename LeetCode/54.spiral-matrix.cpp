/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 */
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int row = matrix.size();
        if(row == 0)
            return res;
        int col = matrix[0].size();
        int start = 0;
        if(row == 1)
            return matrix[0];
        if(col == 1)
        {
            for(int e = 0; e < row; e++)
            {
                res.push_back(matrix[e][0]);
            }
            return matrix[0];
        }
        while(row > 0 && col > 0)
        {
            for(int i = 0; i < col; i++)
            {
                res.push_back(matrix[start][i]);
            }
            for(int j = 1; j < row; j++)
            {
                res.push_back(matrix[j][col - 1 - start]);
            }
            for(int m = col -2; m >= 0; m--)
            {
                 res.push_back(matrix[row - 1 - start][m]);
            }
            for(int n = row -2; n > 0; n--)
            {
                 res.push_back(matrix[n][start]);
            }
            row = row -2;
            col = col -2;
            start++;
            if(row == 1 || col == 1 )
            {
                res.push_back(matrix[start][start]);
                break;
            }
        }
        return res;
    }
};



/*
m * n  ------->  (m-2) * (n-2)   if((m-2) == 1 || (n-2) == 1 )

*/
