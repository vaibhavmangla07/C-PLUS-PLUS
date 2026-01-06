// 1684. Count the Number of Consistent Strings

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = 0;

        for (string& w : words) {
            bool word = true;

            for (int i = 0; i < w.length(); i++) {
                char curr = w[i];
                bool ch = false;

                for (int j = 0; j < allowed.length(); j++) {
                    if (allowed[j] == curr) {
                        ch = true;
                        break;
                    }
                }
                if (!ch) {
                    word = false;
                    break;
                }
            }
            if (word) {
                ans++;
            }
        }
        return ans;
    }
};
