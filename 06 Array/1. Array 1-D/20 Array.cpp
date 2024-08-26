// Sum of Sub-Arrays

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
    cout << "Sum of Sub-Arrays : " << endl;
    

    auto start = high_resolution_clock::now();
    
    int current = 0;
    
    for(int i = 0; i < n; i++){
        current = 0;
        
        for(int j = i; j < n; j++){
            current += arr[j];
            cout << current << endl;
        }
         
    }
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}




