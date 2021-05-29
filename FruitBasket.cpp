int minCost(vector<int>& arr, vector<int>& cost)
{
 
    int N = arr.size();
    vector<vector<int> > dp(N, vector<int>(3));
 
  
    dp[0][0] = 0;
 
   
    dp[0][1] = cost[0];
 
   
    dp[0][2] = cost[0] * 2;
 
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < 3; j++) {
 
            int minimum = INT_MAX;
 

            if (j + arr[i] != arr[i - 1])
                minimum
                    = min(minimum,
                          dp[i - 1][0]);
 
         
            if (j + arr[i] != arr[i - 1] + 1)
                minimum
                    = min(minimum,
                          dp[i - 1][1]);
 
            if (j + arr[i] != arr[i - 1] + 2)
                minimum
                    = min(minimum,
                          dp[i - 1][2]);
 
        
            dp[i][j] = j * cost[i] + minimum;
        }
    }
 
    int ans = INT_MAX;
 

    for (int i = 0; i < 3; i++)
        ans = min(ans, dp[N - 1][i]);
 return ans;
}

