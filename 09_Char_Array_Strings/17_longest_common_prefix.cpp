// Longest Common Prefix

#include <bits/stdc++.h>
using namespace std;

    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int i = 0;

        while(true) {
            char current = 0;

            for(auto str : strs) {
                if(i >= str.size()) {
                    current = 0;
                    break;
                }
                if(current == 0) {
                    current = str[i];
                }
                else if(str[i] != current) {
                    current = 0;
                    break;
                }
            }
            if(current == 0) {
                    break;
            }
            ans.push_back(current);
            i++;
        }
    return ans;
    }

int main() {
    vector<string> strs = {"flower","flow","flight"};
    cout << longestCommonPrefix(strs) << endl;
    return 0;
}