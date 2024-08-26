// Basics of Array
#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    
    auto start = high_resolution_clock::now();
    
    cout << arr[0] << " " << arr[4] << endl; 
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;

    return 0;
}