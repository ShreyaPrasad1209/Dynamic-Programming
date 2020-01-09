class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, smax = INT_MIN;
        for (int num : nums) {
            sum += num;
          if(smax<sum)
          {
            smax=sum;
          }
            if (sum < 0) {
                sum = 0;
            }
        }
        return smax;
    }
};


//Also known as Kadane's Algorithm
//Time Complexity: O(n)
//LeetCode: https://leetcode.com/problems/maximum-subarray/
