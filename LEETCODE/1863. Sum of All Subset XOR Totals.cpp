// 1863. Sum of All Subset XOR Totals

class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int ans = 0;
        for (int n : nums) {
            ans |= n;
        }
        return ans << (nums.size() - 1);
    }
};