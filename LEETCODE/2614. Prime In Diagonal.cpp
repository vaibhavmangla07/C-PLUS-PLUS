// 2614. Prime In Diagonal

class Solution {
public:
    bool checkPrime(int n) {
        if(n == 1) {
            return false;
        }
        for(int i = 2; i*i <= n; i++) {
            if(n % i == 0) {
                return false;
            }
        }
        return true;
    }

    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size();
        int num = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i == j || i+j == n-1) {
                    if(checkPrime(nums[i][j])) {
                        num = max(num, nums[i][j]);
                    }
                }
            }
        }
        return num;
    }
};