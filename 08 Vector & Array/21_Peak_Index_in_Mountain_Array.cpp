// Peak_Index_in_Mountain_Array

#include <bits/stdc++.h>
using namespace std;

int Peak_Index(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;
        
        if (arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return start;  
}

int main() {
    vector<int> arr{0, 10, 5, 2};
    cout << "Peak Index: " << Peak_Index(arr) << endl;

    return 0;
}
