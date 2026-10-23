class Solution {
public:

int n;
int arr[21][2001];

int solve(vector<int> &nums, int n, int sum){
    if (n == 0){
    return sum == 0 ? 1 : 0;
    }

    if (arr[n][sum] != -1)
    return arr[n][sum];
    
    int skip = solve(nums, n-1, sum);

    int take = 0;
    if (nums[n-1] <= sum)
    take = solve(nums, n-1, sum-nums[n-1]);
    
    arr[n][sum] = take + skip;
    return arr[n][sum];
}
    int findTargetSumWays(vector<int>& nums, int target) {
        n = nums.size();
        memset(arr, -1, sizeof(arr));

        int sum = 0;
        for (auto x : nums)
        sum += x;
        
        // negative target ko handle karne ke liye abs()
        if (abs(target) > sum || (sum + target) % 2 != 0)
            return 0;
                    
        return solve(nums, n, (target + sum)/2);
    }
};