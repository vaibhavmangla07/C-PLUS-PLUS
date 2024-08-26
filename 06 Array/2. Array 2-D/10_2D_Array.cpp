// Search in Sorted Matrix

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

bool search(int arr[100][100], int n, int m, int key) {
    int i = 0;
    int j = m-1;
    
    while(i < n && j >=0) {
        if(arr[i][j] == key) {
            
            cout << "\nFound at Cell (" << i+1 << "," << j+1 << ")\n";
            return true;
        }
        else if(arr[i][j] > key) {
            j--;
        }
        else{
            i++;
        }
    }
    
    cout << "\nKey Not Found" << endl;
    return false;
}

int main() {
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    
    int m;
    cout << "Enter the number of column : ";
    cin >> m;

    int arr[100][100];
    cout << "Enter Sorted Array : ";
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            
            cin >> arr[i][j];
        }
    }
    
    cout << endl;
    
    int key;
    cout << "Enter a number to search : "; 
    cin >> key;
    
    cout << endl;
    
    auto start = high_resolution_clock::now();
    
    cout << "Sorted Matrix : \n";
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    search(arr, n, m, key);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}
