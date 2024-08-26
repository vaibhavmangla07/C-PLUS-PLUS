// Searching in Matrix

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
    
    int x;
    
    cout << "Enter a number to search : ";
    cin >> x;
    
    cout << endl;
    
    auto start = high_resolution_clock::now();

    bool flag = false;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            
            if(arr[i][j] == x){
                
                flag = true;
            }
        }
    }
    
    if(flag){
        cout << "Element Found";
    }
    else{
        cout << "Not Found";
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}
