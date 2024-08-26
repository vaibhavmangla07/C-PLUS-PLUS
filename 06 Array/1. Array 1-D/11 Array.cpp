// sum of 2 array

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int main() {
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr1[n];
    cout << "Enter array1 elements: ";
    
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    
    int arr2[n];
    cout << "Enter array2 elements: ";
    
    for(int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    
    int sum[n];
    
    auto start = high_resolution_clock::now();
    
    cout << "Addition of two Array is : ";
    
    for(int i = 0; i < n; i++){
        sum[i] = arr1[i] + arr2[i];
    }
    
    for(int i = 0; i < n; i++){
        cout << sum[i] << " ";
    }
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\n\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}
      
      
      
      
      
      
      