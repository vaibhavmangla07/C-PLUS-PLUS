// 740. Delete and Earn

class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n = 10001;
        vector<int> sum(n);

        for(int num: nums) {
            sum[num] += num;
        }
        
        int a = 0, b = 0;

        for(int i = 0; i < n; i++) {
            int c = max(a + sum[i], b);
            a = b; 
            b = c;
        } 
        return b;
    }
};