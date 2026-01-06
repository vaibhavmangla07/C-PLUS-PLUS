// 2845. Count of Interesting Subarrays

class Solution {
    public:
        long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
            unordered_map<int, int> mp;
            mp[0] = 1;
            long long ans = 0;
            long long prefix = 0;
    
            for (auto& num : nums) {
                if (num % modulo == k) {
                    prefix++;
                }
                int rem = prefix % modulo;
                int target = (rem - k + modulo) % modulo;
                ans += mp[target];
                mp[rem]++;
            }
            return ans;
        }
    };