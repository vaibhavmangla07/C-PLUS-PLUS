//Find Unique Element in an Array

#include <bits/stdc++.h>
using namespace std;

int find_unique_element(vector<int> arr) {
    int ans = 0; 

    for (int i = 0; i < arr.size(); i++) {
        ans ^= arr[i]; 
    }
    return ans;
}

int main() {
    vector<int> arr{2, 3, 1, 2, 3, 4, 5, 5, 6, 6, 1}; 

    cout << "Given Array: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    int unique_element = find_unique_element(arr);

    cout << "\nUnique Element: " << unique_element << endl;

    return 0;
}
