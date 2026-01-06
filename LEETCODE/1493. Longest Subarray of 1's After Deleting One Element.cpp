// 1493. Longest Subarray of 1's After Deleting One Element

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int count = 0;
        int start = 0;
        int ans = 0;

        for (int end = 0; end < nums.size(); ++end) {
            if (nums[end] == 0) {
                count++;
            }

            while (count > 1) {
                if (nums[start] == 0) {
                    count--;
                }
                start++;
            }
            ans = max(ans, end - start);
        }
        return ans;
    }
};
