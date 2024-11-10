// Factorials_of_large_number

#include <bits/stdc++.h>
using namespace std;

vector<int> fact(int N) {
    vector<int> ans;
    ans.push_back(1);

    for (int i = 2; i <= N; i++) {
        int carry = 0;
        for (int j = 0; j < ans.size(); j++) {
            int product = ans[j] * i + carry;
            ans[j] = product % 10;
            carry = product / 10;
        }

        while (carry > 0) {
            ans.push_back(carry % 10);
            carry /= 10;
        }
    }
    reverse(ans.begin(), ans.end()); 
    return ans;
}

int main() {
    int N = 50;
    vector<int> ans = fact(N);

    cout << "Factorial of " << N << " is ";
    for (auto val : ans) {
        cout << val;
    }
    cout << endl;
    
    return 0;
}
