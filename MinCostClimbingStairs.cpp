class Solution {
public:
  int min(int a,int b)
  {
    return a<b?a:b;
  }
    using VI = vector<int>;
    int minCostClimbingStairs(VI& A) {
        int n = A.size();
        VI dp(n + 1);
        dp[0] = A[0];
        dp[1] = A[1];
        for (auto i=2; i < n; ++i)
            dp[i] = A[i] + min(dp[i - 2], dp[i - 1]);
        return min(dp[n - 2], dp[n - 1]);
    }
};

//Time Complexity: O(n)
//LeetCode: https://leetcode.com/problems/min-cost-climbing-stairs/

//________________________________________//
//eKuG

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.size() == 3){
            int a= cost[0]+cost[2];
            return min(cost[1],a);
        }
        else{
            
            for(int i = 2; i<cost.size();i++){
                cost[i]+=min(cost[i-1],cost[i-2]);
            }
            
        }
        return min(cost[cost.size()-1],cost[cost.size()-2]);
    }
};
