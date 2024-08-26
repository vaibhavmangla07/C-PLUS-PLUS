// Possible Sub-Arrays

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter Array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << endl;
    cout << "Posible Sub-Arrays are : " << endl;
    
    auto start = high_resolution_clock::now();
    
    
    for (int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) { 
            for(int k = i; k <= j; k++){
                
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}
