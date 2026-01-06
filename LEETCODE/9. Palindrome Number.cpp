// 9. Palindrome Number

class Solution {
public:
    bool isPalindrome(int x) {
        if(x == 0) {
            return true;
        }
        if(x < 0 || x % 10 == 0) {
            return false;
        }
        long long newx = 0;
        long long oldx = x;

        while(x > 0) {
            newx = newx * 10 + x % 10;
            x /= 10;
        }
        if(oldx == newx) {
            return true;
        }
        return false;
    }
};
