// 90. Subsets II

class Solution {
    public:
        void backtrack(vector<int>& nums, int start, vector<int>& curr, vector<vector<int>>& ans) {
            ans.push_back(curr);
    
            for(int i = start; i < nums.size(); ++i) {
                if(i > start && nums[i] == nums[i - 1]) {
                    continue;
                }
                curr.push_back(nums[i]);
                backtrack(nums, i + 1, curr, ans);
                curr.pop_back();
            }
        }
    
        vector<vector<int>> subsetsWithDup(vector<int>& nums) {
            vector<vector<int>> ans;
            vector<int> curr;
    
            sort(nums.begin(), nums.end());
            backtrack(nums, 0, curr, ans);
            
            return ans;
        }
    };
    