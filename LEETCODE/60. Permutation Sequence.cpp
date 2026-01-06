// 60. Permutation Sequence

class Solution {
public:
    string getPermutation(int n, int k) {
        int fact = 1;
        vector<int> nums(n);

        for (int i = 1; i <= n; i++) {
            fact = fact * i;
            nums[i - 1] = i;
        }
        fact /= n;
        k--;

        string ans = "";
        while (nums.size() > 0) {
            ans += to_string(nums[k / fact]);
            nums.erase(nums.begin() + (k / fact));

            if (nums.size() == 0) {
                return ans;
            }
            k %= fact;
            fact /= nums.size();
        }
        return ans;
    }
};