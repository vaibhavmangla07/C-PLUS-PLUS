// Addition of Matrix

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int main() {
    int n;
    cout << "Enter the number of rows ";
    cin >> n;
    
    int m;
    cout << "Enter the number of column ";
    cin >> m;
    
    int arr1[n][m];
    cout << "Enter Array A: ";
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            
            cin >> arr1[i][j];
        }
    }
    
    int arr2[n][m];
    cout << "Enter Array B: ";
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            
            cin >> arr2[i][j];
        }
    }
    
    cout << endl;
    
    auto start = high_resolution_clock::now();
    
    int arr3[n][m];
    
    cout << "Addition of Matrix A & B: \n";
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}
