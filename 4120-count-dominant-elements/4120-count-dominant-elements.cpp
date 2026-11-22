class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 1;

        int ans = 0;

        // first element
        if (nums[0] >= nums[1])
            ans++;
        // second element
        if (nums[n-1] >= nums[n-2])
            ans++;

        for (int i=1; i<n-1; i++) {
            int prev = nums[i-1];
            int next = nums[i+1];

            if (2*nums[i] >= prev+next)
                ans++;
        }
        return ans;
    }
};