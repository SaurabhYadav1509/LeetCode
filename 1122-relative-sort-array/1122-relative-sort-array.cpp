class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n=arr1.size();
    unordered_map<int,int>mp;
    for (auto x : arr1) mp[x]++;
    vector<int>ans;

    for (auto x : arr2){
        while(mp[x] > 0){
            ans.push_back(x);
            mp[x]--;
        }
    }

    // remaining elements
    vector<int>rem;
    for (auto x : mp){
     while(x.second > 0){
        rem.push_back(x.first);
        x.second--;
     }
    }

    // we have return the sorted remaining elements
    sort(rem.begin(),rem.end());
    
    // pushing the remaining elements
    for (auto x : rem) ans.push_back(x);
    return ans;
    }
};