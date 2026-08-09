class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // unordered map => <element,freq>
        unordered_map<int,int>mp;
        for (auto x : nums) mp[x]++;

        typedef pair<int,int> pi;      // data type simple lagega
        priority_queue<pi,vector<pi>,greater<pi>>pq;

        for (auto x : mp){
            int element = x.first;
            int freq = x.second;
            pq.push({freq,element});
            if (pq.size() > k) pq.pop();
        }
        
        // push the elements of pq into ans
        vector<int>ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};