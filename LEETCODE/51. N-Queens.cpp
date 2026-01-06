// 51. N-Queens

class Solution {
    public:
        bool isSafe(vector<string>& board, int row, int col, int n) {
            // Horizontal
            for (int j = 0; j < n; j++) {
                if (board[j][col] == 'Q') {
                    return false;
                }
            }
    
            // Vertical
            for (int i = 0; i < n; i++) {
                if (board[i][col] == 'Q') {
                    return false;
                }
            }
    
            // Diagonal Left
            for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
                if (board[i][j] == 'Q') {
                    return false;
                }
            }
    
            // Diagonal Right
            for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
                if (board[i][j] == 'Q') {
                    return false;
                }
            }
            return true;
        }
        vector<vector<string>> res;
        void nQueens(vector<string>& board, int row, int n) {
            if (row == n) {
                res.push_back(board);
                return;
            }
    
            for (int j = 0; j < n; j++) {
                if (isSafe(board, row, j, n)) {
                    board[row][j] = 'Q';
                    nQueens(board, row + 1, n);
                    board[row][j] = '.';
                }
            }
        }
    
        vector<vector<string>> solveNQueens(int n) {
            vector<string> board(n, string(n, '.'));
            nQueens(board, 0, n);
            return res;
        }
    };