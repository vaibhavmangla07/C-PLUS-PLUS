// 1672. Richest Customer Wealth

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = INT_MIN;

        for (int i = 0; i < accounts.size(); i++) {
            int current = 0;
            for (int j = 0; j < accounts[i].size(); j++) {
                current += accounts[i][j];  
            }
            ans = max(ans, current);       
        }
        return ans;
    }
};