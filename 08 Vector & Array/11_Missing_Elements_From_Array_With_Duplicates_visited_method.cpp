// Missing Elements From An Array With Duplicates using visiting method

#include <bits/stdc++.h>
using namespace std;

void find_missing_element(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        int index = abs(arr[i]) - 1;  

        if (index < arr.size() && arr[index] > 0) {
            arr[index] *= -1; 
        }
    }

    cout << "Missing elements: ";
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > 0) {  
            cout << i + 1 << " ";
        }
    }
    cout << endl;
}

int main() {
    vector<int> arr{1, 3, 5, 3, 4};
    find_missing_element(arr);

    return 0;
}
