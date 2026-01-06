// 3442. Maximum Difference Between Even and Odd Frequency I

class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> freq;
        for (auto c : s) {
            ++freq[c];
        }
        int maxOdd = 1, minEven = s.size();
        for (const auto& [_, val] : freq) {
            if (val % 2 == 1) {
                maxOdd = max(maxOdd, val);
            } else {
                minEven = min(minEven, val);
            }
        }
        return maxOdd - minEven;
    }
};