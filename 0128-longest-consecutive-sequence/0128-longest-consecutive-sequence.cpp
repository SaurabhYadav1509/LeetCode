class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int last_small = INT_MIN;
        int count = 1;
        int maxi =0;

        int n = nums.size();
        if (n == 0) return 0;

        sort(nums.begin(),nums.end());

        for (int i=0; i<n; i++){

           if (nums[i]-1 == last_small) count++;
           // ignore duplicates
           else if (nums[i] == last_small) continue;
           else count=1;

           last_small = nums[i];
           maxi = max(maxi,count);
        }
        return maxi;
    }
};