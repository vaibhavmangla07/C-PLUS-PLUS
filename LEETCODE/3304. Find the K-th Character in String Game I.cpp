// 3304. Find the K-th Character in String Game I

class Solution {
public:
    string convertStr(string s) {
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != 'z') {
                s[i]++;
            } else {
                s[i] = 'a';
            }
        }
        return s;
    }

    char kthCharacter(int k) {
        string s = "a";
        while(k > s.size()) {
            string str = convertStr(s);
            s += str;
        }
        return s[k-1];
    }
};