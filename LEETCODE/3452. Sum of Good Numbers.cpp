// 3452. Sum of Good Numbers

class Solution {
    public:
        int sumOfGoodNumbers(vector<int>& nums, int k) {
            int sum = 0;
            int n = nums.size();
    
            for(int i = 0; i < n; i++) {
                bool b = true;
                if(i - k >= 0) {
                    if(nums[i] <= nums[i - k]) {
                        b = false;
                    }
                }
                if(i + k < n) {
                    if(nums[i] <= nums[i + k]) {
                        b = false;
                    }
                }
                if(b) {
                    sum += nums[i];
                }
            }
            return sum;
        }
    };