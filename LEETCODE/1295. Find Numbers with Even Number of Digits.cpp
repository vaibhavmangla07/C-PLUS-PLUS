// 1295. Find Numbers with Even Number of Digits

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        
        for (int n : nums) {
            if (to_string(n).length() % 2 == 0) {
                count++;
            }
        }
        return count;
    }
};
