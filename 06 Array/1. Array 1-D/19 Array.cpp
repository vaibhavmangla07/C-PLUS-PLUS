// Max till i

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
    cout << "max till i" << endl;
    

    auto start = high_resolution_clock::now();
    
    int mx = -1999999;
    
    for(int i = 0; i < n; i++){
        
        mx = max(mx, arr[i]);
        cout << mx << endl; 
    }
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}




