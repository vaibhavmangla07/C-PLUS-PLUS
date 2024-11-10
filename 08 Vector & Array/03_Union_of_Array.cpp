// Union of an array

#include <bits/stdc++.h>
using namespace std;

void unionOfArrays(const int arr1[], const int arr2[]) {
    vector <int> ans;

    for (int i = 0; i < 5; i++) {
        ans.push_back(arr1[i]);
    }

    for (int i = 0; i < 3; i++) {
        ans.push_back(arr2[i]);
    }

    cout << "Union of two arrays: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7, 8};

    unionOfArrays(arr1, arr2);

    return 0;
}
