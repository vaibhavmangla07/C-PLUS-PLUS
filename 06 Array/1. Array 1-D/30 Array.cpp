// Maximum Circular Sub-Array Sum

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int kadane(int arr[], int n){
    
    int CurrentSum = 0;
    int maxSum = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        
        CurrentSum += arr[i];
        if(CurrentSum < 0){
            CurrentSum = 0;
        }
        maxSum = max(maxSum, CurrentSum);
    }
    
    return maxSum; 
}

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
    cout << "Maximum Circular Sub-Array Sum is : ";
    
    auto start = high_resolution_clock::now();
    
    int wrapsum;
    int nonwrapsum;
    
    nonwrapsum = kadane(arr, n);
    
    int totalsum = 0;
    
    for(int i = 0; i < n; i++){
        
        totalsum += arr[i];
        arr[i] = -arr[i];
    }
    
    wrapsum = totalsum + kadane(arr, n);
    
    cout << max(wrapsum, nonwrapsum) << endl;
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}
