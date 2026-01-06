// 342. Power of Four

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n < 1) {
            return false;
        }
        if(n == 1) {
            return true;
        }
        float x = n;
        while(x > 1) {
            x /= 4;
            if(x == 1) {
                return true;
            }
        }
        return false;
    }
};