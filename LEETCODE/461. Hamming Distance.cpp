// 461. Hamming Distance

class Solution {
public:
    int hammingDistance(int x, int y) {
        int xorr = x ^ y;
        int dist = 0;
        
        while (xorr) {
            dist += xorr & 1;
            xorr >>= 1;
        }
        return dist;
    }
};