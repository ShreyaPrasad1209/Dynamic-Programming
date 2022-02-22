int longestRepeatingSubsequence(string a, string b, int m, int n) {
    int dp[m+1][n+1];
    memset(dp, 0, sizeof(dp));
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            if(a[i-1] == b[j-1] && i!=j) 
                dp[i][j] = dp[i-1][j-1] + 1;
            else 
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[m][n];
}
