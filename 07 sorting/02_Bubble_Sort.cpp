// Bubble Sort

#include <bits/stdc++.h>
using namespace std;

void Bubble_Sort(int arr[], int n) {
    int counter = 0;
    
    while(counter < n - 1) {
        for(int i = 0; i < n - counter - 1; i++) {
            
            if(arr[i] > arr[i+1]) {
               
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
}

int main() {
    int arr[] = { 7, 1, 9, 11, 13, 5, 16 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    Bubble_Sort(arr, n); 
   
    cout << "Sorted Array : ";
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}