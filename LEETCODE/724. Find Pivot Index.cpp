// 724. Find Pivot Index

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        int leftSum = 0;
        
        for (int n : nums) {
            totalSum += n;
        }

        for (int i = 0; i < nums.size(); i++) {
            int rightSum = totalSum - leftSum - nums[i];
            if (leftSum == rightSum) {
                return i;
            }
            leftSum += nums[i]; 
        }
        return -1;
    }
};