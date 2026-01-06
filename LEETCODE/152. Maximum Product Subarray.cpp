// 152. Maximum Product Subarray

class Solution {
    public:
        int maxProduct(vector<int>& nums) {
            int maxProduct = INT_MIN;
            int leftToRight = 1;
            int rightToLeft = 1;
            int n = nums.size();
    
            for (int i = 0; i < n; i++) {
                if (leftToRight == 0) {
                    leftToRight = 1;
                }
                if (rightToLeft == 0) {
                    rightToLeft = 1;
                }
                
                leftToRight *= nums[i];
                rightToLeft *= nums[n - i - 1];
    
                maxProduct = max({leftToRight, rightToLeft, maxProduct});
            }
            return maxProduct;
        }
    };
    