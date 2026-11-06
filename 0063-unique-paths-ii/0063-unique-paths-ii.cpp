class Solution {
public:
int row, col;
int arr[101][101];

int solve(vector<vector<int>>& obstacleGrid, int i, int j){
        // Out of bounds
        if (i >= row || j >= col)
            return 0;

        // Obstacle
        if (obstacleGrid[i][j] == 1)
            return 0;

        // Destination
        if (i == row-1 && j == col-1)
            return 1;
    
    if (arr[i][j] != -1)
    return arr[i][j];

    int right = solve(obstacleGrid, i, j+1); 
    int down = solve(obstacleGrid, i+1, j);

    return arr[i][j] = right + down;
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        row = obstacleGrid.size();
        col = obstacleGrid[0].size();
        memset(arr, -1, sizeof(arr));
        return solve(obstacleGrid, 0, 0); 
    }
};