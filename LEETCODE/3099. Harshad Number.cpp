// 3099. Harshad Number

class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int num = x;

        while (num > 0) {
            int digit = num % 10;
            sum += digit;
            num /= 10;
        }
        if (x % sum == 0) {
            return sum;
        }
        return -1;
    }
};