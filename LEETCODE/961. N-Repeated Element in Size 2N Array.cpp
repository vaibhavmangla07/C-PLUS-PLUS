// 961. N-Repeated Element in Size 2N Array

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        set<int> s;
        
        for(int n : nums) {
            if(s.find(n) != s.end()) {
                return n;
            } 
            else {
                s.insert(n);
            }
        }
        return 0;
    }
};