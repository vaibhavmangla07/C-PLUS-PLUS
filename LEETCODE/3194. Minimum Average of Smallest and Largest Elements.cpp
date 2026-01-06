// 3194. Minimum Average of Smallest and Largest Elements

class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<double> Avg;

        for (double i = 0; i < nums.size() / 2; i++) {
            double avg = (nums[i] + nums[nums.size() - i - 1]) / 2.0;
            Avg.push_back(avg);
        }
        return *min_element(Avg.begin(), Avg.end());
    }
};