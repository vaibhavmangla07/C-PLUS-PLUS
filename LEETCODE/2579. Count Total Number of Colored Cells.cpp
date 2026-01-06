// 2579. Count Total Number of Colored Cells

class Solution {
    public:
        long long coloredCells(int n) {
            if(n == 1) {
                return n;
            }
            long long ans = 1;  
            for (int i = 2; i <= n; i++) {
                ans += 4 * (i-1); 
            }
            return ans;
        }
    };