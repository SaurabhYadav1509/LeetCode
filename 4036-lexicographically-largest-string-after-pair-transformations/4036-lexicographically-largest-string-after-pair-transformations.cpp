class Solution {
public:
    vector<string> largestString(vector<int>& nums) {
        vector<string> ans;

        for (int x : nums) {
            
            string s;

            int cntZ = x / (1 << 25);
            s.append(cntZ, 'z');

            x %= (1 << 25);

            for (int i = 24; i >= 0; i--) {
                if (x & (1 << i)) {
                    s += char('a' + i);
                }
            }

            ans.push_back(s);
        }

        return ans; 
    }
};