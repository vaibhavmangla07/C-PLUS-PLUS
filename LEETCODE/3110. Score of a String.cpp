// 3110. Score of a String

class Solution {
public:
    int scoreOfString(string s) {
        int ans = 0;
        for(int i = 0; i < s.size() - 1; i++) {
            if (s[i] > s[i + 1]) {
                ans += s[i] - s[i + 1];
            } 
            else {
                ans += s[i + 1] - s[i];
            }
        }
        return ans;
    }
};