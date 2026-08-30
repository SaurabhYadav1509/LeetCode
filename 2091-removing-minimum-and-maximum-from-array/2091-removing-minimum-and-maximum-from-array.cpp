class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int min_idx=0;
        int max_idx =0;
        for (int i=0; i<n; i++){
            if (nums[min_idx] > nums[i]) min_idx = i;
            if (nums[max_idx] < nums[i]) max_idx = i;
        }
        int left = min(min_idx,max_idx);
        int right = max(min_idx,max_idx);

        return min({right+1, n-left, left+1+n-right});      
    }
};