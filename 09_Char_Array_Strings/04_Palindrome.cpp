// Check Palindrome

#include <bits/stdc++.h>
using namespace std;

bool Check_Palindrome(char arr[]) {
    int n = strlen(arr);
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    char arr[] = "madam";
    if (Check_Palindrome(arr)) {
        cout << "The string is a palindrome." << endl;
        } 
        else {
            cout << "The string is not a palindrome." << endl;
        }
}