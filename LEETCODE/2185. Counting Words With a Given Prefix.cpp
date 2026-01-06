// 2185. Counting Words With a Given Prefix

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0;
        for(int i = 0; i < words.size(); i++) {
            if(pref == words[i].substr(0, pref.size())) {
                ans++;
            }
        }
        return ans;
    }
};