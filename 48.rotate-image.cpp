/*
 * @lc app=leetcode id=48 lang=cpp
 *
 * [48] Rotate Image
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int N = matrix.size();
        for(int r=0; r < N/2; r++)
        {
            for(int c=r; c<N-r-1; c++)
            {
               int temp = matrix[r][c];
                matrix[r][c] = matrix[N - 1 - c][r];
                matrix[N - 1 - c][r] = matrix[N - r - 1][N - 1 - c];
                matrix[N - r - 1][N - 1 - c] = matrix[c][N - r - 1];
                matrix[c][N - r - 1] = temp;
            }
        }
    }
};
// @lc code=end

