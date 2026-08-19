class Solution {
public:
    typedef pair<int,int> pi;

    struct cmp {
        bool operator()(pi a, pi b) {
            if (a.first != b.first)
                return a.first > b.first;   // frequency ascending
            return a.second < b.second;      // element descending
        }
    };

    vector<int> frequencySort(vector<int>& nums) {

        priority_queue<pi, vector<pi>, cmp> pq;
        unordered_map<int,int> mp;

        for (auto x : nums)
            mp[x]++;

        for (auto x : mp) {
            int ele = x.first;
            int freq = x.second;

            pq.push({freq, ele});
        }

        vector<int> ans;

        while (!pq.empty()) {
            int freq = pq.top().first;
            int ele = pq.top().second;
            pq.pop();

            while (freq--) {
                ans.push_back(ele);
            }
        }
        return ans;
    }
};