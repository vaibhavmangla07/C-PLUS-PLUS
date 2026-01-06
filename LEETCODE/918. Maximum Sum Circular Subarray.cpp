// 918. Maximum Sum Circular Subarray

class Solution {
    public:
        int maxSubarraySumCircular(vector<int>& nums) {
            int maxSum = INT_MIN;
            int minSum = INT_MAX;
    
            int currMax = 0;
            int currMin = 0;
            int total = 0;
    
            for (auto& n : nums) {
                total += n;
    
                currMax = max(n, currMax + n);
                maxSum = max(maxSum, currMax);
    
                currMin = min(n, currMin + n);
                minSum = min(minSum, currMin);
            }
            if (maxSum < 0) {
                return maxSum;
            }
            return max(maxSum, total - minSum);
        }
    };