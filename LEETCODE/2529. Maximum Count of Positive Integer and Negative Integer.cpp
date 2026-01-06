// 2529. Maximum Count of Positive Integer and Negative Integer

class Solution {
    public:
        int maximumCount(vector<int>& nums) {
            int count1 = 0;
            int count2 = 0;
            
            for(auto& n : nums) {
                if(n < 0) {
                    count1++;
                }
                else if(n > 0) {
                    count2++;
                }
            }
            return max(count1, count2);
        }
    };