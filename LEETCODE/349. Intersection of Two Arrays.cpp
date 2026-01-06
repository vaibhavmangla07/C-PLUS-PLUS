// 349. Intersection of Two Arrays

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> n1(nums1.begin(), nums1.end());
        set<int> n2(nums2.begin(), nums2.end());
        vector<int> ans;

        for(auto n : n1){
            if(n2.count(n)){
                ans.push_back(n);
            }
        }
        return ans;
    }
};