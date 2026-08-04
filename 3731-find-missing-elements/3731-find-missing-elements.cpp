class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;

        unordered_set<int>st;
        for (int i=0; i<n ; i++) st.insert(nums[i]);

        sort(nums.begin(),nums.end());
        int mini=nums[0];
        int maxi=nums[n-1];

        for (int i=mini;i<maxi;i++){
            if(st.find(i) == st.end())
            ans.push_back(i);
        }
        return ans;
    }
};