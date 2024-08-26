// Pointer Matrix

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int main() {
    int mat[4][4] = {{4, 2, 0, 1},
                    {2, 6, 9, 3},
                    {7, 5, 8, 6},
                    {8, 6, 4, 2}};
    
    
    cout << endl;
    
    auto start = high_resolution_clock::now();
    
    cout << mat << endl;
    cout << mat+1 << endl;
    cout << mat+2 << endl;
    cout << mat+3 << endl;
    
    cout << endl;
    
    cout << &mat[0][1] << endl;
    cout << &mat[1][1] << endl;
    cout << &mat[2][0] << endl;
    cout << &mat[3][2] << endl;
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}
