class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int start = 0;
        int end = 0;
        int ans = 0;
        
        unordered_map<int,int>count;

        while (end < n){
            count[nums[end]]++;

            while (count[nums[end]] > k){
                count[nums[start]]--;
                start++;
            }
            
            ans = max(ans,(end - start + 1));
            end++;

        }
        return ans;
    }
};