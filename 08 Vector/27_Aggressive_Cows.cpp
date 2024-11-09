// Aggressive cows

#include <bits/stdc++.h>
using namespace std;

bool is_possible_solution(vector<int>& stalls, int cows, int mid) {
    int pos = stalls[0]; // Start with the first stall
    int count = 1; // One cow placed at the first stall

    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - pos >= mid) {
            count++;
            pos = stalls[i]; // Place a cow at stalls[i]
        }
        if (count == cows) {
            return true;
        }
    }
    return false;
}

int Aggressive_Cows(vector<int>& stalls, int cows) {
    sort(stalls.begin(), stalls.end());

    int start = 1;
    int end = stalls[stalls.size() - 1] - stalls[0];
    int ans = -1;

    while (start <= end) {
        int mid = (start + end) / 2;
        if (is_possible_solution(stalls, cows, mid)) {
            ans = mid;
            start = mid + 1; // Try for a larger minimum distance
        } else {
            end = mid - 1; // Try for a smaller minimum distance
        }
    }
    return ans;
}

int main() {
    vector<int> stalls{1, 2, 4, 8, 9};
    int cows = 3;

    cout << Aggressive_Cows(stalls, cows) << endl;

    return 0;
}
