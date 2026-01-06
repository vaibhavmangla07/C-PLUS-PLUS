// 39. Combination Sum

class Solution {
    public:
        void helper(const vector<int>& candidates, int target, int idx, vector<int>& curr, vector<vector<int>>& ans) {
            if (target == 0) {
                ans.push_back(curr);
                return;
            }
    
            if (idx >= candidates.size())
                return;
    
            if (target >= candidates[idx]) {
                curr.push_back(candidates[idx]);
                helper(candidates, target - candidates[idx], idx, curr, ans);
                curr.pop_back();
            }
    
            helper(candidates, target, idx + 1, curr, ans);
        }
    
        vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
            vector<vector<int>> ans;
            vector<int> curr;
    
            helper(candidates, target, 0, curr, ans);
            return ans;
        }
    };
    