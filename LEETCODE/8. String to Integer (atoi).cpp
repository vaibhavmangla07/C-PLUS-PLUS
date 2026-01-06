// 8. String to Integer (atoi)

class Solution {
    public:
        int myAtoi(string s) {
            int i = 0;
            int sign = 1;
            int ans = 0;
    
            while (i < s.length() && s[i] == ' ') {
                i++;
            }
    
            if (i < s.length()) {
                if (s[i] == '-') {
                    sign = -1;
                    i++;
                } 
                else if (s[i] == '+') {
                    sign = 1;
                    i++;
                }
            }
    
            while (i < s.length() && s[i] >= '0' && s[i] <= '9') {
                int digit = s[i] - '0';
    
                if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7)) {
                    if (sign == 1) {
                        return INT_MAX;
                    } 
                    else {
                        return INT_MIN;
                    }
                }
                ans = ans * 10 + digit;
                i++;
            }
            
            return sign * ans;
        }
    };
    