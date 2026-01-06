// 1252. Cells with Odd Values in a Matrix

class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> mat(m, vector<int>(n, 0));

        for (int i = 0; i < indices.size(); i++) {
            for (int j = 0; j < m; j++) {
                mat[j][indices[i][1]]++;
            }
            for (int j = 0; j < n; j++) {
                mat[indices[i][0]][j]++;
            }
        }

        int ans = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] % 2 != 0) {
                    ans++;
                }
            }
        }
        return ans;
    }
};