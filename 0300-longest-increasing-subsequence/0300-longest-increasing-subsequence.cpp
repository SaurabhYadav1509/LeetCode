class Solution {
public:

int n;
int arr[2501][2501];

int solve(vector<int>& nums, int idx, int p){
    if (idx >= n)
    return 0;

    if ( p != -1 && arr[idx][p] != -1)
    return arr[idx][p];
    
    int take = 0;
    if (p == -1 || nums[p] < nums[idx]){
      take = 1 + solve(nums, idx+1, idx);
    }

    int skip = solve(nums, idx+1, p);

    if (p != -1)
    arr[idx][p] = max(take, skip);

    return max(take, skip);
}

    int lengthOfLIS(vector<int>& nums) {
        n = nums.size();
        memset(arr, -1, sizeof(arr));

        return solve(nums, 0, -1);
    }
};