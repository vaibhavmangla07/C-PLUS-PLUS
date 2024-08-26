// Merge Sort

#include <bits/stdc++.h>
using namespace std;

void Merge(int arr[], int l, int mid, int r) {
    
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1]; // Temp Arrays
    int b[n2]; // Temp Arrays

    for (int i = 0; i < n1; i++) {
        a[i] = arr[l + i];
    }

    for (int i = 0; i < n2; i++) {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        
        if (a[i] <= b[j]) {
            arr[k] = a[i];
            i++;
        }
        else {
            arr[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = a[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = b[j];
        j++;
        k++;
    }
}

void MergeSort(int arr[], int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;

        MergeSort(arr, l, mid);
        MergeSort(arr, mid + 1, r);

        Merge(arr, l, mid, r);
    }
}

int main() {
    int arr[] = { 7, 1, 9, 11, 13, 5, 16 };
    int n = sizeof(arr) / sizeof(arr[0]);

    MergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}