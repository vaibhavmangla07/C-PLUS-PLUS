// 2960. Count Tested Devices After Test Operations

class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int count = 0;
        int max = 0;

        for (int bp : batteryPercentages) {
            if (bp > max) {
                count++;
                max++;
            }
        }
        return count;
    }
};