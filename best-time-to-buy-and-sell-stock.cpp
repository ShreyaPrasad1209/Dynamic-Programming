class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max2 = 0;
        int min = INT_MAX;
        for(int i = 0; i<prices.size(); i++){
            if(prices[i]<min){
                min = prices[i];
            }
            else{
                max2 = max(max2, prices[i]-min);
            }
        }
        return max2;
    }
};

//https://leetcode.com/problems/best-time-to-buy-and-sell-stock
// Time Complexity = O(n)
