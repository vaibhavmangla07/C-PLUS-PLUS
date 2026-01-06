// 47. Permutations II

class Solution {
public:
    void permutation(vector<vector<int>>& ans, vector<int> nums, int idx) {
        if (idx == nums.size()) {
            ans.push_back(nums);
            return;
        }

        for (int i = idx; i < nums.size(); i++) {  
            // Swapping
            swap(nums[idx], nums[i]);

            // Recursive call
            permutation(ans, nums, idx + 1);

            // Backtracking
            swap(nums[idx], nums[i]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        permutation(ans, nums, 0); 

        //  To remove duplicates
        set<vector<int>> duplicates(ans.begin(), ans.end());
        vector<vector<int>> res(duplicates.begin(), duplicates.end());
        return res;
    }
};