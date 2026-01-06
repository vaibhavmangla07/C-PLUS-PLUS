// Day 53 - Sum Pair closest to target

// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        sort(arr.begin(), arr.end());
        
        int i = 0;
        int j = arr.size() - 1;
        int minDiff = INT_MAX;
        
        vector<int> ans;
        
        while(i < j) {
            int sum = arr[i] + arr[j];
            if(abs(target - sum) < minDiff) {
                minDiff = abs(target - sum);
                ans = {arr[i], arr[j]};
            }
            if(sum < target) {
                i++;
            }
            else if(sum > target) {
                j--;
            }
            else{
                return ans;
            }
        }
        return ans;
    }
};