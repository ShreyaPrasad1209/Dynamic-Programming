#include <iostream>
using namespace std;

int main() {

    // write your code here
    string str;
    cin >> str;
    int len = str.length();
    int ans = 0;
    string output = "";
    int st =0;
    int end = 0;
    for(int x = 0; x < len; x++)
    {
        // odd
        int i = x - 1;
        int j = x + 1;
        while(i >= 0 && j < len && str[i] == str[j])
        {
            i--;
            j++;
        }
        
        int com_len = j - i - 1;
        if(com_len > ans)
        {
            ans = com_len;
            output = str.substr(i + 1, j);
            st = i + 1;        //storing indexes
            end = j -1;
        }
        
        // even
        
         i = x - 1;
         j = x;
        while(i >= 0 && j < len && str[i] == str[j])
        {
            i--;
            j++;
        }
        
         com_len = j - i - 1;
        if(com_len > ans)
        {
            ans = com_len;
            output = str.substr(i + 1, j);
            st = i+ 1;         //storing indexes
            end = j - 1;
        }
        
    }
    
    // cout << output << " ->" << ans << endl;             //code for printing substring without substr library
    for(int x = st; x <= end; x++)
    cout << str[x];
   return 0; 
   }
