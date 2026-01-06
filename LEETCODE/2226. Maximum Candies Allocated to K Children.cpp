// 2226. Maximum Candies Allocated to K Children

class Solution {
    public:
        bool helper(vector<int>& candies, long long k, long long mid) {
            long long count = 0;
    
            for (auto& c : candies) {
                count += c / mid;
            }
            return count >= k;
        }
    
        int maximumCandies(vector<int>& candies, long long k) {
            long long start = 1;
            long long end = *max_element(candies.begin(), candies.end());
            int ans = 0;
    
            while (start <= end) {
                long long mid = (start + end) / 2;
    
                if (helper(candies, k, mid)) {
                    ans = mid;
                    start = mid + 1;
                } 
                else {
                    end = mid - 1;
                }
            }
            return ans;
        }
    };
    