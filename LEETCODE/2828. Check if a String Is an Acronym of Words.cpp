// 2828. Check if a String Is an Acronym of Words

class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        for(int i = 0; i < words.size(); i++) {
            if(words[i][0] != s[i] || words.size() != s.size()) {
                return false;
            }
        }
        return true;
    }
};