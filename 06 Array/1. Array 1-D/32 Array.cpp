// Best time to buy & sell stock

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int maxProfit(int prices[], int n) {

        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int i = 0; i < n; i++) {

            if (prices[i] < minPrice) {
                minPrice = prices[i];
            } 
            else if (prices[i] - minPrice > maxProfit) {
                maxProfit = prices[i] - minPrice;
            }
        }

        return maxProfit;
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
