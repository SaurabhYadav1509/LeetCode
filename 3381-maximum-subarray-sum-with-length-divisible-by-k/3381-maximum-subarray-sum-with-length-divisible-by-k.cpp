class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();

        vector<long long> minPrefix(k, LLONG_MAX);

        long long sum = 0;
        long long maxi = LLONG_MIN;
        minPrefix[0] = 0;

        for (int i=1; i<=n; i++) {
            sum += nums[i - 1];

            int rem = i % k;

            if (minPrefix[rem] != LLONG_MAX) {
                maxi = max(maxi, sum - minPrefix[rem]);
            }

            minPrefix[rem] = min(minPrefix[rem], sum);
        }
        return maxi;
    }
};