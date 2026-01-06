// 1663. Smallest String With A Given Numeric Value

class Solution {
    public:
        string getSmallestString(int n, int k) {
            string ans(n, ' ');
            int nextHighest = 0;
    
            while(n) {
                nextHighest = k - n-- + 1;
                if(nextHighest < 26) {
                    ans[n] = 'a' + nextHighest - 1;
                    k -= nextHighest;
                } else {
                    ans[n] = 'z';
                    k -= 26;
                }
            }
            return ans;
        }
    };