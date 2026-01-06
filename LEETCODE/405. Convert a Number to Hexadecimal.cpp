// 405. Convert a Number to Hexadecimal

class Solution {
public:
    string toHex(int num) {
        if (num == 0) {
            return "0";
        }
        unsigned int n = num;
        
        string ans = "";
        string hexChars = "0123456789abcdef";
        
        while (n > 0) {
            ans = hexChars[n % 16] + ans;
            n /= 16;
        }
        return ans;
    }
};