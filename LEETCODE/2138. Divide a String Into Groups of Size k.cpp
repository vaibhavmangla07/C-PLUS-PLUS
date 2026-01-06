// 2138. Divide a String Into Groups of Size k

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        string group = "";

        for (char ch : s) {
            group += ch;

            if (group.size() == k) {
                ans.push_back(group);
                group = "";
            }
        }
        if (!group.empty()) {
            while (group.size() < k) {
                group += fill;
            }
            ans.push_back(group);
        }
        return ans;
    }
};
