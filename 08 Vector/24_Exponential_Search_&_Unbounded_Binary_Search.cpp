// Exponential Search & Unbounded Binary Search

#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int>& arr, int start, int end, int key) {
    while(start <= end) {
        int mid = start + (end - start) / 2;
        
        if(arr[mid] == key) {
            return mid;
        }
        else if(arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1;
}

int exponential_search(vector<int>& arr, int n, int key) {
    if(arr[0] == key) {
        return 0;
    }

    int i = 1;
    while(i < n && arr[i] <= key) {
        i *= 2;
    }
    return binary_search(arr, i / 2, min(i, n - 1), key);
}

int main() {
    vector<int> arr = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int n = arr.size();
    int key = 13;
    int index = exponential_search(arr, n, key);

    cout << "Index of " << key << " is " << index << endl;

    return 0;
}
