// 1400. Construct K Palindrome Strings

class Solution {
public:
    bool canConstruct(string s, int k) {
        if (s.length() < k) {
            return false;
        }

        int Count = 0;
        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }

        for (int f : freq) {
            Count += f % 2;
        }
        return Count <= k;
    }
};
