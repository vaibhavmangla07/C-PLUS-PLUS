// 198. House Robber

class Solution {
public:
    int rob(vector<int>& nums) {
        int a = 0, b = 0;

        for (int n : nums) {
            int c = max(a, b + n);
            b = a;
            a = c;
        }
        return a;
    }
};