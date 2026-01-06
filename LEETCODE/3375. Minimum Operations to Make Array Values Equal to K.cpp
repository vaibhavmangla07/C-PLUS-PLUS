// 3375. Minimum Operations to Make Array Values Equal to K

class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            map<int, int> mp;
            for(auto& n : nums) {
                if(n < k) {
                    return -1;
                }
                else if(n > k) {
                    mp[n]++;
                }
            }
            return mp.size();
        }
    };

