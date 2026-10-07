class Solution {
public:

    int solve(int amount, int index, vector<int>& coins,
              vector<vector<int>>& dp) {

        if (amount == 0)
            return 1;

        // No coins left
        if (index >= coins.size())
            return 0;

        // Amount became negative
        if (amount < 0)
            return 0;

        if (dp[index][amount] != -1)
            return dp[index][amount];

        // Take the current coin
        int take = solve(amount - coins[index], index, coins,dp);

        // Skip the current coin
        int skip = solve(amount, index + 1, coins, dp);

        dp[index][amount] = take + skip;

        return dp[index][amount];
    }

    int change(int amount, vector<int>& coins) {

        int n = coins.size();

        vector<vector<int>> dp(n, vector<int>(amount + 1, -1));

        return solve(amount, 0, coins, dp);
    }
};