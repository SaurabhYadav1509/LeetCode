
class Solution {
public:
    int ans = 0;
    int N;

    bool isSafe(vector<string>& board, int row, int col) {

        // Check vertically upward
        for (int i = row - 1; i >= 0; i--) {
            if (board[i][col] == 'Q')
                return false;
        }

        // Check left diagonal
        for (int i = row - 1, j = col - 1;
             i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q')
                return false;
        }

        // Check right diagonal
        for (int i = row - 1, j = col + 1;
             i >= 0 && j < N; i--, j++) {
            if (board[i][j] == 'Q')
                return false;
        }

        return true;
    }

    void solve(vector<string>& board, int row) {

        // All N queens have been placed
        if (row == N) {
            ans++;
            return;
        }

        for (int col = 0; col < N; col++) {

            if (isSafe(board, row, col)) {

                board[row][col] = 'Q';

                solve(board, row + 1);

                // Backtrack
                board[row][col] = '.';
            }
        }
    }

    int totalNQueens(int n) {
        N = n;
        ans = 0;

        vector<string> board(n, string(n, '.'));

        solve(board, 0);

        return ans;
    }
};
