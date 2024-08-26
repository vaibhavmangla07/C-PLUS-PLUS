// Smallest Positive Missing Number

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
    cout << "Smallest Positive Missing Number : ";
    
    auto start = high_resolution_clock::now();
    
    const int N = 1e6 + 2;
    bool check[N] = {false}; 
    
    for (int i = 0; i < n; i++) {

        if (arr[i] >= 0 && arr[i] < N) { 
            check[arr[i]] = true;
        }
    }
    
    int ans = -1;
    
    for(int i = 1; i < N; i++) { 
        
        if (check[i] == false) {
            
            ans = i;
            break;
        }
    }
    
    cout << ans << endl;
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}
