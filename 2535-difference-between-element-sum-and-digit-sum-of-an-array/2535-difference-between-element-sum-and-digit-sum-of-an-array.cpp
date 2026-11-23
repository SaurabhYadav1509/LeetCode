class Solution {
public:

int d_sum(int n){
    int num = n;
    int sum = 0;
    while(num){
         sum += num % 10;
         num = num / 10;
    }
    return sum;
}

    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int sum1 = 0;
        for (int i=0; i<n; i++){
            sum1 += nums[i];
        }

        int sum2 = 0;
        for (int i=0; i<n; i++){
            sum2 += d_sum(nums[i]);
        }

        return abs(sum1-sum2);
    }
};