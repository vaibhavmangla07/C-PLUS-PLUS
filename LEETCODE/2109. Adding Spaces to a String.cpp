// 2109. Adding Spaces to a String

class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string str = "";
        for(int i = 0, j = 0; i < s.size(); i++) {
            if(j < spaces.size() && i == spaces[j]) {
                str += ' ';
                j++;
            }
            str += s[i];
        }
        return str;
    }
};