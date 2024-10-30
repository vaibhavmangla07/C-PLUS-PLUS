// Find first repeating element

#include <bits/stdc++.h>
using namespace std;

int first_repeat(vector <int>& arr) {
    for(int i = 0; i < arr.size(); i++) {
        bool isRepeat = false;
        for(int j = i + 1; j < arr.size(); j++) {
            if(arr[i] == arr[j]) {
                isRepeat = true;
                return i+1;  
            }
        }
    }
    return -1;
}

int main() {
    vector <int> arr{1, 5, 3, 4, 3, 5, 6};

    cout << first_repeat(arr) << endl;

    return 0;
}