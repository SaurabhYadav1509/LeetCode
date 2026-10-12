class Solution {
public:

int n;
int arr[1001][1001];

int solve(vector<vector<int>>& nums, int idx, int p){
    if (idx >= n)
    return 0;

    if ( p != -1 && arr[idx][p] != -1)
    return arr[idx][p];
    
    int take = 0;
    if (p == -1 || nums[p][1] < nums[idx][0]){
      take = 1 + solve(nums, idx+1, idx);
    }

    int skip = solve(nums, idx+1, p);

    if (p != -1)
    arr[idx][p] = max(take, skip);

    return max(take, skip);
}

    int findLongestChain(vector<vector<int>>& nums) {
        n = nums.size();
        memset(arr, -1, sizeof(arr));
        sort(nums.begin(), nums.end());

        return solve(nums, 0, -1);        
    }
};