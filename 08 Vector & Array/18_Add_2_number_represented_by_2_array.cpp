// Add_two_number_represented_by_two_array

#include <bits/stdc++.h>
using namespace std;

string cal_sum(vector<int>& arr1, vector<int>& arr2) {
    int carry = 0;
    string ans;
    int i = arr1.size() - 1;
    int j = arr2.size() - 1;

    while(i >= 0 || j >= 0 || carry) {
        int sum = carry;
        
        if(i >= 0) {
            sum += arr1[i];
            i--;
        }
        
        if(j >= 0) {
            sum += arr2[j];
            j--;
        }

        int digit = sum % 10;
        carry = sum / 10;
        ans.push_back(digit + '0'); 
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> arr1{1, 2};
    vector<int> arr2{2, 1};

    cout << "Sum : " << cal_sum(arr1, arr2) << endl;
    return 0;
}
