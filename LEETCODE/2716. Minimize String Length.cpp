// 2716. Minimize String Length

class Solution {
public:
    int minimizedStringLength(string s) {
        set<char> ch(s.begin(), s.end());
        return ch.size();
    }
};