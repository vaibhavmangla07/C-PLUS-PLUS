// 3158. Find the XOR of Numbers Which Appear Twice

class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int ans = 0;

        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) { 
                if (nums[i] == nums[j]) { 
                    ans ^= nums[i]; 
                    break; 
                    } 
                } 
            }
        return ans;
    }
};