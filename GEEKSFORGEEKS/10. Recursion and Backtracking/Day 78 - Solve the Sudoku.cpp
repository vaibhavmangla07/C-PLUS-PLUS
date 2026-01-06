// Day 78 - Solve the Sudoku

class Solution {
  public:
    bool isValid(vector<vector<int>>& mat, int row, int col, int num) {
        for(int i = 0; i < 9; ++i) {
            if(mat[i][col] == num || mat[row][i] == num) {
                return false;
            }
        }
        
        int boxRow = (row / 3) * 3;
        int boxCol = (col / 3) * 3;
        
        for(int i = boxRow; i < boxRow + 3; ++i) {
            for(int j = boxCol; j < boxCol + 3; ++j) {
                if(mat[i][j] == num) {
                    return false;
                }
            }
        }
        return true;
    }
    
    bool solve(vector<vector<int>>& mat, int row, int col) {
        if(row == 9) {
            return true;
        }
        
        int nextRow = row + (col + 1) / 9;
        int nextCol = (col + 1) % 9;
        
        if(mat[row][col] != 0) {
            return solve(mat, nextRow, nextCol);
        }
        
        for(int num = 1; num <= 9; ++num) {
            if(isValid(mat, row, col, num)) {
                mat[row][col] = num;
                if(solve(mat, nextRow, nextCol)) {
                    return true;
                }
                mat[row][col] = 0;
            }
        }
        return false;
    }
    
    // Function to find a solved Sudoku.
    void solveSudoku(vector<vector<int>> &mat) {
        // code here
        solve(mat, 0, 0);
    }
};