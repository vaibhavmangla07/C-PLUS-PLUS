// 2553. Separate the Digits in an Array

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        
        for (int n : nums) {
            string n_str = to_string(n);  
            for (char ch : n_str) {
                ans.push_back(ch - '0');  
            }
        }
        
        return ans;
    }
};
