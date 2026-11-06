class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();

        int start = 0;
        int end = n - 1;

        vector<int> ans(n);
        int k = n-1;

        while (start <= end) {

            if (abs(nums[start]) >= abs(nums[end])) {
                ans[k] = nums[start]*nums[start];
                start++;
            }
            else {
                ans[k] = nums[end]*nums[end];
                end--;
            }
            k--;
        }
        return ans;
    }
};