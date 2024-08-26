// Insertion Sort

#include <bits/stdc++.h>
using namespace std;

void Insertion_Sort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = { 7, 1, 9, 11, 13, 5, 16 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    Insertion_Sort(arr, n);
    
    cout << "Sorted Array : ";
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}