// Median_of_Two_Sorted_Arrays

#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    nums1.insert(nums1.begin(), nums2.begin(), nums2.end());
    sort(nums1.begin(), nums1.end());
        
    int median = nums1.size()/2;
    if(nums1.size()%2 == 1) {
        return nums1[median];
    }
    else {
        return (double)(nums1[median]+nums1[median-1])/2;
    }
}

int main() {
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};

    cout << findMedianSortedArrays(nums1, nums2) << endl;
    return 0;
}
