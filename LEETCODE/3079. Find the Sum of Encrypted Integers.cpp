// 3079. Find the Sum of Encrypted Integers

class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;

        for(auto& n : nums){
            int dig = 0;
            int len = 0;
            
            while(n > 0){
                int rem = n % 10;
                dig = max(dig, rem);
                len++;
                n /= 10;
            }
            switch(len){
                case 1:
                    sum += 1 * dig;
                    break;
                case 2:
                    sum += 11 * dig;
                    break;
                case 3:
                    sum += 111 * dig;
                    break;
                case 4:
                    sum += 1111 * dig;
                    break;
            }
        }
        return sum;
    }
};