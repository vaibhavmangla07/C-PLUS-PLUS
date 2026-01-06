// Day 44 - Find All Triplets with Zero Sum

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        // Code here
        map<int, vector<int>> freq;
        vector<vector<int>> ans;
        
        for(int j = 0; j < arr.size(); j++) {
            for(int k = j + 1; k < arr.size(); k++) {
                int val = -1 * (arr[j] + arr[k]);
                if(freq.find(val) != freq.end()){
                    for(auto& i : freq[val]) {
                        ans.push_back({i, j, k});
                    }
                }
            }
            freq[arr[j]].push_back(j);
        }
        return ans;
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;

        vector<vector<int>> res = ob.findTriplets(arr);
        sort(res.begin(), res.end());
        if (res.size() == 0) {
            cout << "[]\n";
        }
        for (int i = 0; i < res.size(); i++) {
            for (int j = 0; j < res[i].size(); j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends