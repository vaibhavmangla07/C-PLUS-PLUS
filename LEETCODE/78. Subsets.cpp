// 78. Subsets

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;

        ans.push_back({});

        for (int n : nums) {
            vector<vector<int>> newSubsets;

            for (vector<int> curr : ans) {
                vector<int> temp = curr;
                
                temp.push_back(n);
                newSubsets.push_back(temp);
            }
            for (vector<int> curr : newSubsets) {
                ans.push_back(curr);
            }
        }
        return ans;
    }
};