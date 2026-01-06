// Day 32 - K-th element of two Arrays

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        int n = a.size();
        int m = b.size();
        
        if(n > m) {
            return kthElement(b, a, k);
        }
        
        int low = max(0, k - m);
        int high = min(k, n);
        
        while(low <= high) {
            int cutA = (low + high) / 2;
            int cutB = k - cutA;
            
            int l1 = (cutA == 0) ? INT_MIN : a[cutA - 1];
            int l2 = (cutB == 0) ? INT_MIN : b[cutB - 1];
            int r1 = (cutA == 0) ? INT_MAX : a[cutA];
            int r2 = (cutB == 0) ? INT_MAX : b[cutB];
            
            if(l1 <= r2 && l2 <= r1) {
                return max(l1, l2);
            }
            else if(l1 > r2) {
                high = cutA - 1;
            }
            else {
                low = cutA + 1;
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> a, b;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            b.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(a, b, k) << endl << "~\n";
    }
    return 0;
}
// } Driver Code Ends