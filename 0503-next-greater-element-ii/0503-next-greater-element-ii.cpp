class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();

        vector<int>ans(2*n);
        for (int i=0; i<2*n ;i++) ans[i] = nums[i%n];

        vector<int>arr(n,-1);
        for (int i=0; i<n; i++){
            for (int j=i+1 ; j <= i+n; j++){
             if (ans[i] < ans[j]){
                 arr[i] = ans[j];
                break;
            }
        }
     }
    nums = arr;
    return nums;
    }
};