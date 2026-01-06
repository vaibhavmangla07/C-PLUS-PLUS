// Day 18 - Search Pattern (KMP-Algorithm)

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void helper(string& pat, vector<int>& lps) {
        int len = 0;
        lps[0] = 0;
        int i = 1;
        
        while(i < pat.length()) {
            if(pat[i] == pat[len]) {
                len++;
                lps[i] = len;
                i++;
            }
            else {
                if(len != 0) {
                    len = lps[len - 1];
                }
                else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }
    
    vector<int> search(string& pat, string& txt) {
        // code here
        int n = txt.length();
        int m = pat.length();
        
        vector<int> lps(m);
        vector<int> ans;
        
        helper(pat, lps);
        
        int i = 0; 
        int j = 0;
        
        while(i < n) {
            if(txt[i] == pat[j]) {
                i++;
                j++;
                
                if(j == m) {
                    ans.push_back(i - j);
                    j = lps[j - 1];
                }
            }
            else {
                if(j != 0) {
                    j = lps[j - 1];
                }
                else {
                    i++;
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector<int> res = ob.search(pat, S);
        if (res.size() == 0)
            cout << "[]" << endl;
        else {
            for (int i : res)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// } Driver Code Ends