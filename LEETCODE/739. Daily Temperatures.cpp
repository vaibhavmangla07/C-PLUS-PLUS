// 739. Daily Temperatures

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        vector<int> ans(temps.size(), 0);
        stack<int> s;

        for (int i = temps.size() - 1; i >= 0; i--) {
            while (!s.empty() && temps[i] >= temps[s.top()]) {
                s.pop();
            }
            if (!s.empty()) {
                ans[i] = s.top() - i;
            }
            s.push(i);
        }
        return ans;
    }
};

