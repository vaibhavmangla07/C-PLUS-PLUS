// 1009. Complement of Base 10 Integer

class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) {
            return 1;
        }
        int mask = ~0;

        while (n & mask) {
            mask <<= 1;
        }
        return ~n & ~mask;
    }
};