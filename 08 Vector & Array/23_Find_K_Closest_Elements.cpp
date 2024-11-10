// Find_K_Closest_Elements

#include<bits/stdc++.h>
using namespace std;

vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    int low = 0;
    int high = arr.size() - 1;

    while(high - low >= k) {
        if(x-arr[low] > arr[high] - x) {
            low++;
        }
        else{
            high--;
        }
    }
    vector<int> ans;
    for(int i = low; i <= high; i++) {
        ans.push_back(arr[i]);
    }
    return ans;
}

int main() {
    vector<int> arr{1,2,3,4,5};
    int k = 4;
    int x = 3;

    vector<int> result = findClosestElements(arr, k, x);
    
    for(auto val : result) {
        cout << val << " ";
    }

    return 0;
}