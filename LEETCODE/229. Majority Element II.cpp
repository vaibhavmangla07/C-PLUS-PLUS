// 229. Majority Element II

class Solution {
    public:
        vector<int> majorityElement(vector<int>& arr) {
            int n = arr.size() / 3;
            map<int, int> mp;
            for (auto& a : arr) {
                mp[a]++;
            }
            vector<int> ans;
            for (auto& m : mp) {
                if (m.second > n) {
                    ans.push_back(m.first);
                }
            }
            return ans;
        }
    };