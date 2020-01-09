class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur = nums[0];
        for(int i = 1; i<nums.size(); i++){
            if(nums[i-1] > 0) nums[i] += nums[i-1];
            cur = max(cur, nums[i]);
            
        }
        return cur;
    }
};

//O(n)
//https://leetcode.com/problems/maximum-subarray/
