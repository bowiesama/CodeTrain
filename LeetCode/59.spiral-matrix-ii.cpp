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
        if(n <= 0)
            return res;
        int matrix = 1;
        int count  = n;
        int row_x = 0;
        int col = n;
        int offset = 1;
        for(int i = 0; i < (2*n - 1);i++)
        {
            switch (direction)
            {
                case 0: // right
                {
                    for(int j = 0; j < count; j++)
                    {
                        res[row_x][j + offset - 1] = matrix;
                        matrix++;
                    }
                    direction = 1;
                    break;
                }
                case 1: //down
                {
                    for(int k = 0; k < count - 1; k++)
                    {
                        res[k + offset][col - 1] = matrix;
                        matrix++;
                    }
                    direction = 2;
                    break;
                }
                case 2: //left
                {
                    for(int m = 0; m < count - 1; m++)
                    {
                        res[col - 1][n - m - offset - 1] = matrix;
                        matrix++;
                    }
                    direction = 3;
                    break;
                }
                case 3: //up
                {
                    for(int z = 0; z < count - 2;z++)
                    {
                        res[n - z - 1 - offset][row_x] = matrix;
                        matrix++;
                    }
                    direction = 0;
                    break;
                } 
                default:
                    break;
            }
            if(direction  == 0)
            {
                count = count - 2;
                row_x++;
                col--;
                offset++;
            }
        }
        return res;
    }
};

/*
[1,   2,  3,  4, 5],
[16, 17, 18, 19, 6],
[15, 24, 25, 20, 7],
[14, 23, 22, 21, 8],
[13, 12, 11, 10, 9]
 */
