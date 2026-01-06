// 383. Ransom Note

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> freq;

        for (auto& ch : magazine) {
            freq[ch]++;
        }

        for (auto& ch : ransomNote) {
            if (freq[ch] == 0) {
                return false;
            }
            freq[ch]--;
        }
        return true;
    }
};