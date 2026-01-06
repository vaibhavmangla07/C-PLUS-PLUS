// 2315. Count Asterisks

class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        bool isPair = false;

        for(char ch : s) {
            if(isPair == false && ch == '*') {
                count++;
            } 
            else if(ch == '|' && isPair == false) {
                isPair = true;
            } 
            else if(ch == '|' && isPair == true) {
                isPair = false;
            }
        }
        return count;
    }
};