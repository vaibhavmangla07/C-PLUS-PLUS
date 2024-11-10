// Triplets With Sum

#include <bits/stdc++.h>
using namespace std;

void findTripletsWithSum(const vector<int>& arr, int sum) {
    cout << "Triplets with sum " << sum << ":" << endl;

    for (int i = 0; i < arr.size(); i++) {
        int element1 = arr[i];

        for (int j = i + 1; j < arr.size(); j++) {
            int element2 = arr[j];

            for (int k = j + 1; k < arr.size(); k++) {
                int element3 = arr[k];

                if (element1 + element2 + element3 == sum) {
                    cout << element1 << ", " << element2 << ", " << element3 << endl;
                }
            }
        }
    }
}

int main() {
    vector<int> arr{1, 2, 3, 4, 5, 6, 7};
    int sum = 8;

    findTripletsWithSum(arr, sum);

    return 0;
}
