// Spiral Matrix

#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;

    if (matrix.empty() || matrix[0].empty()) {
        return result;
    }
        
    int n = matrix.size(); 
    int m = matrix[0].size(); 
        
    int row_start = 0;
    int row_end = n - 1;
    int column_start = 0;
    int column_end = m - 1;
        
    while (row_start <= row_end && column_start <= column_end) {
            
        //row_start
        for (int col = column_start; col <= column_end; col++) {
            result.push_back(matrix[row_start][col]);
        }
        row_start++;
        
        //column_end
        for (int row = row_start; row <= row_end; row++) {
            result.push_back(matrix[row][column_end]);
        }
        column_end--;
            
        //row_end
        if (row_start <= row_end) {
            for(int col = column_end; col >= column_start; col--){
                    result.push_back(matrix[row_end][col]);
                }
            row_end--;
        }
            
        //column_start
        if (column_start <= column_end) {
            for (int row = row_end; row >= row_start; row--) {
                result.push_back(matrix[row][column_start]);
            }
            column_start++;
        }
    }
    return result;
}

int main() {
    vector<vector<int>> matrix
    {{1, 2, 3}, 
    {4, 5, 6}, 
    {7, 8, 9}};

    vector<int> result = spiralOrder(matrix);
    for (auto val : result) {
        cout << val << " ";
    }
    return 0;
}
