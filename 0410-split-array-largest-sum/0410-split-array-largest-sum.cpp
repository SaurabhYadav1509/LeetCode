class Solution {
public:
bool isValid(vector<int>& nums, int k, int target, int n){
    int stud=1,sumi=0;

    for (int i=0; i<n; i++){
    // one element itself is more than target        
    if (nums[i] > target) return false; 
    if (sumi+nums[i] <= target) sumi += nums[i];
    else {
        stud++;
        sumi = nums[i];
    }        
}
    return stud > k ? false : true;
}
    int splitArray(vector<int>& nums, int k) {

        int n = nums.size();
        if (k > n) return false;
        int sum = 0;
        for (int i=0;i<n;i++) sum += nums[i];

        int start = *max_element(nums.begin(), nums.end());;
        int end = sum;
        int ans = -1;

        // apply binary search for the range
        while(start <= end ){
            int mid = start + (end - start) /2;
        // find minimum if u got a min one
            if (isValid(nums,k,mid,n)){
                ans = mid;
                end = mid-1;
            } 
        // invalid case => range is not get
            else start = mid+1;
        }
        return ans;
    }
};