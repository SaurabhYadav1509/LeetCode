class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>ans(nums.size());
        int idx =0;
        for (auto x : nums){
            if (x != 0) ans[idx++] = x;
        }
        nums = ans;
    }
};