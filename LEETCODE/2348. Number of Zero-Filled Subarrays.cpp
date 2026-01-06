// 2348. Number of Zero-Filled Subarrays

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long ans = 0;
        int count = 0;
        for (auto& n : nums) {
            if (n == 0) {
                count++;
                ans += count;
            } else
                count = 0;
        }
        return ans;
    }
};