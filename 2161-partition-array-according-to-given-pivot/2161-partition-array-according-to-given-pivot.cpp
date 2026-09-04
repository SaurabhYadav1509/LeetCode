class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>small, equal, big;
        
        for (auto x : nums){
            if (x < pivot) small.push_back(x);
            else if (x == pivot) equal.push_back(x);
            else big.push_back(x);
        }

        small.insert(small.end(), equal.begin(), equal.end());
        small.insert(small.end(), big.begin(), big.end());
        return small;
    }
};