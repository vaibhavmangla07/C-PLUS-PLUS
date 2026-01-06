// 2670. Find the Distinct Difference Array

class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> diff;

        for(int i = 0; i < nums.size(); i++) {

            set<int> prefix(nums.begin(), nums.begin() + i + 1);
            set<int> suffix(nums.begin() + i + 1, nums.begin() + nums.size());

            diff.push_back(prefix.size() - suffix.size());
        }
        return diff;
    }
};