// Painter Partition Problem

#include <bits/stdc++.h>
using namespace std;

bool is_possible_solution(vector<int>& arr, int k, long long mid) {
    long long time = 0;
    int count = 1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > mid) {
            return false;
        }
        if (time + arr[i] > mid) {
            count++;
            time = arr[i];
            
            if (count > k) {
               return false;
            }
        }
        else {
            time += arr[i];
        }
    }
    return true;
}

long long min_time(vector<int>& arr, int k) {
    if (k > arr.size()) {
        return -1;
    }
    
    long long start = 0;
    long long end = 0;

    for(int i = 0; i < arr.size(); i++) {
        end += arr[i];
    }

    long long ans = -1;
    
    while (start <= end) {
        long long mid = (start + end) / 2;
        if (is_possible_solution(arr, k, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {5, 10, 30, 20, 15};
    int k = 3;  

    cout << min_time(arr, k) << endl;

    return 0;
}
