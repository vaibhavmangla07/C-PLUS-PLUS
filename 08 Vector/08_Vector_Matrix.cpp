// Vector Matrix

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <vector<int>> matrix;

    vector <int> arr1{1, 2, 3};
    vector <int> arr2{5, 4, 3};
    vector <int> arr3{7, 8, 9};

    matrix.push_back(arr1);
    matrix.push_back(arr2);
    matrix.push_back(arr3);

    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
