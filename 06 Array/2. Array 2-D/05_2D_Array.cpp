// Transpose of Matrix

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int main() {
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    
    int m;
    cout << "Enter the number of column : ";
    cin >> m;
    
    int arr[n][m];
    cout << "Enter Array : ";
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            
            cin >> arr[i][j];
        }
    }
    
    cout << endl;
    
    auto start = high_resolution_clock::now();
    
    cout << "Matrix : \n";
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nTranspose of Matrix : \n";
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}
