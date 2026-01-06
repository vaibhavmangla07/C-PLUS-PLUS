// 128. Longest Consecutive Sequence

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        set<int> S(nums.begin(), nums.end());

        int ans = 0;
        int currLen = 0;
        int prev = *S.begin() - 1;

        for (int s : S) {
            if (s == prev + 1) {
                currLen++;
            } 
            else {
                currLen = 1;
            }
            ans = max(ans, currLen);
            prev = s;
        }

        return ans;
    }
};
