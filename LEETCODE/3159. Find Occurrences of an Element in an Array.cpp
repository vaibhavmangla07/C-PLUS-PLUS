// 3159. Find Occurrences of an Element in an Array

class Solution {
    public:
        vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
            vector<int> idx;
    
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == x) {
                    idx.push_back(i);
                }
            }
    
            vector<int> ans;
    
            for (int i = 0; i < queries.size(); i++) {
                if (queries[i] <= idx.size()) {
                    ans.push_back(idx[queries[i] - 1]);
                } 
                else {
                    ans.push_back(-1);
                }
            }
            return ans;
        }
    };
    