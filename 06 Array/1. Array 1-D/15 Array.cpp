//Insertion

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
    
    cout << "Enter an element and position number: ";
    cin >> element >> pos;
    
    auto start = high_resolution_clock::now();

    if(pos < 1 || pos > n + 1) {
        cout << "Invalid position!" << endl;
        return 1; //return true;
    }
    
    pos = pos - 1; 
    
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    
    for(int i = 0; i < n + 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}
