// 410. Split Array Largest Sum

class Solution {
    public:
        bool helper(vector<int>& nums, int k, int mid) {
            int count = 1;  
            int currSum = 0;
    
            for (auto& n : nums) {
    
                if (currSum + n > mid) {
                    count++;
                    currSum = n;
    
                    if (count > k) {
                        return false;
                    }
                } 
                else {
                    currSum += n;
                }
            }
            return true;
        }
    
        int splitArray(vector<int>& nums, int k) {
            int start = *max_element(nums.begin(), nums.end());;
            int end = accumulate(nums.begin(), nums.end(), 0);
            int ans = -1;
    
            while (start <= end) {
                int mid = (start + end) / 2;
    
                if (helper(nums, k, mid)) {
                    ans = mid;
                    end = mid - 1;
                } 
                else {
                    start = mid + 1;
                }
            }
            return ans;
        }
    };
    