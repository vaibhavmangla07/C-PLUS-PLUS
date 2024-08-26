// First Repeating Element

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
    cout << "First Repeating Element : ";
    

    auto start = high_resolution_clock::now();
    
    const int N = 1e6 + 2;
    int idx[N];
    
    for (int i = 0; i < N; i++){
       idx[i] = -1;
    }
    
    int minidx = INT_MAX;
    
    for(int i = 0; i < n; i++){
        
      if (idx[arr[i]] != -1){
          
        minidx = min(minidx, idx[arr[i]]);
        }
      else{
          idx[arr[i]] = i;
        }
    }
    
    if(minidx == INT_MAX){
        cout << -1 << endl;
    }
    else{
        cout << minidx +1 << endl;
    }
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}




