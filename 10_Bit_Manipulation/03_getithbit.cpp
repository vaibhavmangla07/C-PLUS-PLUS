// Get ith Bit

#include<bits/stdc++.h>
using namespace std;

int get_ith_bit(int n, int i) {
    int mask = 1 << i;

    if(!(n & mask)) {
        return 0;
    }
    else {
        return 1;
    }
}

int main() {
    cout << get_ith_bit(6, 2) << endl;
    cout << get_ith_bit(7, 1) << endl;

    return 0;
}