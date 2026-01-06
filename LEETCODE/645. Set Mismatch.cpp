// 645. Set Mismatch

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        vector<bool> isPresent(n + 1, false);

        for (int i = 0; i < n; i++) {
            if (isPresent[nums[i]]) {
                ans.push_back(nums[i]);
            }
            isPresent[nums[i]] = true;
        }

        for (int i = 1; i < isPresent.size(); i++) {
            if (!isPresent[i]) {
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};