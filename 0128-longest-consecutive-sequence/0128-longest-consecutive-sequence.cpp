class Solution {
public:
// not need to count duplicates element, ex:3
    int longestConsecutive(vector<int>& nums) {
        
        priority_queue<int, vector<int>, greater<int>> pq;
        unordered_set<int> st;

        // Remove duplicates 
        for (auto x : nums) {
            st.insert(x);
        }

        for (auto x : st) {
            pq.push(x);
        }

        vector<int> ans;

        //elements in sorted order
        while (!pq.empty()) {
            int f = pq.top();
            pq.pop();

            ans.push_back(f);
        }

        int n = ans.size();

        if (n == 0)
            return 0;

        int count = 1;
        int maxi = 1;

        for (int i = 1; i < n; i++) {

            if (ans[i - 1] + 1 == ans[i]) {
                count++;
                maxi = max(maxi, count);
            }
            else {
                count = 1;
            }
        }

        return maxi;
    }
};