// 728. Self Dividing Numbers

class Solution {
public:
    bool chechDiv(int n) {
        int x = n;
        while(n > 0) {
            if(n%10 == 0 || x%(n%10) != 0) {
                return false;
            }
            n /= 10;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> arr;
        for(int i = left; i <= right; i++) {
            if(chechDiv(i)) {
                arr.push_back(i);
            }
        }
        return arr;
    }
};
