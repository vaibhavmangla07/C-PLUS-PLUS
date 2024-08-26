// Ascending order of array

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int main() {
    int n, temp;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter array elements: ";
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    auto start = high_resolution_clock::now();
    
    
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            
            if(arr[i]>arr[j]) {
                
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Array in ascending order is : "; 
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
        
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\n\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}
      
      
      
      
      
      
      