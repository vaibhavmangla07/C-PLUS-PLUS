// 1502. Can Make Arithmetic Progression From Sequence

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        if (arr.size() == 2) {
            return true;
        }
        sort(arr.begin(), arr.end());
        int i = 0, j = 2;
        for (; j < arr.size(); i++, j++) {
            if (arr[i] + arr[j] != 2 * arr[i + 1]) {
                return false;
            }
        }
        return true;
    }
};