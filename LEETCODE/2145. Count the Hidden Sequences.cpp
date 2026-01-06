// 2145. Count the Hidden Sequences

using ll = long long;

class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        ll sum = 0;
        ll minVal = 0;
        ll maxVal = 0;

        for (int diff : differences) {
            sum += diff;
            minVal = min(minVal, sum);
            maxVal = max(maxVal, sum);
        }

        ll minStart = lower - minVal;
        ll maxStart = upper - maxVal;

        if (maxStart - minStart + 1 >= 0) {
            return maxStart - minStart + 1;
        } 
        return 0;
    }
};
