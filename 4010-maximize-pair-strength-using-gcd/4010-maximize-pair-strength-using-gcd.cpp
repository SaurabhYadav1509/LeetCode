class Solution {
public:
long long gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a%b);
}
    long long maxPairStrength(vector<int>& nums) {
        int n = nums.size();
        long long res=0;
        for (int i=0;i<n;i++){
            for(int j = i+1 ; j<n ; j++){
                long long g = gcd(nums[i],nums[j]);
                res = max(res, 1LL*nums[i]*nums[j] / (g*g) );
            }
        }
        return res;
    }
};