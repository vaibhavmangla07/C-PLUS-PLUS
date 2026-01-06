// 18. 4Sum

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end()); 

        int n = nums.size();
        vector<vector<int>> ans;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) { 

                long long new_target = (long long)target - nums[i] - nums[j];
                int start = j + 1;
                int end = n - 1;

                while (start < end) { 
                    int sum = nums[start] + nums[end];

                    if (sum < new_target) {
                        start++; 
                    } 
                    else if (sum > new_target) {
                        end--;
                    } 
                    else {
                        vector<int> v(4);

                        v[0] = nums[i];
                        v[1] = nums[j];
                        v[2] = nums[start];
                        v[3] = nums[end];

                        ans.push_back(v);

                        while (start < end && nums[start + 1] == nums[start]) {
                            start++;
                        }

                        while (start < end && nums[end - 1] == nums[end]) {
                            end--;
                        }
                        start++;
                        end--;
                    }
                }
                while (j + 1 < n && nums[j + 1] == nums[j]) {
                    j++;
                }
            }
            while (i + 1 < n && nums[i + 1] == nums[i]) {
                i++;
            }
        }
        return ans;
    }
};
