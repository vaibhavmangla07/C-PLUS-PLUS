// Shuffle the Array

#include<bits/stdc++.h>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> ans; 

    for (int i = 0; i < n; i++) {
        ans.push_back(nums[i]);       // xi
        ans.push_back(nums[i + n]);   // yi
    }
    return ans;;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = nums.size() / 2;
    for(auto val : shuffle(nums, n)) {
        cout << val << " ";
    }
    return 0;
}
