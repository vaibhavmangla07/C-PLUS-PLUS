// Multiplication of Matrix 3x3

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int main() {
    
    int arr1[3][3];
    cout << "Enter Array A: ";
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++){
            
            cin >> arr1[i][j];
        }
    }
    
    int arr2[3][3];
    cout << "Enter Array B: ";
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++){
            
            cin >> arr2[i][j];
        }
    }
    
    cout << endl;
    
    auto start = high_resolution_clock::now();
    
    int arr3[3][3];
    
    cout << "Multiplication of Matrix A & B: \n";
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++){
            
            arr3[i][j] = 0;
            
            for(int k = 0; k < 3; k++){
                
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}
