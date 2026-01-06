// Find Words Containing Character

#include<bits/stdc++.h>
using namespace std;

vector<int> findWordsContaining(vector<string>& words, char x) {
    vector<int> ans;

    for(int i = 0; i < words.size(); i++) {
        for(int j = 0; j < words[i].size(); j++) {

            if(words[i][j] == x) {
                ans.push_back(i);
                break;
            }
        }
    }
    return ans;
}

int main() {
    vector<string> words = {"abc","bcd","aaaa","cbc"};
    char x = 'a';
    for(auto val : findWordsContaining(words, x)) {
        cout << val << " ";
    }
    return 0;
}