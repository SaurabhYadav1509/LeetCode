class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size();
        int k = n/2;
        vector<int>ans = nums;

       // total sum of nums
       long long total = 0;
       for (auto x : nums) total += x;

       // first sum of first rotation
       long long f =0;
       for (int i=0; i<k; i++) f += nums[i];
 
       // doubling the size
       for (auto x : nums) ans.push_back(x);
       
       int count =0;
       for (int i=0; i<n; i++){
        long long e = total - f;

        if (f > e) count++;

        f = f - nums[i];
        f = f + nums[(i+k)%n];
       }

      return count;
    }
};