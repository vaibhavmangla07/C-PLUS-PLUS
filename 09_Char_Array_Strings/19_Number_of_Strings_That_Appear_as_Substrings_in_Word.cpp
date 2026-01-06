// Number of Strings That Appear as Substrings in Word

#include<bits/stdc++.h>
using namespace std;

int numOfStrings(vector<string>& patterns, string word) {
    int count = 0;
    for(int i = 0; i < patterns.size(); i++){
        int pos = word.find(patterns[i]);
        if (pos < word.size()) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<string> patterns = {"a","abc","bc","d"};
    string word = "abc";
    cout << numOfStrings(patterns, word) << endl;
    return 0;
}
