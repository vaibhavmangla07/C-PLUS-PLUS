// 1411. Number of Ways to Paint N × 3 Grid

class Solution {
    public:
        using ll = long long;
        const int MOD = 1e9 + 7;
    
        int numOfWays(int n) {
            ll A = 6, B = 6; 
    
            for (int i = 2; i <= n; i++) {
                ll newA = (2 * A + 2 * B) % MOD;
                ll newB = (2 * A + 3 * B) % MOD;
                A = newA;
                B = newB;
            }
            return (A + B) % MOD;
        }
    };