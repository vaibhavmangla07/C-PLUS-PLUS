// 2864. Maximum Odd Binary Number

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count = 0;
        
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '1') {
                count++;
            }
            s[i] = '0';
        }
        s[s.size()-1] = '1';
        count--;
        int i = 0;
        while(count > 0) {
            s[i++] = '1';
            count--;
        }
        return s;
    }
};