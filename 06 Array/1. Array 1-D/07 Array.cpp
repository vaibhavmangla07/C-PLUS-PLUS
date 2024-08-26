//Min and Max Value of Array

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int main() {
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter array elements: ";
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    
    auto start = high_resolution_clock::now();
    
    for(int i = 0; i < n; i++) {
            maxNo = max(maxNo, arr[i]);
            minNo = min(minNo, arr[i]);
        
    }
    cout << "Max value in the array: " << maxNo << endl;
    cout << "Min value in the array: " << minNo << endl;
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\n\nTime taken to execute: " << duration.count() << " microseconds" << endl;

    return 0;
}
