// 1930. Unique Length-3 Palindromic Subsequences

class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int ans = 0;
        map<char, int> count;

        for (char ch : s) {
            count[ch]++;
        }
        
        vector<bool> processed(26, false);
        int n = s.size();

        for (int i = 0; i < n - 2; i++) {
            char ch = s[i];

            if (!processed[ch - 'a'] && count[ch] > 1) {
                int j = n - 1;

                while (j > i + 1) {
                    if (s[i] == s[j]) {
                        processed[ch - 'a'] = true;
                        break;
                    }
                    j--;
                }

                set<int> uniqueChars;
                for (int k = i + 1; k < j; k++) {
                    uniqueChars.insert(s[k]);
                }
                ans += uniqueChars.size();
            }
        }
        return ans;
    }
};
