class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n = arr.size();
        int count = 0;
        int maxi =0;

        for (int i=0; i<n; i++){
    /// count consecutive only
        if (arr[i] % 2 != 0){
        count++;
        maxi = max(maxi, count);
        }
    // reset to 0
        else 
        count = 0;
        }
        return maxi>=3 ? true: false;
    }
};