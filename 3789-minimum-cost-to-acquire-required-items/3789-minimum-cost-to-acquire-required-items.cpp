
class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth,
                          int need1, int need2) {

        long long ans = 0;

        // Separate purchase is cheaper
        if (1LL * cost1 + cost2 <= costBoth) {
            ans = 1LL * need1 * cost1 +
                  1LL * need2 * cost2;
        }
        else {
            // Buy combined packages for common requirements
            int both = min(need1, need2);

            ans += 1LL * both * costBoth;

            need1 -= both;
            need2 -= both;

            // Remaining type 1
            if (need1 > 0) {
                ans += 1LL * min(cost1, costBoth) * need1;
            }

            // Remaining type 2
            if (need2 > 0) {
                ans += 1LL * min(cost2, costBoth) * need2;
            }
        }

        return ans;
    }
};
