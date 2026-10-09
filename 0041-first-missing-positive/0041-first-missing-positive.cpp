class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>ans;

    sort(nums.begin(), nums.end());
    
        for (int i=0; i<n; i++){
            if (nums[i] > 0){
                ans.push_back(nums[i]);
            }
        }
        
        int missing = 1;
        for (int i=0; i<ans.size(); i++){
          if (ans[i] == missing) 
          missing++;
        }
    
    return missing;
    }
};