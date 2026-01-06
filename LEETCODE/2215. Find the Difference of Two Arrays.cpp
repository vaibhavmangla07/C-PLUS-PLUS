// 2215. Find the Difference of Two Arrays

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());

        vector<int> ans1;
        vector<int> ans2;
        
        for (int n : nums1) {
            if (s2.find(n) == s2.end()) {
                ans1.push_back(n);
                s2.insert(n);
            }
        }
        
        for (int n : nums2) {
            if (s1.find(n) == s1.end()) {
                ans2.push_back(n);
                s1.insert(n);
            }
        }
        
        return {ans1, ans2};
    }
};
