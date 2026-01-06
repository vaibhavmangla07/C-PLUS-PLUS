// 3536. Maximum Product of Two Digits

class Solution {
    public:
        int maxProduct(int n) {
            string s = to_string(n);
            int ans = 0;
            int len = s.length();
    
            if(len < 2) {
                return 0;
            }
    
            for(int i = 0; i < len; i++) {
                for(int j = i + 1; j < len; j++) {
                    int digit1 = s[i] - '0';
                    int digit2 = s[j] - '0';
    
                    ans = max(ans, digit1 * digit2);
                }
            }
            return ans;
        }
    };