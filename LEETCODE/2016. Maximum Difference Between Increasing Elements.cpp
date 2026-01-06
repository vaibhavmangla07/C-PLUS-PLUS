// 2016. Maximum Difference Between Increasing Elements

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        int prefix = nums[0];
        for (auto& n : nums) {
            if (n > prefix) {
                ans = max(ans, n - prefix);
            } else {
                prefix = n;
            }
        }
        return ans;
    }
};