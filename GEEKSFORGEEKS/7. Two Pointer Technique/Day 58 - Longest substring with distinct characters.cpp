// Day 58 - Longest substring with distinct characters

class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int ans = 0;
        vector<int> lastIndex(26, -1);
        int start = 0;
        
        for(int end = 0; end < s.size(); end++) {
            start = max(start, lastIndex[s[end] - 'a'] + 1);
            ans = max(ans, end - start + 1);
            lastIndex[s[end] - 'a'] = end;
        }
        return ans;
    }
};
