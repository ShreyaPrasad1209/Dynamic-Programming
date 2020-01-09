class Solution{
  public:
bool isSubsequence(string s, string t) {
        int i = 0; // pointer to s
        int j = 0; // pointer to t
        while(i<s.size() and j<t.size()){
            if(i==s.size()) return true;
            if(s[i]==t[j]){
                ++i;++j;
            }
            else{
                ++j;
            }
        }
        return (i==s.size());
    }
};

//Time Complexity: O(n)
//LeetCode: https://leetcode.com/problems/is-subsequence/
