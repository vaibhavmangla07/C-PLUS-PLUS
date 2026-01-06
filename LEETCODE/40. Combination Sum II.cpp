// 40. Combination Sum II

class Solution {
    public:
        void sumHelper(vector<int> candidates, int target, int idx, vector<int>& arr, vector<vector<int>>& mat) {
            if (target == 0) {
                mat.push_back(arr);
                return;
            }
    
            for (int i = idx; i < candidates.size(); i++) {
                if (i > idx && candidates[i] == candidates[i - 1]) {
                    continue;
                }
    
                if (candidates[i] > target) {
                    return;
                }
                arr.push_back(candidates[i]);
                sumHelper(candidates, target - candidates[i], i + 1, arr, mat);
                arr.pop_back();
            }
        }
    
        vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
            vector<vector<int>> mat;
            vector<int> arr;
    
            sort(candidates.begin(), candidates.end());
            sumHelper(candidates, target, 0, arr, mat);
            
            return mat;
        }
    };