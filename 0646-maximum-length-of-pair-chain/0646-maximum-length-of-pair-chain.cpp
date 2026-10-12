class Solution {
public:
    int findLongestChain(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<int>arr(n, 1);
        
        sort(nums.begin(), nums.end());
        int maxLIS = 1;

        for (int i=0; i<n; i++){
            for (int j=0; j<i; j++){

                if (nums[i][0] > nums[j][1]){

                    arr[i] = max(arr[i], arr[j]+1);
                    maxLIS = max(arr[i], maxLIS);
                }
            }
        }
        return maxLIS;        
    }
};