class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        
        int sum = 0;
        int idx = 1;
        for (int i=0; i<n; i++){
           if (n % idx == 0)
           sum += nums[i]*nums[i];

           idx++;
        }
    return sum;
    }
};