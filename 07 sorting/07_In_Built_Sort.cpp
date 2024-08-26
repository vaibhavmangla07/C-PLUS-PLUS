// In-built Sort Ascending

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = { 7, 1, 9, 11, 13, 5, 16 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    sort(arr, arr+n);

    cout << "Sorted Array : ";
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}