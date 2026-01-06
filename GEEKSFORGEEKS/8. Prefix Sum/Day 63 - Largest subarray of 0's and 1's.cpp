// Day 63 - Largest subarray of 0's and 1's

class Solution {
  public:
    int maxLen(vector<int> &arr) {
        // Your code here
        unordered_map<int, int> freq;
        int prefixSum = 0;
        int ans = 0;
        
        for(int i = 0; i < arr.size(); i++) {
            prefixSum += (arr[i] == 0) ? -1 : 1;
            if(prefixSum == 0) {
                ans = i + 1;
            }
            if(freq.find(prefixSum) != freq.end()) {
                ans = max(ans, i - freq[prefixSum]);
            }
            else {
                freq[prefixSum] = i;
            }
        }
        return ans;
    }
};