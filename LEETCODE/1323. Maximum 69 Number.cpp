// 1323. Maximum 69 Number

class Solution {
public:
    int maximum69Number (int n) {
        stack<int> s;
        while(n > 0) {
            s.push(n%10);
            n /= 10;
        }
        bool isChange = false;
        while(!s.empty()) {
            if(s.top() == 6 && isChange == false) {
                n = n*10 + 9;
                isChange = true;
            } else {
                n = n*10 + s.top();
            }
            s.pop();
        }
        return n;
    }
};