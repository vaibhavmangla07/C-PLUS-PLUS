// 2341. Maximum Number of Pairs in Array

class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 0;
        int alone = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i + 1 < nums.size() && nums[i] == nums[i + 1]) {
                count++; i++; 
            } 
            else {
                alone++;
            }
        }

        return {count, alone};
    }
};
