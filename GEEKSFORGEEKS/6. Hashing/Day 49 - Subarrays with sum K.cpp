// Day 49 - Subarrays with sum K

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        // code here
        unordered_map<int, int> prefSum;
        int count = 0;
        int currSum = 0;
        for(int i = 0; i < arr.size(); i++) {
            currSum += arr[i];
            if(currSum == k) {
                count++;
            }
            if(prefSum.find(currSum-k) != prefSum.end()) {
                count += prefSum[currSum-k];
            }
            prefSum[currSum]++;
        }
        return count;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.countSubarrays(arr, k);
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends