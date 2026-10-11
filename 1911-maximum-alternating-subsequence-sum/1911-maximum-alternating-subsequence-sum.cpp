class Solution {
public:

typedef long long ll;
int n;
ll arr[1000001][2];

ll solve(vector<int> &nums, int idx, bool flag){
    if (idx >= n)
    return 0;

    if (arr[idx][flag] != -1)
    return arr[idx][flag];
    
    ll take = 0;
    if (flag == false){
      take = solve(nums, idx+1, !flag) - nums[idx];
    }
    else take = solve(nums, idx+1, !flag) + nums[idx];

    ll skip = solve(nums, idx+1, flag);

    return arr[idx][flag] = max(take, skip);
}
    long long maxAlternatingSum(vector<int>& nums) {

        n = nums.size();
        memset(arr, -1, sizeof(arr));
        return solve(nums, 0, true);
    }
};