// Fast Exponentiation

#include<bits/stdc++.h>
using namespace std;

void fastexpo(int x, int n) {
    int ans = 1;

    while(n > 0) {
        int lastbit = n & 1;
        if(lastbit) {
            ans *= x; 
        }
        x *= x;
        n >>= 1;
    }
    cout << ans << endl;
}

int main() {
    fastexpo(3, 4);
    return 0;
}