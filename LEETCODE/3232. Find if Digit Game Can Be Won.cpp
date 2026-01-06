// 3232. Find if Digit Game Can Be Won

class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int ans = 0;

        for(int n : nums) {
            if(n < 10) {
                ans += n;
            } 
            else {
                ans -= n;
            }
        }
        return ans;
    }
};