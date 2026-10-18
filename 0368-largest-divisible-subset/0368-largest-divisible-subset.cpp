
class Solution {
public:
    int n;
    vector<vector<int>> dp;

    int solve(vector<int>& nums, int i, int prev) {
        if (i >= n)
            return 0;

        // prev + 1 handles prev = -1
        if (dp[i][prev + 1] != -1)
            return dp[i][prev + 1];

        // Skip current element
        int skip = solve(nums, i + 1, prev);

        // Take current element
        int take = 0;

        if (prev == -1 || nums[i] % nums[prev] == 0) {
            take = 1 + solve(nums, i + 1, i);
        }

        return dp[i][prev + 1] = max(take, skip);
    }

    vector<int> largestDivisibleSubset(vector<int>& nums) {
        n = nums.size();

        sort(nums.begin(), nums.end());

        dp.assign(n, vector<int>(n + 1, -1));

        solve(nums, 0, -1);

        // Reconstruct the subset
        vector<int> ans;
        int prev = -1;

        for (int i = 0; i < n; i++) {
            int skip = solve(nums, i + 1, prev);
            int take = 0;

            if (prev == -1 || nums[i] % nums[prev] == 0) {
                take = 1 + solve(nums, i + 1, i);
            }

            if (take >= skip && take > 0) {
                ans.push_back(nums[i]);
                prev = i;
            }
        }

        return ans;
    }
};
