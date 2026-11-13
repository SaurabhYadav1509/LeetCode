class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int ci = 1;
        int cd = 1;
        int maxi = 1;

        for (int i=0; i<n-1; i++){
         if (nums[i] < nums[i+1])
         ci++;
         else ci =1;

         maxi = max(ci, maxi);
        }

        for (int i=0; i<n-1; i++){
            if (nums[i] > nums[i+1])
            cd++;
            else cd = 1;

            maxi = max(cd, maxi);
        }
        return maxi;
    }
};