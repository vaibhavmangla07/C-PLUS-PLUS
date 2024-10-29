// Move all negative numbers to left

#include <bits/stdc++.h>
using namespace std;

void move(vector <int>& arr) {
    int low = 0;
    int high = arr.size() - 1;

    while(low < high) {
        if(arr[low] < 0) {
            low++;
        }
        else if (arr[high] > 0) {
            high--;
        }
        else {
            swap(arr[low], arr[high]);
        }
    }

}

int main() {
    vector <int> arr = {1, 2, -3, 4, -7, 8};

    move(arr);
    
    cout << "Sorted Array : "; 
    for(auto val: arr) {
        cout << val << " ";
    }

    return 0; 
}