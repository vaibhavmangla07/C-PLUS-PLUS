// 2951. Find the Peaks

class Solution {
public:
    vector<int> findPeaks(vector<int>& mount) {
        vector<int> ans;

        if(mount.size() <= 2) {
            return ans;
        }
        for(int i = 1; i < mount.size()-1; i++) {
            if(mount[i] > max(mount[i-1], mount[i+1])) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};