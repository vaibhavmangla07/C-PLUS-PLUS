// 2520. Count the Digits That Divide a Number

class Solution {
public:
    int countDigits(int num) {
        int n = num;
        int ans = 0;
        while(n > 0) {
            if(num % (n % 10) == 0) {
                ans++;
            }
            n /= 10;
        }
        return ans;
    }
};