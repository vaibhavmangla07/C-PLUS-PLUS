// 151. Reverse Words in a String

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string ans = "";
        string temp = "";
        for(int i = n-1; i >= 0; i--) {
            if(s[i] != ' ') {
                temp += s[i];
            } else {
                if(temp != "") {
                    reverse(temp.begin(), temp.end());
                    ans += temp;
                    ans += " ";
                    temp = "";
                }
            }
        }
        if(temp != "") {
            reverse(temp.begin(), temp.end());
            ans += temp;
        } else {
            ans = ans.substr(0, ans.size()-1);
        }
        return ans;
    }
};