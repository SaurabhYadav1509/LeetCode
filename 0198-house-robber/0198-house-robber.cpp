class Solution {
public:

int solve(vector<int> &nums, int idx, int n, vector<int>& dp){
    
    if (idx >= n)
    return 0;

    if (dp[idx] != -1)
    return dp[idx];

    int take = nums[idx] + solve(nums, idx+2, n, dp);
    int skip = solve(nums, idx+1, n, dp);

    dp[idx] = max(take, skip);

    return dp[idx];
}
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1, -1);

        return solve(nums, 0, n, dp);
    }
};