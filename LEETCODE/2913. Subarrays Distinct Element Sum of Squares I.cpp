// 2913. Subarrays Distinct Element Sum of Squares I

class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans = 0;

        for(int i = 0; i < nums.size(); i++) {
            unordered_set<int> Set;
            
            for(int j = i; j < nums.size(); j++) {
                Set.insert(nums[j]);
                ans += Set.size() * Set.size();
            }
        }
        return ans;
    }
};