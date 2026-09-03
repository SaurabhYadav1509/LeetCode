class Solution {
public:
    typedef pair<int, string> pi;

    struct compare {
        bool operator()(pi a, pi b) {
            if (a.first == b.first)
                return a.second < b.second;
            return a.first > b.first;
        }
    };

    vector<string> topKFrequent(vector<string>& words, int k) {

        unordered_map<string, int> mp;

        // Count frequency
        for (auto x : words) {
            mp[x]++;
        }

        priority_queue<pi, vector<pi>, compare> pq;
        for (auto x : mp) {
            pq.push({x.second, x.first});

            if (pq.size() > k)
                pq.pop();
        }

        vector<string> ans;

        while (!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};