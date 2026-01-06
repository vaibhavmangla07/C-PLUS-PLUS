// Day 60 Container With Most Water

class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int left = 0;
        int right = arr.size() - 1;
        int ans = 0;
        
        while(left < right) {
            int height = min(arr[left], arr[right]);
            int width = right - left;
            ans = max(ans, height * width);
            
            if(arr[left] < arr[right]) {
                left++;
            }
            else {
                right--;
            }
        }
        return ans;
    }
};