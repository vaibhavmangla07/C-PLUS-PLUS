// Find Minimum Operations to Make All Elements Divisible by Three

#include<bits/stdc++.h>
using namespace std;

int minimumOperations(vector<int>& nums) {
    int count = 0;

    for(int i = 0; i < nums.size(); i++) {
        if(nums[i]%3 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << minimumOperations(nums) << endl;
    return 0;
}