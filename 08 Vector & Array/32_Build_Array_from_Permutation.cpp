// Build Array from Permutation

#include <bits/stdc++.h>
using namespace std;

vector<int> buildArray(vector<int>& nums) {
    vector<int> ans(nums.size());
    int i = 0;

    while(i < nums.size()) {
        ans[i] = nums[nums[i]];
        i++;
    }
    return ans;
}

int main() {
    vector<int> nums = {0, 2, 1, 5, 3, 4};

    for(auto val : buildArray(nums)) {
        cout << val << " ";
    }
    return 0;
}

