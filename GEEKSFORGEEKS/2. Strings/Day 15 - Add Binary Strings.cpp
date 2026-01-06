// Day 15 - Add Binary Strings

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        // your code here
        string ans = "";
        
        int i = s1.length() - 1;
        int j = s2.length() - 1;
        
        int carry = 0;
        
        while(i >= 0 || j >= 0 || carry != 0) {
            int b1 = (i >= 0) ? s1[i] - '0' : 0;   
            int b2 = (j >= 0) ? s2[j] - '0' : 0;
            
            int sum = b1 + b2 + carry;
            carry = sum / 2;
            
            ans = char((sum % 2) + '0') + ans;
            i--; j--;
        }
        int k = 0;
        while(k < ans.length() && ans[k] == '0') {
            k++;
        }
        if(k == ans.length()) {
            ans = '0';
        }
        else {
            ans = ans.substr(k);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addBinary(A, B);
        cout << "\n";

        cout << "~"
             << "\n";
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends