// 1380. Lucky Numbers in a Matrix

class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> row_min(m, -1);

        for(int i = 0; i < m; i++) {
            int Row_Min = INT_MAX;

            for(int j = 0; j < n; j++) {
                Row_Min = min(matrix[i][j], Row_Min);
            }
            row_min[i] = Row_Min;
        }

        vector<int> col_max(n, -1);

        for(int j = 0; j < n; j++) {
            int Col_Max = INT_MIN;

            for(int i = 0; i < m; i++) {
                Col_Max = max(matrix[i][j], Col_Max);
            }
            col_max[j] = Col_Max;
        }
        
        vector<int> ans;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                
                if(row_min[i] == col_max[j]) {
                    ans.push_back(row_min[i]);
                }   
            }
        }
        return ans;
    }
};