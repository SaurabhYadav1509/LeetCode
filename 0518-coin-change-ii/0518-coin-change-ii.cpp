class Solution {
public:

int solve(int amount, vector<int>& coins, int idx, vector<vector<int>> &dp){
    if (idx < 0)
    return 0;

    if (amount == 0)
    return 1;

    if (dp[idx][amount] != -1)
    return dp[idx][amount];
    
    // not possible with current coins
    if (amount < coins[idx])
    return solve(amount, coins, idx-1, dp);
    
    // take or skip the current coins
   else
   return dp[idx][amount] = solve(amount-coins[idx], coins, idx, dp)+
   solve(amount, coins, idx-1, dp);

}

    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>>dp(n+1, vector<int>(amount+1, -1));

        return solve(amount, coins, n-1, dp);
        
    }
};