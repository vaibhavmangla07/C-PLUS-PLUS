// Find Permutation

#include<bits/stdc++.h>
using namespace std;

void permutation(string str, string ans){
    int n = str.size();

    if(n == 0) {
        cout << ans << endl;
        return;
    }
    
    for(int i = 0; i < n; i++) {
        char ch = str[i];
        string new_str = str.substr(0 ,i) + str.substr(i+1, n-i-1);
        permutation(new_str, ans + ch);
    }
}

int main() {
    string str = "abc";
    string ans = "";
    permutation(str, ans);
    return 0;
}