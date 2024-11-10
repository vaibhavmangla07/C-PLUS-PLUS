// Reverse Integer

#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
    int ans = 0;
    int rem;

    bool isNeg = false;

    if(x > 0) {
        isNeg = true;
        x = -x;
    }
    while(x < 0) {
        int digit = x % 10;
        ans = ans * 10 + digit;
        x /= 10;
    }
    return isNeg ? -ans : ans;
}

int main() {
    int x;

    cout << "Enter a Number : ";
    cin >> x;

    int reverse_number = reverse(x);
    cout << "Reverse Number : " << reverse_number << endl;

    return 0;
}