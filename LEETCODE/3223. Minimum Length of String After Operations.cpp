// 3223. Minimum Length of String After Operations

class Solution {
public:
    int minimumLength(string s) {
        int ans = s.size();
        vector<int> freq(26, 0);

        for(char ch : s) {
            freq[ch-'a']++;
        }

        for(int i = 0; i < 26; i++) {
            if(freq[i] >= 3) {
                if(freq[i]%2 == 0) {
                    ans -= (freq[i]-2);
                } else {
                    ans -= (freq[i]-1);
                }
            }
        }
        
        return ans;
    }
};