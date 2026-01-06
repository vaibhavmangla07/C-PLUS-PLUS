// Day 36 - Spirally traversing a matrix

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        // code here
        int m = mat.size();
        int n = mat[0].size();
        
        vector<int> ans;
        
        int rowStart = 0;
        int rowEnd = m - 1;
        
        int colStart = 0;
        int colEnd = n - 1;
        
        while(rowStart <= rowEnd && colStart <= colEnd) {
            // rowStart
            for(int col = colStart; col <= colEnd; col++) {
                ans.push_back(mat[rowStart][col]);
            }
            rowStart++;
            
            // colEnd
            for(int row = rowStart; row <= rowEnd; row++) {
                ans.push_back(mat[row][colEnd]);
            }
            colEnd--;
            
            // rowEnd
            if(rowStart <= rowEnd) {
                for(int col = colEnd; col >= colStart; col--) {
                    ans.push_back(mat[rowEnd][col]);
                }
                rowEnd--;
            }
            
            // ColStart
            if(colStart <= colEnd) {
                for(int row = rowEnd; row >= rowStart; row--) {
                    ans.push_back(mat[row][colStart]);
                }
                colStart++;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r);

        for (int i = 0; i < r; i++) {
            matrix[i].assign(c, 0);
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends