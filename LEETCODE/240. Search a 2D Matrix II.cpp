// 240. Search a 2D Matrix II

class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            for(auto& m : matrix) {
                if(!m.empty() && target >= m.front() && target <= m.back()) {
                    if(binary_search(m.begin(), m.end(), target)) {
                        return true;
                    }
                }
            }
            return false;
        }
    };