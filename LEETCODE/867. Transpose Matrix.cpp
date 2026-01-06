// 867. Transpose Matrix

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& arr) {
        int n = arr.size(); 
        int m = arr[0].size(); 
        
        vector<vector<int>> result(m, vector<int>(n)); 
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++){
                result[j][i] = arr[i][j];
            }
        }
        
        return result;
    }
};
