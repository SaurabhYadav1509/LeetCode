class Solution {
public:
    bool canAliceWin(int n) {
        if (n < 10 ) return false;

        // 29
        // alice => 29 - 10 = 19 
        // bob => 19 -9 = 10 
        // alice => 10 - 8 = 2 
        // bob => lose

        int count = 1;
        n = n - 10;
        int i = 9;
        while (true){
            if (n-i >= 0) {
                n = n-i;
                count++;
                i--;
            }
            else break;
        }
        return count % 2 == 0 ? false : true;
    }
};