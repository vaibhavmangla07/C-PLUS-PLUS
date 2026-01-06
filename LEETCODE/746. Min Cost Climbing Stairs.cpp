// 746. Min Cost Climbing Stairs

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int a = 0, b = 0; 

        for (int i = cost.size() - 1; i >= 0; --i) {
            int c = cost[i] + min(a, b);
            b = a;
            a = c;
        }

        return min(a, b);
    }
};
