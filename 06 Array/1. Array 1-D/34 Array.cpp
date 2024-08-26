// Trapping Rainwater

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int trap(int heights[], int n) {
    int leftMax[20000];
    leftMax[0] = heights[0];
    
    int rightMax[20000];
    rightMax[n-1] = heights[n-1];
    
    for(int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i-1], heights[i-1]);
    }
    
    for(int i = n-2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i+1], heights[i+1]);
    }
    
    int waterTrapped = 0;
    for(int i = 0; i < n; i++) {
        int currWater = min(leftMax[i], rightMax[i]) - heights[i];
        if(currWater > 0) {
            waterTrapped += currWater;
        }
    }
    return waterTrapped;
}

int main() {
    int heights[7] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(heights)/sizeof(int);
    
    cout << endl;
    
    auto start = high_resolution_clock::now();
    
    int tr = trap(heights, n);
    
    cout << "Trapped Rainwater : " << tr << endl;
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}
