// 2825. Make String a Subsequence Using Cyclic Increments

class Solution {
public:
    bool Check(char c1, char c2) {
        if(c1 == c2) {
            return true;
        }
        if(c1 == 'z' && c2 == 'a') {
            return true;
        }
        if(c1 + 1 == c2) {
            return true;
        }
        return false;
    }

    bool canMakeSubsequence(string str1, string str2) {
        int s1 = str1.size();
        int s2 = str2.size();

        if(str1 == str2) {
            return true;
        }
    
        for (int i = 0, j = 0; i < s1 && j < s2; i++) {
            if (Check(str1[i], str2[j])) {
                j++;
            }
            if(j == s2) {
                return true;
            }
        }
        return false;
    }
};