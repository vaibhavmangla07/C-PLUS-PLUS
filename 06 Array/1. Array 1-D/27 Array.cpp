// Maximum Sub-Array Sum
// Brute Force Approach

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
    cout << "Maximum Sub-Array Sum is : ";
    
    auto start = high_resolution_clock::now();
    
    int maxSum = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) { 
            
            int sum = 0;
            
            for(int k = i; k <= j; k++){
                
                sum += arr[k];
            }
            maxSum = max(maxSum, sum);
        }
    }
    
    cout << maxSum << endl;
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}
