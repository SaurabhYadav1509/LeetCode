class Solution {
public:
    bool canAliceWin(int n) {
        return 861475883449856 & (1ULL << (n-1));
    }
};