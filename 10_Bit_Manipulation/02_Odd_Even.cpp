// Check Odd Even

#include <bits/stdc++.h>
using namespace std;

void checkOddEven(int n) {
    if (n & 1) {
        cout << n << " is Odd." << endl;
    } else {
        cout << n << " is Even." << endl;
    }
}

int main() {
    checkOddEven(3); // 3 is Odd.
    checkOddEven(4); // 4 is Even.

    return 0;
}