// 2425. Bitwise XOR of All Pairings

class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        int xor1 = nums1[0], xor2 = nums2[0];

        if(n2 % 2 == 0) {
            xor1 = 0;
        } 
        else {
            for(int i = 1; i < n1; i++) {
                xor1 = xor1 ^ nums1[i];
            }
        }

        if(n1 % 2 == 0) {
            xor2 = 0;
        } 
        else {
            for(int i = 1; i < n2; i++) {
                xor2 = xor2 ^ nums2[i];
            }
        }

        return xor1 ^ xor2;
    }
};