// 1329. Sort the Matrix Diagonally

class Solution {
    public:
        vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
            int m = mat.size(), n = mat[0].size();
            vector<vector<int>> matrix(m + n);
    
            for(int i = 0; i < m; i++) {
                for(int j = 0; j < n; j++) {
                    matrix[m - i + j].push_back(mat[i][j]);
                }
            }
            for(auto& m : matrix) {
                sort(m.rbegin(), m.rend());
            }
            for(int i = 0; i < m; i++) {
                for(int j = 0; j < n; j++) {
                    mat[i][j] = matrix[m - i + j].back();
                    matrix[m - i + j].pop_back();
                }
            }
            return mat;
        }
    };
    