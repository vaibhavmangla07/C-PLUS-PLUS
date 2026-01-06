// 2559. Count Vowel Strings in Ranges

class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> prefixSum(words.size() + 1, 0);
        set<char> vowels{'a', 'e', 'i', 'o', 'u'};

        for (int i = 0; i < words.size(); i++) {
            prefixSum[i + 1] = prefixSum[i] + (vowels.count(words[i][0]) && vowels.count(words[i].back()));
        }

        vector<int> ans;
        for (const auto& query : queries) {
            ans.push_back(prefixSum[query[1] + 1] - prefixSum[query[0]]);
        }

        return ans;
    }
};
