// Find the Duplicate Number

#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& arr) {
    while(arr[0] != arr[arr[0]]) {
        swap(arr[0], arr[arr[0]]);
    }
    return arr[0];
}

int main() {
    vector <int> arr{1,3,4,2,2};

    cout << "Duplicate Number : " << findDuplicate(arr) << endl;

    return 0;
}

