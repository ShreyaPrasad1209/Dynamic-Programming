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
