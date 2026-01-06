// 2965. Find Missing and Repeated Values

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int, int> freq;
        int repeat = -1, miss = -1;

        for (const auto& row : grid) {
            for (int num : row) {
                freq[num]++;
            }
        }

        for (int i = 1; i <= grid.size()*grid.size(); i++) {
            if (freq[i] == 2) {
                repeat = i;
            } 
            else if (freq[i] == 0) {
                miss = i;
            }
        }
        return {repeat, miss};
    }
};
