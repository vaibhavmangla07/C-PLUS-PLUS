// Tiling problem

#include<bits/stdc++.h>
using namespace std;

// 2 x n
int tiling_problem(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    // Vertical
    int ans1 = tiling_problem(n - 1);  // 2 x n-1

    // Horizontal
    int ans2 = tiling_problem(n - 2);  // 2 x n-2

    return ans1 + ans2;
}

int main() {
    cout << tiling_problem(4) << endl;
    return 0;
}