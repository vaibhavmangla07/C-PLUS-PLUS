// 3191. Minimum Operations to Make Binary Array Elements Equal to One I

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0;
        
        for (int i = 0; i <= nums.size() - 3; ++i) {
            if (nums[i] == 0) {
                nums[i] = 1;
                nums[i + 1] = !nums[i + 1];
                nums[i + 2] = !nums[i + 2];
                count++;
            }
        }
        for (int n : nums) {
            if (n == 0) {
                return -1;
            }
        }

        return count;
    }
};
