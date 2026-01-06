// 1920. Build Array from Permutation

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int i = 0;

        while(i < nums.size()) {
            ans[i] = nums[nums[i]];
            i++;
        }
        return ans;
    }
};