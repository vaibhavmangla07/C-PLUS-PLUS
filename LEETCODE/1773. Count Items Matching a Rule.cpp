// 1773. Count Items Matching a Rule

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int j = 0;
        if(ruleKey == "color") {
            j = 1;
        }
        if(ruleKey == "name") {
            j = 2;
        }

        int ans = 0;
        for(int i = 0; i < items.size(); i++) {
            if(items[i][j] == ruleValue) {
                ans++;
            }
        }
        return ans;
    }
};