//Recursive Approach

int coinChangeInfiniteSupply(vector<int>& coins, int n, int amount)   
{
    if(amount == 0) return 1;
    
    if(n <= 0 || amount< 0 ) return 0;
    
    return coinChangeInfiniteSupply(coins, n-1, amount) + coinChangeInfiniteSupply(coins, n, amount-coins[n-1]);
    
   return 0;
}
