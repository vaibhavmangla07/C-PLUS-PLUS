// Day 19 - Min Chars to Add for Palindrome

//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minChar(string& s) {
        // Write your code here
        string rev = s;
        reverse(rev.begin(), rev.end());
        
        string temp = s + '#' + rev;
        int n = temp.length();
        
        vector<int> lps(n, 0);
        int len = 0;
        
        for(int i = 1; i < n; i++) {
            while(len > 0 && temp[i] != temp[len]) {
                len = lps[len - 1];
            }
            if(temp[i] == temp[len]) {
                len++;
                lps[i] = len;
            }
        }
        return s.length() - lps[n - 1];
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.minChar(str);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends