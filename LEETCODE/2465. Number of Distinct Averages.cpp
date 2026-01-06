// 2465. Number of Distinct Averages

class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        set<double> Avg;

        for (int i = 0; i < nums.size() / 2; i++) {
            double avg = (nums[i] + nums[nums.size() - i - 1]) / 2.0;
            Avg.insert(avg);
        }
        return Avg.size();
    }
};