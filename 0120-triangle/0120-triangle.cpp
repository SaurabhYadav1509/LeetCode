class Solution {
public:
    int n;
    int arr[201][201];
    bool visited[201][201];

    int solve(vector<vector<int>>& triangle, int i, int j) {
        if (i == n - 1)
            return triangle[i][j];

        if (visited[i][j])
            return arr[i][j];

        int down = solve(triangle, i + 1, j);
        int diagonal = solve(triangle, i + 1, j + 1);

        visited[i][j] = true;

        return arr[i][j] =
            triangle[i][j] + min(down, diagonal);
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        n = triangle.size();
        memset(visited, false, sizeof(visited));
        return solve(triangle, 0, 0);
    }
};