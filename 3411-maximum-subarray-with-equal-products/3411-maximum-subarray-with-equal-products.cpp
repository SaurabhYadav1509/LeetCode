class Solution {
public:
    int maxLength(vector<int>& nums) {

        int n = nums.size();
        int maxi = 0;

        for (int i=0; i<n; i++) {

            long long prod = 1;
            long long g = 0;
            long long l = 1;

            for (int j=i; j<n; j++) {
                
                g = gcd(g, (long long)nums[j]);
                l = lcm(l, (long long)nums[j]);

                // check before multiplication
                if (prod > (g * l) / nums[j])
                    break;

                prod *= nums[j];

                if (prod == g*l) {
                    maxi = max(maxi, j-i+1);
                }
            }
        }
        return maxi;
    }
};