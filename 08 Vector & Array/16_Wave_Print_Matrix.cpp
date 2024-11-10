// Wave Print a Matrix

#include <bits/stdc++.h>
using namespace std;

void Wave_Print(vector<vector<int>> matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    for (int i = 0; i < n; i++) {
        if((i & 1) == 0) {
            for (int j = 0; j < m; j++) {
                cout << matrix[j][i] << " ";
            }
        }
        else {
            for (int j = m - 1; j >= 0; j--) {
                cout << matrix[j][i] << " ";
            }
        }
    }
}

int main() {
    vector<vector<int>> matrix 
    {{1, 2, 3, 4}, 
    {5, 6, 7, 8}, 
    {9, 10, 11, 12},
    {13, 14, 15, 16}};

    Wave_Print(matrix);

    return 0;
}