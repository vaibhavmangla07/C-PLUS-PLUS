// 2220. Minimum Bit Flips to Convert Number

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xorr = start ^ goal;
        int dist = 0;
        
        while (xorr) {
            dist += xorr & 1;
            xorr >>= 1;
        }
        return dist;
    }
};