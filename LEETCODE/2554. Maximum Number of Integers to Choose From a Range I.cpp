// 2554. Maximum Number of Integers to Choose From a Range I

class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        set<int> s(banned.begin(), banned.end());
        int count = 0;
        int sum = 0;

        for(int i = 1; i <= n; i++) {
            if((sum + i) <= maxSum && s.find(i) == s.end()) {
                count++;
                sum += i;
            }
        }
        return count;
    }
};