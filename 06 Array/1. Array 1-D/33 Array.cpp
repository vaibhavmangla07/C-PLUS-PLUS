// Best time to buy & sell stock (II)

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int maxProfit(int prices[], int n) {
       int ans = 0;

        for (int i = 1; i < n; i++) {
            ans += max(0, prices[i] - prices[i - 1]);
        }

        return ans;
    }

int main() {
    int prices[6] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices)/sizeof(int);
    
    cout << endl;
    
    auto start = high_resolution_clock::now();
    
    int profit = maxProfit(prices, n);
    
    cout << "Maximum Profit : " << profit << endl;
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}
