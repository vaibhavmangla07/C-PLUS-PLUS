// 1910. Remove All Occurrences of a Substring

class Solution {
public:
    string removeOccurrences(string s, string target) {
        while(s.length() > 0 && s.find(target) < s.length()) {
            s.erase(s.find(target), target.length());
        }
        return s;
    }
};