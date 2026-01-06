// Day 77 - N-Queen Problem

// User function Template for C++

class Solution {
  public:
    bool isSafe(vector<string>& board, int row, int col, int n) {
        // Horizontal
        for(int j = 0; j < n; ++j) {
            if(board[j][col] == 'Q') {
                return false;
            }
        }
        
        // Vertical
        for(int i = 0; i < n; ++i) {
            if(board[i][col] == 'Q') {
                return false;
            }
        }
        
        // Diagonal Left
        for(int i = row, j = col; i >= 0 && j >= 0; --i, --j) {
            if(board[i][j] == 'Q') {
                return false;
            }
        }
        
        // Diagonal Right
        for(int i = row, j = col; i >= 0 && j < n; --i, ++j) {
            if(board[i][j] == 'Q') {
                return false;
            }
        }
        return true;
    }
    
    vector<vector<int>> ans;
    void queens(vector<string>& board, int row, int n) {
        if(row == n) {
            vector<int> res(n);
            for(int j = 0; j < n; ++j) {
                for(int i = 0; i < n; ++i) {
                    if(board[i][j] == 'Q') {
                        res[j] = i + 1;
                        break;
                    }
                }
            }
            ans.push_back(res);
            return;
        }
        
        for(int j = 0; j < n; ++j) {
            if(isSafe(board, row, j, n)) {
                board[row][j] = 'Q';
                queens(board, row + 1, n);
                board[row][j] = '.';
            }
        }
    }
    
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<string> board(n, string(n, '.'));
        queens(board, 0, n);
        return ans;
    }
};