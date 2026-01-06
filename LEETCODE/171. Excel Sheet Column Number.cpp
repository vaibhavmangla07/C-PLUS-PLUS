// 171. Excel Sheet Column Number

class Solution {
    public:
        int titleToNumber(string columnTitle) {
            int ans = 0;
            for (auto& c : columnTitle) {
                ans = ans * 26 + (c - 'A' + 1);
            }
            return ans;
        }
    };
    