class Solution {
public:
    int uniquePaths(int m, int n) {
        long long dp[m+10][n+10];
        for(int i=0;i<=m;i++)
            dp[i][0]=1;
        for(int i=0;i<=n;i++)
            dp[0][i]=1;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                dp[i][j] = dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};


//Time Complexity: O(n^2)
//LeetCode: https://leetcode.com/problems/unique-paths/
