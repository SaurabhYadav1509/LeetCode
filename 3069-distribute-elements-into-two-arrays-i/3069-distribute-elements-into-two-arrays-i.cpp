class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        int count = n;
        vector<int>arr1;
        vector<int>arr2;

        arr1.push_back(nums[0]);
        count--;
        arr2.push_back(nums[1]);
        count--;

        int idx = 2;
        while(count > 0){
            if (arr1.back() > arr2.back()){
                arr1.push_back(nums[idx++]);
                count--;
            }
            else {
                arr2.push_back(nums[idx++]);
                count--;
            }
        }
        
    arr1.insert(arr1.end(), arr2.begin(), arr2.end());
    return arr1;
    }
};