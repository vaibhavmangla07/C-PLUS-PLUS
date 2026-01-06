// 1752. Check if Array Is Sorted and Rotated

class Solution {
public:
    bool check(vector<int>& nums) {
        int rot = 0;
        if(nums[0] < nums[nums.size()-1]) {
            rot++;
        }
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] < nums[i-1]) {
                rot++;
                if(rot > 1) {
                    return false;
                }
            }
        }

        return true;
    }
};