// 3174. Clear Digits

class Solution {
public:
    string clearDigits(string input) {
        string ans;

        for (char ch : input) {
            if (isdigit(ch) && !ans.empty()) {
                ans.pop_back();
            } 
            else {
                ans += ch;
            }
        }
        return ans;
    }
};
