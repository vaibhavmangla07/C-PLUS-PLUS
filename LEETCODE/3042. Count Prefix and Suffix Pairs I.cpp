// 3042. Count Prefix and Suffix Pairs I

class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0, n = words.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                if (words[i].size() <= words[j].size() && words[j].substr(0, words[i].size()) == words[i] && words[j].substr(words[j].size() - words[i].size()) == words[i]) {
                    count++;
                }
            }
        }
        return count;
    }
};
