class Solution {
public:
int arr[101][101];

int solve(int i, int j, int m, int n){
    if (i == m-1 && j == n-1)
    return 1;

    if (i < 0 || i >= m || j < 0 || j >= n)
    return 0;
    
    if(arr[i][j] != -1)
    return arr[i][j];

    int right = solve(i, j+1, m, n);
    int down = solve(i+1, j, m, n);
    
    arr[i][j] = right + down;
    return arr[i][j];
}
    int uniquePaths(int m, int n) {
        memset(arr, -1, sizeof(arr));
        return solve(0, 0, m, n);
    }
};