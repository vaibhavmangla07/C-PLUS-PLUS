// 3487. Maximum Unique Subarray Sum After Deletion

class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int> s;
        int ans = INT_MIN;
        for(auto& n : nums) {
            if(n > 0) {
                s.insert(n);
            }
            ans = max(ans, n);
        }
        if(s.size() == 0) {
            return ans;
        }
        ans = 0;
        for(auto& ss : s) {
            ans += ss;
        }
        return ans;
    }
};