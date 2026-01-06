// 647. Palindromic Substrings

class Solution {
public:
    int Expand_Around_Index(string s, int i, int j) {
        int count = 0;
        while(i >= 0 && j < s.length() && s[i] == s[j]) {
            count++;
            i--;
            j++;
        }
        return count;
    }

    int countSubstrings(string s) {
        int count = 0;
        int n = s.length();

        for(int i = 0; i < n; i++) {
            // odd
            int odd_ans = Expand_Around_Index(s, i, i);
            count += odd_ans;

            // even
            int even_ans = Expand_Around_Index(s, i, i+1);
            count += even_ans;
        }
        return count;
    }
};