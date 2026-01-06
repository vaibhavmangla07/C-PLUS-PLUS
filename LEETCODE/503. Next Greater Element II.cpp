// 503. Next Greater Element II

class Solution {
    public:
        vector<int> nextGreaterElements(vector<int>& nums) {
            stack<int> s;
            int n = nums.size();
            vector<int> ans(n);
    
            for (int i = n - 1; i >= 0; i--) {
                s.push(nums[i]);
            }
    
            for (int i = n - 1; i >= 0; i--) {
                while (!s.empty() && nums[i] >= s.top()) {
                    s.pop();
                }
                if (!s.empty()) {
                    ans[i] = s.top();
                } else {
                    ans[i] = -1;
                }
                s.push(nums[i]);
            }
    
            return ans;
        }
    };