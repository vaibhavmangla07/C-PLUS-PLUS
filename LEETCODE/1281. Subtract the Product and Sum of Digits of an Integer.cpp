// 1281. Subtract the Product and Sum of Digits of an Integer

class Solution {
public:
    int subtractProductAndSum(int n) {
        int Product = 1;
        int Sum = 0;

        while(n > 0) {
            Sum += n % 10;
            Product *= n % 10;
            n /= 10;
        }
        return Product - Sum;
    }
};