// 1695. Maximum Erasure Value

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> st;
        int ans = 0, curr = 0, start = 0;

        for (int end = 0; end < nums.size(); ++end) {
            while (st.count(nums[end])) {
                curr -= nums[start];
                st.erase(nums[start++]);
            }
            curr += nums[end];
            st.insert(nums[end]);
            ans = max(ans, curr);
        }

        return ans;
    }
};
