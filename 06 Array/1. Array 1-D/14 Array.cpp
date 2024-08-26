// Division of 2 array

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int main() {
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    float arr1[n];
    cout << "Enter array1 elements: ";
    
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    
    float arr2[n];
    cout << "Enter array2 elements: ";
    
    for(int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    
    float div[n];
    
    auto start = high_resolution_clock::now();
    
    cout << "Product of two Array is : ";
    
    for(int i = 0; i < n; i++){
        if (arr2[i] == 0) {
            cout << "Division by zero error at index " << i << " ";
                div[i] = 0;  
        }
        else
        div[i] = arr1[i] / arr2[i];
    }
    
    for(int i = 0; i < n; i++){
        cout << div[i] << " ";
    }
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\n\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}