// 326. Power of Three

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n == 1) return true;   
        if (n <= 0) return false;  

        double x = n;
        while (x >= 3) {           
            x /= 3;
            if (x == 1) return true; 
        }
        return false;
    }
};
