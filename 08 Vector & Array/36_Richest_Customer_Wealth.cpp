// Richest Customer Wealth

#include<bits/stdc++.h>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int ans = INT_MIN;

    for (int i = 0; i < accounts.size(); i++) {
        int current = 0;
        for (int j = 0; j < accounts[i].size(); j++) {
            current += accounts[i][j];  
        }
        ans = max(ans, current);       
    }
    return ans;
}

int main() {
    vector<vector<int>> accounts = {{1, 2, 3}, {3,2, 1}};
    cout << maximumWealth(accounts) << endl;

    return 0;
}

