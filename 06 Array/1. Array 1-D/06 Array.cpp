// Min value in Array
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
    
    int min = arr[0];
    
    auto start = high_resolution_clock::now();
    
    for(int i = 0; i < n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout << "Min Value in Array : " << min << endl;
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "\n\nTime taken to execute: " << duration.count() << " microseconds" << endl;

    return 0;
}