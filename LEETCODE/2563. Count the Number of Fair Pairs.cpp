// 2563. Count the Number of Fair Pairs

class Solution {
public:
    long long countFairPairs(std::vector<int>& nums, int lower, int upper) {
        std::sort(nums.begin(), nums.end());
        long long count = 0;

        for (int i = 0; i < nums.size(); i++) {
            // Use binary search to find the valid range of indices j where i < j
            int j = std::lower_bound(nums.begin() + i + 1, nums.end(), lower - nums[i]) - nums.begin();
            int k = std::upper_bound(nums.begin() + i + 1, nums.end(), upper - nums[i]) - nums.begin() - 1;

            if (k >= j) {
                count += (k - j + 1);
            }
        }
        return count;
    }
};