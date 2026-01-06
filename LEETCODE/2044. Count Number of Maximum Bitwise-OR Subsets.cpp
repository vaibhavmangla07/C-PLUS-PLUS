// 2044. Count Number of Maximum Bitwise-OR Subsets

class Solution {
public:
    int maxOR = 0;  
    int count = 0;  
    void findMaxOR(vector<int>& nums) {
        for (int num : nums) {
            maxOR |= num;  
        }
    }

    void backtrack(vector<int>& nums, int idx, int currentOR) {
        if (idx == nums.size()) {
            if (currentOR == maxOR) {
                count++;  
            }
            return;
        }

        backtrack(nums, idx + 1, currentOR | nums[idx]);
        backtrack(nums, idx + 1, currentOR);
    }

    int countMaxOrSubsets(vector<int>& nums) {
        findMaxOR(nums);  
        backtrack(nums, 0, 0);  
        return count;
    }
};