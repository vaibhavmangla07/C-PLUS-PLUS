// Pair Sum 

#include <bits/stdc++.h>
using namespace std;

void findPairsWithSum(const vector<int>& arr, int sum) {
    cout << "Pairs with sum " << sum << ":" << endl;
    
    for (int i = 0; i < arr.size(); i++) {
        int element = arr[i];

        for (int j = i + 1; j < arr.size(); j++) {
            if (element + arr[j] == sum) {
                cout << "Pair Found: " << element << ", " << arr[j] << endl;
            }
        }
    }
}

int main() {
    vector<int> arr{1, 2, 3, 4, 5, 6, 7};
    int sum = 8;

    findPairsWithSum(arr, sum);

    return 0;
}
