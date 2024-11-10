// Find if Array Can Be Sorted

#include<bits/stdc++.h>
using namespace std;

bool canSortArray(vector<int>& arr) {
    for(int i = 0; i < arr.size(); i++) {
        bool isSorted = false;
        for(int j = 0; j < arr.size() - i - 1; j++) {
            if(arr[j] <= arr[j+1]) {
                continue;
            }
            else if(__builtin_popcount(arr[j]) == __builtin_popcount(arr[j+1])) {
                swap(arr[j], arr[j+1]);
                isSorted = true;
            }
            else {
                return false;
            }
        }
        if(!isSorted) {
            break;
        }
    }
    return true;
}

int main() {
    vector<int> arr {8, 4, 2, 30, 15};
    cout << boolalpha << canSortArray(arr) << endl;

    return 0;
}