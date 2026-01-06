// 2119. A Number After a Double Reversal

class Solution {
public:
    bool isSameAfterReversals(int n) {
        if(n == 0) {
            return true;
        }
        if(n%10 == 0) {
            return false;
        }
        return true;
    }
};