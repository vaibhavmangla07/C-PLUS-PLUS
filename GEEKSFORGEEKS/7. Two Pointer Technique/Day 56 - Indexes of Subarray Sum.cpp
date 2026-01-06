// Day 56 - Indexes of Subarray Sum

class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int start = 0;
        int curr = 0;
        
        for(int end = 0; end < arr.size(); end++) {
            curr += arr[end];
            
            while(curr > target && start <= end) {
                curr -= arr[start];
                start++;
            }
            if(curr == target) {
                return {start + 1, end + 1};
            }
        }
        return {-1};
    }
};