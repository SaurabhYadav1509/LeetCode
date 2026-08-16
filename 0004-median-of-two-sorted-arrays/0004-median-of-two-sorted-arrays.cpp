class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        
        vector<int>ans(n+m);
        for (int i=0; i<n ;i++){
            ans[i] = nums1[i];
        }
        for (int i=0;i<m;i++){
            ans[n+i]= nums2[i];
        }

        sort(ans.begin(),ans.end());

        int s = n+m;
        if (s % 2 == 0) return (ans[s / 2 - 1] + ans[s / 2]) / 2.0;
        else return ans[s / 2];
    }
};