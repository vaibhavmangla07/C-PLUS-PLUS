// Concatenation of Array

#include <bits/stdc++.h>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    vector<int> ans(2 * nums.size());

    for (int i = 0; i < nums.size(); i++) {
        ans[i] = nums[i];
        ans[i + nums.size()] = nums[i];
    }
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 1};
    for(auto val : getConcatenation(nums)) {
        cout << val << " ";
    }
    return 0;
}