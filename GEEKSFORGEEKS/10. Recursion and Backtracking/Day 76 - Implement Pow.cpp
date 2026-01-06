// Day 76 - Implement Pow

// User function Template for C++
class Solution {
  public:
    double power(double b, int e) {
        // code here
        if (e == 0) return 1;
        if (e < 0) return 1 / power(b, -e);
        
        double temp = power(b, e/2);
        
        if (e % 2 == 0) {
            return temp * temp;
        } else {
            return b * temp * temp;
        }
    }
};