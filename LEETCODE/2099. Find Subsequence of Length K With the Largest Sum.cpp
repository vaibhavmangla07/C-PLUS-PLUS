// 2099. Find Subsequence of Length K With the Largest Sum

class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> pq;
        for(int i = 0; i < nums.size(); i++) {
            pq.push(make_pair(nums[i], i));
        }

        vector<pair<int, int>> arr(k);
        for(int i = 0; i < k; i++) {
            arr[i] = pq.top();
            pq.pop();
        }

        sort(arr.begin(), arr.end(), [](pair<int, int> &a, pair<int, int> &b) {
            return a.second < b.second;
        });

        vector<int> ans(k);
        for(int i = 0; i < k; i++) {
            ans[i] = arr[i].first;
        }
        return ans;
    }
};