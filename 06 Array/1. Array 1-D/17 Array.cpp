// Linear Search

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int LinearSearch(int arr[], int n, int key){

    for(int i = 0; i < n; i++){
        if(arr[i] == key){

            return i+1;
        }
    }
    return -1;
}

int main() {
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n]; 
    cout << "Enter array: ";
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int key;
    
    cout << "Enter array to search : ";
    cin >> key;
    
    auto start = high_resolution_clock::now();
    
    cout << LinearSearch(arr, n, key) << endl;
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}




