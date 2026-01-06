// 3498. Reverse Degree of a String

class Solution {
    public:
        int reverseDegree(string s) {
            int ans = 0;
            for(int i = 0; i < s.size(); i++) {
                int val = 26 - (s[i] - 'a');
                ans += val * (i + 1);
            }
            return ans;
        }
    };