// 2570. Merge Two 2D Arrays by Summing Values

class Solution {
    public:
        vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
            map<int, int> arr;
    
            for (int i = 0; i < nums1.size(); i++) {
                arr[nums1[i][0]] = nums1[i][1];
            }
    
            for (int i = 0; i < nums2.size(); i++) {
                arr[nums2[i][0]] += nums2[i][1];
            }
    
            vector<vector<int>> ans;
            for (auto a : arr) {
                ans.push_back({a.first, a.second});
            }
    
            return ans;
        }
    };