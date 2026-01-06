// 3314. Construct the Minimum Bitwise Array I

class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans(nums.size(), -1);

        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums[i]; j++){
                if((j | (j + 1)) == nums[i]){
                     ans[i] = j;
                     break;
                }
            }
        }
        return ans;
    }
};