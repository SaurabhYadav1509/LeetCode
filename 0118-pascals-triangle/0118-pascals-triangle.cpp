class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        vector<vector<int>> ans;

        for (int i=0; i<n; i++){
        vector<int>temp(i+1, 1);
        // filling each row 
            for (int j=1; j<i; j++){
                temp[j] = ans[i-1][j] + ans[i-1][j-1];
            }
            ans.push_back(temp);
        }
        return ans;
    }
};