// Valid Palindrome II

#include<bits/stdc++.h>
using namespace std;

bool isPalindromeRange(const string& s, int i, int j) {
    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

bool validPalindrome(string s) {
    int i = 0;
    int j = s.length() - 1;

    while (i < j) {
        if (s[i] != s[j]) {
            // Check by skipping either the left or the right character
            return isPalindromeRange(s, i + 1, j) || isPalindromeRange(s, i, j - 1);
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    string s = "abca";
    cout << boolalpha << validPalindrome(s) << endl; 
    return 0;
}
