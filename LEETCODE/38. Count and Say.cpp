// 38. Count and Say

class Solution {
    public:
        string helper(string s) {
            string result = "";
            int i = 0;
    
            while (i < s.length()) {
                char currentChar = s[i];
                int count = 0;
    
                while (i < s.length() && s[i] == currentChar) {
                    count++;
                    i++;
                }
                result += to_string(count) + currentChar;
            }
            return result;
        }
    
        string countAndSay(int n) {
            string term = "1";
    
            for (int i = 1; i < n; i++) {
                term = helper(term);
            }
            return term;
        }
    };