// 46. Permutations

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

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permutation(ans, nums, 0); 
        return ans; 
    }
};