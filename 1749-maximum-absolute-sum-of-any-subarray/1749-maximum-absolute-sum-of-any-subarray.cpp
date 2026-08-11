class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int mini = INT_MAX;
        int currMax = 0;
        int maxi = INT_MIN;
        int currMin =0;
        int n = nums.size();
        // use kadane's for maximum +ve sum and maximum -ve sum
        for (int i=0; i<n ; i++){
           currMax += nums[i];
           maxi = max(currMax,maxi);
           if (currMax < 0) currMax =0;
        // reset to 0 if current sum becomes -ve => maxi or +ve => mini 
           currMin += nums[i];
           mini = min(currMin ,mini);
           if (currMin > 0) currMin =0;           
        }
        return max(maxi,abs(mini));
    }
};