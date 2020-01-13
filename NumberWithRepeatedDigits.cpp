class Solution {
public:
    int numDupDigitsAtMostN(int N) {
        if(N < 10) return 0;
        int k = 0;
        for(int i = N; i > 0; i /= 10) k++;
        int digit[k] = {0};
        for(int i = 0, j = N; i < k; i++, j /= 10) digit[k - 1 - i] = j % 10;
        
        int noDupBaseSum = 0;
        int noDupBase[k - 1] = {0};
        for(int i = 0; i < k - 1; i++)
        {
            noDupBase[i] = i == 0 ? 9 : noDupBase[i - 1] * (10 - i);
            noDupBaseSum += noDupBase[i];
        }
        
        int count[10] = {0};
        int noDupRes[k] = {0};
        bool duplicate = false;
        for(int i = 0; i < k; i++)
        {
            noDupRes[i] = i == 0 ? 9 : noDupRes[i - 1] * (10 - i);
            if(!duplicate)
            {
                int diff = 0;
                for(int j = digit[i] + 1; j < 10; j++) diff += count[j] == 0;
                noDupRes[i] -= diff;
                count[digit[i]]++;
                if(count[digit[i]] > 1) duplicate = true;
            }
        }
        return N - (noDupBaseSum + noDupRes[k - 1]);
    }
};

//Time Complexity: O(logN)
//LeetCode: https://leetcode.com/problems/numbers-with-repeated-digits/
