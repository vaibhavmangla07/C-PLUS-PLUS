// 3446. Sort Matrix by Diagonals

class Solution {
    public:
        vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
            int n = grid.size();
            vector<vector<int>> sortedDiagonals;
    
            for (int j = n - 1; j >= 1; j--) {
                vector<int> diagonal;
                int r = 0, c = j;
                while (r < n && c < n) {
                    diagonal.push_back(grid[r][c]);
                    r++, c++;
                }
                sort(diagonal.begin(), diagonal.end());
                sortedDiagonals.push_back(diagonal);
            }
    
            for (int i = 0; i < n; i++) {
                vector<int> diagonal;
                int r = i, c = 0;
                while (r < n && c < n) {
                    diagonal.push_back(grid[r][c]);
                    r++, c++;
                }
                sort(diagonal.rbegin(), diagonal.rend());
                sortedDiagonals.push_back(diagonal);
            }
    
            int idx = 0;
            for (int j = n - 1; j >= 1; j--) {
                int r = 0, c = j, k = 0;
                while (k < sortedDiagonals[idx].size() && r < n && c < n) {
                    grid[r][c] = sortedDiagonals[idx][k++];
                    r++, c++;
                }
                idx++;
            }
    
            for (int i = 0; i < n; i++) {
                int r = i, c = 0, k = 0;
                while (k < sortedDiagonals[idx].size() && r < n && c < n) {
                    grid[r][c] = sortedDiagonals[idx][k++];
                    r++, c++;
                }
                idx++;
            }
    
            return grid;
        }
    };
    