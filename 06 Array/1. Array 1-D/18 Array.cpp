// Binary Search

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int BinarySearch(int arr[], int n, int key){
    int first, last, middle;
    
    first = 0;
    last = n;
    
    while(first <= last)
    {
        middle = (first + last) / 2;
        
        if(arr[middle] == key){
            return middle + 1;
        }
        else if (arr[middle] > key){
            last = middle - 1;
        }
        else{
            first = middle + 1;
        }
    }
    return -1;
}

int main() {
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n]; 
    cout << "Enter Sorted Array: ";
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int key;
    
    cout << "Enter array to search : ";
    cin >> key;
    
    auto start = high_resolution_clock::now();
    
    cout << "Position :  "; 
    
    cout << BinarySearch(arr, n, key) << endl;
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}




