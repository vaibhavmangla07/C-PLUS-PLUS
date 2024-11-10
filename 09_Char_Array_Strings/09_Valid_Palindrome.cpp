// Valid Palindrome 

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const char *s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        while (left < right && !isalnum(s[left])) {
            left++;
        }
        while (left < right && !isalnum(s[right])) {
            right--;
        }
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}


int main() {
    const char s[] = "A man, a plan, a canal: Panama"; 
    cout << boolalpha << isPalindrome(s) << endl; 

    return 0;
}
