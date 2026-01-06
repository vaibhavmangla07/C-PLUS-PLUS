// 258. Add Digits

class Solution {
public:
    int addDigits(int n) {
        if(n < 10) {
            return n;
        }
        while(n > 9) {
            int num = 0;
            while(n > 0) {
                num += n%10;
                n /= 10;
            }
            n = num;
        }
        return n;
    }
};