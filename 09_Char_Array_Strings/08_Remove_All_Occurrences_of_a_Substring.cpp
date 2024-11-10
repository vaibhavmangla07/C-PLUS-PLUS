// Remove_All_Occurrences_of_a_Substring

#include<bits/stdc++.h>
using namespace std;

string removeOccurrences(string s, string target) {
    while(s.length() > 0 && s.find(target) < s.length()) {
        s.erase(s.find(target), target.length());
    }
    return s;
}

int main() {
    string s = "eemckxmckx";
    string target = "emckx";
    string ans = removeOccurrences(s, target);
    
    cout<< "Ans : " << ans << endl;
    return 0;
}