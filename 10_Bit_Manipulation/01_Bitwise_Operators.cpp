// Bitwise Operators

#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "\tBitwise Operators : " << endl;
    cout << "\t-------------------" << endl;

    // Bitwise AND
    cout << "\t1. Bitwise AND : " << "(3 & 5) = " << (3 & 5) << endl; // 1

    // Bitwise OR
    cout << "\t2. Bitwise OR : " << "(3 | 5) = " << (3 | 5) << endl; // 7

    // Bitwise XOR
    cout << "\t3. Bitwise XOR : " << "(3 ^ 5) = " << (3 ^ 5) << endl; // 6

    // Bitwise NOT
    cout << "\t4. Bitwise NOT : " << "(~5) = " << (~5) << endl; // -6

    // Left Shift
    cout << "\t5. Left Shift : " << "(7 << 2) = " << (7 << 2) << endl; // 28

    // Right Shift
    cout << "\t6. Right Shift : " << "(7 >> 2) = " << (7 >> 2) << endl; // 1

    return 0;
}