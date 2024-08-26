// Diagonal Sum Matrix Method 2

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int DiagonalSum(int arr[100][100], int n){
    int sum = 0;
    
    for(int i = 0; i < n; i++) {
        sum += arr[i][i];
        
        if(i != n-i-1){
            sum += arr[i][n-i-1];
        }
    }
    
    cout << "\nDiagonal Sum = " << sum << endl;
    
    return sum;
}

int main() {
    int n;
    cout << "Enter the number of rows and column : ";
    cin >> n;

    int arr[100][100];
    cout << "Enter Array : ";
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            
            cin >> arr[i][j];
        }
    }
    
    cout << endl;
    
    auto start = high_resolution_clock::now();
    
    cout << "Matrix : \n";
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    DiagonalSum(arr, n);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}
