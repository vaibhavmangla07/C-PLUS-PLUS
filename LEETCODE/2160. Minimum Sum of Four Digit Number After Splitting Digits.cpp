// 2160. Minimum Sum of Four Digit Number After Splitting Digits

class Solution {
public:
    int minimumSum(int num) {
        vector<int> n;

        while(num > 0) {
            int rem = num % 10;
            n.push_back(rem);
            num /= 10;
        }
        sort(n.begin(), n.end());

        int ans = (n[0] * 10) + n[2] + (n[1] * 10) + n[3];
        return ans;
    }
};