// Selection Sort

#include <bits/stdc++.h>
using namespace std;

void Selection_Sort(int arr[], int n) {
    
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            
            if(arr[j] < arr[i]){
                
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main() {
    int arr[] = { 7, 1, 9, 11, 13, 5, 16 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    Selection_Sort(arr, n);
    
    cout << "Sorted Array : ";
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}