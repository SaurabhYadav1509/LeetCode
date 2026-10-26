class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        if (k <= 1)
        return 0;
        
        int n = nums.size();
        int l = 0;
        
        long long prod = 1;
        long long ans = 0;
        for (int i=0; i<n; i++){
            prod *= nums[i];

            while(prod >= k){
                prod /= nums[l];
                l++;
            }
            ans += i-l+1;
        }
        return ans;
    }
};