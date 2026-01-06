// 59. Spiral Matrix II

class Solution {
    public:
        vector<vector<int>> generateMatrix(int n) {
            vector<vector<int>> ans(n, vector<int>(n));
            int count = 1;
            
            int rowStart = 0;
            int rowEnd = n - 1;
            int colStart = 0;
            int colEnd = n - 1;
            
            while (rowStart <= rowEnd && colStart <= colEnd) {
    
                // rowStart
                for (int col = colStart; col <= colEnd; col++) {
                    ans[rowStart][col] = count++;
                }
                rowStart++;
                
                // colEnd
                for (int row = rowStart; row <= rowEnd; row++) {
                    ans[row][colEnd] = count++;
                }
                colEnd--;
                
                // rowEnd
                if (rowStart <= rowEnd) {
                    for (int col = colEnd; col >= colStart; col--) {
                        ans[rowEnd][col] = count++;
                    }
                    rowEnd--;
                }
                
                // colStart
                if (colStart <= colEnd) {
                    for (int row = rowEnd; row >= rowStart; row--) {
                        ans[row][colStart] = count++;
                    }
                    colStart++;
                }
            }
            
            return ans;
        }
    };
    