// 1726. Tuple with Same Product

class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> count;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < i; j++) {
                int product = nums[i] * nums[j]; 
                ans += 8 * count[product];
                count[product]++;
            }
        }
        return ans;
    }
};
