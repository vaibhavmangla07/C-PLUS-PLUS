// Day 41 - Set Matrix Zeroes

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        int rows = mat.size();
        int cols = mat[0].size();
        
        bool firstRowZero = false;
        bool firstColZero = false;
        
        // check if the first col needs to be zero
        for(int i = 0; i < rows; i++) {
            if(mat[i][0] == 0) {
                firstColZero = true;
                break;
            }
        }
        
        // check if the first row needs to be zero
        for(int j = 0; j < cols; j++) {
            if(mat[0][j] == 0) {
                firstRowZero = true;
                break;
            }
        }
        
        // use the first row and column to mark zeroes
        for(int i = 1; i < rows; i++) {
            for(int j = 1; j < cols; j++) {
                if(mat[i][j] == 0) {
                    mat[i][0] = 0;
                    mat[0][j] = 0;
                }
            }
        }
        
        // Update the Cells
        for(int i = 1; i < rows; i++) {
            for(int j = 1; j < cols; j++) {
                if(mat[i][0] == 0 || mat[0][j] == 0) {
                    mat[i][j] = 0;
                }
            }
        }
        
        // Zero out the first row if needed
        if(firstRowZero) {
            for(int j = 0; j < cols; j++) {
                mat[0][j] = 0;
            }
        }
        
        // Zero out the first cols if needed
        if(firstColZero) {
            for(int i = 0; i < rows; i++) {
                mat[i][0] = 0;
            }
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        ob.setMatrixZeroes(arr);
        for (auto x : arr) {
            for (auto y : x)
                cout << y << " ";
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends