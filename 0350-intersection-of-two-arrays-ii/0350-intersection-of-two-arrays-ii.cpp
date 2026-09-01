class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        unordered_map<int,int>mp;
        vector<int>ans;

        if (n > m){
            for (auto x : nums1){
                mp[x]++;
            }
            for (auto y : nums2){
                if (mp[y] > 0) ans.push_back(y);
                mp[y]--;
            }
        }

        else{
            for (auto x : nums2){
                mp[x]++;
            }
            for (auto y : nums1){
                if (mp[y] > 0) ans.push_back(y);
                mp[y]--;
            }
        }
        return ans;
    }
};