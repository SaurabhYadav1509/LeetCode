class Solution {
public:

int n;
int arr[21][40001];

int solve(vector<int> &nums, int n, int sum, int target){

    if (n == 0){
        return sum == target;
    }
    
 // shift sum by 20000 to handle negative indices
    int idx = sum + 20000;

    if (arr[n][idx] != -1)
    return arr[n][idx];

    int sub = solve(nums, n-1, sum-nums[n-1], target);
    int add = solve(nums, n-1, sum+nums[n-1], target);
    
    arr[n][idx] = add + sub;
    return arr[n][idx];
}
    int findTargetSumWays(vector<int>& nums, int target) {
        n = nums.size();
        memset(arr, -1, sizeof(arr));
        return solve(nums, n, 0, target);
    }
};