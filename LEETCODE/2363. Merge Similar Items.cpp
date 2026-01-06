// 2363. Merge Similar Items

class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& num1, vector<vector<int>>& num2) {
        map<int, int> m;

        for (const auto& n : num1) {
            m[n[0]] += n[1];
        }

        for (const auto& n : num2) {
            m[n[0]] += n[1];
        }
        
        vector<vector<int>> ans;

        for (const auto& pr : m) {
            ans.push_back({pr.first, pr.second});
        }
        return ans;
    }
};
