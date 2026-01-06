// Valid Sudoku

#include<bits/stdc++.h>
using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
    int n = board.size();
    int m = board[0].size();

    int row[9][9] = {0};
    int col[9][9] = {0};
    int grid[9][9] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(board[i][j] != '.') {
                int num = board[i][j] - '0';

                int k = i / 3 * 3 + j / 3;

                if (row[i][num - 1]++ || col[j][num - 1]++ || grid[i][num - 1]++) {
                    return false;
                }               
            }
        }
    }
    return true;
}

int main () {
    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    
    bool ans = isValidSudoku(board);
    if (ans) {
        cout << "true" << endl;
    } 
    else {
        cout << "false" << endl;
    }
    return 0;
}
