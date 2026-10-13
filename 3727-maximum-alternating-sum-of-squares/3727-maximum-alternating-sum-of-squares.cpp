class Solution {
public:

typedef long long ll;
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();

        for (int i=0; i<n; i++){
            if (nums[i] < 0)
            nums[i] = (-1)*nums[i];
        }
    
    sort(nums.begin(), nums.end());
    
    ll sum =0;
    ll mid = n/2;

    for (int i=mid; i<n; i++){
        sum += nums[i]*nums[i];

        // if -nums[idx] exists
        if (i-mid < mid)
        sum -= nums[i-mid]*nums[i-mid];
    }
   return sum;     
    }
};