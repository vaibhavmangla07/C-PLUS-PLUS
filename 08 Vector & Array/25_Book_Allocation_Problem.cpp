// BOOK ALLOCATION PROBLEM

#include <bits/stdc++.h>
using namespace std;

bool is_possible_solution(vector<int>& arr, int M, int sol) {
    int page = 0;
    int count = 1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > sol) {
            return false;
        }
        if (page + arr[i] > sol) {
            count++;
            page = arr[i];
            
            if (count > M) {
               return false;
            }
        }
        else {
            page += arr[i];
        }
    }
    return true;
}

int find_pages(vector<int>& arr, int M) {
    if (M > arr.size()) {
        return -1;
    }
    
    int start = 0;
    int end = accumulate(arr.begin(), arr.end(), 0);
    int ans = -1;
    
    while (start <= end) {
        int mid = (start + end) / 2;
        if (is_possible_solution(arr, M, mid)) {
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
    vector<int> arr = {12, 34, 67, 90};
    int M = 2;  // Number of students
    
    int result = find_pages(arr, M);
    cout << "Minimum number of pages = " << result << endl;

    return 0;
}
