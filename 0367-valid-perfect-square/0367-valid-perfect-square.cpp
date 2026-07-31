class Solution {
public:
    bool isPerfectSquare(int num) {

        long long start = 1;
        long long end = num;
        long long mid;
        while(start <= end){

            mid = start + (end - start) / 2;
            long long sq = mid * mid;
            
            if (sq == num) return true;
            else if (sq < num) start = mid + 1;
            else end = mid - 1;

        }
        return false;
    }
};