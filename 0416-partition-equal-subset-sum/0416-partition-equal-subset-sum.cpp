class Solution {
public:

int n;
int arr[201][10001];

bool solve(vector<int> &nums, int i, int sum){

    if (sum == 0)
    return true;

    if (i >= n || sum < 0)
    return false;
    
    if (arr[i][sum] != -1)
    return arr[i][sum];

    int skip = solve(nums, i+1, sum);
    int take = solve(nums, i+1, sum-nums[i]);

return arr[i][sum] = (take || skip);
}
    bool canPartition(vector<int>& nums) {
         n = nums.size();
        memset(arr, -1, sizeof(arr));
        
        int sum = 0;
        for (auto x : nums)
        sum += x;

        if (sum % 2 != 0)
        return false;

        return solve(nums, 0, sum/2);
    }
};