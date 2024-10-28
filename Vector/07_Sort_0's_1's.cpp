// Sort_0's_1's

#include <bits/stdc++.h>
using namespace std;

void sort(vector <int>& arr) {
    int start = 0;
    int end = arr.size() -1;

    int i = 0;

    while(start <= end) {
        if(arr[i] == 0) {
            swap(arr[start], arr[i]);
            start++;
            i++;
        }
        else {
            swap(arr[i], arr[end]);
            end--;
        }
    }
}

int main() {
    vector <int> arr{0, 1, 0, 1, 1, 0, 1, 0, 1, 1};

    sort(arr);

    cout << "Sorted array is: ";
    for(auto val: arr) {
        cout << val << " ";
    }

    return 0;
}