// 2373. Largest Local Values in a Matrix

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size(); 
        vector<vector<int>> maxLocal(n - 2, vector<int>(n - 2, 0)); 

        for (int i = 0; i < n - 2; i++) {
            for (int j = 0; j < n - 2; j++) {
                int Max = 0;

                for (int x = i; x < i + 3; x++) {
                    for (int y = j; y < j + 3; y++) {
                        Max = max(Max, grid[x][y]);
                    }
                }
                maxLocal[i][j] = Max;
            }
        }
        return maxLocal;
    }
};