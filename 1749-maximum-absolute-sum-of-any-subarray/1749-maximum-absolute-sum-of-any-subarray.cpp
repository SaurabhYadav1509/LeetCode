class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int mini = INT_MAX;
        int currMax = 0;
        int maxi = INT_MIN;
        int currMin =0;
        int n = nums.size();
        for (int i=0; i<n ; i++){
           currMax += nums[i];
           maxi = max(currMax,maxi);
           if (currMax < 0) currMax =0;

           currMin += nums[i];
           mini = min(currMin ,mini);
           if (currMin > 0) currMin =0;           
        }
        return max(maxi,abs(mini));
    }
};