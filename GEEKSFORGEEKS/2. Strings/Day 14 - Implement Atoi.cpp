// Day 14 - Implement Atoi

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
    public:
      int myAtoi(char *s) {
          // Your code here
          int sign = 1;
          int ans = 0;
          int i = 0;
          
          while(s[i] == ' ') {
              i++;
          }
          
          if(s[i] == '-') {
              sign = -1;
              i++;
          }
          
          while(s[i] >= '0' && s[i] <= '9') {
              int digit = s[i]-'0';
              
              if(ans > INT_MAX/10 || (ans == INT_MAX/10 && digit > 7)) {
                  if(sign == 1) {
                      return INT_MAX;
                  }
                  return INT_MIN;
              }
              ans = ans*10 + digit;
              i++;
          }
          
          return sign*ans;
      }
  };


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[20];
        cin >> s;
        Solution ob;
        int ans = ob.myAtoi(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends