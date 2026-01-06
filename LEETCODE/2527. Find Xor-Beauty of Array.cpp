// 2527. Find Xor-Beauty of Array

class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int a = 0, b = 0;
        for (int i = 0; i < nums.size(); i++) {
            a = a | nums[i];
            b = b ^ nums[i];
        }
        return (a & b);
    }
};