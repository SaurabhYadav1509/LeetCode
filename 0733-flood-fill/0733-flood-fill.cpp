class Solution {
public:

    void dfs(vector<vector<int>>& image, int r, int c,
             int oldColor, int newColor) {

        int n = image.size();
        int m = image[0].size();

        // Out of bounds
        if(r < 0 || r >= n || c < 0 || c >= m)
            return;

        // Different color
        if(image[r][c] != oldColor)
            return;

        // Change color
        image[r][c] = newColor;
        // Up
        dfs(image, r-1, c, oldColor, newColor);
        // Down
        dfs(image, r+1, c, oldColor, newColor);
        // Left
        dfs(image, r, c-1, oldColor, newColor);
        // Right
        dfs(image, r, c + 1, oldColor, newColor);
    }

vector<vector<int>> floodFill(vector<vector<int>>& image,
                                   int sr, int sc, int color) {

        int oldColor = image[sr][sc];

        if(oldColor == color)
            return image;

        dfs(image, sr, sc, oldColor, color);

        return image;
    }
};