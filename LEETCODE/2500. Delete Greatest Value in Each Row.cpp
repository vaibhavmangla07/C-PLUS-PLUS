// 2500. Delete Greatest Value in Each Row

class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ans = 0;

        for (auto& g : grid) {
            sort(g.begin(), g.end());
        }
        for(int j = 0; j < grid[0].size(); j++) {
            int curr = INT_MIN;

            for(int i = 0; i < grid.size(); i++) {
                curr = max(curr, grid[i][j]);
            }
            ans += curr;
        }
        return ans;
    }
};