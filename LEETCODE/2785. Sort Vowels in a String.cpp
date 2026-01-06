// 2785. Sort Vowels in a String

class Solution {
public:
    string sortVowels(string s) {
        string vowels = "AEIOUaeiou";
        unordered_set<char> vowelSet(vowels.begin(), vowels.end());

        // Step 1: Extract vowels
        vector<char> v;
        for (char c : s) {
            if (vowelSet.count(c)) {
                v.push_back(c);
            }
        }

        // Step 2: Sort vowels
        sort(v.begin(), v.end());

        // Step 3: Replace vowels in order
        int idx = 0;
        for (char &c : s) {
            if (vowelSet.count(c)) {
                c = v[idx++];
            }
        }
        return s;
    }
};
