// Sum of Array
#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int main() {
    int n, sum = 0;
    
    cout << "Enter no. of elements : ";
    cin >> n;
    
    int arr[n];
    cout << "\nEnter array : ";
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Sum of Array : ";
    
    auto start = high_resolution_clock::now();
    
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    cout << sum;
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "\n\nTime taken to execute: " << duration.count() << " microseconds" << endl;

    return 0;
}