// Maximum Sub-Array Sum
// Prefix Sum Technique

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
    
    int CurrentSum[n+1];
    CurrentSum[0] = 0;
    
    for (int i = 1; i <= n; i++) {
        
        CurrentSum[i] = CurrentSum[i-1] + arr[i-1];
    }
    
    int maxSum = INT_MIN;
    for (int i = 1; i <= n; i++) {
        
        int sum = 0;
        for(int j = 0; j < i; j++) { 
            
            sum = CurrentSum[i] - CurrentSum[j];
            maxSum = max(maxSum, sum);
        }
    }
    
    cout << maxSum << endl;
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}
