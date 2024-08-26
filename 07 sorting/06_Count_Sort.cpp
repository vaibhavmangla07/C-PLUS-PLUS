// Count Sort

#include <bits/stdc++.h>
using namespace std;

void CountSort(int arr[], int n) {
    int freq[100000];
    
    int MinVal = INT_MAX;
    int MaxVal = INT_MIN;
    
    //1st step -- O(n)
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
        MinVal = min(MinVal, arr[i]);
        MaxVal = max(MaxVal, arr[i]);
    }
    
    //2nd step -- O(range)
    for(int i = MinVal, j = 0; i < MaxVal; i++) {
        while(freq[i] > 0) {
            arr[j++] = i;
            freq[i]--;
        }
        
    }
}

int main() {
    int arr[] = { 7, 1, 9, 11, 13, 5, 16 };
    int n = sizeof(arr) / sizeof(arr[0]);

    CountSort(arr, n);

    cout << "Sorted Array : ";
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}