class Solution {
public:
    typedef pair<int,int> pi;

    int longestConsecutive(vector<int>& nums) {
        
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        unordered_map<int,int> mp;

        // Remove duplicates using map
        for (auto x : nums) {
            mp[x]++;
        }

        // Put unique elements into heap
        for (auto x : mp) {
            int ele = x.first;
            int freq = x.second;

            pq.push({ele, freq});
        }

        vector<int> ans;

        //elements in sorted order
        while (!pq.empty()) {
            int f = pq.top().first;
            pq.pop();

            ans.push_back(f);
        }

        int n = ans.size();
        if (n == 0)
            return 0;

        int c = 1;
        int maxi = 1;

        for (int i = 1; i < n; i++) {
            
            if (ans[i - 1] + 1 == ans[i]) {
                c++;
                maxi = max(maxi, c);
            }
            else {
                c = 1;
            }
        }
        return maxi;
    }
};