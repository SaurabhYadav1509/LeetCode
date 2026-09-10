class Solution {
public:
    int minimumRecolors(string s, int k) {

        int n = s.size();
        int count = 0;
        int res = INT_MAX;

        for (int i = 0; i < n; i++) {
            // Add current character
            count += (s[i] == 'W');

            if (i >= k - 1) {
                // Minimum white blocks
                res = min(res, count);
                // Remove leftmost character
                count -= (s[i-k+1] == 'W');
            }
        }
        return res;
    }
};