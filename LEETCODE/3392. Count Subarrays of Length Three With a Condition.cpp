// 3392. Count Subarrays of Length Three With a Condition

class Solution {
    public:
        int countSubarrays(vector<int>& nums) {
            int ans = 0;
            int i = 0, j = 2;
            while (j < nums.size()) {
                if ((float)(nums[i] + nums[j]) == (nums[i + 1] / (float)2)) {
                    ans++;
                }
                i++, j++;
            }
            return ans;
        }
    };