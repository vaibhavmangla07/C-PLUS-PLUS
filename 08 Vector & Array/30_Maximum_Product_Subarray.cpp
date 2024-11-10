// 152. Maximum Product Subarray

#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {

    int maxTillNow = nums[0];
    int minTillNow = nums[0];
    int ans = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        int tempMaxTillNow = maxTillNow;
        int tempMinTillNow = minTillNow;

        maxTillNow = max({nums[i], tempMaxTillNow* nums[i], tempMinTillNow* nums[i]});

        minTillNow = min({nums[i], tempMaxTillNow* nums[i], tempMinTillNow* nums[i]});

        ans = max(maxTillNow, ans);
    }
    return ans;
}

int main() {
    vector<int> nums = {2, 3, -2, 4};
    cout << maxProduct(nums) << endl;
    return 0;
}
