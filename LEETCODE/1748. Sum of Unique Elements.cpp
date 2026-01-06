// 1748. Sum of Unique Elements

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int freq[101] = {0}; 
        int sum = 0;

        for (int num : nums) {
            freq[num]++;
        }

        for (int i = 1; i <= 100; i++) {
            if (freq[i] == 1) {
                sum += i;
            }
        }
        return sum;
    }
};
