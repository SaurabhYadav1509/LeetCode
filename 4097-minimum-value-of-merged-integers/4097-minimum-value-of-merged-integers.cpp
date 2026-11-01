class Solution {
public:
    long long solve(int a, int b) {
        string s1 = to_string(a);
        string s2 = to_string(b);
        return stoll(s1 + s2);
    }

    long long minMergedInteger(vector<int>& nums) {
        int n = nums.size();
        long long mini = LLONG_MAX;
        
        for (int i = 0; i < n; i += 2) {
            mini = min(solve(nums[i], nums[i + 1]), mini);
        }
        
        return mini; 
    }
};