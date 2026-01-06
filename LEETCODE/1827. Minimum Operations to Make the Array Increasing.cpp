// 1827. Minimum Operations to Make the Array Increasing

class Solution {
public:
    int minOperations(vector<int>& nums) {
         int count = 0;

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] <= nums[i - 1]) {
                int ii = nums[i - 1] + 1 - nums[i];
                nums[i] = nums[i - 1] + 1;
                count += ii;
            }
        }
        return count;
    }
};