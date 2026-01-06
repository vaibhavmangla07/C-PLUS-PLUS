// 1833. Maximum Ice Cream Bars

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int ans = 0;

        for (int cost : costs) {
            if (coins < cost) {
                break;
            }
            coins -= cost;
            ans++;
        }
        return ans;
    }
};