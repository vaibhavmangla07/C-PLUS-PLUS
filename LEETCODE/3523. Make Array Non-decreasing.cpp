// 3523. Make Array Non-decreasing

class Solution {
    public:
        int maximumPossibleSize(vector<int>& nums) {
            int n = nums.size();
            if (n <= 1) {
                return n;
            }
            int l = 0;
            int r = 0;
            int ans = 0;
    
            while (l < n) {
                int m = nums[l];
                r = l + 1;
    
                while (r < n && nums[r] < m) {
                    if (nums[r] > m) {
                        m = nums[r];
                    }
                    r++;
                }
                ans++;
                l = r;
            }
            return ans;
        }
    };