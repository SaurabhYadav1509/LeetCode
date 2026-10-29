class Solution {
public:
    int pivotIndex(vector<int>& nums) {
                int n = nums.size();
        vector<int> pre(n, 0), suff(n, 0);

        int pr = 0;
        for (int i = 0; i < n; i++) {
            pre[i] = pr;
            pr += nums[i];
        }

        int suf = 0;
        for (int i = n - 1; i >= 0; i--) {
            suff[i] = suf;
            suf += nums[i];
        }

        for (int i = 0; i < n; i++) {
            if (pre[i] == suff[i]) {
                return i;
            }
        }

        return -1;
    }
};