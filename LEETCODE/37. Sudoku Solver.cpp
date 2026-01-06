// 37. Sudoku Solver

class Solution {
    public:
        void printSudoku(vector<vector<int>>& sudoku) {
            for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                    cout << sudoku[i][j] << " ";
                }
                cout << endl;
            }
        }
    
        bool isSafe(vector<vector<int>>& sudoku, int row, int col, int n) {
            for (int i = 0; i < 9; i++) {
                if (sudoku[i][col] == n) {
                    return false;
                }
            }
    
            for (int i = 0; i < 9; i++) {
                if (sudoku[row][i] == n) {
                    return false;
                }
            }
    
            int startRow = (row / 3) * 3;
            int startCol = (col / 3) * 3;
            for (int i = startRow; i <= startRow + 2; i++) {
                for (int j = startCol; j <= startCol + 2; j++) {
                    if (sudoku[i][j] == n) {
                        return false;
                    }
                }
            }
    
            return true;
        }
    
        bool sudokuSolver(vector<vector<int>>& sudoku, int row, int col) {
            if (row == 9) {
                printSudoku(sudoku);
                return true;
            }
    
            int nxtRow = row;
            int nxtCol = col + 1;
            if (col + 1 == 9) {
                nxtRow = row + 1;
                nxtCol = 0;
            }
    
            if (sudoku[row][col] != 0) {
                return sudokuSolver(sudoku, nxtRow, nxtCol);
            }
    
            for (int i = 1; i <= 9; i++) {
                if (isSafe(sudoku, row, col, i)) {
                    sudoku[row][col] = i;
                    if (sudokuSolver(sudoku, nxtRow, nxtCol)) {
                        return true;
                    }
                    sudoku[row][col] = 0;
                }
            }
    
            return false;
        }
    
        void solveSudoku(vector<vector<char>>& board) {
            vector<vector<int>> sudoku(9, vector<int>(9));
    
            for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                    sudoku[i][j] = (board[i][j] == '.') ? 0 : (board[i][j] - '0');
                }
            }
    
            sudokuSolver(sudoku, 0, 0);
    
            for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                    board[i][j] = (sudoku[i][j] == 0) ? '.' : (sudoku[i][j] + '0');
                }
            }
        }
    };
    