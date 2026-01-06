// 1975. Maximum Matrix Sum

class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        long long sum = 0;
        int Min = INT_MAX;
        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                int value = matrix[i][j];
                sum += abs(value); 

                if (value < 0) {
                    count++; 
                }
                Min = min(Min, abs(value)); 
            }
        }
        if (count % 2 != 0) {
            sum -= 2 * Min;
        }

        return sum;
    }
};

