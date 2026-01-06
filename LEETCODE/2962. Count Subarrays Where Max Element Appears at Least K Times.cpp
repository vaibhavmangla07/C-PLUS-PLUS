// 2962. Count Subarrays Where Max Element Appears at Least K Times

class Solution {
    public:
        long long countSubarrays(vector<int>& nums, int k) {
            int maxVal = *max_element(nums.begin(), nums.end());
            long long count = 0;
            int left = 0;
            int freq = 0;
    
            for (int right = 0; right < nums.size(); right++) {
                if (nums[right] == maxVal) {
                    freq++;
                }
    
                while (freq >= k) {
                    count += (nums.size() - right);
                    if (nums[left] == maxVal) {
                        freq--;
                    }
                    left++;
                }
            }
    
            return count;
        }
    };