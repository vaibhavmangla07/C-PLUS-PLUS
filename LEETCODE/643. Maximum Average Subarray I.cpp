// 643. Maximum Average Subarray I

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        double avg = sum / (double)k;
        for (int i = k; i < nums.size(); i++) {
            sum -= nums[i - k];
            sum += nums[i];
            if (sum / (double)k > avg) {
                avg = sum / (double)k;
            }
        }
        return avg;
    }
};