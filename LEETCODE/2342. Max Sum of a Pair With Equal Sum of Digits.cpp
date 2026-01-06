// 2342. Max Sum of a Pair With Equal Sum of Digits

class Solution {
    public:
        int digit_sum(int n) {
            int sum = 0;
            while (n > 0) {
                sum += (n % 10);
                n /= 10;
            }
            return sum;
        }
    
        int maximumSum(vector<int>& nums) { 
            unordered_map<int, int> mp; 
            int ans = -1;
    
            for (auto& num : nums) {
                int ds = digit_sum(num);
    
                if (mp.count(ds)) {
                    ans = max(ans, num + mp[ds]);
                }
                mp[ds] = max(mp[ds], num);
            }
            return ans;
        }
    };