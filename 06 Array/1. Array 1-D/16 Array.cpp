// Deletion

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int main() {
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n + 1]; 
    cout << "Enter array elements: ";
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int pos, element;
    
    cout << "Enter position number to delete : ";
    cin >> pos;
    
    auto start = high_resolution_clock::now();
    
    pos = pos - 1; 
    
    if(pos < 0 || pos >= n) {
        cout << "Invalid position!" << endl;
        return 1; //return true;
    }
    
    for(int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    cout << "Array after deletion: ";
    for(int i = 0; i < n - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}
