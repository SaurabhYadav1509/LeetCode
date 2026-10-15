class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();

        int sum = 0;

        for (int i=0; i<n; i++)
        sum += 1;

        for (int i=0; i<n-1; i++){
            unordered_set<int>st;
            st.insert(nums[i]);
            
            for (int j=i+1; j<n; j++){
                st.insert(nums[j]);
                sum += st.size() * st.size();
            }
        }
        return sum;
    }
};