// 2210. Count Hills and Valleys in an Array

class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int> v;
        v.push_back(nums[0]);
        for (auto& n : nums) {
            if (n != v.back()) {
                v.push_back(n);
            }
        }

        int count = 0;
        for (int i = 1; i < v.size() - 1; ++i) {
            if (v[i] > v[i - 1] && v[i] > v[i + 1]) {
                count++;
            } 
            else if (v[i] < v[i - 1] && v[i] < v[i + 1]) {
                count++;
            }
        }
        return count;
    }
};
