class Solution
{
  public:
    // DP approach we can do it inplace as we don't need previous values once current
    // calcuation is done
    int minPathSum(vector<vector<int>>& grid) {
        int r = grid.size();
        if (r == 0) return 0;
        int c = grid[0].size();
       
        
        // Initalizing base case of the 0th row and 0th column
        // as there is only one way to reach them.
        // 0th row all by right and 0th column all by down
      
        for (int j = 1; j < c; j++) {
            grid[0][j] = grid[0][j-1] + grid[0][j];
        }
        for (int i = 1; i < r; i++) {
            grid[i][0] = grid[i-1][0] + grid[i][0];
        }
        
        for (int i = 1; i < r; i++) {
            for (int j = 1; j < c; j++) {
                grid[i][j] = grid[i][j] + min(grid[i][j-1],grid[i-1][j]);
            }
        }
        return grid[r-1][c-1];
    }
};

//Time Complexity: O(n^2)
//LeetCode: https://leetcode.com/problems/minimum-path-sum/
