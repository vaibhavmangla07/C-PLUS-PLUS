// 56. Merge Intervals

class Solution {
    public:
        vector<vector<int>> merge(vector<vector<int>>& intervals) {
            sort(intervals.begin(), intervals.end());
            
            vector<vector<int>> ans;
            ans.push_back(intervals[0]);
            
            for(int i = 0; i < intervals.size(); i++) {
                vector<int>& last = ans.back();
                vector<int>& curr = intervals[i];
                
                if(curr[0] <= last[1]) {
                    last[1] = max(curr[1], last[1]);
                }
                else {
                    ans.push_back(curr);
                }
            }
            return ans;
        }
    };