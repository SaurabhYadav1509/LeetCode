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
        // Make minIndex the smaller index
        if (min_idx > max_idx) {
            swap(min_idx, max_idx);
        }

        int fromFront = max_idx + 1;
        int fromBack = n - min_idx;
        int bothSides = min_idx + 1 + n - max_idx;

        return min({fromFront, fromBack, bothSides});        
    }
};