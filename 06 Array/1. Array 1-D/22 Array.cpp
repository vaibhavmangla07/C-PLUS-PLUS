// Record Breaker

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;


int main() {
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n+1];
    arr[n] = -1; 
    
    cout << "Enter Array: ";
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Record Breaker : ";
    

    auto start = high_resolution_clock::now();
    
    if(n ==1){
        cout << "1" << endl;
        
        return 0;
    }
    
    int ans = 0;
    int mx = -1;
    
    for(int i = 0; i < n; i++){
        
      if (arr[i] > mx && arr[i] > arr[i+1]){
          ans++;
      }
      mx = max(mx, arr[i]);
    }
    cout << ans << endl;
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}




