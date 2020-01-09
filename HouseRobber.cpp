class Solution {
public:
    int rob(vector<int>& nums) {
        int x = 0, y = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (i & 1) {
                x = max(x + nums[i], y);
            } else {
                y = max(y + nums[i], x);
            }
        }
        return max(x, y);
    }
};

//Time Complexity: O(n)
//LeetCode: https://leetcode.com/problems/house-robber/


//_______________________________________________//
//eKuG

class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        if(nums.size()==1){
            return nums[0];
        }
        if(nums.size()==2){
            return max(nums[0],nums[1]);
        }
        vector<int> cost(nums.size(),0);
            cost[0]=nums[0];
            cost[1]= max(nums[0], nums[1]);
        for(int i = 2; i < nums.size(); i++){
            cost[i]=max(cost[i-1],(cost[i-2]+nums[i]));
        }
        return cost[cost.size()-1];
    }
};
