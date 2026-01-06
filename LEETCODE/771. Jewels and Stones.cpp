// 771. Jewels and Stones

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> ans(jewels.begin(), jewels.end());
        int count = 0;
        
        for (char ch : stones) {
            if (ans.count(ch)) {
                count++;
            }
        }
        return count;
    }
};
