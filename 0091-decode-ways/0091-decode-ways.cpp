class Solution {
public:
    int n;
    int dp[101];

    int solve(string &s, int i) {

        if (i == n)
            return 1;

        if (s[i] == '0')
            return 0;

        if (dp[i] != -1)
            return dp[i];

        int one = solve(s, i + 1);

        int two = 0;

        if (i + 1 < n) {
            int num = (s[i] - '0') * 10 + (s[i + 1] - '0');

            if (num <= 26) {
                two = solve(s, i+2);
            }
        }

        return dp[i] = one + two;
    }

    int numDecodings(string s) {
        n = s.size();

        memset(dp, -1, sizeof(dp));

        return solve(s, 0);
    }
};