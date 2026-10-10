class Solution {
public:
    int n;
    typedef long long ll;
    vector<vector<ll>>arr;

    ll solve(int idx, const vector<int> &nums, bool flag){
        if (idx >= n)
        return 0;

        if (arr[idx][flag] != -1)
        return arr[idx][flag];

        ll skip = solve(idx+1, nums, flag);
        
        ll val = nums[idx];
        if (flag == false)
        val = -val;

        ll take = solve(idx+1, nums, !flag) + val;

        return arr[idx][flag] = max(take, skip);

    }
    long long maxAlternatingSum(vector<int>& nums) {
        n = nums.size();
        arr.assign(n, vector<ll>(2, -1));

        return solve(0, nums, true);
    }
};