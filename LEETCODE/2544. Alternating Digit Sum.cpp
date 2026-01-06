// 2544. Alternating Digit Sum

class Solution {
public:
    int alternateDigitSum(int n) {
        int ans = 0, sign = 1; 
        while (n > 0) {
            ans += (n % 10) * sign; 
            n /= 10;               
            sign = -sign;        
        }
        return ans * -sign; 
    }
};
