// 2017. Grid Game

class Solution {
    public:
        using ll = long long;
        
        long long gridGame(vector<vector<int>>& grid) {
            ll n = grid[0].size();
            vector<ll> r1(n, 0);
            vector<ll> r2(n, 0);
    
            r1[0] = grid[0][0];
            r2[0] = grid[1][0];
            for (ll i = 1; i < n; i++) {
                r1[i] = r1[i - 1] + grid[0][i];
                r2[i] = r2[i - 1] + grid[1][i];
            }
            ll total = r1[n - 1] + r2[n - 1];
    
            vector<ll> prefixSum(n, 0);
            prefixSum[0] = r1[0] + r2[n - 1];
            for (ll i = 1; i < n; i++) {
                prefixSum[i] = r1[i] + r2[n - 1] - r2[i - 1];
            }
    
            vector<ll> maxLen(n, 0);
            maxLen[0] = total - prefixSum[0];
            for (ll i = 1; i < n; i++) {
                maxLen[i] = max(total - prefixSum[i] - r2[i - 1], r2[i - 1]);
            }
    
            ll ans = maxLen[0];
            for (ll i = 1; i < n; i++) {
                if (maxLen[i] < ans) {
                    ans = maxLen[i];
                }
            }
    
            return ans;
        }
    };