// Day 59 - Trapping Rain Water

class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        if(arr.size() <= 2) {
            return 0;
        }
        int left = 0;
        int right = arr.size() - 1;
        
        int lmax = 0, rmax = 0;
        int ans = 0;
        
        while(left < right) {
            if(arr[left] < arr[right]) {
                if(arr[left] >= lmax) {
                    lmax = arr[left];
                }
                else {
                    ans += lmax - arr[left];
                }
                left++;
            }
            else {
                if(arr[right] >= rmax) {
                    rmax = arr[right];
                }
                else {
                    ans += rmax - arr[right];
                }
                right--;
            }
        }
        return ans;
    }
};