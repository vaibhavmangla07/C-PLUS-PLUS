// 41. First Missing Positive

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> s;
        for(auto n : nums) {
            s.insert(n);
        }

        int ans = 1;
        for(auto ss : s) {
            if(ss > 0) {
                if(ss == ans) {
                    ans++;
                } 
            }
        }
        return ans;
    }
};