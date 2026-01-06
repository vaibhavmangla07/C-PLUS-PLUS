// 2114. Maximum Number of Words Found in Sentences

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for (const string& s : sentences) {
            int Count = count(s.begin(), s.end(), ' ') + 1;
            ans = max(ans, Count);
        }
        return ans;
    }
};
