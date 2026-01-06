// Day 12 - Max Circular Subarray Sum

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {
        // your code here
        int maxSum = INT_MIN;
        int minSum = INT_MAX;
        
        int currMax = 0;
        int currMin = 0;
        int total = 0;
        
        for(auto& a : arr) {
            total += a;
            
            currMax = max(a, currMax + a);
            maxSum = max(maxSum, currMax);
            
            currMin = min(a, currMin + a);
            minSum = min(minSum, currMin);
        }
        if(maxSum < 0) {
            return maxSum;
        }
        return max(maxSum, total - minSum);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.circularSubarraySum(arr);

        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends