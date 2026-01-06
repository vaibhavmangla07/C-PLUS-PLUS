// 1200. Minimum Absolute Difference

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());

        int diff = INT_MAX;
        for (int i = 1; i < arr.size(); i++) {
            diff = min(diff, arr[i] - arr[i - 1]);
        }

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - arr[i - 1] == diff) {
                ans.push_back({arr[i - 1], arr[i]});
            }
        }
        return ans;
    }
};