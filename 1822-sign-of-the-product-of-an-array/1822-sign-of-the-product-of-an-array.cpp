class Solution {
public:
    int arraySign(vector<int>& nums) {
        int prod = 1;
        for (auto x : nums){
            if (x == 0)
            return 0;
            else if (x > 0)
            prod *= 1;
            else prod *= -1;
        }
        return prod;
    }
};