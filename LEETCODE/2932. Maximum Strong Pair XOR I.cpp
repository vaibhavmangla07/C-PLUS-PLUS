// 2932. Maximum Strong Pair XOR I

class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int xor_Max{0};

        for(auto x : nums){
            for(auto y : nums) {
                if(abs(x - y) <= min(x, y))
                    xor_Max = max(xor_Max, x^y);
            }
        }
        return xor_Max;
    }
};