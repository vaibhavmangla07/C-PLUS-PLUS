// 1221. Split a String in Balanced Strings

class Solution {
    public:
        int balancedStringSplit(string s) {
            int countR = 0;
            int countL = 0;
            int count = 0;
            
            for(int i = 0; i < s.size(); i++) {
                if(countR == countL) {
                    count++;
                }
                if(s[i] == 'L') {
                    countL++;
                } else {
                    countR++;
                }
            }
            return count;
        }
    };