// 3541. Find Most Frequent Vowel and Consonant

class Solution {
    public:
        int maxFreqSum(string s) {
            map<char, int> countV;
            map<char, int> countC;
    
            string vowels = "aeiou";
    
            for(char c : s) {
                if(vowels.find(c) != string::npos) {
                    countV[c]++;
                }
                else {
                    countC[c]++;
                }
            }
            int maxV = 0;
            for(auto const& [key, val] : countV) {
                maxV = max(maxV, val);
            }
    
            int maxC = 0;
            for(auto const& [key, val] : countC) {
                maxC = max(maxC, val);
            }
    
            return maxV + maxC;    
        }
    };