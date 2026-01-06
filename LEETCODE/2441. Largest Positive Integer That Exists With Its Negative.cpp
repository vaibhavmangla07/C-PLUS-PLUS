// 2441. Largest Positive Integer That Exists With Its Negative

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        set<int> n(nums.begin(), nums.end()); 
        int ans = -1;

        for (int num : nums) {
            if (num > 0 && n.count(-num)) { 
                ans = max(ans, num); 
            }
        }
        return ans;
    }
};
