// Day 62 - Longest Subarray with Sum K

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int, int> freq;
        int ans = 0;
        int prefixSum = 0;
        
        for(int i = 0; i < arr.size(); i++) {
            prefixSum += arr[i];
            
            if(prefixSum == k) {
                ans = i + 1;
            }
            else if(freq.find(prefixSum - k) != freq.end()) {
                ans = max(ans, i - freq[prefixSum - k]);
            }
            if(freq.find(prefixSum) == freq.end()) {
                freq[prefixSum] = i;
            }
        }
        return ans;
    }
};