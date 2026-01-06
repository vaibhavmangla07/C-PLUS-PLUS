// 496. Next Greater Element I

class Solution {
    public:
        vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
            stack<int> s;
            map<int, int> m;
            int n = nums2.size();
    
            m[nums2[n - 1]] = -1;
            s.push(nums2[n - 1]);
            for (int i = n - 2; i >= 0; i--) {
                while (!s.empty() && nums2[i] >= s.top()) {
                    s.pop();
                }
                if (s.empty()) {
                    m[nums2[i]] = -1;
                } else {
                    m[nums2[i]] = s.top();
                }
                s.push(nums2[i]);
            }
    
            for (int i = 0; i < nums1.size(); i++) {
                nums1[i] = m[nums1[i]];
            }
            return nums1;
        }
    };