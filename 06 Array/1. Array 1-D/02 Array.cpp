// Enter no. of Array and Element
#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int main() {
    int n;
    
    cout << "Enter no. of elements : ";
    cin >> n;
    
    int arr[n];
    cout << "\nEnter array : ";
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Array : ";
    
    auto start = high_resolution_clock::now();
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "\n\nTime taken to execute: " << duration.count() << " microseconds" << endl;

    return 0;
}