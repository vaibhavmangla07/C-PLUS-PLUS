// 1394. Find Lucky Integer in an Array

class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> freq;
        for(auto a : arr) {
            freq[a]++;
        }
        int ans = -1;
        for(pair<int, int> pr : freq) {
            if(pr.first == pr.second) {
                ans = pr.first;
            }
        }
        return ans;
    }
};