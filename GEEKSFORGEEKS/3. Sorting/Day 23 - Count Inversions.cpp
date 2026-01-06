// Day 23 - Count Inversions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to count inversions in the array.
    int CountAndMerge(vector<int>& arr, int l, int m, int r) {
        int leftSize = m - l + 1;
        int rightSize = r - m;
        
        vector<int> left(leftSize);
        vector<int> right(rightSize);
        
        for(int i = 0; i < leftSize; i++) {
            left[i] = arr[l + i];
        }
        for(int j = 0; j < rightSize; j++) {
            right[j] = arr[m + 1 + j];
        }
        
        int ans = 0;
        int i = 0; 
        int j = 0;
        int k = l;
        
        while(i < leftSize && j < rightSize) {
            if(left[i] <= right[j]) {
                arr[k++] = left[i++];
            }
            else {
                arr[k++] = right[j++];
                ans += (leftSize - i);
            }
        }
        
        while(i < leftSize) {
            arr[k++] = left[i++];
        }
        while(j < rightSize) {
            arr[k++] = right[j++];
        }
        return ans;
    }
    
    int count(vector<int>& arr, int l, int r) {
        int ans = 0;
        
        if(l < r) {
            int m = (l + r) / 2;
        
            // Recursive Call
            ans += count(arr, l, m);
            ans += count(arr, m + 1, r);
        
            ans += CountAndMerge(arr, l, m, r);
        }
        return ans;
    }
    
    int inversionCount(vector<int> &arr) {
        // Your Code Here
        int n = arr.size();
        return count(arr, 0, n - 1);
        
    }
};


//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends