// Missing Elements From An Array With Duplicates using Sorting + Swapping method

#include <bits/stdc++.h>
using namespace std;

void find_missing_elements(vector<int>& arr) {
    sort(arr.begin(), arr.end());

    cout << "Missing elements: ";
    int expected = arr[0];  

    for (int i = 0; i < arr.size(); i++) {
        while (arr[i] > expected) {  
            cout << expected << " ";
            expected++;  
        }
        expected = arr[i] + 1; 
    }

    while (expected <= arr[arr.size() - 1]) {
        cout << expected << " ";
        expected++;
    }
    cout << endl;
}

int main() {
    vector<int> arr{1, 3, 5, 3, 4};
    find_missing_elements(arr);

    return 0;
}
