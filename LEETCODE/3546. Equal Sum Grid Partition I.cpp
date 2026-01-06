// 3546. Equal Sum Grid Partition I

class Solution {
    public:
        bool canPartitionGrid(vector<vector<int>>& grid) {
            int m = grid.size();
            int n = grid[0].size();
    
            long long total = 0;
            for(auto& gg : grid) {
                for(int g : gg) {
                    total += g;
                }
            }
    
            long long sum = 0;
            for(auto& gg : grid) {
                for(int g : gg) {
                    sum += g;
                }
                if(sum * 2 == total) {
                    return true;
                }
            }
    
            vector<long long> colSum(n, 0);
            for(int i = 0; i < m; i++) {
                for(int j = 0; j < n; j++) {
                    colSum[j] += grid[i][j];
                }
            }
    
            long long leftSum = 0;
            for(int j = 0; j < n - 1; j++) {
                leftSum += colSum[j];
                if(leftSum * 2 == total) {
                    return true;
                }
            }
            return false;
        }
    };