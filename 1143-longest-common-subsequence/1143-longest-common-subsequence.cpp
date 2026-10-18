class Solution {
public:
int n;
int m;
int arr[1001][1001];

int solve(string &s1, string &s2, int i, int j){
    if (i >= n || j >= m)
    return 0;
    
    if (arr[i][j] != -1)
    return arr[i][j];

//  if both char of strings are equal use them
    if (s1[i] == s2[j])
    return arr[i][j] = 1 + solve(s1, s2, i+1, j+1);

// not equal 2 options -> 1. increase 1st string or 2. increase 2nd string index
    else 
    return arr[i][j] = max(solve(s1, s2, i+1, j), solve(s1, s2, i, j+1));
}

    int longestCommonSubsequence(string s1, string s2) {
        n = s1.size();
        m = s2.size();
        memset(arr, -1, sizeof(arr));

        return solve(s1, s2, 0, 0);
    }
};