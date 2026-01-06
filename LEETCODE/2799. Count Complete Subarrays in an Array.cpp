// 2799. Count Complete Subarrays in an Array

class Solution {
    public:
        int countCompleteSubarrays(vector<int>& nums) {
            int left = 0;
            int right = 0;
            int ans = 0;
    
            int k = unordered_set<int>(nums.begin(), nums.end()).size();
            unordered_map<int, int> mp;
    
            while (right < nums.size()) {
                mp[nums[right]]++;
    
                while (mp.size() == k) {
                    ans += nums.size() - right;
                    mp[nums[left]]--;
    
                    if (mp[nums[left]] == 0) {
                        mp.erase(nums[left]);
                    }
                    left++;
                }
                right++;
            }
            return ans;
        }
    };
    