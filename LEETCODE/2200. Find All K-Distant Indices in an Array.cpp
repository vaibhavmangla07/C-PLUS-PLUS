// 2200. Find All K-Distant Indices in an Array

class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        vector<int> keyInd;
        for(int i = 0; i < n; i++) {
            if(nums[i] == key) {
                keyInd.push_back(i);
            }
        }

        vector<int> ans;
        for(int i = 0; i < n; i++) {
            for(int p = 0; p < keyInd.size(); p++) {
                int j = keyInd[p];
                if(abs(i-j) <= k) {
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};