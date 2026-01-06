// 494. Target Sum

class Solution {
public:
    int countWays(vector<int>& nums, int idx, int currSum, int target) {
        if (idx == nums.size()) {
            return currSum == target ? 1 : 0;
        }
        int add = countWays(nums, idx + 1, currSum + nums[idx], target);
        int subtract = countWays(nums, idx + 1, currSum - nums[idx], target);

        return add + subtract;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        return countWays(nums, 0, 0, target);
    }
};
